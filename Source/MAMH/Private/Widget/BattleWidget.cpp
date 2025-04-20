// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Public/Widget/BattleWidget.h"
#include "../../Public/Utility/ChatData.h"
#include "Components/Button.h"
#include "../../Public/Item/ItemBase.h"
#include "../../Public/Widget/Component/Battle/ItemButton.h"

#include "Kismet/GameplayStatics.h"
#include <Widget/Component/Battle/ChatSlot.h>

void UBattleWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UBattleWidget::SetChatSlot(TArray<FChat> ChatArray)
{
	FString Path = TEXT("/Game/Source/BluePrints/Widgets/Battle/BPW_ChatSlot.BPW_ChatSlot_C");
	TSubclassOf<UChatSlot> WidgetClass = TSoftClassPtr<UUserWidget>(FSoftObjectPath(*Path)).LoadSynchronous();
	ChatSlotContainer->ClearChildren();
	for (FChat Chat : ChatArray)
	{
		UChatSlot* ChatSlot = CreateWidget<UChatSlot>(GetWorld(), WidgetClass);
		if (ChatSlot)
		{
			ChatSlot->SetRisk(Chat.Risk);
			ChatSlot->SetTruth(Chat.bIsTruth);
			ChatSlotContainer->AddChild(ChatSlot);
		}
	}
}

void UBattleWidget::SetItemSlot(TArray<UItemBase*> ItemArray) {
	FString Path = TEXT("/Game/Source/BluePrints/Widgets/Battle/BPW_ItemButton.BPW_ItemButton_C");
	TSubclassOf<UItemButton> WidgetClass = TSoftClassPtr<UUserWidget>(FSoftObjectPath(*Path)).LoadSynchronous();
	ItemContainer->ClearChildren();
	for (UItemBase* item : ItemArray)
	{
		UItemButton* itemButton = CreateWidget<UItemButton>(GetWorld(), WidgetClass);
		if (itemButton)
		{
			itemButton->SetValue(item, ItemArray.Find(item));
			ItemContainer->AddChild(itemButton);
		}
	}
}