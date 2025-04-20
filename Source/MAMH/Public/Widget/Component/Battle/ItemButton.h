// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemButton.generated.h"

class UButton;
class UTextBlock;
class UItemBase;
/**
 * 
 */
UCLASS()
class MAMH_API UItemButton : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> useButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> line;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> description;

	void SetValue(UItemBase* itemdata, int32 itemIndex);

protected:
	void NativeConstruct() override;

private:
	UFUNCTION()
	void OnItemButtonClicked();

	int32 index = 0;
	
};
