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
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREALVERSOSAI_API UClass* Z_Construct_UClass_UVersosBlueprintLibrary();
	UNREALVERSOSAI_API UClass* Z_Construct_UClass_UVersosBlueprintLibrary_NoRegister();
	UNREALVERSOSAI_API UFunction* Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature();
	UNREALVERSOSAI_API UScriptStruct* Z_Construct_UScriptStruct_FGridDimensions();
	UNREALVERSOSAI_API UScriptStruct* Z_Construct_UScriptStruct_FTwoVectors_Struct();
	UPackage* Z_Construct_UPackage__Script_UnrealVersosAI();
// End Cross Module References
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_vRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwoVectors_Struct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vLocation_MetaData[] = {
		{ "Category", "VersosImportPlugin|Vectors" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vLocation = { "vLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwoVectors_Struct, vLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vLocation_MetaData), Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vRotation_MetaData[] = {
		{ "Category", "VersosImportPlugin|Vectors" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vRotation = { "vRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTwoVectors_Struct, vRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vRotation_MetaData), Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewProp_vRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::ReturnStructParams = {
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTwoVectors_Struct()
	{
		if (!Z_Registration_Info_UScriptStruct_TwoVectors_Struct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TwoVectors_Struct.InnerSingleton, Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TwoVectors_Struct.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics
	{
		struct _Script_UnrealVersosAI_eventOnImagePostComplete_Parms
		{
			FString ResponseBody;
			bool bWasSuccessful;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseBody_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseBody;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_ResponseBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_ResponseBody = { "ResponseBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealVersosAI_eventOnImagePostComplete_Parms, ResponseBody), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_ResponseBody_MetaData), Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_ResponseBody_MetaData) };
	void Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_UnrealVersosAI_eventOnImagePostComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UnrealVersosAI_eventOnImagePostComplete_Parms), &Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_ResponseBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealVersosAI, nullptr, "OnImagePostComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::_Script_UnrealVersosAI_eventOnImagePostComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature_Statics::PropPointers) < 2048);
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
	DEFINE_FUNCTION(UVersosBlueprintLibrary::execBase64EncodeFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVersosBlueprintLibrary::Base64EncodeFile(Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVersosBlueprintLibrary::execDeprojectScreenPositionToWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTwoVectors_Struct*)Z_Param__Result=UVersosBlueprintLibrary::DeprojectScreenPositionToWorld(Z_Param_WorldContextObject,Z_Param_ScreenX,Z_Param_ScreenY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVersosBlueprintLibrary::execDeprojectMousePositionToWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTwoVectors_Struct*)Z_Param__Result=UVersosBlueprintLibrary::DeprojectMousePositionToWorld(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVersosBlueprintLibrary::execOpenFileDialog)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogTitle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVersosBlueprintLibrary::OpenFileDialog(Z_Param_WorldContextObject,Z_Param_DialogTitle,Z_Param_DefaultPath,Z_Param_FileTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVersosBlueprintLibrary::execPostImageToAPI)
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
	DEFINE_FUNCTION(UVersosBlueprintLibrary::execPlotGridOnImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputImagePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputImagePath);
		P_GET_PROPERTY(FIntProperty,Z_Param_CellSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridDimensions*)Z_Param__Result=P_THIS->PlotGridOnImage(Z_Param_InputImagePath,Z_Param_OutputImagePath,Z_Param_CellSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVersosBlueprintLibrary::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVersosBlueprintLibrary**)Z_Param__Result=UVersosBlueprintLibrary::GetInstance();
		P_NATIVE_END;
	}
	void UVersosBlueprintLibrary::StaticRegisterNativesUVersosBlueprintLibrary()
	{
		UClass* Class = UVersosBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Base64EncodeFile", &UVersosBlueprintLibrary::execBase64EncodeFile },
			{ "DeprojectMousePositionToWorld", &UVersosBlueprintLibrary::execDeprojectMousePositionToWorld },
			{ "DeprojectScreenPositionToWorld", &UVersosBlueprintLibrary::execDeprojectScreenPositionToWorld },
			{ "GetInstance", &UVersosBlueprintLibrary::execGetInstance },
			{ "OpenFileDialog", &UVersosBlueprintLibrary::execOpenFileDialog },
			{ "PlotGridOnImage", &UVersosBlueprintLibrary::execPlotGridOnImage },
			{ "PostImageToAPI", &UVersosBlueprintLibrary::execPostImageToAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics
	{
		struct VersosBlueprintLibrary_eventBase64EncodeFile_Parms
		{
			FString FileName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventBase64EncodeFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventBase64EncodeFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "Keywords", "convert given file to base64 string" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersosBlueprintLibrary, nullptr, "Base64EncodeFile", nullptr, nullptr, Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::VersosBlueprintLibrary_eventBase64EncodeFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::VersosBlueprintLibrary_eventBase64EncodeFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics
	{
		struct VersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms
		{
			const UObject* WorldContextObject;
			FTwoVectors_Struct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FTwoVectors_Struct, METADATA_PARAMS(0, nullptr) }; // 4026534593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Viewport" },
		{ "Keywords", "deproject mouse position viewport" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersosBlueprintLibrary, nullptr, "DeprojectMousePositionToWorld", nullptr, nullptr, Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::VersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::VersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics
	{
		struct VersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms
		{
			const UObject* WorldContextObject;
			float ScreenX;
			float ScreenY;
			FTwoVectors_Struct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, ScreenX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, ScreenY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FTwoVectors_Struct, METADATA_PARAMS(0, nullptr) }; // 4026534593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Viewport" },
		{ "Keywords", "deproject screen position viewport" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersosBlueprintLibrary, nullptr, "DeprojectScreenPositionToWorld", nullptr, nullptr, Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::VersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::VersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics
	{
		struct VersosBlueprintLibrary_eventGetInstance_Parms
		{
			UVersosBlueprintLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UVersosBlueprintLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|General" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersosBlueprintLibrary, nullptr, "GetInstance", nullptr, nullptr, Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::VersosBlueprintLibrary_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::VersosBlueprintLibrary_eventGetInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics
	{
		struct VersosBlueprintLibrary_eventOpenFileDialog_Parms
		{
			const UObject* WorldContextObject;
			FString DialogTitle;
			FString DefaultPath;
			FString FileTypes;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventOpenFileDialog_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventOpenFileDialog_Parms, FileTypes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventOpenFileDialog_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|File Dialog" },
		{ "Keywords", "open file dialog" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersosBlueprintLibrary, nullptr, "OpenFileDialog", nullptr, nullptr, Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::VersosBlueprintLibrary_eventOpenFileDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::VersosBlueprintLibrary_eventOpenFileDialog_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics
	{
		struct VersosBlueprintLibrary_eventPlotGridOnImage_Parms
		{
			FString InputImagePath;
			FString OutputImagePath;
			int32 CellSize;
			FGridDimensions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputImagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputImagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputImagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputImagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath = { "InputImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventPlotGridOnImage_Parms, InputImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath = { "OutputImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventPlotGridOnImage_Parms, OutputImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventPlotGridOnImage_Parms, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventPlotGridOnImage_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridDimensions, METADATA_PARAMS(0, nullptr) }; // 2212364228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|HTTP" },
		{ "Keywords", "post file to search api" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersosBlueprintLibrary, nullptr, "PlotGridOnImage", nullptr, nullptr, Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::VersosBlueprintLibrary_eventPlotGridOnImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::VersosBlueprintLibrary_eventPlotGridOnImage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics
	{
		struct VersosBlueprintLibrary_eventPostImageToAPI_Parms
		{
			FString ImagePath;
			FString ApiKey;
			FString ProjectId;
			FString CustomerId;
			FString DistinctId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomerId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistinctId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DistinctId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventPostImageToAPI_Parms, ImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventPostImageToAPI_Parms, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId = { "ProjectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventPostImageToAPI_Parms, ProjectId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId = { "CustomerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventPostImageToAPI_Parms, CustomerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId = { "DistinctId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersosBlueprintLibrary_eventPostImageToAPI_Parms, DistinctId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId_MetaData), Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|HTTP" },
		{ "Keywords", "post file to search api" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersosBlueprintLibrary, nullptr, "PostImageToAPI", nullptr, nullptr, Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::VersosBlueprintLibrary_eventPostImageToAPI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::VersosBlueprintLibrary_eventPostImageToAPI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVersosBlueprintLibrary);
	UClass* Z_Construct_UClass_UVersosBlueprintLibrary_NoRegister()
	{
		return UVersosBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVersosBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnImagePostComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImagePostComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVersosBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealVersosAI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersosBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVersosBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVersosBlueprintLibrary_Base64EncodeFile, "Base64EncodeFile" }, // 2632088173
		{ &Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld, "DeprojectMousePositionToWorld" }, // 1676448258
		{ &Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld, "DeprojectScreenPositionToWorld" }, // 4175031500
		{ &Z_Construct_UFunction_UVersosBlueprintLibrary_GetInstance, "GetInstance" }, // 3513000117
		{ &Z_Construct_UFunction_UVersosBlueprintLibrary_OpenFileDialog, "OpenFileDialog" }, // 2926432472
		{ &Z_Construct_UFunction_UVersosBlueprintLibrary_PlotGridOnImage, "PlotGridOnImage" }, // 2298491442
		{ &Z_Construct_UFunction_UVersosBlueprintLibrary_PostImageToAPI, "PostImageToAPI" }, // 1737473967
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersosBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVersosBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealVersosAI.h" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete_MetaData[] = {
		{ "Category", "Versos|HTTP" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete = { "OnImagePostComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary, OnImagePostComplete), Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete_MetaData), Z_Construct_UClass_UVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete_MetaData) }; // 152866982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVersosBlueprintLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVersosBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVersosBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVersosBlueprintLibrary_Statics::ClassParams = {
		&UVersosBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVersosBlueprintLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVersosBlueprintLibrary_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVersosBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVersosBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersosBlueprintLibrary_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVersosBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVersosBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVersosBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVersosBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVersosBlueprintLibrary.OuterSingleton;
	}
	template<> UNREALVERSOSAI_API UClass* StaticClass<UVersosBlueprintLibrary>()
	{
		return UVersosBlueprintLibrary::StaticClass();
	}
	UVersosBlueprintLibrary::UVersosBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVersosBlueprintLibrary);
	UVersosBlueprintLibrary::~UVersosBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_cezar_Documents_plugin_mar_17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cezar_Documents_plugin_mar_17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo[] = {
		{ FTwoVectors_Struct::StaticStruct, Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewStructOps, TEXT("TwoVectors_Struct"), &Z_Registration_Info_UScriptStruct_TwoVectors_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwoVectors_Struct), 4026534593U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cezar_Documents_plugin_mar_17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVersosBlueprintLibrary, UVersosBlueprintLibrary::StaticClass, TEXT("UVersosBlueprintLibrary"), &Z_Registration_Info_UClass_UVersosBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVersosBlueprintLibrary), 2426267452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cezar_Documents_plugin_mar_17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_3181326063(TEXT("/Script/UnrealVersosAI"),
		Z_CompiledInDeferFile_FID_Users_cezar_Documents_plugin_mar_17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cezar_Documents_plugin_mar_17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_cezar_Documents_plugin_mar_17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cezar_Documents_plugin_mar_17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
