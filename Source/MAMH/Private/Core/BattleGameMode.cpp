// Fill out your copyright notice in the Description page of Project Settings.

#include "../../Public/Core/BattleGameMode.h"
#include "../../Public/Character/BattlePawn.h"
#include "../../Public/Widget/BattleHUD.h"
#include "../../Public/Character/BattleController.h"
#include "../../Public/Utility/ChatData.h"
#include "../../Public/Item/ItemBase.h"
#include "../../Public/Character/Enemy.h"
#include <Kismet/GameplayStatics.h>
#include "Kismet/KismetSystemLibrary.h"

ABattleGameMode::ABattleGameMode()  
{  
   DefaultPawnClass = ABattlePawn::StaticClass();  
   HUDClass = ABattleHUD::StaticClass();  
   PlayerControllerClass = ABattleController::StaticClass();
   enemyActor = nullptr;
}

void ABattleGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	enemyActor = SpawnEnemy("/Game/Source/BluePrints/Actors/TestEnemy.TestEnemy_C");
	IterateRound();
}

void ABattleGameMode::ReceiveFeedback(TArray<UItemBase> LineData)
{
	
}

void ABattleGameMode::IterateTurn()
{
	if (turnCount >= maxTurn)
	{
		IterateRound();
	}
	else {
		if(turnCount!=0){
			chatDataArray.RemoveAt(chatDataArray.Num() - 1);
			RefreshChatSlot();
		}
		ApplyEffectFunction(passiveEffectArray, &UItemPassiveEffect::OnTurnEnd, turnCount);

		itemArray = GenerateRandomItems(3);
		RefreshItemSlot();
		turnCount++;
		ApplyEffectFunction(passiveEffectArray, &UItemPassiveEffect::OnTurnStart, turnCount);
	}
}

void ABattleGameMode::IterateRound()
{
	roundCount++;
	maxTurn = FMath::RandRange(20, 25);

	ResetPassiveEffectAndModifiers();
	chatDataArray = ChatDataLib::GenerateChatData(maxTurn, 1);

	RefreshChatSlot();

	turnCount = 0;
	IterateTurn();
}

TArray<UItemBase*> ABattleGameMode::GenerateRandomItems(int32 itemCount)
{
	TArray<UItemBase*> items;
	UDataTable* ItemDataTable = LoadObject<UDataTable>(nullptr, TEXT("/Game/Source/Data/ItemDataTable.ItemDataTable"));

	if (!ItemDataTable) return items;

	// 全行を取得
	TArray<FName> RowNames = ItemDataTable->GetRowNames();

	// ランダムにシャッフル
	RowNames.Sort([](const FName& A, const FName& B) {
		return FMath::RandBool();
		});

	// 指定数だけ選択（オーバーしないように）
	int32 Count = FMath::Min(itemCount, RowNames.Num());

	for (int32 i = 0; i < Count; ++i)
	{
		FItemDataStructure* ItemData = ItemDataTable->FindRow<FItemDataStructure>(RowNames[i], TEXT("RandomItemGen"));
		if (ItemData)
		{
			UItemBase* NewItem = NewObject<UItemBase>(this, UItemBase::StaticClass());
			if (NewItem)
			{
				NewItem->DeployFromStructure(ItemData);
				items.Add(NewItem);
			}
		}
	}

	return items;
}

void ABattleGameMode::RefreshChatSlot() {
	UBattleWidget* battleWidget = ABattleHUD::FetchPlayerHud(GetWorld())->RootWidget;
	battleWidget->SetChatSlot(chatDataArray);
}

void ABattleGameMode::RefreshItemSlot() {
	UBattleWidget* battleWidget = ABattleHUD::FetchPlayerHud(GetWorld())->RootWidget;
	battleWidget->SetItemSlot(itemArray);
}

void ABattleGameMode::UseItem(int32 itemIndex)  
{  
   if (itemIndex < 0 || itemIndex >= itemArray.Num())  
   {  
       UE_LOG(LogTemp, Warning, TEXT("Invalid item index"));  
       return;
   }  

   UItemBase* item = itemArray[itemIndex];  
   if (item)  
   {
	   ApplyEffectFunction(passiveEffectArray, &UItemPassiveEffect::OnUseItem, item);
       item->Use();  
       itemArray.RemoveAt(itemIndex);  
       RefreshItemSlot();  
   }  
}

AEnemy* ABattleGameMode::SpawnEnemy(FString EnemyBPPath)
{
	if (!GetWorld()) return nullptr;

	UClass* EnemyBPClass = StaticLoadClass(AEnemy::StaticClass(), nullptr, *EnemyBPPath);
	if (!EnemyBPClass) {
		UE_LOG(LogTemp, Error, TEXT("Failed to load enemy class at path: %s"), *EnemyBPPath);
		return nullptr;
	}

	FActorSpawnParameters spawnParams;
	return GetWorld()->SpawnActor<AEnemy>(EnemyBPClass, FVector(0, 0, 120), FRotator(0, 0, 0), spawnParams);
}

void ABattleGameMode::DamageEnemy(int32 damage)
{
	ApplyEffectFunction(passiveEffectArray, &UItemPassiveEffect::OnBeforeDamage, &damage);
	enemyActor->HP -= CalcStatWithModifier<int32>({ EOriginalStatType::Attack }, damage);
	ApplyEffectFunction(passiveEffectArray, &UItemPassiveEffect::OnAfterDamage, &damage);
}

void ABattleGameMode::ResetPassiveEffectAndModifiers()
{
	StatModifiers.Empty();
	passiveEffectArray.Empty();
}

ABattleGameMode* ABattleGameMode::fetchBattleGameMode(UWorld *world) {
   return Cast<ABattleGameMode>(UGameplayStatics::GetGameMode(world));
}