// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HSI/Terrain_CPP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrain_CPP() {}
// Cross Module References
	HSI_API UClass* Z_Construct_UClass_ATerrain_CPP_NoRegister();
	HSI_API UClass* Z_Construct_UClass_ATerrain_CPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HSI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void ATerrain_CPP::StaticRegisterNativesATerrain_CPP()
	{
	}
	UClass* Z_Construct_UClass_ATerrain_CPP_NoRegister()
	{
		return ATerrain_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ATerrain_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrain_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HSI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Terrain_CPP.h" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Tiles_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, Tiles), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Tiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Tiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_TextureTiles_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_TextureTiles = { "TextureTiles", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, TextureTiles), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_TextureTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_TextureTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ColorMap_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ColorMap = { "ColorMap", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, ColorMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ColorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ColorMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_HeightMap_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_HeightMap = { "HeightMap", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, HeightMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_HeightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_HeightMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrain_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_TextureTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ColorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_HeightMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerrain_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrain_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATerrain_CPP_Statics::ClassParams = {
		&ATerrain_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATerrain_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATerrain_CPP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATerrain_CPP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATerrain_CPP, 579735713);
	template<> HSI_API UClass* StaticClass<ATerrain_CPP>()
	{
		return ATerrain_CPP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATerrain_CPP(Z_Construct_UClass_ATerrain_CPP, &ATerrain_CPP::StaticClass, TEXT("/Script/HSI"), TEXT("ATerrain_CPP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATerrain_CPP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
