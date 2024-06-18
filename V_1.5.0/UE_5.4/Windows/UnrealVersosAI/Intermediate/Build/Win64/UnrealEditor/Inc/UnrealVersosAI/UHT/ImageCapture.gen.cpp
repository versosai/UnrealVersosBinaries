// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealVersosAI/Public/ImageCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageCapture() {}

// Begin Cross Module References
UNREALVERSOSAI_API UScriptStruct* Z_Construct_UScriptStruct_FGridDimensions();
UPackage* Z_Construct_UPackage__Script_UnrealVersosAI();
// End Cross Module References

// Begin ScriptStruct FGridDimensions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridDimensions;
class UScriptStruct* FGridDimensions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridDimensions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridDimensions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridDimensions, (UObject*)Z_Construct_UPackage__Script_UnrealVersosAI(), TEXT("GridDimensions"));
	}
	return Z_Registration_Info_UScriptStruct_GridDimensions.OuterSingleton;
}
template<> UNREALVERSOSAI_API UScriptStruct* StaticStruct<FGridDimensions>()
{
	return FGridDimensions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridDimensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImageCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[] = {
		{ "Category", "Return Values" },
		{ "ModuleRelativePath", "Public/ImageCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[] = {
		{ "Category", "Return Values" },
		{ "ModuleRelativePath", "Public/ImageCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridDimensions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDimensions_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDimensions, MaxX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxX_MetaData), NewProp_MaxX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridDimensions_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridDimensions, MaxY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxY_MetaData), NewProp_MaxY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDimensions_Statics::NewProp_MaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridDimensions_Statics::NewProp_MaxY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridDimensions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealVersosAI,
	nullptr,
	&NewStructOps,
	"GridDimensions",
	Z_Construct_UScriptStruct_FGridDimensions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDimensions_Statics::PropPointers),
	sizeof(FGridDimensions),
	alignof(FGridDimensions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridDimensions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridDimensions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridDimensions()
{
	if (!Z_Registration_Info_UScriptStruct_GridDimensions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridDimensions.InnerSingleton, Z_Construct_UScriptStruct_FGridDimensions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridDimensions.InnerSingleton;
}
// End ScriptStruct FGridDimensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_ImageCapture_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridDimensions::StaticStruct, Z_Construct_UScriptStruct_FGridDimensions_Statics::NewStructOps, TEXT("GridDimensions"), &Z_Registration_Info_UScriptStruct_GridDimensions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridDimensions), 1427157429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_ImageCapture_h_2113568613(TEXT("/Script/UnrealVersosAI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_ImageCapture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_ImageCapture_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
