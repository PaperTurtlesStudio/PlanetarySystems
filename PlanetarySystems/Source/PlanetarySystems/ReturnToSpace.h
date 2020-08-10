// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "ReturnToSpace.generated.h"

class APlayerCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLANETARYSYSTEMS_API UReturnToSpace : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UReturnToSpace();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SwapLevel();

private:

	TArray<AActor*> OverLappingActors;
		
	UPROPERTY(EditAnywhere)
	ATriggerVolume* ReturnToSpaceTrigger = nullptr;

	UPROPERTY(EditAnywhere)
	AActor* PlayerCharacter;
	
	bool CheckedTrigger;
};
