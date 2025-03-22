// Fill out your copyright notice in the Description page of Project Settings.


#include "ACameraOnlyPawn.h"

// Sets default values
AACameraOnlyPawn::AACameraOnlyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	FixedCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FixedCamera"));
	FixedCamera->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AACameraOnlyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AACameraOnlyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AACameraOnlyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

