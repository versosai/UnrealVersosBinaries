// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealVersosAI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UVersosBlueprintLibrary;
struct FTwoVectors_Struct;
#ifdef UNREALVERSOSAI_UnrealVersosAI_generated_h
#error "UnrealVersosAI.generated.h already included, missing '#pragma once' in UnrealVersosAI.h"
#endif
#define UNREALVERSOSAI_UnrealVersosAI_generated_h

#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics; \
	UNREALVERSOSAI_API static class UScriptStruct* StaticStruct();


template<> UNREALVERSOSAI_API UScriptStruct* StaticStruct<struct FTwoVectors_Struct>();

#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_31_DELEGATE \
UNREALVERSOSAI_API void FOnImagePostComplete_DelegateWrapper(const FMulticastScriptDelegate& OnImagePostComplete, const FString& ResponseBody, bool bWasSuccessful);


#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_SPARSE_DATA
#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeprojectScreenPositionToWorld); \
	DECLARE_FUNCTION(execDeprojectMousePositionToWorld); \
	DECLARE_FUNCTION(execOpenFileDialog); \
	DECLARE_FUNCTION(execPostImageToAPI); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_ACCESSORS
#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVersosBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVersosBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVersosBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealVersosAI"), NO_API) \
	DECLARE_SERIALIZER(UVersosBlueprintLibrary)


#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVersosBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVersosBlueprintLibrary(UVersosBlueprintLibrary&&); \
	NO_API UVersosBlueprintLibrary(const UVersosBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVersosBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVersosBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVersosBlueprintLibrary) \
	NO_API virtual ~UVersosBlueprintLibrary();


#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_33_PROLOG
#define FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_SPARSE_DATA \
	FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_ACCESSORS \
	FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_INCLASS_NO_PURE_DECLS \
	FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALVERSOSAI_API UClass* StaticClass<class UVersosBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_cgm_Documents_plugin_mar_08_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
