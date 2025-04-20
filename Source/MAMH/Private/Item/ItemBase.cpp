// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Public/Item/ItemBase.h"
#include <Item/ItemDataStructure.h>

UItemBase::UItemBase()
{
}

void UItemBase::Use()
{
    // アクティブ効果の適用
    if (activeEffect)
    {
        UItemActiveEffect* ActiveEffectInstance = NewObject<UItemActiveEffect>(this, activeEffect);
        if (ActiveEffectInstance)
        {
            ActiveEffectInstance->ApplyEffect();
        }
    }

    // パッシブ効果の適用
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