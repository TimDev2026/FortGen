#include "pch.h"

#include "FN_GAB_BlasterFloorMelee_classes.h"

UClass* UGAB_BlasterFloorMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Blaster/GAB_BlasterFloorMelee.GAB_BlasterFloorMelee_C");

	return Class;
}

