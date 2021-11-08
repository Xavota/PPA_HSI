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
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATerrain_CPP::execGetGrayscalesMat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetGrayscalesMat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATerrain_CPP::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATerrain_CPP::execGenerateTerrain)
	{
		P_GET_STRUCT(FVector2D,Z_Param__size);
		P_GET_STRUCT(FVector2D,Z_Param__tiles);
		P_GET_STRUCT(FVector2D,Z_Param__textureTiles);
		P_GET_OBJECT(UMaterial,Z_Param__Material);
		P_GET_OBJECT(UMaterial,Z_Param__grayScalesMaterial);
		P_GET_OBJECT(UTexture2D,Z_Param__InputMap);
		P_GET_PROPERTY(FFloatProperty,Z_Param__MaxHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateTerrain(Z_Param__size,Z_Param__tiles,Z_Param__textureTiles,Z_Param__Material,Z_Param__grayScalesMaterial,Z_Param__InputMap,Z_Param__MaxHeight);
		P_NATIVE_END;
	}
	void ATerrain_CPP::StaticRegisterNativesATerrain_CPP()
	{
		UClass* Class = ATerrain_CPP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateTerrain", &ATerrain_CPP::execGenerateTerrain },
			{ "GetGrayscalesMat", &ATerrain_CPP::execGetGrayscalesMat },
			{ "GetSize", &ATerrain_CPP::execGetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics
	{
		struct Terrain_CPP_eventGenerateTerrain_Parms
		{
			FVector2D _size;
			FVector2D _tiles;
			FVector2D _textureTiles;
			UMaterial* _Material;
			UMaterial* _grayScalesMaterial;
			UTexture2D* _InputMap;
			float _MaxHeight;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__size;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__textureTiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Material;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__grayScalesMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__InputMap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__MaxHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__size = { "_size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terrain_CPP_eventGenerateTerrain_Parms, _size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__tiles = { "_tiles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terrain_CPP_eventGenerateTerrain_Parms, _tiles), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__textureTiles = { "_textureTiles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terrain_CPP_eventGenerateTerrain_Parms, _textureTiles), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__Material = { "_Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terrain_CPP_eventGenerateTerrain_Parms, _Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__grayScalesMaterial = { "_grayScalesMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terrain_CPP_eventGenerateTerrain_Parms, _grayScalesMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__InputMap = { "_InputMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terrain_CPP_eventGenerateTerrain_Parms, _InputMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__MaxHeight = { "_MaxHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terrain_CPP_eventGenerateTerrain_Parms, _MaxHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__textureTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__grayScalesMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__InputMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::NewProp__MaxHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATerrain_CPP, nullptr, "GenerateTerrain", nullptr, nullptr, sizeof(Terrain_CPP_eventGenerateTerrain_Parms), Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics
	{
		struct Terrain_CPP_eventGetGrayscalesMat_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terrain_CPP_eventGetGrayscalesMat_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATerrain_CPP, nullptr, "GetGrayscalesMat", nullptr, nullptr, sizeof(Terrain_CPP_eventGetGrayscalesMat_Parms), Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics
	{
		struct Terrain_CPP_eventGetSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Terrain_CPP_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATerrain_CPP, nullptr, "GetSize", nullptr, nullptr, sizeof(Terrain_CPP_eventGetSize_Parms), Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATerrain_CPP_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATerrain_CPP_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATerrain_CPP_NoRegister()
	{
		return ATerrain_CPP::StaticClass();
	}
	struct Z_Construct_UClass_ATerrain_CPP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrayScalesMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrayScalesMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Indices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrayScalesDynamicMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrayScalesDynamicMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATerrain_CPP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HSI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATerrain_CPP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATerrain_CPP_GenerateTerrain, "GenerateTerrain" }, // 279861268
		{ &Z_Construct_UFunction_ATerrain_CPP_GetGrayscalesMat, "GetGrayscalesMat" }, // 2884738247
		{ &Z_Construct_UFunction_ATerrain_CPP_GetSize, "GetSize" }, // 3143986564
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesMaterial_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesMaterial = { "GrayScalesMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, GrayScalesMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_InputMap_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_InputMap = { "InputMap", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, InputMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_InputMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_InputMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "TerrainSettings" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = TerrainSettings)\n//UTexture2D* HeightMap;\n" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = TerrainSettings)\nUTexture2D* HeightMap;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_UVs_MetaData[] = {
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_UVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_UVs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Normals_MetaData[] = {
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Indices_MetaData[] = {
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Indices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_DynamicMat_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//TArray<FVector2D> Tangents;\n" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
		{ "ToolTip", "UPROPERTY()\nTArray<FVector2D> Tangents;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_DynamicMat = { "DynamicMat", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, DynamicMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_DynamicMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_DynamicMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesDynamicMat_MetaData[] = {
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesDynamicMat = { "GrayScalesDynamicMat", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, GrayScalesDynamicMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesDynamicMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesDynamicMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ProceduralMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Terrain_CPP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATerrain_CPP, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ProceduralMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATerrain_CPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_TextureTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_InputMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Indices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_Indices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_DynamicMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_GrayScalesDynamicMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATerrain_CPP_Statics::NewProp_ProceduralMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATerrain_CPP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATerrain_CPP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATerrain_CPP_Statics::ClassParams = {
		&ATerrain_CPP::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATerrain_CPP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ATerrain_CPP, 1710554320);
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
