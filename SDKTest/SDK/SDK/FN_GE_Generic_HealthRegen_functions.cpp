#include "pch.h"

#include "FN_GE_Generic_HealthRegen_classes.h"

UClass* UGE_Generic_HealthRegen_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_HealthRegen.GE_Generic_HealthRegen_C");

	return Class;
}

