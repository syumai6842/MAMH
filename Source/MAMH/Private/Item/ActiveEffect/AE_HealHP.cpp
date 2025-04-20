// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/ActiveEffect/AE_HealHP.h"
#include <Core/BattleGameMode.h>
#include <Character/Enemy.h> 

void UAE_HealHP::ApplyEffect()
{
	//heal player pawn
	ABattleGameMode* gm = ABattleGameMode::fetchBattleGameMode(GetWorld());
	if (gm)
	{
		
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("BattleGameMode not found"));
	}
}
