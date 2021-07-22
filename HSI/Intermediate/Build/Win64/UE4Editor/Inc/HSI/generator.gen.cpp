// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HSI/generator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegenerator() {}
// Cross Module References
	HSI_API UClass* Z_Construct_UClass_Agenerator_NoRegister();
	HSI_API UClass* Z_Construct_UClass_Agenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HSI();
// End Cross Module References
	void Agenerator::StaticRegisterNativesAgenerator()
	{
	}
	UClass* Z_Construct_UClass_Agenerator_NoRegister()
	{
		return Agenerator::StaticClass();
	}
	struct Z_Construct_UClass_Agenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HSI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "generator.h" },
		{ "ModuleRelativePath", "generator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agenerator_Statics::ClassParams = {
		&Agenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Agenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Agenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agenerator, 3041894623);
	template<> HSI_API UClass* StaticClass<Agenerator>()
	{
		return Agenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agenerator(Z_Construct_UClass_Agenerator, &Agenerator::StaticClass, TEXT("/Script/HSI"), TEXT("Agenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
