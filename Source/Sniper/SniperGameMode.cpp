// Copyright Epic Games, Inc. All Rights Reserved.

#include "SniperGameMode.h"
#include "SniperHUD.h"
#include "SniperCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASniperGameMode::ASniperGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASniperHUD::StaticClass();
}
