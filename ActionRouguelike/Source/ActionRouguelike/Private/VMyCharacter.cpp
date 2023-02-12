// Fill out your copyright notice in the Description page of Project Settings.


#include "VMyCharacter.h"

// Sets default values
AVMyCharacter::AVMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AVMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

