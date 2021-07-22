// Fill out your copyright notice in the Description page of Project Settings.


#include "Terrain_CPP.h"
//#include "ProceduralMeshComponent.h"
//#include "MyActor.generated.h"

// Sets default values
ATerrain_CPP::ATerrain_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
								   UTexture2D* _colorMap, float _maxHeight)
{
	Size = _size;
	Tiles = _tiles;
	TextureTiles = _textureTiles;
	Material = _material;
	ColorMap = _colorMap;
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
		}
	}
}

