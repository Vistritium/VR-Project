// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "VR_Project.h"
#include "VR_ProjectGameMode.h"
#include "VR_ProjectHUD.h"
#include "VR_ProjectCharacter.h"

AVR_ProjectGameMode::AVR_ProjectGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVR_ProjectHUD::StaticClass();
}
