#include "pch.h"

#include "FN_GAB_HuskLobberRanged_classes.h"

UClass* UGAB_HuskLobberRanged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Lobber/GAB_HuskLobberRanged.GAB_HuskLobberRanged_C");

	return Class;
}

