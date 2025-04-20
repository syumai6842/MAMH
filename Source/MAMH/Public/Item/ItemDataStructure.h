// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Engine/DataTable.h"
#include <Utility/ChatData.h>

#include "ItemDataStructure.generated.h"
class UItemBase;

UENUM(BlueprintType)
enum class EOriginalStatType : uint8
{
    Attack,
    Defense,
    Health,
    CritRate,
};

UENUM(BlueprintType)
enum class EModifierType : uint8
{
    Additive,   // â¡éZå^ÉoÉt
    Multiplicative // èÊéZå^ÉoÉt
};

USTRUCT(BlueprintType)
struct FStatModifier
{
    GENERATED_BODY()

    EOriginalStatType StatType;
    EModifierType ModifierType; // Additive or Multiplicative
    float Value;
    UObject* Source;
};


UCLASS(BlueprintType)
class MAMH_API UItemActiveEffect : public UObject
{
    GENERATED_BODY()

public:
    virtual void ApplyEffect() {};
};

UCLASS(BlueprintType)
class MAMH_API UItemPassiveEffect : public UObject
{
    GENERATED_BODY()

public:
	UItemPassiveEffect();
    virtual void ApplyEffect() {};
	virtual void OnTurnStart(int32 turnCount) {};
	virtual void OnTurnEnd(int32 turnCount) {};
	virtual void OnBeforeDamage(int32 * damageAmount) {};
	virtual void OnAfterDamage(int32 * damageAmount) {};
	virtual void OnUseItem(UItemBase * item) {};
	virtual void OnJudge(FChat* chat, bool bIsAnsweredTrue) {};
protected:
	FStatModifier* AddStatModifier(FStatModifier modifier);
private:
	void InitializePassiveEffect();
};

USTRUCT(BlueprintType)
struct MAMH_API FItemDataStructure : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName Id;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString line;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString description;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSubclassOf<UItemActiveEffect> activeEffect;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TSubclassOf<UItemPassiveEffect> passiveEffect;
};