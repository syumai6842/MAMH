// Fill out your copyright notice in the Description page of Project Settings.


#include "PE_UnderstandingListening.h"
#include <Core/BattleGameMode.h>


void UPE_UnderstandingListening::ApplyEffect()
{
	FStatModifier mod = FStatModifier();
	mod.StatType = EOriginalStatType::Attack;
	mod.ModifierType = EModifierType::Multiplicative;
	mod.Value = 1.0f;
	mod.Source = this;
	this->modifier = AddStatModifier(mod);
}

void UPE_UnderstandingListening::OnJudge(FChat* chat, bool bIsAnsweredTrue)
{
	if (chat->bIsTruth == bIsAnsweredTrue)
	{
		this->modifier->Value += 0.2f;
	}
	else
	{
		// Remove the modifier from the list of game mode
	}
}
