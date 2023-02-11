// Copyright Epic Games, Inc. All Rights Reserved.

#include "RunnerEnhanceGameMode.h"
#include "RunnerEnhanceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARunnerEnhanceGameMode::ARunnerEnhanceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
