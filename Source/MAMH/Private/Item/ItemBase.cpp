// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Public/Item/ItemBase.h"
#include <Item/ItemDataStructure.h>

UItemBase::UItemBase()
{
}

void UItemBase::Use()
{
    // �A�N�e�B�u���ʂ̓K�p
    if (activeEffect)
    {
        UItemActiveEffect* ActiveEffectInstance = NewObject<UItemActiveEffect>(this, activeEffect);
        if (ActiveEffectInstance)
        {
            ActiveEffectInstance->ApplyEffect();
        }
    }

    // �p�b�V�u���ʂ̓K�p
    if (passiveEffect)
    {
        UItemPassiveEffect* PassiveEffectInstance = NewObject<UItemPassiveEffect>(this, passiveEffect);
        if (PassiveEffectInstance)
        {
            PassiveEffectInstance->ApplyEffect();
        }
    }
}

void UItemBase::DeployFromStructure(FItemDataStructure* data)
{
	//init all data from structure
	this->Id = data->Id;
	this->line = data->line;
	this->description = data->description;
	this->activeEffect = data->activeEffect;
	this->passiveEffect = data->passiveEffect;
}