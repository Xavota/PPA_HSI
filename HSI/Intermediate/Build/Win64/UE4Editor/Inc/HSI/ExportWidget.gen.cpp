// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HSI/ExportWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExportWidget() {}
// Cross Module References
	HSI_API UClass* Z_Construct_UClass_UExportWidget_NoRegister();
	HSI_API UClass* Z_Construct_UClass_UExportWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HSI();
// End Cross Module References
	DEFINE_FUNCTION(UExportWidget::execExportImageConfig)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExportImageConfig(Z_Param__Parameters);
		P_NATIVE_END;
	}
	void UExportWidget::StaticRegisterNativesUExportWidget()
	{
		UClass* Class = UExportWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportImageConfig", &UExportWidget::execExportImageConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics
	{
		struct ExportWidget_eventExportImageConfig_Parms
		{
			FString _Parameters;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::NewProp__Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::NewProp__Parameters = { "_Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExportWidget_eventExportImageConfig_Parms, _Parameters), METADATA_PARAMS(Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::NewProp__Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::NewProp__Parameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::NewProp__Parameters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExportWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExportWidget, nullptr, "ExportImageConfig", nullptr, nullptr, sizeof(ExportWidget_eventExportImageConfig_Parms), Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExportWidget_ExportImageConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExportWidget_ExportImageConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExportWidget_NoRegister()
	{
		return UExportWidget::StaticClass();
	}
	struct Z_Construct_UClass_UExportWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExportWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_HSI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExportWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExportWidget_ExportImageConfig, "ExportImageConfig" }, // 2294022793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExportWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ExportWidget.h" },
		{ "ModuleRelativePath", "ExportWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExportWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExportWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExportWidget_Statics::ClassParams = {
		&UExportWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExportWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExportWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExportWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExportWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExportWidget, 1570219914);
	template<> HSI_API UClass* StaticClass<UExportWidget>()
	{
		return UExportWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExportWidget(Z_Construct_UClass_UExportWidget, &UExportWidget::StaticClass, TEXT("/Script/HSI"), TEXT("UExportWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExportWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
