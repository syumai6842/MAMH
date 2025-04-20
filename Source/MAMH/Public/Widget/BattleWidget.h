// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Core/BattleGameMode.h"
#include <Components/VerticalBox.h>
#include "BattleWidget.generated.h"

struct FChat;
class UButton;
class UHorizontalBox;
class UProgressBar;
class UItemBase;
class UTextBlock;
/**
 * 
 */
UCLASS()
class MAMH_API UBattleWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION()
	void SetChatSlot(TArray<FChat> ChatArray);
	UFUNCTION()
	void SetItemSlot(TArray<UItemBase*> ItemArray);

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> PlayerLine;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> OppLine;
	
protected:
	void NativeConstruct() override;

private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> SubmitButton;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UVerticalBox> ChatSlotContainer;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UVerticalBox> ItemContainer;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UProgressBar> LineWeightBar;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UHorizontalBox> LineResultBox;
};
