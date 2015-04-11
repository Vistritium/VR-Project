// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SoundActor.generated.h"

UCLASS()
class VR_PROJECT_API ASoundActor : public AActor
{
	GENERATED_BODY()
	
private:
	bool musicPlaying;

public:	



	// Sets default values for this actor's properties
	ASoundActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintCallable, Category = "SoundActor")
	void MusicStartedPlaying();

	
	
};
