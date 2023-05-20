// Copyright Epic Games, Inc. All Rights Reserved.

#include "T1_P2_RedesGameMode.h"
#include "T1_P2_RedesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AT1_P2_RedesGameMode::AT1_P2_RedesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
