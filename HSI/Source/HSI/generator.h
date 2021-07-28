// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <fstream>
#include "generator.generated.h"

UCLASS()
class HSI_API Agenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Agenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	float scale= 3, intensity= 2, sampleRadius= .5, bias=.15, bias0= -.15;
	// Called every frame
	int* gt;
	virtual void Tick(float DeltaTime) override;
	int seed=0;
	FVector2D floor(FVector2D uv);
	FVector2D frac(FVector2D uv);
	float dot(FVector2D uv, FVector2D other);
	float lerp(volatile float a, volatile float  b, volatile float  t);
	std::ofstream out;
	float rand(FVector2D uv);
	FVector2D randvec(FVector2D uv);
	float noise(FVector2D uv);
	int pixel(FVector2D uv);
	int* get();
	UTexture2D* textura;
	uint8* Pixels;
	int32 CurrentPixelIndex = 0;
	TArray<FColor> colores;
	UFUNCTION(BlueprintCallable)
	void groundthruth(int size);
	UFUNCTION(BlueprintCallable)
		UTexture2D* getTexture();
};
