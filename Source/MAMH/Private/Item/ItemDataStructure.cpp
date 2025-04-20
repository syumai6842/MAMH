// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/ItemDataStructure.h"
#include <Core/BattleGameMode.h>

UItemPassiveEffect::UItemPassiveEffect()
{
	InitializePassiveEffect();
}

FStatModifier* UItemPassiveEffect::AddStatModifier(FStatModifier modifier)
{
	ABattleGameMode* gm = ABattleGameMode::fetchBattleGameMode(GetWorld());
	if (gm)
	{
		FStatModifier* newModifier = new FStatModifier(modifier);
		gm->StatModifiers.Add(newModifier);
		return newModifier;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("BattleGameMode not found"));
		return nullptr;
	}
}

void UItemPassiveEffect::InitializePassiveEffect()
{
	//register this instance to the game mode
	ABattleGameMode* gm = ABattleGameMode::fetchBattleGameMode(GetWorld());
	if (gm)
	{
		gm->passiveEffectArray.Add(this);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("BattleGameMode not found"));
	}
}
