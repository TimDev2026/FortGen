#include "pch.h"

#include "FN_SetBonus_Armor_Low_classes.h"

UClass* USetBonus_Armor_Low_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_Armor_Low.SetBonus_Armor_Low_C");

	return Class;
}

