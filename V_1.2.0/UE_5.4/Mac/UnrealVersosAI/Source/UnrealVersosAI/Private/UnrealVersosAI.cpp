// Copyright Epic Games, Inc. All Rights Reserved.
#include "UnrealVersosAI.h"
#include "ImageCapture.h"
#include "Runtime/Core/Public/Misc/FileHelper.h"
#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformFile.h"

#include <string>

#include "DesktopPlatformModule.h"
#include "IDesktopPlatform.h"
#include "HttpModule.h"
#include "SceneView.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/Base64.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "Modules/ModuleManager.h"
#include "Containers/StringConv.h"
#include "Internationalization/Regex.h"

#include "EditorUtilitySubsystem.h"  // Make sure this path is correct
#include "EditorUtilityWidgetBlueprint.h"
#include "Modules/ModuleManager.h"
#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "EditorStyleSet.h"

IMPLEMENT_MODULE(FUnrealVersosAIModule, UnrealVersosAI)

// Helper function to remove bullets from a string
FString RemoveBullet(const FString& Line)
{
    FRegexPattern BulletPattern(TEXT("^(?:-|[1-9]\\.)\\s"));
    FRegexMatcher Matcher(BulletPattern, Line);
    
    if (Matcher.FindNext())
    {
        int32 MatchLength = Matcher.GetMatchEnding() - Matcher.GetMatchBeginning();
        return Line.RightChop(MatchLength).TrimStartAndEnd(); 
    }

    return Line.TrimStartAndEnd();
}

void AppendStringToByteArray(const FString& String, TArray<uint8>& OutArray)
{
    // Convert FString to UTF-8 array
    FTCHARToUTF8 Converter(*String);
    const uint8* UTF8Data = (uint8*)Converter.Get();

    // Append the UTF-8 data to the output array
    OutArray.Append(UTF8Data, Converter.Length());
}

// Utility function to generate a random boundary
FString GenerateBoundary()
{
    return TEXT("----------Boundary") + FGuid::NewGuid().ToString();
}

TArray<uint8> CreateMultipartFormData(const FString& FilePath, const FString& Boundary,
    const FString& ProjectId, const FString& CustomerId, const FString& DistinctId)
{
    TArray<uint8> OutBody;
    FString StartBoundary = TEXT("--") + Boundary + TEXT("\r\n");
    FString EndBoundary = TEXT("--") + Boundary + TEXT("--\r\n");

    // Add projectId and customerId to the form data
    FString ProjectIdPart = FString::Printf(TEXT("Content-Disposition: form-data; name=\"projectId\"\r\n\r\n%s\r\n"), *ProjectId);
    FString CustomerIdPart = FString::Printf(TEXT("Content-Disposition: form-data; name=\"customerId\"\r\n\r\n%s\r\n"), *CustomerId);
    FString DistinctIdPart = FString::Printf(TEXT("Content-Disposition: form-data; name=\"distinct_id\"\r\n\r\n%s\r\n"), *DistinctId);
    AppendStringToByteArray(StartBoundary, OutBody);
    AppendStringToByteArray(ProjectIdPart, OutBody);
    AppendStringToByteArray(StartBoundary, OutBody); 
    AppendStringToByteArray(CustomerIdPart, OutBody);
    AppendStringToByteArray(StartBoundary, OutBody); 
    AppendStringToByteArray(DistinctIdPart, OutBody);

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


AUVersosBlueprintLibrary* AUVersosBlueprintLibrary::GetInstance()
{
    return NewObject<AUVersosBlueprintLibrary>();
}

void AUVersosBlueprintLibrary::PostImageToAPI(const FString& ImagePath,
    const FString& ApiKey, const FString& ProjectId, const FString& CustomerId, const FString& DistinctId)
{
    FString Url = TEXT("https://api.versos.ai/v1/models_search_image");
    FString Boundary = GenerateBoundary();
    TArray<uint8> Body = CreateMultipartFormData(ImagePath, Boundary, ProjectId, CustomerId, DistinctId);

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
            OnImagePostComplete.Broadcast(ResponseBody, Response->GetResponseCode() >= 200 && Response->GetResponseCode() <= 299);
            //UE_LOG(LogTemp, Log, TEXT("Response: %s"), *ResponseBody);
        }
        else
        {
            ResponseBody = "Request failed or response is invalid";
            //UE_LOG(LogTemp, Error, TEXT("%s"), *ResponseBody);
            OnImagePostComplete.Broadcast(ResponseBody, false);
        }
    });

    Request->ProcessRequest();
}


