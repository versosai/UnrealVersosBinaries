// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealVersosAI.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformFile.h"

#include <string>
#include <string>

#include "DesktopPlatformModule.h"
#include "IDesktopPlatform.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"


#define LOCTEXT_NAMESPACE "FUnrealVersosAIModule"



void AppendStringToByteArray(const FString& String, TArray<uint8>& OutArray)
{
    // Convert FString to UTF-8 array
    FTCHARToUTF8 Converter(*String);
    const uint8* UTF8Data = (uint8*)Converter.Get(); // Explicit cast to uint8 pointer

    // Append the UTF-8 data to the output array
    OutArray.Append(UTF8Data, Converter.Length());
}

// Utility function to generate a random boundary
FString GenerateBoundary()
{
    return TEXT("----------Boundary") + FGuid::NewGuid().ToString();
}

TArray<uint8> CreateMultipartFormData(const FString& FilePath, const FString& Boundary, const FString& ProjectId, const FString& CustomerId)
{
    TArray<uint8> OutBody;
    FString StartBoundary = TEXT("--") + Boundary + TEXT("\r\n");
    FString EndBoundary = TEXT("--") + Boundary + TEXT("--\r\n");

    // Add projectId and customerId to the form data
    FString ProjectIdPart = FString::Printf(TEXT("Content-Disposition: form-data; name=\"projectId\"\r\n\r\n%s\r\n"), *ProjectId);
    FString CustomerIdPart = FString::Printf(TEXT("Content-Disposition: form-data; name=\"customerId\"\r\n\r\n%s\r\n"), *CustomerId);
    AppendStringToByteArray(StartBoundary, OutBody);
    AppendStringToByteArray(ProjectIdPart, OutBody);
    AppendStringToByteArray(StartBoundary, OutBody); // Start boundary for next part
    AppendStringToByteArray(CustomerIdPart, OutBody);

    // File part
    FString FormDataHeader = TEXT("Content-Disposition: form-data; name=\"image\"; filename=\"") + FPaths::GetCleanFilename(FilePath) + TEXT("\"\r\nContent-Type: application/octet-stream\r\n\r\n");
    AppendStringToByteArray(StartBoundary, OutBody); // Start boundary for file part
    AppendStringToByteArray(FormDataHeader, OutBody);

    // Append binary file content
    TArray<uint8> FileContent;
    FFileHelper::LoadFileToArray(FileContent, *FilePath);
    OutBody.Append(FileContent);

    AppendStringToByteArray(TEXT("\r\n"), OutBody);
    AppendStringToByteArray(EndBoundary, OutBody);

    return OutBody;
}


UVersosBlueprintLibrary* UVersosBlueprintLibrary::GetInstance()
{
    static UVersosBlueprintLibrary* Instance = NewObject<UVersosBlueprintLibrary>();
    return Instance;
}

void UVersosBlueprintLibrary::PostImageToAPI(const FString& ImagePath, const FString& ApiKey, const FString& ProjectId, const FString& CustomerId)
{
    FString Url = TEXT("https://api.versos.ai/v1/models_search_image");
    FString Boundary = GenerateBoundary();
    TArray<uint8> Body = CreateMultipartFormData(ImagePath, Boundary, ProjectId, CustomerId);

    FHttpModule* Http = &FHttpModule::Get();
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
    Request->SetURL(Url);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("multipart/form-data; boundary=") + Boundary);
    Request->SetHeader(TEXT("Authorization"), ApiKey);
    Request->SetContent(Body);

    Request->OnProcessRequestComplete().BindLambda([this](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
    {
        FString ResponseBody;

        if(bWasSuccessful && Response.IsValid())
        {
            ResponseBody = Response->GetContentAsString();
            OnImagePostComplete.Broadcast(ResponseBody, bWasSuccessful);
            UE_LOG(LogTemp, Log, TEXT("Response: %s"), *ResponseBody);
        }
        else
        {
            ResponseBody = "Request failed or response is invalid";
            UE_LOG(LogTemp, Error, TEXT("%s"), *ResponseBody);
            OnImagePostComplete.Broadcast(ResponseBody, bWasSuccessful);
        }
    });

    Request->ProcessRequest();
}


