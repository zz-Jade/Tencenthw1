// Copyright Epic Games, Inc. All Rights Reserved.

#include "hw1GameMode.h"
#include "hw1Character.h"
#include "UObject/ConstructorHelpers.h"

Ahw1GameMode::Ahw1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
