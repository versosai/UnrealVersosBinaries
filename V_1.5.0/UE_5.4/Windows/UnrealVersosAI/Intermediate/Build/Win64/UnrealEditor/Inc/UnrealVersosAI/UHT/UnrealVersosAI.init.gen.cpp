// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealVersosAI_init() {}
	UNREALVERSOSAI_API UFunction* Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature();
	UNREALVERSOSAI_API UFunction* Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealVersosAI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealVersosAI()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealVersosAI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealVersosAI_OnFileDownloadComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealVersosAI_OnImagePostComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealVersosAI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0xDE1261B4,
				0xA7E24A83,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealVersosAI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealVersosAI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealVersosAI(Z_Construct_UPackage__Script_UnrealVersosAI, TEXT("/Script/UnrealVersosAI"), Z_Registration_Info_UPackage__Script_UnrealVersosAI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDE1261B4, 0xA7E24A83));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
