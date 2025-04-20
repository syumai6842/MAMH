#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include <Item/ItemDataStructure.h>
#include "BattleGameMode.generated.h"

/**
 * 
 */
struct FChat;
class UItemBase;
class AEnemy;
class ABattleHUD;

UCLASS()
class MAMH_API ABattleGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ABattleGameMode();

	virtual void BeginPlay() override;

	void ReceiveFeedback(TArray<UItemBase> LineData);

	void IterateTurn();
	
	void IterateRound();

	void RefreshChatSlot();

	void RefreshItemSlot();

	void UseItem(int32 itemIndex);

	static ABattleGameMode* fetchBattleGameMode(UWorld* world);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AEnemy* enemyActor;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Chat")
	TArray<FChat> chatDataArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<UItemBase*> itemArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 turnCount = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 roundCount = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 maxTurn = 10;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 maxRound = 4;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<UItemPassiveEffect*> passiveEffectArray = TArray<UItemPassiveEffect*>();

	TIndirectArray<FStatModifier> StatModifiers;

	void DamageEnemy(int32 damage);

private:
	
	AEnemy* SpawnEnemy(FString EnemyBPPath);

	TArray<UItemBase*> GenerateRandomItems(int32 itemCount);

	void ResetPassiveEffectAndModifiers();


    template <typename T>
    T CalcStatWithModifier(const TArray<EOriginalStatType>& statTypes, T originValue) {
       T calculatedValue = originValue;
       for (const FStatModifier& modifier : StatModifiers)
       {
           if (statTypes.Contains(modifier.StatType))
           {
               if (modifier.ModifierType == EModifierType::Additive)
               {
                   calculatedValue += modifier.Value;
               }
           }
       }
       for (const FStatModifier& modifier : StatModifiers)
       {
           if (statTypes.Contains(modifier.StatType))
           {
               if (modifier.ModifierType == EModifierType::Multiplicative)
               {
                   calculatedValue *= modifier.Value;
               }
           }
       }
       return calculatedValue;
    }

	template<typename FuncType, typename... Args>
	void ApplyEffectFunction(const TArray<UItemPassiveEffect*>& Effects, FuncType Func, Args&&... args)
	{
		for (UItemPassiveEffect* Effect : Effects)
		{
			(Effect->*Func)(Forward<Args>(args)...);
		}
	}
};