FString AUVersosBlueprintLibrary::OpenFileDialog(const UObject* WorldContextObject, const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes)
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

FTwoVectors_Struct AUVersosBlueprintLibrary::DeprojectMousePositionToWorld(const UObject* WorldContextObject)
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
    FString LogMsg = FString("XXO detected mouse position x: ") +
        FString::SanitizeFloat(MousePosition.X) + FString(" y: ") + FString::SanitizeFloat(MousePosition.Y);
    //UE_LOG(LogTemp, Warning, TEXT("%s"), *LogMsg);

    
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
FTwoVectors_Struct AUVersosBlueprintLibrary::DeprojectScreenPositionToWorld(const UObject* WorldContextObject, float ScreenX, float ScreenY)
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

FGridDimensions AUVersosBlueprintLibrary::PlotGridOnImage(const FString& InputImagePath, const FString& OutputImagePath, const int CellSize)
{
    //UE_LOG(LogTemp, Error, TEXT("Inside PlotGridOnImage"));

    std::string InputPathStd = TCHAR_TO_UTF8(*InputImagePath);
    std::string OutputPathStd = TCHAR_TO_UTF8(*OutputImagePath);

    FGridDimensions retn = make_waffle_image(InputPathStd, OutputPathStd, CellSize);
    return retn;
}

FString AUVersosBlueprintLibrary::Base64EncodeFile(const FString& Filename)
{
    TArray<uint8> FileData;

    if (FFileHelper::LoadFileToArray(FileData, *Filename))
    {
        FString Base64EncodedString = FBase64::Encode(FileData);
        return Base64EncodedString;
    }
    return FString();
}

bool AUVersosBlueprintLibrary::Base64DecodeFile(const FString& Base64String, const FString& OutputFilename)
{
    // Decode the base64 string into bytes
    TArray<uint8> DecodedBytes;
    FBase64::Decode(Base64String, DecodedBytes);

    // Attempt to save the decoded bytes to the specified file and return the result
    bool bSuccess = FFileHelper::SaveArrayToFile(DecodedBytes, *OutputFilename);

    if(bSuccess)
    {
        //UE_LOG(LogTemp, Log, TEXT("File saved successfully: %s"), *OutputFilename);
    }
    else
    {
        //UE_LOG(LogTemp, Warning, TEXT("Failed to save file: %s"), *OutputFilename);
    }

    return bSuccess;
}

TArray<FString> AUVersosBlueprintLibrary::CleanUpBullets(const FString& JsonString)
{
    TArray<FString> Items;
    
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);

    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
        FString DataString = JsonObject->GetStringField(TEXT("data"));
        TArray<FString> DataLines;
        DataString.ParseIntoArrayLines(DataLines);

        for (FString& Line : DataLines)
        {
            Items.Add(RemoveBullet(Line));
        }

        // Ensure there are at least 5 items, filling with empty strings if necessary
        while (Items.Num() < 5)
        {
            Items.Add(TEXT(""));
        }
    }
    else
    {
        // Fill with empty strings if deserialization fails
        for (int i = 0; i < 5; i++)
        {
            Items.Add(TEXT(""));
        }
    }

    return Items;
}


