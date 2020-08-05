// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceshipPawn.h"

// Sets default values
ASpaceshipPawn::ASpaceshipPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpaceshipPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceshipPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpaceshipPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ASpaceshipPawn::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &ASpaceshipPawn::LookUpRate);
	PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &ASpaceshipPawn::LookRightRate);
}

void ASpaceshipPawn::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
	MoveDirection = FVector(AxisValue * 10000.f * GetWorld()->DeltaTimeSeconds, 0.f, 0.f);
	AddActorLocalOffset(MoveDirection, true);
}

void ASpaceshipPawn::LookUpRate(float AxisValue)
{
	AddControllerPitchInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}

void ASpaceshipPawn::LookRightRate(float AxisValue)
{
	AddControllerYawInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}

