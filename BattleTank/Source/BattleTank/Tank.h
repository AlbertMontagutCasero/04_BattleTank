// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankAimingComponent.h"
#include "Tank.generated.h"

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()


public:	
	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelRefence(UStaticMeshComponent* BarrelToSet);

protected:

	UTankAimingComponent * TankAimingComponent = nullptr;


private: 
	virtual void BeginPlay() override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Tick(float DeltaTime) override;

	ATank();
	
	UPROPERTY(EditAnywhere, Category = Firing)
	float LaunchSpeed = 10000; //sensible starting value of 1000 m/s



	
	
	
};
