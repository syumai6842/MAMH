// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChatSlot.generated.h"

class UHorizontalBox;
struct FChat;
enum class EWordType;
/**
 * 
 */
UCLASS()
class MAMH_API UChatSlot : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UHorizontalBox> materialsBox;

	UFUNCTION()
	void Init(FChat data);

private:
	TArray<EWordType> materials;
};
