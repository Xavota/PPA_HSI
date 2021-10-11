// Fill out your copyright notice in the Description page of Project Settings.


#include "generator.h"
#include <math.h>
#include <cmath>
#include "AssetRegistryModule.h"
#include "ImageUtils.h"
// Sets default values
Agenerator::Agenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Agenerator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Agenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
FVector2D Agenerator::floor(FVector2D uv)
{
    return FVector2D(floorf(uv.X), floorf(uv.Y));
}
FVector2D Agenerator::frac(FVector2D uv)
{
    return FVector2D(fmod(uv.X,1), fmod(uv.Y, 1));
}
float Agenerator::dot(FVector2D uv, FVector2D other)
{
    return uv.X*other.X+ uv.Y * other.Y;
}

float Agenerator::lerp(volatile float a, volatile float b, volatile float t)
{
    return a + t * (b - a);
}

float Agenerator::rand(FVector2D uv)
{
    uv.X += seed % 7907;
    uv.Y += seed % 7919;//*/
    //out<<"p " << uv.X <<" "<< uv.Y<< std::endl;
    float d = FVector2D::DotProduct(uv, FVector2D(12.9898f, 78.233f));
    //out << "d " << d << std::endl;
    float s = sin(d * 2.0);
    //out << "s " << s << std::endl;
    float n = fmod(s * 43758.5453, 1.0f);
    //out << "n " << n << std::endl;
    return  abs(n);
}
FVector2D Agenerator::randvec(FVector2D uv) {
    //out << "uv " << uv.X << " " << uv.Y << std::endl;
    float r = rand(uv);
    //out << "r " << r << std::endl;
    if (r < 0.125f) {
        return FVector2D(1.0f, 1.0f);
    }
    else if (r < 0.25f) {
        return FVector2D(-1.0f, 1.0f);
    }
    else if (r < 0.325f) {
        return FVector2D(1.0f, -1.0f);
    }
    else if (r < 0.5f) {
        return FVector2D(-1.0f, -1.0f);
    }
    if (r < 0.625f) {
        return FVector2D(1.0f, 0.0f);
    }
    else if (r < 0.75f) {
        return FVector2D(0.0f, 1.0f);
    }
    else if (r < 0.825f) {
        return FVector2D(0.0f, -1.0f);
    }
    else {
        return FVector2D(-1.0f, 0.0f);
    }
}
float Agenerator::noise(FVector2D uv) {
    FVector2D i = floor(uv);
    //out << "i " << i.X << " " << i.Y << std::endl;
    
    FVector2D f = frac(uv);
    //out << "f " << f.X << " " << f.Y << std::endl;
    f = f * f * f * (f * (f * 6.0f - 15.0f) + 10.0f);
    //out << "f " << f.X << " " << f.Y << std::endl;
    //out << "i " << i.X << " " << i.Y << std::endl;
    FVector2D a = randvec(i);
    //out << "a " << a.X << " " << a.Y << std::endl;

    FVector2D b = randvec(i + FVector2D(1.0, 0.0));
    //out << "b " << b.X << " " << b.Y << std::endl;
    FVector2D c = randvec(i + FVector2D(0.0, 1.0));
    //out << "c " << c.X << " " << c.Y << std::endl;
    FVector2D d = randvec(i + FVector2D(1.0, 1.0));
    //out << "d " << d.X << " " << d.Y << std::endl;
    float w = dot(a, f);
    float x = dot(b, f - FVector2D(1.0, 0.0));
    float y = dot(c, f - FVector2D(0.0, 1.0));
    float z = dot(d, f - FVector2D(1.0, 1.0));
    volatile float t = lerp(lerp(w, x, f.X), lerp(y, z, f.X), f.Y);
    return t;
}

