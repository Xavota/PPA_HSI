// Fill out your copyright notice in the Description page of Project Settings.


#include "Terrain_CPP.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"

// Sets default values
ATerrain_CPP::ATerrain_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = ProceduralMesh;
	// New in UE 4.17, multi-threaded PhysX cooking.
	ProceduralMesh->bUseAsyncCooking = true;
}

// Called when the game starts or when spawned
void ATerrain_CPP::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATerrain_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATerrain_CPP::CleanGeometry()
{
	Vertices.Empty();
	UVs.Empty();
	Normals.Empty();
	Indices.Empty();
	//Tangents.Empty();
}

void ATerrain_CPP::GenerateTerrain(FVector2D _size, FVector2D _tiles, FVector2D _textureTiles, UMaterial* _material,
								   UTexture2D* _InputMap, float _maxHeight)
{
	CleanGeometry();
	
	Size = _size;
	Tiles = _tiles;
	TextureTiles = _textureTiles;
	Material = _material;
	InputMap = _InputMap;
	MaxHeight = _maxHeight;

	for (int i = 0; i <= Tiles.X; i++)
	{
		for (int j = 0; j <= Tiles.Y; j++)
		{
			float x = (Size.X / Tiles.X) * i;
			float y = (Size.Y / Tiles.Y) * j;

			Vertices.Add(FVector(x, y, 0));

			float uvx = (x / Size.X) * TextureTiles.X;
			float uvy = (y / Size.Y) * TextureTiles.Y;

			UVs.Add(FVector2D(uvx, uvy));

			Normals.Add(FVector(0,0,1));

			//Indices.Add();
		}
	}

	UKismetProceduralMeshLibrary::CreateGridMeshTriangles((int)Tiles.X + 1, (int)Tiles.Y + 1, false, Indices);

	TArray<FLinearColor> colors;
	TArray<FProcMeshTangent> tans;
	ProceduralMesh->CreateMeshSection_LinearColor(0, Vertices, Indices, Normals, UVs, colors, tans, false);

	DynamicMat = UMaterialInstanceDynamic::Create(Material, this);

	DynamicMat->SetTextureParameterValue("input", InputMap);
	DynamicMat->SetScalarParameterValue("HeightMult", MaxHeight);

	ProceduralMesh->SetMaterial(0, DynamicMat);
}

FVector2D ATerrain_CPP::GetSize()
{
	return Size;
}

