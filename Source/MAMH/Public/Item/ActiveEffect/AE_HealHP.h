// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/ItemDataStructure.h"
#include "AE_HealHP.generated.h"

/**
 * 
 */
UCLASS()
class MAMH_API UAE_HealHP : public UItemActiveEffect
{
	GENERATED_BODY()
public:
	void ApplyEffect() override;
};
