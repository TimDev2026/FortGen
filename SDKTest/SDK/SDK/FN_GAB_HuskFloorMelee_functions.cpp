#include "pch.h"

#include "FN_GAB_HuskFloorMelee_classes.h"

UClass* UGAB_HuskFloorMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskFloorMelee.GAB_HuskFloorMelee_C");

	return Class;
}

