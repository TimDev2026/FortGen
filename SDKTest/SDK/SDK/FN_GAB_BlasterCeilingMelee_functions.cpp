#include "pch.h"

#include "FN_GAB_BlasterCeilingMelee_classes.h"

UClass* UGAB_BlasterCeilingMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Blaster/GAB_BlasterCeilingMelee.GAB_BlasterCeilingMelee_C");

	return Class;
}

