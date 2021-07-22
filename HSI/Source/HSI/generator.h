// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int seed;
	float rand(FVector2D uv);
	FVector2D randvec(FVector2D uv);
	float noise(FVector2D uv);
};
