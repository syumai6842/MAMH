// Fill out your copyright notice in the Description page of Project Settings.

#include "../../Public/Core/MenuGameMode.h"
#include "../../Public/Utility/CameraOnlyPawn.h"
#include "../../Public/Widget/MainMenuHUD.h"

AMenuGameMode::AMenuGameMode()
{
    DefaultPawnClass = AACameraOnlyPawn::StaticClass();
	HUDClass = AMainMenuHUD::StaticClass();
}
