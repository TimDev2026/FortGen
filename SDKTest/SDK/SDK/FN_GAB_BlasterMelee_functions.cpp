#include "pch.h"

#include "FN_GAB_BlasterMelee_classes.h"

UClass* UGAB_BlasterMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Blaster/GAB_BlasterMelee.GAB_BlasterMelee_C");

	return Class;
}

