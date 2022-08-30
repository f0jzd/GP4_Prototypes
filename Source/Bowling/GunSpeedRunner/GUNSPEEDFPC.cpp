// Fill out your copyright notice in the Description page of Project Settings.


#include "GUNSPEEDFPC.h"


// Sets default values
AGUNSPEEDFPC::AGUNSPEEDFPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGUNSPEEDFPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGUNSPEEDFPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGUNSPEEDFPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

