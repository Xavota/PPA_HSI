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
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Agenerator::execgetTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->getTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Agenerator::execgroundthruth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->groundthruth(Z_Param_size);
		P_NATIVE_END;
	}
	void Agenerator::StaticRegisterNativesAgenerator()
	{
		UClass* Class = Agenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getTexture", &Agenerator::execgetTexture },
			{ "groundthruth", &Agenerator::execgroundthruth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Agenerator_getTexture_Statics
	{
		struct generator_eventgetTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Agenerator_getTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(generator_eventgetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Agenerator_getTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Agenerator_getTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agenerator_getTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agenerator_getTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agenerator, nullptr, "getTexture", nullptr, nullptr, sizeof(generator_eventgetTexture_Parms), Z_Construct_UFunction_Agenerator_getTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Agenerator_getTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agenerator_getTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Agenerator_getTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agenerator_getTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agenerator_getTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Agenerator_groundthruth_Statics
	{
		struct generator_eventgroundthruth_Parms
		{
			int32 size;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_Agenerator_groundthruth_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(generator_eventgroundthruth_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Agenerator_groundthruth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Agenerator_groundthruth_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agenerator_groundthruth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "generator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agenerator_groundthruth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agenerator, nullptr, "groundthruth", nullptr, nullptr, sizeof(generator_eventgroundthruth_Parms), Z_Construct_UFunction_Agenerator_groundthruth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Agenerator_groundthruth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agenerator_groundthruth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Agenerator_groundthruth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agenerator_groundthruth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agenerator_groundthruth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Agenerator_NoRegister()
	{
		return Agenerator::StaticClass();
	}
	struct Z_Construct_UClass_Agenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_Agenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Agenerator_getTexture, "getTexture" }, // 2467277046
		{ &Z_Construct_UFunction_Agenerator_groundthruth, "groundthruth" }, // 2244120006
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(Agenerator, 3536571733);
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
