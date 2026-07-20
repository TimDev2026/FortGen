#include "pch.h"

#include "FN_SetBonus_Tenacity_High_classes.h"

UClass* USetBonus_Tenacity_High_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_Tenacity_High.SetBonus_Tenacity_High_C");

	return Class;
}

