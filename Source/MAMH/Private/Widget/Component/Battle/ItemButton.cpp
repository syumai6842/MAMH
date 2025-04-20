// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/Component/Battle/ItemButton.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "../../../../Public/Character/BattleController.h"
#include "../../../../Public/Widget/BattleHUD.h"
#include "../../../../Public/Widget/BattleWidget.h"
#include "../../../../Public/Item/ItemBase.h"
#include <Core/BattleGameMode.h>

void UItemButton::NativeConstruct() {
	Super::NativeConstruct();
	useButton->OnClicked.AddUniqueDynamic(this, &UItemButton::OnItemButtonClicked);
}

void UItemButton::OnItemButtonClicked() {
	UBattleWidget* widgetReference = ABattleHUD::FetchPlayerHud(GetWorld())->RootWidget;
	widgetReference->PlayerLine->SetText(this->line->GetText());
	ABattleGameMode* gm = ABattleGameMode::fetchBattleGameMode(GetWorld());
	gm->UseItem(index);
}

void UItemButton::SetValue(UItemBase* itemdata, int32 itemIndex)
{
	this->line->SetText(FText::FromString(itemdata->line));
	this->description->SetText(FText::FromString(itemdata->description));
	this->index = itemIndex;
}