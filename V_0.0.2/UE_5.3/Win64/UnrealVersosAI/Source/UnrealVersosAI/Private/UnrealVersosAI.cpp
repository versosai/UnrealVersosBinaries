// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealVersosAI.h"

#include <string>
#include <string>

#include "EditorDragTools.h"
#include "LevelViewportClickHandlers.h"

#define LOCTEXT_NAMESPACE "FUnrealVersosAIModule"

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