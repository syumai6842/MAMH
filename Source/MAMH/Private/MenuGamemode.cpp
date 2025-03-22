// Fill out your copyright notice in the Description page of Project Settings.

#include "MenuGameMode.h"
#include "ACameraOnlyPawn.h"
#include "MainMenuHUD.h"

AMenuGameMode::AMenuGameMode()
{
    DefaultPawnClass = AACameraOnlyPawn::StaticClass();
	HUDClass = AMainMenuHUD::StaticClass();
}
