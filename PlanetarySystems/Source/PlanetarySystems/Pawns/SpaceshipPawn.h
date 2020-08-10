// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpaceshipPawn.generated.h"

UCLASS()
class PLANETARYSYSTEMS_API ASpaceshipPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpaceshipPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	void MoveForward();
	void AdjustSpeed();
	void SubtractSpeed();

	void LookUpRate(float AxisValue);
	void LookRightRate(float AxisValue);

	void SwapLevel();

	FVector MoveDirection;
	float SpeedTracker = 1;
	float Speed;

	UPROPERTY(EditAnywhere)
	float RotationRate = 10.f;
	UPROPERTY(EditAnywhere)
	float InitialSpeed = 100.f;
	UPROPERTY(EditAnywhere)
	float MediumSpeed = 1000.f;
	UPROPERTY(EditAnywhere)
	float FastestSpeed = 10000.f;
};
