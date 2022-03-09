// Fill out your copyright notice in the Description page of Project Settings.


#include "generator.h"
#include <math.h>
#include <cmath>
#include "AssetRegistryModule.h"
#include "ImageUtils.h"
#include "Engine/Texture2D.h"

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
  getSeeds(FMath::Rand());
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

float Agenerator::noise(FVector2D uv,float localScale) {
  
  uv.X/=localScale;
  uv.Y/=localScale;
  uv.X+=1.f/(localScale*2.f);
  uv.Y+=1.f/(localScale*2.f);
  uv.X += seedx;
  uv.Y += seedy;
  float ix = (int)uv.X;
  float iy = (int)uv.Y;
  float fx = fmod(uv.X, 1);
  float fy = fmod(uv.Y, 1);
  FVector2D a = randomGradient(ix, iy);
  FVector2D b = randomGradient(ix+1, iy);
  FVector2D c = randomGradient(ix, iy+1);
  FVector2D d = randomGradient(ix+1, iy+1);
  float e = a.X * fx + a.Y * fy;
  float f = b.X * (1-fx) + b.Y * fy;
  float g = c.X * fx + c.Y * (1-fy);
  float h = d.X * (1 - fx) + d.Y * (1 - fy);
  float i = lerp(e,f,fx);
  float j = lerp(g, h, fx);
  float k = lerp(i, j, fy);
  return k;
}

int Agenerator::pixel(FVector2D uv)
{
    //float n = noise(uv * scale) + noise(uv * intensity) * sampleRadius;
    float n = valueAt(uv);
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
	textura = NewObject<UTexture2D>();// Package, TextureName, RF_Public | RF_Standalone | RF_MarkAsRootSet);

    int32 TextureWidth = sizeX;
    int32 TextureHeight = sizeY;
    textura->AddToRoot();
    textura->PlatformData = new FTexturePlatformData();
    textura->PlatformData->SizeX = TextureWidth;
    textura->PlatformData->SizeY = TextureHeight;
    textura->PlatformData->PixelFormat = EPixelFormat::PF_B8G8R8A8;
    Pixels = new uint8[TextureWidth * TextureHeight * 4];

	FString CSVPath = proyectPath.Append("/tex.csv");
    
    out.open(TCHAR_TO_ANSI(*CSVPath));
    
    gt = new int[sizeX * sizeY];
    for (int i = 0; i < sizeY; i++) {
        gt[i * sizeX ] = pixel(FVector2D(i,0));
        //out << gt[i * sizeX];
        CurrentPixelIndex++;
        for (int o = 1; o < sizeX; o++) {
            gt[i * sizeX + o] = pixel(FVector2D(i,o));
            //out << ',' << gt[i * sizeX + o] ;
            CurrentPixelIndex++;
        }
        //out << '\n';
    }

    for (int i = 0; i < sizeY; i++) {
      //out << gt[(sizeX-1-i)];
      out << gt[(sizeX-1-i)];
      for (int o = 1; o < sizeX; o++) {
        out << ","  << gt[o*sizeX+(sizeX-1-i)];
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

FVector2D Agenerator::randomGradient(int x, int y)
{
  const unsigned w = 8 * sizeof(unsigned);
  const unsigned s = w / 2; 
  unsigned a = x, b = y;
  a *= 3284157443; b ^= (a << s) | (a >> (w-s));
  b *= 1911520717; a ^= (b << s) | (b >> (w-s));
  a *= 2048419325;
  float random = a * (3.14159265 / ~(~0u >> 1)); 
  return FVector2D(sinf(random),cosf(random));
}

float Agenerator::valueAt(FVector2D uv)
{
  float ans = 0;
  float localScale =scale;
  float localPersistence = 1;
  for(int32 i=0; i<octaves;i++){
    ans += noise(uv,localScale)*localPersistence;
    localScale*=lacunarity;
    localPersistence*=persistence;
  }
  return ans;
}

void Agenerator::getSeeds(int s)
{
  int w = floorf((sqrt(s * 8 + 1) - 1) / 2.f);
  int t = (w * w + w) / 2;
  seedy = s - t;
  seedx = w - seedy;
}

int* Agenerator::get()
{
    return gt;
}

