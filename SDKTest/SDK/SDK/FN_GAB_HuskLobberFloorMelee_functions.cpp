#include "pch.h"

#include "FN_GAB_HuskLobberFloorMelee_classes.h"

UClass* UGAB_HuskLobberFloorMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Lobber/GAB_HuskLobberFloorMelee.GAB_HuskLobberFloorMelee_C");

	return Class;
}

