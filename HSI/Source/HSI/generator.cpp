// Fill out your copyright notice in the Description page of Project Settings.


#include "generator.h"

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
float Agenerator::rand(FVector2D uv)
{
    uv.X += seed % 7907;
    uv.Y += seed % 7919;//*/
    uv /= 46656.f;
    FVector2D noise = fmod(sin(FVector2D::DotProduct(uv, FVector2D(12.9898, 78.233) * 2.0)) * 43758.5453,1.0f);
    return abs(noise.X + noise.X) * 0.5;
}
FVector2D Agenerator::randvec(FVector2D uv) {
    float r = rand(uv);
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
    FVector2D f = frac(uv);
    f = f * f * f * (f * (f * 6.0f - 15.0f) + 10.0f);
    FVector2D a = randvec(i);
    FVector2D b = randvec(i + FVector2D(1.0, 0.0));
    FVector2D c = randvec(i + FVector2D(0.0, 1.0));
    FVector2D d = randvec(i + FVector2D(1.0, 1.0));
    float w = dot(a, f);
    float x = dot(b, f - FVector2D(1.0, 0.0));
    float y = dot(c, f - FVector2D(0.0, 1.0));
    float z = dot(d, f - FVector2D(1.0, 1.0));
    float t = lerp(lerp(w, x, f.x), lerp(y, z, f.x), f.y);
    return t;
}