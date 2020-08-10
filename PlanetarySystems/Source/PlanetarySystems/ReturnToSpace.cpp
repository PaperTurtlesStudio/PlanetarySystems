// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "PlanetarySystems/Characters/PlayerCharacter.h"
#include "ReturnToSpace.h"

// Sets default values for this component's properties
UReturnToSpace::UReturnToSpace()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UReturnToSpace::BeginPlay()
{
	Super::BeginPlay();

	if (!ReturnToSpaceTrigger)
	{
		UE_LOG(LogTemp, Error, TEXT("%s has the ReturnToSpace Component but no trigger set"), *GetOwner()->GetName());
	}
}
// Called every frame
void UReturnToSpace::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	ReturnToSpaceTrigger->GetOverlappingActors(OverLappingActors);

	for (int32 i = 0; i < OverLappingActors.Num(); i++)
	{
		if (OverLappingActors[i]->GetName() == "BP_PlayerCharacter_C_0")
		{
			//UE_LOG(LogTemp, Error, TEXT("%s is Colliding"), *name);
			//Display the Press "A" to move to space
			//Bind Press A to Character

			PlayerCharacter = OverLappingActors[i];
			CheckedTrigger = true;
		}
		else
		{
			PlayerCharacter = nullptr;
			CheckedTrigger = false;
		}
	}

	SwapLevel();
}

void UReturnToSpace::SwapLevel()
{
	if (CheckedTrigger)
	{
		UE_LOG(LogTemp, Error, TEXT("That if Statement"));

		if (PlayerCharacter)
		{
			
		}
	}
	else 
	{
		UE_LOG(LogTemp, Error, TEXT("That else Statement"));
		return;
	}
}