int Agenerator::pixel(FVector2D uv)
{
    float n = noise(uv * scale) + noise(uv * intensity) * sampleRadius;
    Pixels[4 * CurrentPixelIndex] = 0;
    Pixels[4 * CurrentPixelIndex + 1] = 0;
    Pixels[4 * CurrentPixelIndex + 2] = 0;
    Pixels[4 * CurrentPixelIndex + 3] = 255;
    if (n > bias) {
        Pixels[4 * CurrentPixelIndex] = 255;
        return 0;
    }
        
    else if (n > bias0) {
        Pixels[4 * CurrentPixelIndex+1] = 255;
        return 1;
    }
    else {
        Pixels[4 * CurrentPixelIndex + 2] = 255;
        return 2;
    }
        
}

void Agenerator::groundthruth(int sizeX, int sizeY, FString proyectPath)
{
    //FString PackageName = TEXT("/Game/ProceduralTextures/");
    //FString BaseTextureName = FString("Groundthruth");
    //PackageName += BaseTextureName;
    //UPackage* Package = CreatePackage(NULL, *PackageName);
    //GLog->Log("project dir:" + FPaths::ProjectDir());
    //FName TextureName = MakeUniqueObjectName(Package, UTexture2D::StaticClass(), FName(*BaseTextureName));
    //Package->FullyLoad();


	textura = NewObject<UTexture2D>();// Package, TextureName, RF_Public | RF_Standalone | RF_MarkAsRootSet);

    int32 TextureWidth = sizeX;
    int32 TextureHeight = sizeY;
    textura->AddToRoot();
    textura->PlatformData = new FTexturePlatformData();
    textura->PlatformData->SizeX = TextureWidth;
    textura->PlatformData->SizeY = TextureHeight;
    textura->PlatformData->PixelFormat = EPixelFormat::PF_B8G8R8A8;
    Pixels = new uint8[TextureWidth * TextureHeight * 4];

	FString CSVPath = proyectPath.Append("/test.csv");
    
    out.open(TCHAR_TO_ANSI(*CSVPath));
    
    gt = new int[sizeX * sizeY];
    for (int i = 0; i < sizeY; i++) {
        gt[i * sizeX + 0] = pixel(FVector2D((float)i / 256.f, 0.0f / 256.f));
        out << gt[i * sizeX];
        CurrentPixelIndex++;
        for (int o = 1; o < sizeX; o++) {
            gt[i * sizeX + o] = pixel(FVector2D((float)i/256.f , (float)o/ 256.f));
            out << ',' << gt[i * sizeX + o] ;
            CurrentPixelIndex++;
        }
        out << '\n';
    }
    //Allocate first mipmap.
    FTexture2DMipMap* Mip = new FTexture2DMipMap();
    textura->PlatformData->Mips.Add(Mip);
    Mip->SizeX = TextureWidth;
    Mip->SizeY = TextureHeight;

    //Lock the mipmap data so it can be modified
    Mip->BulkData.Lock(LOCK_READ_WRITE);
    uint8* TextureData = (uint8*)Mip->BulkData.Realloc(TextureWidth * TextureHeight * 4);
    //Copy the pixel data into the Texture data
    FMemory::Memcpy(TextureData, Pixels, sizeof(uint8) * TextureHeight * TextureWidth * 4);
    Mip->BulkData.Unlock();


    //Initialize a new texture
    textura->Source.Init(TextureWidth, TextureHeight, 1, 1, ETextureSourceFormat::TSF_BGRA8, Pixels);
    textura->UpdateResource();

    //Mark the package as dirty so the editor will prompt you to save the file if you haven't
    //Package->MarkPackageDirty();

    //Notify the editor that we created a new asset
    //FAssetRegistryModule::AssetCreated(textura);

    //Auto-save the new  asset
    //FString PackageFileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
    //bool bSaved = UPackage::SavePackage(Package, textura, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, *PackageFileName, GError, nullptr, true, true, SAVE_NoError);

    //Since we don't need access to the pixel data anymore free the memory
    delete[] Pixels;
}

UTexture2D* Agenerator::getTexture()
{
    return textura;
}

int* Agenerator::get()
{
    return gt;
}

