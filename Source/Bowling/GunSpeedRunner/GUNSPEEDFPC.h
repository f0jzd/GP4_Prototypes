// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "GUNSPEEDFPC.generated.h"

UENUM()
enum GunTypes {
	Semi,
	Shotgun,
	Sniper,
};


UCLASS()
class BOWLING_API AGUNSPEEDFPC : public ACharacter
{
	GENERATED_BODY()

public:
	AGUNSPEEDFPC();


	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TEnumAsByte<GunTypes> GunInventory;




protected:
	virtual void BeginPlay() override;
public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;	

};
