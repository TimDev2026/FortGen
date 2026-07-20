#include "pch.h"

#include "FN_GAB_HuskyHuskCeilingMelee_classes.h"

UClass* UGAB_HuskyHuskCeilingMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Husky/GAB_HuskyHuskCeilingMelee.GAB_HuskyHuskCeilingMelee_C");

	return Class;
}

