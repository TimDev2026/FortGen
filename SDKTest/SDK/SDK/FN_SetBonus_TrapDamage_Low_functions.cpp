#include "pch.h"

#include "FN_SetBonus_TrapDamage_Low_classes.h"

UClass* USetBonus_TrapDamage_Low_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_TrapDamage_Low.SetBonus_TrapDamage_Low_C");

	return Class;
}

