/**
 *  Copyright 2024 Versos AI Inc. All rights reserved
 */
 
#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Editor/EditorEngine.h"
#include "EditorViewportClient.h"
#include "ImageCapture.h"
#include "Engine/World.h"
#include "Modules/ModuleManager.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "LevelEditor.h"
#include "WebServer.h"
#include "HAL/Runnable.h"
#include "UnrealVersosAI.generated.h"


class FUnrealVersosAIModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    void AddMenuExtension(FMenuBuilder& MenuBuilder);
    void OnMenuButtonClicked();
    TSharedPtr<FExtender> MenuExtender;
};

USTRUCT(BlueprintType)
struct FTwoVectors_Struct
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "VersosImportPlugin|Vectors")
    FVector vLocation;

    UPROPERTY(BlueprintReadOnly, Category = "VersosImportPlugin|Vectors")
    FVector vRotation;

    FTwoVectors_Struct(const FVector& VLocation = FVector(0,0,0), const FVector& VRotation = FVector(0,0,0))
        : vLocation(VLocation),
          vRotation(VRotation)
    {
    }
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnImagePostComplete, const FString&, ResponseBody, bool, bWasSuccessful);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFileDownloadComplete, bool, bWasSuccessful);

UCLASS(Blueprintable)
class UNREALVERSOSAI_API AUVersosBlueprintLibrary : public AActor
{
    GENERATED_BODY()
    
public:

    UFUNCTION(BlueprintCallable, Category = "Versos|General")
    static AUVersosBlueprintLibrary* GetInstance();

    UFUNCTION(BlueprintCallable, Category = "Versos|HTTP", meta = (WorldContext = "WorldContextObject", Keywords = "post file to search api"))
    FGridDimensions PlotGridOnImage(const FString& InputImagePath, const FString& OutputImagePath, const int CellSize);
    
    UFUNCTION(BlueprintCallable, Category = "Versos|HTTP", meta = (WorldContext = "WorldContextObject", Keywords = "post file to search api"))
    void PostImageToAPI(const FString& ImagePath, const FString& ApiKey, const FString& ProjectId, const FString& CustomerId, const FString& DistinctId);
    
    UPROPERTY(BlueprintAssignable, Category = "Versos|HTTP")
    FOnImagePostComplete OnImagePostComplete;

    UFUNCTION(BlueprintCallable, Category = "Versos|File Dialog", meta = (WorldContext = "WorldContextObject", Keywords = "open file dialog"))
    static FString OpenFileDialog(const UObject* WorldContextObject, const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes);
    
    UFUNCTION(BlueprintCallable, Category = "Versos|Viewport", meta = (WorldContext = "WorldContextObject", Keywords = "deproject mouse position viewport"))
    static FTwoVectors_Struct DeprojectMousePositionToWorld(const UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable, Category = "Versos|Viewport", meta = (WorldContext = "WorldContextObject", Keywords = "deproject screen position viewport"))
    static FTwoVectors_Struct DeprojectScreenPositionToWorld(const UObject* WorldContextObject, float ScreenX, float ScreenY);

    UFUNCTION(BlueprintCallable, Category = "Versos|Utils", meta = (Keywords = "convert given file to base64 string"))
    static FString Base64EncodeFile(const FString& FileName);

    UFUNCTION(BlueprintCallable, Category = "Versos|Utils", meta = (Keywords = "convert given base64 string to an output binary file"))
    static bool Base64DecodeFile(const FString& Base64String, const FString& OutputFilename);
    
    UFUNCTION(BlueprintCallable, Category="Versos|Utils")
    static TArray<FString> CleanUpBullets(const FString& JsonString, const int32 PaddingLength = 5);

    UFUNCTION(BlueprintCallable, Category="Versos|HTTP")
    void DownloadFile(const FString& DestinationUrl, const FString& DestinationFilename);

    UFUNCTION(BlueprintCallable, Category="Versos|HTTP")
    void StartWebServer();

    UPROPERTY()
    UWebServer* WebServerInstance;
    
    UPROPERTY(BlueprintAssignable, Category="Versos|HTTP")
    FOnFileDownloadComplete OnFileDownloadComplete;
    
    UFUNCTION(BlueprintCallable, Category="Versos|Utils")
    static TArray<FString> SplitImageIntoQuadrants(const FString& InputPath);

    UFUNCTION(BlueprintCallable, Category="Versos|Utils")
    static FIntPoint GetImageSize(const FString& InputPath);

    UFUNCTION(BlueprintCallable, Category="Versos|Utils")
    static int32 CropToSquare(const FString& InputPath);

    UFUNCTION(BlueprintCallable, Category="Versos|Utils")
    static int32 ParseImageNumber(const FString& InputText);

    UFUNCTION(BlueprintCallable, Category="Versos|Utils")
    static double CosineSimilarity(const TArray<double>& VectorA, const TArray<double>& VectorB);

    UFUNCTION(BlueprintCallable, Category="Versos|Utils")
    static TArray<FText> StringArrayToTextArray(const TArray<FString>& StringArray);

    UFUNCTION(BlueprintCallable, Category="Versos|Utils")
    static TArray<FText> SliceArray(const TArray<FText>& InputArray, int32 Index, int32 Length);
};
