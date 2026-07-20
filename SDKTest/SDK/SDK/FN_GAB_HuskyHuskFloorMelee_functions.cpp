#include "pch.h"

#include "FN_GAB_HuskyHuskFloorMelee_classes.h"

UClass* UGAB_HuskyHuskFloorMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Husky/GAB_HuskyHuskFloorMelee.GAB_HuskyHuskFloorMelee_C");

	return Class;
}

