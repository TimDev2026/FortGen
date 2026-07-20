#include "pch.h"

#include "FN_GE_Outlander_PhaseForward_classes.h"

UClass* UGE_Outlander_PhaseForward_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/ZonedOut/GE_Outlander_PhaseForward.GE_Outlander_PhaseForward_C");

	return Class;
}

