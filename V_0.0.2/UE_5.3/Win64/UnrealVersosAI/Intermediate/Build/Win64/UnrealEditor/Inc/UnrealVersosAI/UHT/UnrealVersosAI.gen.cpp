// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealVersosAI/Public/UnrealVersosAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealVersosAI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UNREALVERSOSAI_API UClass* Z_Construct_UClass_UVersosBlueprintLibrary();
	UNREALVERSOSAI_API UClass* Z_Construct_UClass_UVersosBlueprintLibrary_NoRegister();
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
	void UVersosBlueprintLibrary::StaticRegisterNativesUVersosBlueprintLibrary()
	{
		UClass* Class = UVersosBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeprojectMousePositionToWorld", &UVersosBlueprintLibrary::execDeprojectMousePositionToWorld },
			{ "DeprojectScreenPositionToWorld", &UVersosBlueprintLibrary::execDeprojectScreenPositionToWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Deprojects screen position to world position and direction.\n    *\n    * @param WorldContextObject The world context.\n    * @param ScreenPosition The screen position to deproject.\n    * @return The world position and direction.\n    */" },
#endif
		{ "Keywords", "deproject mouse position viewport" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deprojects screen position to world position and direction.\n\n@param WorldContextObject The world context.\n@param ScreenPosition The screen position to deproject.\n@return The world position and direction." },
#endif
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVersosBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealVersosAI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersosBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVersosBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectMousePositionToWorld, "DeprojectMousePositionToWorld" }, // 3253189532
		{ &Z_Construct_UFunction_UVersosBlueprintLibrary_DeprojectScreenPositionToWorld, "DeprojectScreenPositionToWorld" }, // 4175031500
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersosBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVersosBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealVersosAI.h" },
		{ "ModuleRelativePath", "Public/UnrealVersosAI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVersosBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVersosBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVersosBlueprintLibrary_Statics::ClassParams = {
		&UVersosBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVersosBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVersosBlueprintLibrary_Statics::Class_MetaDataParams)
	};
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
	struct Z_CompiledInDeferFile_FID_UnrealVersos_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealVersos_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo[] = {
		{ FTwoVectors_Struct::StaticStruct, Z_Construct_UScriptStruct_FTwoVectors_Struct_Statics::NewStructOps, TEXT("TwoVectors_Struct"), &Z_Registration_Info_UScriptStruct_TwoVectors_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwoVectors_Struct), 4026534593U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealVersos_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVersosBlueprintLibrary, UVersosBlueprintLibrary::StaticClass, TEXT("UVersosBlueprintLibrary"), &Z_Registration_Info_UClass_UVersosBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVersosBlueprintLibrary), 754767819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealVersos_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_824330598(TEXT("/Script/UnrealVersosAI"),
		Z_CompiledInDeferFile_FID_UnrealVersos_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealVersos_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealVersos_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealVersos_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_UnrealVersosAI_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
