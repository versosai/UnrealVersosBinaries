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
	struct Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics
	{
		struct _Script_UnrealVersosAI_eventOnFileDownloadComplete_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealVersosAI, nullptr, "OnFileDownloadComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::_Script_UnrealVersosAI_eventOnFileDownloadComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature_Statics::PropPointers) < 2048);
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
	DEFINE_FUNCTION(AUVersosBlueprintLibrary::execParseImageNumber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AUVersosBlueprintLibrary::ParseImageNumber(Z_Param_InputText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUVersosBlueprintLibrary::execCropToSquare)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AUVersosBlueprintLibrary::CropToSquare(Z_Param_InputPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUVersosBlueprintLibrary::execGetImageSize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=AUVersosBlueprintLibrary::GetImageSize(Z_Param_InputPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUVersosBlueprintLibrary::execSplitImageIntoQuadrants)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=AUVersosBlueprintLibrary::SplitImageIntoQuadrants(Z_Param_InputPath);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(AUVersosBlueprintLibrary::execCleanUpBullets)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=AUVersosBlueprintLibrary::CleanUpBullets(Z_Param_JsonString);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(AUVersosBlueprintLibrary::execBase64EncodeFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=AUVersosBlueprintLibrary::Base64EncodeFile(Z_Param_FileName);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(AUVersosBlueprintLibrary::execDeprojectMousePositionToWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTwoVectors_Struct*)Z_Param__Result=AUVersosBlueprintLibrary::DeprojectMousePositionToWorld(Z_Param_WorldContextObject);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(AUVersosBlueprintLibrary::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AUVersosBlueprintLibrary**)Z_Param__Result=AUVersosBlueprintLibrary::GetInstance();
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics
	{
		struct UVersosBlueprintLibrary_eventBase64DecodeFile_Parms
		{
			FString Base64String;
			FString OutputFilename;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base64String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Base64String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFilename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_Base64String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_Base64String = { "Base64String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventBase64DecodeFile_Parms, Base64String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_Base64String_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_Base64String_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_OutputFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_OutputFilename = { "OutputFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventBase64DecodeFile_Parms, OutputFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_OutputFilename_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::NewProp_OutputFilename_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "Keywords", "convert given base64 string to an output binary file" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "Base64DecodeFile", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::UVersosBlueprintLibrary_eventBase64DecodeFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics
	{
		struct UVersosBlueprintLibrary_eventBase64EncodeFile_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventBase64EncodeFile_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventBase64EncodeFile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "Keywords", "convert given file to base64 string" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "Base64EncodeFile", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::UVersosBlueprintLibrary_eventBase64EncodeFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics
	{
		struct UVersosBlueprintLibrary_eventCleanUpBullets_Parms
		{
			FString JsonString;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventCleanUpBullets_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventCleanUpBullets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "CleanUpBullets", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::UVersosBlueprintLibrary_eventCleanUpBullets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics
	{
		struct UVersosBlueprintLibrary_eventCropToSquare_Parms
		{
			FString InputPath;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputPath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_InputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_InputPath = { "InputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventCropToSquare_Parms, InputPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_InputPath_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_InputPath_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventCropToSquare_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_InputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "CropToSquare", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::UVersosBlueprintLibrary_eventCropToSquare_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics
	{
		struct UVersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FTwoVectors_Struct, METADATA_PARAMS(0, nullptr) }; // 4026534593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Viewport" },
		{ "Keywords", "deproject mouse position viewport" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "DeprojectMousePositionToWorld", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::UVersosBlueprintLibrary_eventDeprojectMousePositionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld_Statics::PropPointers) < 2048);
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, ScreenX), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, ScreenY), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FTwoVectors_Struct, METADATA_PARAMS(0, nullptr) }; // 4026534593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Viewport" },
		{ "Keywords", "deproject screen position viewport" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "DeprojectScreenPositionToWorld", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::UVersosBlueprintLibrary_eventDeprojectScreenPositionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics
	{
		struct UVersosBlueprintLibrary_eventDownloadFile_Parms
		{
			FString DestinationUrl;
			FString DestinationFilename;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFilename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationUrl = { "DestinationUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDownloadFile_Parms, DestinationUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationUrl_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationFilename = { "DestinationFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventDownloadFile_Parms, DestinationFilename), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationFilename_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationFilename_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::NewProp_DestinationFilename,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|HTTP" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "DownloadFile", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::UVersosBlueprintLibrary_eventDownloadFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics
	{
		struct UVersosBlueprintLibrary_eventGetImageSize_Parms
		{
			FString InputPath;
			FIntPoint ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_InputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_InputPath = { "InputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventGetImageSize_Parms, InputPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_InputPath_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_InputPath_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventGetImageSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_InputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "GetImageSize", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::UVersosBlueprintLibrary_eventGetImageSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics
	{
		struct UVersosBlueprintLibrary_eventGetInstance_Parms
		{
			AUVersosBlueprintLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_AUVersosBlueprintLibrary_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|General" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "GetInstance", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::UVersosBlueprintLibrary_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance_Statics::PropPointers) < 2048);
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, DialogTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, DefaultPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, FileTypes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventOpenFileDialog_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_FileTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|File Dialog" },
		{ "Keywords", "open file dialog" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "OpenFileDialog", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::UVersosBlueprintLibrary_eventOpenFileDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics
	{
		struct UVersosBlueprintLibrary_eventParseImageNumber_Parms
		{
			FString InputText;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputText;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_InputText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_InputText = { "InputText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventParseImageNumber_Parms, InputText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_InputText_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_InputText_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventParseImageNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_InputText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "ParseImageNumber", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::UVersosBlueprintLibrary_eventParseImageNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber_Statics::PropPointers) < 2048);
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath = { "InputImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPlotGridOnImage_Parms, InputImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath = { "OutputImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPlotGridOnImage_Parms, OutputImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPlotGridOnImage_Parms, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPlotGridOnImage_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridDimensions, METADATA_PARAMS(0, nullptr) }; // 2212364228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_InputImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_OutputImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|HTTP" },
		{ "Keywords", "post file to search api" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "PlotGridOnImage", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::UVersosBlueprintLibrary_eventPlotGridOnImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage_Statics::PropPointers) < 2048);
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, ImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId = { "ProjectId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, ProjectId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId = { "CustomerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, CustomerId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId = { "DistinctId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventPostImageToAPI_Parms, DistinctId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_ProjectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_CustomerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::NewProp_DistinctId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|HTTP" },
		{ "Keywords", "post file to search api" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "PostImageToAPI", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::UVersosBlueprintLibrary_eventPostImageToAPI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI_Statics::PropPointers) < 2048);
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
	struct Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics
	{
		struct UVersosBlueprintLibrary_eventSplitImageIntoQuadrants_Parms
		{
			FString InputPath;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_InputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_InputPath = { "InputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventSplitImageIntoQuadrants_Parms, InputPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_InputPath_MetaData), Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_InputPath_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersosBlueprintLibrary_eventSplitImageIntoQuadrants_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_InputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::Function_MetaDataParams[] = {
		{ "Category", "Versos|Utils" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUVersosBlueprintLibrary, nullptr, "SplitImageIntoQuadrants", nullptr, nullptr, Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::UVersosBlueprintLibrary_eventSplitImageIntoQuadrants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants_Statics::PropPointers) < 2048);
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUVersosBlueprintLibrary);
	UClass* Z_Construct_UClass_AUVersosBlueprintLibrary_NoRegister()
	{
		return AUVersosBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_AUVersosBlueprintLibrary_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFileDownloadComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFileDownloadComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealVersosAI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64DecodeFile, "Base64DecodeFile" }, // 831136898
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_Base64EncodeFile, "Base64EncodeFile" }, // 2486851499
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_CleanUpBullets, "CleanUpBullets" }, // 2578322921
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_CropToSquare, "CropToSquare" }, // 2604033395
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectMousePositionToWorld, "DeprojectMousePositionToWorld" }, // 3097227014
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_DeprojectScreenPositionToWorld, "DeprojectScreenPositionToWorld" }, // 2459112622
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_DownloadFile, "DownloadFile" }, // 2047977832
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_GetImageSize, "GetImageSize" }, // 1426180004
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_GetInstance, "GetInstance" }, // 2590701333
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_OpenFileDialog, "OpenFileDialog" }, // 3369018518
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_ParseImageNumber, "ParseImageNumber" }, // 1967662638
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_PlotGridOnImage, "PlotGridOnImage" }, // 602007841
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_PostImageToAPI, "PostImageToAPI" }, // 920787967
		{ &Z_Construct_UFunction_AUVersosBlueprintLibrary_SplitImageIntoQuadrants, "SplitImageIntoQuadrants" }, // 2889769051
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UnrealVersosAI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete_MetaData[] = {
		{ "Category", "Versos|HTTP" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete = { "OnImagePostComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUVersosBlueprintLibrary, OnImagePostComplete), Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete_MetaData), Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete_MetaData) }; // 152866982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnFileDownloadComplete_MetaData[] = {
		{ "Category", "Versos|HTTP" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnFileDownloadComplete = { "OnFileDownloadComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUVersosBlueprintLibrary, OnFileDownloadComplete), Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnFileDownloadComplete_MetaData), Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnFileDownloadComplete_MetaData) }; // 3912984401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnImagePostComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::NewProp_OnFileDownloadComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUVersosBlueprintLibrary>::IsAbstract,
	};
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
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUVersosBlueprintLibrary_Statics::PropPointers) < 2048);
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
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo[] = {
		{ FTwoVectors_Struct::StaticStruct, Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewStructOps, TEXT("TwoVectors_Struct"), &Z_Registration_Info_UScriptStruct_TwoVectors_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwoVectors_Struct), 4026534593U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUVersosBlueprintLibrary, AUVersosBlueprintLibrary::StaticClass, TEXT("AUVersosBlueprintLibrary"), &Z_Registration_Info_UClass_AUVersosBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUVersosBlueprintLibrary), 1281379510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_2566437456(TEXT("/Script/UnrealVersosAI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
