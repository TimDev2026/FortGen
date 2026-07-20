#include "pch.h"

#include "FN_SetBonus_TrapDurability_High_classes.h"

UClass* USetBonus_TrapDurability_High_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_TrapDurability_High.SetBonus_TrapDurability_High_C");

	return Class;
}

