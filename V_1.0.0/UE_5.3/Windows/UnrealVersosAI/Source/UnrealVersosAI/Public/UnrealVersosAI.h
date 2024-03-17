// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Editor/EditorEngine.h"
#include "EditorViewportClient.h"
#include "ImageCapture.h"
#include "Engine/World.h"
#include "Modules/ModuleManager.h"
#include "UnrealVersosAI.generated.h"


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

UCLASS()
class UVersosBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
    
public:

    UFUNCTION(BlueprintCallable, Category = "Versos|General")
    static UVersosBlueprintLibrary* GetInstance();

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

};

class FUnrealVersosAIModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
