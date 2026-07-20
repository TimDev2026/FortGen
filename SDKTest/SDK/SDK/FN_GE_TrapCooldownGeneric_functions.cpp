#include "pch.h"

#include "FN_GE_TrapCooldownGeneric_classes.h"

UClass* UGE_TrapCooldownGeneric_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Traps/Generic/GE_TrapCooldownGeneric.GE_TrapCooldownGeneric_C");

	return Class;
}

