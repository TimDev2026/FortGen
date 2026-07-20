#include "pch.h"

#include "FN_CinematicCamera_MatineeTransition_classes.h"

UClass* UCinematicCamera_MatineeTransition_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Camera/Original/CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C");

	return Class;
}

