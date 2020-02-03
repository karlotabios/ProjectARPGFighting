// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProjectFightingARPGGameMode.h"
#include "ProjectFightingARPGPlayerController.h"
#include "ProjectFightingARPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectFightingARPGGameMode::AProjectFightingARPGGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectFightingARPGPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}