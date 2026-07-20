#include "pch.h"

#include "FN_GAB_HuskDespawn_classes.h"

UClass* UGAB_HuskDespawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskDespawn.GAB_HuskDespawn_C");

	return Class;
}

