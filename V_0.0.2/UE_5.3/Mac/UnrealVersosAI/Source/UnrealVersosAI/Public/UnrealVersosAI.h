// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Editor/EditorEngine.h"
#include "EditorViewportClient.h"
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


UCLASS()
class UVersosBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    /**
    * Deprojects screen position to world position and direction.
    *
    * @param WorldContextObject The world context.
    * @param ScreenPosition The screen position to deproject.
    * @return The world position and direction.
    */
    UFUNCTION(BlueprintCallable, Category = "Versos|Viewport", meta = (WorldContext = "WorldContextObject", Keywords = "deproject mouse position viewport"))
    static FTwoVectors_Struct DeprojectMousePositionToWorld(const UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable, Category = "Versos|Viewport", meta = (WorldContext = "WorldContextObject", Keywords = "deproject screen position viewport"))
    static FTwoVectors_Struct DeprojectScreenPositionToWorld(const UObject* WorldContextObject, float ScreenX, float ScreenY);

};

class FUnrealVersosAIModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
