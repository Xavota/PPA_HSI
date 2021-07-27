// Fill out your copyright notice in the Description page of Project Settings.


#include "generator.h"
#include <math.h>
#include <cmath>
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
    if (n > bias)
        return 0;
    else if (n > bias0)
        return 1;
    else
        return 2;
}

void Agenerator::groundthruth(int size)
{
    out.open("D:/test.csv");
    EObjectFlags flags;
    FCreateTexture2DParameters params;

    textura=FImageUtils::CreateTexture2D(size,size,colores, textura,"Groundthruth",flags,params);
    gt = new int[size * size];
    for (int i = 0; i < size; i++) {
        for (int o = 0; o < size; o++) {
            //out << "p " << i << " " << o << std::endl;
            gt[i * size + o] = pixel(FVector2D((float)i/(float)size , (float)o/ (float)size));
            out << gt[i * size + o] << ',';
        }
        out << '\n';
    }
}

UTexture2D* Agenerator::getTexture()
{
    return textura;
}

int* Agenerator::get()
{
    return gt;
}

