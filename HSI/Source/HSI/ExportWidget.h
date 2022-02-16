// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ExportWidget.generated.h"

/**
 * 
 */
UCLASS()
class HSI_API UExportWidget : public UUserWidget
{
	GENERATED_BODY()
	
 public:
  
  UFUNCTION(BlueprintCallable)
  void ExportImageConfig(const FString& _Parameters);
};
