#include "pch.h"

#include "FN_SetBonus_HarvestRate_High_classes.h"

UClass* USetBonus_HarvestRate_High_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_HarvestRate_High.SetBonus_HarvestRate_High_C");

	return Class;
}

