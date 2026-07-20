#include "pch.h"

#include "FN_SetBonus_Scrappiness_Low_classes.h"

UClass* USetBonus_Scrappiness_Low_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_Scrappiness_Low.SetBonus_Scrappiness_Low_C");

	return Class;
}

