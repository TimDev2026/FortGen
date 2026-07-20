#include "pch.h"

#include "FN_SetBonus_Vitality_High_classes.h"

UClass* USetBonus_Vitality_High_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_Vitality_High.SetBonus_Vitality_High_C");

	return Class;
}

