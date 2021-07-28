// Fill out your copyright notice in the Description page of Project Settings.


#include "TerrainGenerator_CPP.h"
#include "AssetRegistryModule.h"

// Sets default values
ATerrainGenerator_CPP::ATerrainGenerator_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATerrainGenerator_CPP::BeginPlay()
{
	Super::BeginPlay();
	GenerateTexture();
}

// Called every frame
void ATerrainGenerator_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATerrainGenerator_CPP::GenerateTexture()
{
	//Create a string containing the texture's path
	FString PackageName = TEXT("/Game/ProceduralTextures/");
	FString BaseTextureName = FString("ProcTexture");
	PackageName += BaseTextureName;

	//Create the package that will store our texture
	UPackage* Package = CreatePackage(NULL, *PackageName);
	GLog->Log("project dir:" + FPaths::ProjectDir());

	//Create a unique name for our asset. For example, if a texture named ProcTexture already exists the editor
	//will name the new texture as "ProcTexture_1"
	FName TextureName = MakeUniqueObjectName(Package, UTexture2D::StaticClass(), FName(*BaseTextureName));
	Package->FullyLoad();

	UTexture2D* NewTexture = NewObject<UTexture2D>(Package, TextureName, RF_Public | RF_Standalone | RF_MarkAsRootSet);

	if (NewTexture)
	{
		int32 TextureWidth = 1024;
		int32 TextureHeight = 1024;

		//Prevent the object and all its descedants from being deleted during garbage collecion
		NewTexture->AddToRoot();

		//Initialize the platform data to store necessary information regarding our texture asset
		NewTexture->PlatformData = new FTexturePlatformData();
		NewTexture->PlatformData->SizeX = TextureWidth;
		NewTexture->PlatformData->SizeY = TextureHeight;
		//NewTexture->PlatformData->NumSlices = 1;
		NewTexture->PlatformData->PixelFormat = EPixelFormat::PF_B8G8R8A8;


		//uint8* Pixels = GeneratePixels(TextureHeight, TextureWidth);
		//Each element of the array contains a single color so in order to represent information in
		//RGBA we need to have an array of length TextureWidth * TextureHeight * 4
		uint8* Pixels = new uint8[TextureWidth * TextureHeight * 4];
		for (int32 y = 0; y < TextureHeight; y++)
		{
			for (int32 x = 0; x < TextureWidth; x++)
			{
				//Get the current pixel
				int32 CurrentPixelIndex = ((y * TextureWidth) + x);
				//Get a random vector that will represent the RGB values for the current pixel
				FColor RandomColor = FColor::MakeRandomColor();

				Pixels[4 * CurrentPixelIndex] = RandomColor.B; //b
				Pixels[4 * CurrentPixelIndex + 1] = RandomColor.G; //g
				Pixels[4 * CurrentPixelIndex + 2] = RandomColor.R; //r
				Pixels[4 * CurrentPixelIndex + 3] = 255; //set A channel always to maximum
			}
		}

		//Allocate first mipmap.
		FTexture2DMipMap* Mip = new FTexture2DMipMap();
		NewTexture->PlatformData->Mips.Add(Mip);
		Mip->SizeX = TextureWidth;
		Mip->SizeY = TextureHeight;

		//Lock the mipmap data so it can be modified
		Mip->BulkData.Lock(LOCK_READ_WRITE);
		uint8* TextureData = (uint8*)Mip->BulkData.Realloc(TextureWidth * TextureHeight * 4);
		//Copy the pixel data into the Texture data
		FMemory::Memcpy(TextureData, Pixels, sizeof(uint8) * TextureHeight * TextureWidth * 4);
		Mip->BulkData.Unlock();


		//Initialize a new texture
		NewTexture->Source.Init(TextureWidth, TextureHeight, 1, 1, ETextureSourceFormat::TSF_BGRA8, Pixels);
		NewTexture->UpdateResource();

		//Mark the package as dirty so the editor will prompt you to save the file if you haven't
		Package->MarkPackageDirty();

		//Notify the editor that we created a new asset
		FAssetRegistryModule::AssetCreated(NewTexture);

		//Auto-save the new  asset
		FString PackageFileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
		bool bSaved = UPackage::SavePackage(Package, NewTexture, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, *PackageFileName, GError, nullptr, true, true, SAVE_NoError);

		//Since we don't need access to the pixel data anymore free the memory
		delete[] Pixels;
	}

}