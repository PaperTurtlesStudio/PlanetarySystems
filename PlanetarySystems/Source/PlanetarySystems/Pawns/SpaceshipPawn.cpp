// Fill out your copyright notice in the Description page of Project Settings.


#include "Kismet/GameplayStatics.h"
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

	FString name = GetWorld()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s"), *name);

}

// Called every frame
void ASpaceshipPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveForward();

}

// Called to bind functionality to input
void ASpaceshipPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
	//PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ASpaceshipPawn::LookUpRate);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &ASpaceshipPawn::LookRightRate);
	PlayerInputComponent->BindAxis(TEXT("Controller_LookUpRate"), this, &ASpaceshipPawn::LookUpRate);
	PlayerInputComponent->BindAxis(TEXT("Controller_LookRightRate"), this, &ASpaceshipPawn::LookRightRate);

	PlayerInputComponent->BindAction(TEXT("Spaceship_AddSpeed"), EInputEvent::IE_Pressed, this, &ASpaceshipPawn::AdjustSpeed);
	PlayerInputComponent->BindAction(TEXT("Spaceship_SubtractSpeed"), EInputEvent::IE_Pressed, this, &ASpaceshipPawn::SubtractSpeed);

	PlayerInputComponent->BindAction(TEXT("SwapLevel"), EInputEvent::IE_Pressed, this, &ASpaceshipPawn::SwapLevel);
}

void ASpaceshipPawn::AdjustSpeed()
{
	if (SpeedTracker != 3)
	{
		SpeedTracker++;
		RotationRate -= 15;
		UE_LOG(LogTemp, Error, TEXT("%f"), RotationRate);
	}
}

void ASpaceshipPawn::SubtractSpeed()
{
	if (SpeedTracker != 1)
	{
		SpeedTracker--;
		RotationRate += 15;
		UE_LOG(LogTemp, Error, TEXT("%f"), RotationRate);
	}
}


void ASpaceshipPawn::MoveForward()
{
	if (SpeedTracker == 3)
	{
		Speed = FastestSpeed;
	}
	else if (SpeedTracker == 2)
	{
		Speed = MediumSpeed;
	}
	else if (SpeedTracker == 1)
	{
		Speed = InitialSpeed;
	}

	MoveDirection = FVector(Speed * GetWorld()->DeltaTimeSeconds + InitialSpeed, 0.f, 0.f);
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

void ASpaceshipPawn::SwapLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), "PlanetBlocking");
}

