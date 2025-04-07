// Copyright Epic Games, Inc. All Rights Reserved.

#include "GauntletGameMode.h"
#include "GauntletCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGauntletGameMode::AGauntletGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
