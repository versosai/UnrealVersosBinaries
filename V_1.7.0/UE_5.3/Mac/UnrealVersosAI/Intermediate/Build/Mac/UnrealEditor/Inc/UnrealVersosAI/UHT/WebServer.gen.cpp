// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealVersosAI/Public/WebServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebServer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALVERSOSAI_API UClass* Z_Construct_UClass_UWebServer();
	UNREALVERSOSAI_API UClass* Z_Construct_UClass_UWebServer_NoRegister();
	UNREALVERSOSAI_API UFunction* Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealVersosAI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics
	{
		struct _Script_UnrealVersosAI_eventWebContent_Parms
		{
			FString Content;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealVersosAI_eventWebContent_Parms, Content), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealVersosAI, nullptr, "WebContent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::_Script_UnrealVersosAI_eventWebContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::_Script_UnrealVersosAI_eventWebContent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWebContent_DelegateWrapper(const FMulticastScriptDelegate& WebContent, const FString& Content)
{
	struct _Script_UnrealVersosAI_eventWebContent_Parms
	{
		FString Content;
	};
	_Script_UnrealVersosAI_eventWebContent_Parms Parms;
	Parms.Content=Content;
	WebContent.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UWebServer::StaticRegisterNativesUWebServer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebServer);
	UClass* Z_Construct_UClass_UWebServer_NoRegister()
	{
		return UWebServer::StaticClass();
	}
	struct Z_Construct_UClass_UWebServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealVersosAI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebServer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebServer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebServer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebServer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebServer_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Versos|HTTP" },
		{ "ModuleRelativePath", "Public/WebServer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebServer_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWebServer, Content), Z_Construct_UDelegateFunction_UnrealVersosAI_WebContent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebServer_Statics::NewProp_Content_MetaData), Z_Construct_UClass_UWebServer_Statics::NewProp_Content_MetaData) }; // 905858044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebServer_Statics::NewProp_Content,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebServer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebServer_Statics::ClassParams = {
		&UWebServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebServer_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWebServer_Statics::Class_MetaDataParams), Z_Construct_UClass_UWebServer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWebServer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWebServer()
	{
		if (!Z_Registration_Info_UClass_UWebServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebServer.OuterSingleton, Z_Construct_UClass_UWebServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebServer.OuterSingleton;
	}
	template<> UNREALVERSOSAI_API UClass* StaticClass<UWebServer>()
	{
		return UWebServer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebServer);
	UWebServer::~UWebServer() {}
	struct Z_CompiledInDeferFile_FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_WebServer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_WebServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebServer, UWebServer::StaticClass, TEXT("UWebServer"), &Z_Registration_Info_UClass_UWebServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebServer), 317083289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_WebServer_h_641242410(TEXT("/Script/UnrealVersosAI"),
		Z_CompiledInDeferFile_FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_WebServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_cgm_Documents_VersosPlugin17_UnrealVersosAI_HostProject_Plugins_UnrealVersosAI_Source_UnrealVersosAI_Public_WebServer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