void AUVersosBlueprintLibrary::DownloadFile(const FString& DestinationUrl, const FString& DestinationFilename)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetURL(DestinationUrl);
    HttpRequest->SetVerb(TEXT("GET"));
    HttpRequest->SetHeader(TEXT("User-Agent"), TEXT("Your User-Agent Here"));
    
    HttpRequest->OnProcessRequestComplete().BindLambda([DestinationFilename, this](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
    {
        bool bDownloadSuccess = false;

        if(bWasSuccessful && Response.IsValid() && EHttpResponseCodes::IsOk(Response->GetResponseCode()))
        {
            FString TempFilename = DestinationFilename + TEXT(".temp");
            IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
            IFileHandle* FileHandle = PlatformFile.OpenWrite(*TempFilename);
            if(FileHandle)
            {
                FileHandle->Write(Response->GetContent().GetData(), Response->GetContentLength());
                delete FileHandle;
                if(PlatformFile.FileExists(*TempFilename))
                {
                    PlatformFile.DeleteFile(*DestinationFilename);
                    PlatformFile.MoveFile(*DestinationFilename, *TempFilename);
                    bDownloadSuccess = true;
                }
            }
        }
        else
        {
            //UE_LOG(LogTemp, Warning, TEXT("Failed to download file: %s"), *Request->GetURL());
        }

        // Call the delegate with the result
        OnFileDownloadComplete.Broadcast(bDownloadSuccess);
    });
    
    HttpRequest->ProcessRequest();
}


TArray<FString> AUVersosBlueprintLibrary::SplitImageIntoQuadrants(const FString& InputPathFstr)
{
    return split_image_into_quads(InputPathFstr);
}

FIntPoint AUVersosBlueprintLibrary::GetImageSize(const FString& InputPath)
{
   return get_image_size(InputPath);
}

int32 AUVersosBlueprintLibrary::CropToSquare(const FString& InputPath) {
    return crop_to_square(InputPath);
}

// Utility function to parse the desired image number from a string
int32 AUVersosBlueprintLibrary::ParseImageNumber(const FString& InputText)
{
    // The regular expression pattern to match <<image = N>> with flexibility
    const FRegexPattern Pattern(TEXT(R"(<<\s*image\s*=\s*(\d+)\s*>>)"), ERegexPatternFlags::CaseInsensitive);
    FRegexMatcher Matcher(Pattern, InputText);

    int32 ImageNumber = -1; // Default to -1 if no match is found

    // Find the first match (if any)
    if (Matcher.FindNext())
    {
        // Convert the matched group (N) to an integer
        FString MatchedNumber = Matcher.GetCaptureGroup(1);

        // Use FCString::Atoi to convert FString to int32
        ImageNumber = FCString::Atoi(*MatchedNumber);
    }

    return ImageNumber;
}





void FUnrealVersosAIModule::StartupModule()
{
    if (GIsEditor && !IsRunningCommandlet())
    {
        FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
        MenuExtender = MakeShareable(new FExtender());
        MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, nullptr, FMenuExtensionDelegate::CreateRaw(this, &FUnrealVersosAIModule::AddMenuExtension));
        LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
    }
}

void FUnrealVersosAIModule::ShutdownModule()
{
    if (UObjectInitialized() && MenuExtender.IsValid() && FModuleManager::Get().IsModuleLoaded("LevelEditor"))
    {
        FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
        LevelEditorModule.GetMenuExtensibilityManager()->RemoveExtender(MenuExtender);
    }
}

void FUnrealVersosAIModule::AddMenuExtension(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        FText::FromString("Versos Plugin"),
        FText::FromString("Executes an action from our custom plugin."),
        FSlateIcon(FAppStyle::GetAppStyleSetName(), "LevelEditor.Play"),
        FUIAction(FExecuteAction::CreateRaw(this, &FUnrealVersosAIModule::OnMenuButtonClicked))
    );
}

void FUnrealVersosAIModule::OnMenuButtonClicked()
{
    if (GEditor)
    {
        UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();

        if (EditorUtilitySubsystem)
        {
            // Correct path to reference the Editor Utility Widget Blueprint
            FString WidgetBlueprintPath = TEXT("/UnrealVersosAI/VersosSearchSpawn.VersosSearchSpawn");

            // Loading the widget blueprint
            UEditorUtilityWidgetBlueprint* WidgetBlueprint = LoadObject<UEditorUtilityWidgetBlueprint>(nullptr, *WidgetBlueprintPath);

            if (WidgetBlueprint)
            {
                // Spawning the Editor Utility Widget if it's valid
                EditorUtilitySubsystem->SpawnAndRegisterTab(WidgetBlueprint);
                //UE_LOG(LogTemp, Log, TEXT("Editor Utility Widget spawned successfully!"));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to find Editor Utility Widget"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Editor Utility Subsystem is not available."));
        }
    }
}