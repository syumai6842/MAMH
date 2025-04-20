// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemDataStructure.h"

#include "ItemBase.generated.h"

struct FItemDataStructure;

UCLASS()
class UItemBase : public UObject
{
	GENERATED_BODY()

public: 
	UItemBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemData")
	FName Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemData")
	FString line;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemData")
	FString description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemData")
	TSubclassOf<UItemActiveEffect> activeEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemData")
	TSubclassOf<UItemPassiveEffect> passiveEffect;

	void Use();

	void DeployFromStructure(FItemDataStructure* data);

protected:
private:
};