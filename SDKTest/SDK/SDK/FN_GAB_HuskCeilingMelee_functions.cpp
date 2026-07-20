#include "pch.h"

#include "FN_GAB_HuskCeilingMelee_classes.h"

UClass* UGAB_HuskCeilingMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskCeilingMelee.GAB_HuskCeilingMelee_C");

	return Class;
}

