// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealVersosAI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUVersosBlueprintLibrary;
class UObject;
struct FGridDimensions;
struct FTwoVectors_Struct;
#ifdef UNREALVERSOSAI_UnrealVersosAI_generated_h
#error "UnrealVersosAI.generated.h already included, missing '#pragma once' in UnrealVersosAI.h"
#endif
#define UNREALVERSOSAI_UnrealVersosAI_generated_h

#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics; \
	UNREALVERSOSAI_API static class UScriptStruct* StaticStruct();


template<> UNREALVERSOSAI_API UScriptStruct* StaticStruct<struct FTwoVectors_Struct>();

#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_51_DELEGATE \
UNREALVERSOSAI_API void FOnImagePostComplete_DelegateWrapper(const FMulticastScriptDelegate& OnImagePostComplete, const FString& ResponseBody, bool bWasSuccessful);


#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_52_DELEGATE \
UNREALVERSOSAI_API void FOnFileDownloadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnFileDownloadComplete, bool bWasSuccessful);


#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_SPARSE_DATA
#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSliceArray); \
	DECLARE_FUNCTION(execStringArrayToTextArray); \
	DECLARE_FUNCTION(execCosineSimilarity); \
	DECLARE_FUNCTION(execParseImageNumber); \
	DECLARE_FUNCTION(execCropToSquare); \
	DECLARE_FUNCTION(execGetImageSize); \
	DECLARE_FUNCTION(execSplitImageIntoQuadrants); \
	DECLARE_FUNCTION(execStartWebServer); \
	DECLARE_FUNCTION(execDownloadFile); \
	DECLARE_FUNCTION(execCleanUpBullets); \
	DECLARE_FUNCTION(execBase64DecodeFile); \
	DECLARE_FUNCTION(execBase64EncodeFile); \
	DECLARE_FUNCTION(execDeprojectScreenPositionToWorld); \
	DECLARE_FUNCTION(execDeprojectMousePositionToWorld); \
	DECLARE_FUNCTION(execOpenFileDialog); \
	DECLARE_FUNCTION(execPostImageToAPI); \
	DECLARE_FUNCTION(execPlotGridOnImage); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_ACCESSORS
#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUVersosBlueprintLibrary(); \
	friend struct Z_Construct_UClass_AUVersosBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(AUVersosBlueprintLibrary, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealVersosAI"), NO_API) \
	DECLARE_SERIALIZER(AUVersosBlueprintLibrary)


#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUVersosBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUVersosBlueprintLibrary(AUVersosBlueprintLibrary&&); \
	NO_API AUVersosBlueprintLibrary(const AUVersosBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUVersosBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUVersosBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUVersosBlueprintLibrary) \
	NO_API virtual ~AUVersosBlueprintLibrary();


#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_54_PROLOG
#define FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_SPARSE_DATA \
	FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_ACCESSORS \
	FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_INCLASS_NO_PURE_DECLS \
	FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALVERSOSAI_API UClass* StaticClass<class AUVersosBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS