// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Terrain_CPP.generated.h"

UCLASS()
class HSI_API ATerrain_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATerrain_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CleanGeometry();

	UFUNCTION(BlueprintCallable)
	void GenerateTerrain(FVector2D _size, FVector2D _tiles, FVector2D _textureTiles,
		UMaterial* _Material, UTexture2D* _InputMap, float _MaxHeight);

	UFUNCTION(BlueprintCallable)
		FVector2D GetSize();

private:
	UPROPERTY(EditAnywhere, Category = TerrainSettings)
		FVector2D Size;

	UPROPERTY(EditAnywhere, Category = TerrainSettings)
		FVector2D Tiles;

	UPROPERTY(EditAnywhere, Category = TerrainSettings)
		FVector2D TextureTiles;

	UPROPERTY(EditAnywhere, Category = TerrainSettings)
		UMaterial* Material;

	UPROPERTY(EditAnywhere, Category = TerrainSettings)
		UTexture2D* InputMap;

	//UPROPERTY(EditAnywhere, Category = TerrainSettings)
		//UTexture2D* HeightMap;

	UPROPERTY(EditAnywhere, Category = TerrainSettings)
		float MaxHeight;

	UPROPERTY()
		TArray<FVector> Vertices;

	UPROPERTY()
		TArray<FVector2D> UVs;

	UPROPERTY()
		TArray<FVector> Normals;

	UPROPERTY()
		TArray<int32> Indices;

	//UPROPERTY()
		//TArray<FVector2D> Tangents;

	UPROPERTY()
		UMaterialInstanceDynamic* DynamicMat;

	UPROPERTY()
		class UProceduralMeshComponent* ProceduralMesh;
};
