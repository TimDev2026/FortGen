#include "pch.h"

#include "FN_GE_Ninja_PoisonedBladeCooldown_classes.h"

UClass* UGE_Ninja_PoisonedBladeCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Blademastery/GE_Ninja_PoisonedBladeCooldown.GE_Ninja_PoisonedBladeCooldown_C");

	return Class;
}

