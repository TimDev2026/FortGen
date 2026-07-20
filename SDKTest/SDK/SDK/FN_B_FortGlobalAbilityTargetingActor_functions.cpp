#include "pch.h"

#include "FN_B_FortGlobalAbilityTargetingActor_classes.h"

UClass* AB_FortGlobalAbilityTargetingActor_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C");

	return Class;
}

