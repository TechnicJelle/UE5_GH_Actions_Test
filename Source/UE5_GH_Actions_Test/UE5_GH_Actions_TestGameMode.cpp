// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_GH_Actions_TestGameMode.h"
#include "UE5_GH_Actions_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_GH_Actions_TestGameMode::AUE5_GH_Actions_TestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
