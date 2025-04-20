// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Item/ItemDataStructure.h>
#include "PE_UnderstandingListening.generated.h"

/**
 * 
 */
UCLASS()
class MAMH_API UPE_UnderstandingListening : public UItemPassiveEffect
{
	GENERATED_BODY()
public:
	void ApplyEffect() override;
	void OnJudge(FChat* chat, bool bIsAnsweredTrue) override;
	FStatModifier* modifier;
};
