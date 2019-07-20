// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PRJGameMode.h"
#include "PRJPawn.h"

APRJGameMode::APRJGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APRJPawn::StaticClass();
}

