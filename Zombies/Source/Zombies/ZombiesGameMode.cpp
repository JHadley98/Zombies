// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZombiesGameMode.h"
#include "ZombiesHUD.h"
#include "ZombiesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZombiesGameMode::AZombiesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AZombiesHUD::StaticClass();
}