FString UVersosBlueprintLibrary::OpenFileDialog(const UObject* WorldContextObject, const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes)
{
#if WITH_EDITOR
    
    if (GEditor)
    {
        void* ParentWindowHandle = GEditor->GetActiveViewport()->GetWindow();
        IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
        if (DesktopPlatform)
        {
            TArray<FString> OutFiles;
            DesktopPlatform->OpenFileDialog(ParentWindowHandle, DialogTitle, DefaultPath, FString(""), FileTypes, EFileDialogFlags::None, OutFiles);

            if (OutFiles.Num() > 0)
            {
                return OutFiles[0];
            }
        }
    }
#endif
    return FString("");
}

void FUnrealVersosAIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FUnrealVersosAIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

FTwoVectors_Struct UVersosBlueprintLibrary::DeprojectMousePositionToWorld(const UObject* WorldContextObject)
{
    FTwoVectors_Struct result;

    // Early return if called in a context where GEditor is not available, e.g., in a game runtime
#if WITH_EDITOR
    if (!WorldContextObject || !GEditor)
    {
        return result;
    }

    UWorld* World = GEditor->GetEditorWorldContext(false).World();
    if (!World)
    {
        return result;
    }

    FViewport* Viewport = GEditor->GetActiveViewport();

    FEditorViewportClient* ViewportClient = (FEditorViewportClient*) Viewport->GetClient();
    if(!ViewportClient)
    {
        return result;
    }
    

    // Preparing for deprojection
    FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
        ViewportClient->Viewport,
        ViewportClient->GetScene(),
        ViewportClient->EngineShowFlags).SetRealtimeUpdate(true));

    FSceneView* SceneView = ViewportClient->CalcSceneView(&ViewFamily);

    FIntPoint MousePosition(Viewport->GetMouseX(),Viewport->GetMouseY());
    FString LogMsg = FString("XXO detected mouse position x: ") + FString::SanitizeFloat(MousePosition.X) + FString(" y: ") + FString::SanitizeFloat(MousePosition.Y);
    UE_LOG(LogTemp, Warning, TEXT("%s"), *LogMsg);

    
    FVector WorldLocation, WorldDirection;
    if (SceneView)
    {
        SceneView->DeprojectFVector2D(MousePosition, WorldLocation, WorldDirection);
        result.vLocation = WorldLocation;
        result.vRotation = WorldDirection;

    }
#endif

    return result;
}
FTwoVectors_Struct UVersosBlueprintLibrary::DeprojectScreenPositionToWorld(const UObject* WorldContextObject, float ScreenX, float ScreenY)
{
    FTwoVectors_Struct result;

#if WITH_EDITOR
    if (!WorldContextObject || !GEditor)
    {
        return result;
    }

    UWorld* World = GEditor->GetEditorWorldContext(false).World();
    if (!World)
    {
        return result;
    }

    FEditorViewportClient* ViewportClient = (FEditorViewportClient*)(GEditor->GetActiveViewport()->GetClient());
    if (!ViewportClient)
    {
        return result;
    }

    // Use provided x and y instead of getting them from the mouse position
    FIntPoint ScreenPosition(ScreenX, ScreenY);

    FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
        ViewportClient->Viewport,
        ViewportClient->GetScene(),
        ViewportClient->EngineShowFlags).SetRealtimeUpdate(true));

    FSceneView* SceneView = ViewportClient->CalcSceneView(&ViewFamily);

    FVector WorldLocation, WorldDirection;
    if (SceneView)
    {
        SceneView->DeprojectFVector2D(ScreenPosition, WorldLocation, WorldDirection);
        result.vLocation = WorldLocation;
        result.vRotation = WorldDirection;
    }
#endif

    return result;
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUnrealVersosAIModule, UnrealVersosAI)