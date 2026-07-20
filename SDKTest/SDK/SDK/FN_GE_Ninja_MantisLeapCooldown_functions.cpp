#include "pch.h"

#include "FN_GE_Ninja_MantisLeapCooldown_classes.h"

UClass* UGE_Ninja_MantisLeapCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Default/GE_Ninja_MantisLeapCooldown.GE_Ninja_MantisLeapCooldown_C");

	return Class;
}

