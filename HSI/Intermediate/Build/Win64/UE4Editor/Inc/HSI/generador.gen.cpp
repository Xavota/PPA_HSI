// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HSI/generador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegenerador() {}
// Cross Module References
	HSI_API UClass* Z_Construct_UClass_Ugenerador_NoRegister();
	HSI_API UClass* Z_Construct_UClass_Ugenerador();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HSI();
// End Cross Module References
	void Ugenerador::StaticRegisterNativesUgenerador()
	{
	}
	UClass* Z_Construct_UClass_Ugenerador_NoRegister()
	{
		return Ugenerador::StaticClass();
	}
	struct Z_Construct_UClass_Ugenerador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ugenerador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HSI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ugenerador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "generador.h" },
		{ "ModuleRelativePath", "generador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ugenerador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ugenerador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ugenerador_Statics::ClassParams = {
		&Ugenerador::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Ugenerador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ugenerador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ugenerador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ugenerador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ugenerador, 3438402632);
	template<> HSI_API UClass* StaticClass<Ugenerador>()
	{
		return Ugenerador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ugenerador(Z_Construct_UClass_Ugenerador, &Ugenerador::StaticClass, TEXT("/Script/HSI"), TEXT("Ugenerador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ugenerador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif