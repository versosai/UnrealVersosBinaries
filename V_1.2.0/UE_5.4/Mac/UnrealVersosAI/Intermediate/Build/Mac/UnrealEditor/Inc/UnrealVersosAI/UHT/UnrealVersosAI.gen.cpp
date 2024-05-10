// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealVersosAI/Public/UnrealVersosAI.h"
#include "UnrealVersosAI/Public/ImageCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealVersosAI() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNREALVERSOSAI_API UClass* Z_Construct_UClass_AUVersosBlueprintLibrary();
UNREALVERSOSAI_API UClass* Z_Construct_UClass_AUVersosBlueprintLibrary_NoRegister();
UNREALVERSOSAI_API UFunction* Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature();
UNREALVERSOSAI_API UFunction* Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature();
UNREALVERSOSAI_API UScriptStruct* Z_Construct_UScriptStruct_FGridDimensions();
UNREALVERSOSAI_API UScriptStruct* Z_Construct_UScriptStruct_FTwoVectors_Struct();
UPackage* Z_Construct_UPackage__Script_UnrealVersosAI();
// End Cross Module References

// Begin ScriptStruct FTwoVectors_Struct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TwoVectors_Struct;
class UScriptStruct* FTwoVectors_Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TwoVectors_Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TwoVectors_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwoVectors_Struct, (UObject*)Z_Construct_UPackage__Script_UnrealVersosAI(), TEXT("TwoVectors_Struct"));
	}
	return Z_Registration_Info_UScriptStruct_TwoVectors_Struct.OuterSingleton;
}
template<> UNREALVERSOSAI_API UScriptStruct* StaticStruct<FTwoVectors_Struct>()
{
	return FTwoVectors_Struct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_vLocation_MetaData[] = {
		{ "Category", "VersosImportPlugin|Vectors" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_vRotation_MetaData[] = {
		{ "Category", "VersosImportPlugin|Vectors" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_vLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_vRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwoVectors_Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vLocation = { "vLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwoVectors_Struct, vLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_vLocation_MetaData), NewProp_vLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vRotation = { "vRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwoVectors_Struct, vRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_vRotation_MetaData), NewProp_vRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealVersosAI,
	nullptr,
	&NewStructOps,
	"TwoVectors_Struct",
	Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::PropPointers),
	sizeof(FTwoVectors_Struct),
	alignof(FTwoVectors_Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTwoVectors_Struct()
{
	if (!Z_Registration_Info_UScriptStruct_TwoVectors_Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwoVectors_Struct.InnerSingleton, Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TwoVectors_Struct.InnerSingleton;
}
// End ScriptStruct FTwoVectors_Struct

// Begin Delegate FOnImagePostComplete
struct Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics
{
	struct _Script_UnrealVersosAI_eventOnImagePostComplete_Parms
	{
		FString ResponseBody;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseBody;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_ResponseBody = { "ResponseBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealVersosAI_eventOnImagePostComplete_Parms, ResponseBody), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseBody_MetaData), NewProp_ResponseBody_MetaData) };
void Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_UnrealVersosAI_eventOnImagePostComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UnrealVersosAI_eventOnImagePostComplete_Parms), &Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_ResponseBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealVersosAI, nullptr, "OnImagePostComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::_Script_UnrealVersosAI_eventOnImagePostComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::_Script_UnrealVersosAI_eventOnImagePostComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnImagePostComplete_DelegateWrapper(const FMulticastScriptDelegate& OnImagePostComplete, const FString& ResponseBody, bool bWasSuccessful)
{
	struct _Script_UnrealVersosAI_eventOnImagePostComplete_Parms
	{
		FString ResponseBody;
		bool bWasSuccessful;
	};
	_Script_UnrealVersosAI_eventOnImagePostComplete_Parms Parms;
	Parms.ResponseBody=ResponseBody;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnImagePostComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnImagePostComplete

// Begin Delegate FOnFileDownloadComplete
struct Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics
{
	struct _Script_UnrealVersosAI_eventOnFileDownloadComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_UnrealVersosAI_eventOnFileDownloadComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UnrealVersosAI_eventOnFileDownloadComplete_Parms), &Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealVersosAI, nullptr, "OnFileDownloadComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::_Script_UnrealVersosAI_eventOnFileDownloadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::_Script_UnrealVersosAI_eventOnFileDownloadComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileDownloadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnFileDownloadComplete, bool bWasSuccessful)
{
	struct _Script_UnrealVersosAI_eventOnFileDownloadComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_UnrealVersosAI_eventOnFileDownloadComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileDownloadComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFileDownloadComplete

// Begin Class AUVersosBlueprintLibrary Function Base64DecodeFile
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics
{
	struct UVersosBlueprintLibrary_eventBase64DecodeFile_Parms
	{
		FString Base64String;
		FString OutputFilename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "Keywords", "convert given base64 string to an output binary file" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base64String_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Base64String;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFilename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_Base64String = { "Base64String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventBase64DecodeFile_Parms, Base64String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base64String_MetaData), NewProp_Base64String_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_OutputFilename = { "OutputFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventBase64DecodeFile_Parms, OutputFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputFilename_MetaData), NewProp_OutputFilename_MetaData) };
void Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UVersosBlueprintLibrary_eventBase64DecodeFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVersosBlueprintLibrary_eventBase64DecodeFile_Parms), &Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_Base64String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_OutputFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "Base64DecodeFile", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::UVersosBlueprintLibrary_eventBase64DecodeFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::UVersosBlueprintLibrary_eventBase64DecodeFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execBase64DecodeFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Base64String);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputFilename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=AUVersosBlueprintLibrary::Base64DecodeFile(Z_Param_Base64String,Z_Param_OutputFilename);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function Base64DecodeFile

// Begin Class AUVersosBlueprintLibrary Function Base64EncodeFile
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics
{
	struct UVersosBlueprintLibrary_eventBase64EncodeFile_Parms
	{
		FString FileName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "Keywords", "convert given file to base64 string" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventBase64EncodeFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventBase64EncodeFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "Base64EncodeFile", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::UVersosBlueprintLibrary_eventBase64EncodeFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::UVersosBlueprintLibrary_eventBase64EncodeFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execBase64EncodeFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=AUVersosBlueprintLibrary::Base64EncodeFile(Z_Param_FileName);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function Base64EncodeFile

// Begin Class AUVersosBlueprintLibrary Function CleanUpBullets
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics
{
	struct UVersosBlueprintLibrary_eventCleanUpBullets_Parms
	{
		FString JsonString;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventCleanUpBullets_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonString_MetaData), NewProp_JsonString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventCleanUpBullets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_JsonString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "CleanUpBullets", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::UVersosBlueprintLibrary_eventCleanUpBullets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::UVersosBlueprintLibrary_eventCleanUpBullets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execCleanUpBullets)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=AUVersosBlueprintLibrary::CleanUpBullets(Z_Param_JsonString);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function CleanUpBullets

// Begin Class AUVersosBlueprintLibrary Function CropToSquare
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics
{
	struct UVersosBlueprintLibrary_eventCropToSquare_Parms
	{
		FString InputPath;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_InputPath = { "InputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventCropToSquare_Parms, InputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPath_MetaData), NewProp_InputPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventCropToSquare_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_InputPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "CropToSquare", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::UVersosBlueprintLibrary_eventCropToSquare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::UVersosBlueprintLibrary_eventCropToSquare_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execCropToSquare)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=AUVersosBlueprintLibrary::CropToSquare(Z_Param_InputPath);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function CropToSquare

// Begin Class AUVersosBlueprintLibrary Function DeprojectMousePositionToWorld
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics
{
	struct UVersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms
	{
		const UObject* WorldContextObject;
		FTwoVectors_Struct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|Viewport" },
		{ "Keywords", "deproject mouse position viewport" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FTwoVectors_Struct, METADATA_PARAMS(0, nullptr) }; // 1290608816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "DeprojectMousePositionToWorld", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::UVersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::UVersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execDeprojectMousePositionToWorld)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTwoVectors_Struct*)Z_Param__Result=AUVersosBlueprintLibrary::DeprojectMousePositionToWorld(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function DeprojectMousePositionToWorld

// Begin Class AUVersosBlueprintLibrary Function DeprojectScreenPositionToWorld
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics
{
	struct UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms
	{
		const UObject* WorldContextObject;
		float ScreenX;
		float ScreenY;
		FTwoVectors_Struct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|Viewport" },
		{ "Keywords", "deproject screen position viewport" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, ScreenX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, ScreenY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FTwoVectors_Struct, METADATA_PARAMS(0, nullptr) }; // 1290608816
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "DeprojectScreenPositionToWorld", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execDeprojectScreenPositionToWorld)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTwoVectors_Struct*)Z_Param__Result=AUVersosBlueprintLibrary::DeprojectScreenPositionToWorld(Z_Param_WorldContextObject,Z_Param_ScreenX,Z_Param_ScreenY);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function DeprojectScreenPositionToWorld

// Begin Class AUVersosBlueprintLibrary Function DownloadFile
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics
{
	struct UVersosBlueprintLibrary_eventDownloadFile_Parms
	{
		FString DestinationUrl;
		FString DestinationFilename;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|HTTP" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFilename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationUrl = { "DestinationUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDownloadFile_Parms, DestinationUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationUrl_MetaData), NewProp_DestinationUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationFilename = { "DestinationFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDownloadFile_Parms, DestinationFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationFilename_MetaData), NewProp_DestinationFilename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationFilename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "DownloadFile", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::UVersosBlueprintLibrary_eventDownloadFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::UVersosBlueprintLibrary_eventDownloadFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execDownloadFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DestinationUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_DestinationFilename);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadFile(Z_Param_DestinationUrl,Z_Param_DestinationFilename);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function DownloadFile

// Begin Class AUVersosBlueprintLibrary Function GetImageSize
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics
{
	struct UVersosBlueprintLibrary_eventGetImageSize_Parms
	{
		FString InputPath;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_InputPath = { "InputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventGetImageSize_Parms, InputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPath_MetaData), NewProp_InputPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventGetImageSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_InputPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "GetImageSize", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::UVersosBlueprintLibrary_eventGetImageSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::UVersosBlueprintLibrary_eventGetImageSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execGetImageSize)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=AUVersosBlueprintLibrary::GetImageSize(Z_Param_InputPath);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function GetImageSize

// Begin Class AUVersosBlueprintLibrary Function GetInstance
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics
{
	struct UVersosBlueprintLibrary_eventGetInstance_Parms
	{
		AUVersosBlueprintLibrary* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|General" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_AUVersosBlueprintLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "GetInstance", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::UVersosBlueprintLibrary_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::UVersosBlueprintLibrary_eventGetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execGetInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AUVersosBlueprintLibrary**)Z_Param__Result=AUVersosBlueprintLibrary::GetInstance();
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function GetInstance

// Begin Class AUVersosBlueprintLibrary Function OpenFileDialog
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics
{
	struct UVersosBlueprintLibrary_eventOpenFileDialog_Parms
	{
		const UObject* WorldContextObject;
		FString DialogTitle;
		FString DefaultPath;
		FString FileTypes;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|File Dialog" },
		{ "Keywords", "open file dialog" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogTitle_MetaData), NewProp_DialogTitle_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPath_MetaData), NewProp_DefaultPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, FileTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileTypes_MetaData), NewProp_FileTypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "OpenFileDialog", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::UVersosBlueprintLibrary_eventOpenFileDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::UVersosBlueprintLibrary_eventOpenFileDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execOpenFileDialog)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
	P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=AUVersosBlueprintLibrary::OpenFileDialog(Z_Param_WorldContextObject,Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function OpenFileDialog

// Begin Class AUVersosBlueprintLibrary Function ParseImageNumber
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics
{
	struct UVersosBlueprintLibrary_eventParseImageNumber_Parms
	{
		FString InputText;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_InputText = { "InputText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventParseImageNumber_Parms, InputText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputText_MetaData), NewProp_InputText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventParseImageNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_InputText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "ParseImageNumber", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::UVersosBlueprintLibrary_eventParseImageNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::UVersosBlueprintLibrary_eventParseImageNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execParseImageNumber)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=AUVersosBlueprintLibrary::ParseImageNumber(Z_Param_InputText);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function ParseImageNumber

// Begin Class AUVersosBlueprintLibrary Function PlotGridOnImage
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics
{
	struct UVersosBlueprintLibrary_eventPlotGridOnImage_Parms
	{
		FString InputImagePath;
		FString OutputImagePath;
		int32 CellSize;
		FGridDimensions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|HTTP" },
		{ "Keywords", "post file to search api" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputImagePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputImagePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath = { "InputImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPlotGridOnImage_Parms, InputImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputImagePath_MetaData), NewProp_InputImagePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath = { "OutputImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPlotGridOnImage_Parms, OutputImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputImagePath_MetaData), NewProp_OutputImagePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPlotGridOnImage_Parms, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPlotGridOnImage_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridDimensions, METADATA_PARAMS(0, nullptr) }; // 1427157429
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "PlotGridOnImage", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::UVersosBlueprintLibrary_eventPlotGridOnImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::UVersosBlueprintLibrary_eventPlotGridOnImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execPlotGridOnImage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputImagePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputImagePath);
	P_GET_PROPERTY(FIntProperty,Z_Param_CellSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGridDimensions*)Z_Param__Result=P_THIS->PlotGridOnImage(Z_Param_InputImagePath,Z_Param_OutputImagePath,Z_Param_CellSize);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function PlotGridOnImage

// Begin Class AUVersosBlueprintLibrary Function PostImageToAPI
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics
{
	struct UVersosBlueprintLibrary_eventPostImageToAPI_Parms
	{
		FString ImagePath;
		FString ApiKey;
		FString ProjectId;
		FString CustomerId;
		FString DistinctId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|HTTP" },
		{ "Keywords", "post file to search api" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomerId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistinctId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomerId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DistinctId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, ImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImagePath_MetaData), NewProp_ImagePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApiKey_MetaData), NewProp_ApiKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId = { "ProjectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, ProjectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectId_MetaData), NewProp_ProjectId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId = { "CustomerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, CustomerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomerId_MetaData), NewProp_CustomerId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId = { "DistinctId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, DistinctId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistinctId_MetaData), NewProp_DistinctId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "PostImageToAPI", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::UVersosBlueprintLibrary_eventPostImageToAPI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::UVersosBlueprintLibrary_eventPostImageToAPI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execPostImageToAPI)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
	P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
	P_GET_PROPERTY(FStrProperty,Z_Param_ProjectId);
	P_GET_PROPERTY(FStrProperty,Z_Param_CustomerId);
	P_GET_PROPERTY(FStrProperty,Z_Param_DistinctId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PostImageToAPI(Z_Param_ImagePath,Z_Param_ApiKey,Z_Param_ProjectId,Z_Param_CustomerId,Z_Param_DistinctId);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function PostImageToAPI

// Begin Class AUVersosBlueprintLibrary Function SplitImageIntoQuadrants
struct Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics
{
	struct UVersosBlueprintLibrary_eventSplitImageIntoQuadrants_Parms
	{
		FString InputPath;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_InputPath = { "InputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventSplitImageIntoQuadrants_Parms, InputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPath_MetaData), NewProp_InputPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventSplitImageIntoQuadrants_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_InputPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "SplitImageIntoQuadrants", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::UVersosBlueprintLibrary_eventSplitImageIntoQuadrants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::UVersosBlueprintLibrary_eventSplitImageIntoQuadrants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUVersosBlueprintLibrary::execSplitImageIntoQuadrants)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=AUVersosBlueprintLibrary::SplitImageIntoQuadrants(Z_Param_InputPath);
	P_NATIVE_END;
}
// End Class AUVersosBlueprintLibrary Function SplitImageIntoQuadrants

// Begin Class AUVersosBlueprintLibrary
void AUVersosBlueprintLibrary::StaticRegisterNativesAUVersosBlueprintLibrary()
{
	UClass* Class = AUVersosBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Base64DecodeFile", &AUVersosBlueprintLibrary::execBase64DecodeFile },
		{ "Base64EncodeFile", &AUVersosBlueprintLibrary::execBase64EncodeFile },
		{ "CleanUpBullets", &AUVersosBlueprintLibrary::execCleanUpBullets },
		{ "CropToSquare", &AUVersosBlueprintLibrary::execCropToSquare },
		{ "DeprojectMousePositionToWorld", &AUVersosBlueprintLibrary::execDeprojectMousePositionToWorld },
		{ "DeprojectScreenPositionToWorld", &AUVersosBlueprintLibrary::execDeprojectScreenPositionToWorld },
		{ "DownloadFile", &AUVersosBlueprintLibrary::execDownloadFile },
		{ "GetImageSize", &AUVersosBlueprintLibrary::execGetImageSize },
		{ "GetInstance", &AUVersosBlueprintLibrary::execGetInstance },
		{ "OpenFileDialog", &AUVersosBlueprintLibrary::execOpenFileDialog },
		{ "ParseImageNumber", &AUVersosBlueprintLibrary::execParseImageNumber },
		{ "PlotGridOnImage", &AUVersosBlueprintLibrary::execPlotGridOnImage },
		{ "PostImageToAPI", &AUVersosBlueprintLibrary::execPostImageToAPI },
		{ "SplitImageIntoQuadrants", &AUVersosBlueprintLibrary::execSplitImageIntoQuadrants },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUVersosBlueprintLibrary);
UClass* Z_Construct_UClass_AUVersosBlueprintLibrary_NoRegister()
{
	return AUVersosBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_AUVersosBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UnrealVersosAI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnImagePostComplete_MetaData[] = {
		{ "Category", "Versos|HTTP" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFileDownloadComplete_MetaData[] = {
		{ "Category", "Versos|HTTP" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImagePostComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileDownloadComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile, "Base64DecodeFile" }, // 331840738
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile, "Base64EncodeFile" }, // 1359924382
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets, "CleanUpBullets" }, // 1237658339
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare, "CropToSquare" }, // 2238173203
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld, "DeprojectMousePositionToWorld" }, // 2783142545
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld, "DeprojectScreenPositionToWorld" }, // 2090061376
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile, "DownloadFile" }, // 549236951
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize, "GetImageSize" }, // 3241671367
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance, "GetInstance" }, // 4129108493
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog, "OpenFileDialog" }, // 3822860083
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber, "ParseImageNumber" }, // 222668992
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage, "PlotGridOnImage" }, // 64627490
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI, "PostImageToAPI" }, // 353906602
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants, "SplitImageIntoQuadrants" }, // 3077026982
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUVersosBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete = { "OnImagePostComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUVersosBlueprintLibrary, OnImagePostComplete), Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnImagePostComplete_MetaData), NewProp_OnImagePostComplete_MetaData) }; // 2390120156
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnFileDownloadComplete = { "OnFileDownloadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUVersosBlueprintLibrary, OnFileDownloadComplete), Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFileDownloadComplete_MetaData), NewProp_OnFileDownloadComplete_MetaData) }; // 3290799323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnFileDownloadComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealVersosAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::ClassParams = {
	&AUVersosBlueprintLibrary::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUVersosBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_AUVersosBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUVersosBlueprintLibrary.OuterSingleton, Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUVersosBlueprintLibrary.OuterSingleton;
}
template<> UNREALVERSOSAI_API UClass* StaticClass<AUVersosBlueprintLibrary>()
{
	return AUVersosBlueprintLibrary::StaticClass();
}
AUVersosBlueprintLibrary::AUVersosBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUVersosBlueprintLibrary);
AUVersosBlueprintLibrary::~AUVersosBlueprintLibrary() {}
// End Class AUVersosBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_cgm_Documents_plugin_ue54_may_10_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTwoVectors_Struct::StaticStruct, Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewStructOps, TEXT("TwoVectors_Struct"), &Z_Registration_Info_UScriptStruct_TwoVectors_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwoVectors_Struct), 1290608816U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUVersosBlueprintLibrary, AUVersosBlueprintLibrary::StaticClass, TEXT("AUVersosBlueprintLibrary"), &Z_Registration_Info_UClass_AUVersosBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUVersosBlueprintLibrary), 2382101444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgm_Documents_plugin_ue54_may_10_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_103147785(TEXT("/Script/UnrealVersosAI"),
	Z_CompiledInDeferFile_FID_cgm_Documents_plugin_ue54_may_10_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgm_Documents_plugin_ue54_may_10_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_cgm_Documents_plugin_ue54_may_10_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgm_Documents_plugin_ue54_may_10_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
