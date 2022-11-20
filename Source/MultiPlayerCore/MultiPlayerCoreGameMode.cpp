// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiPlayerCoreGameMode.h"
#include "MultiPlayerCoreCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiPlayerCoreGameMode::AMultiPlayerCoreGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
