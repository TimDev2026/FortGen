#include "pch.h"

#include "FN_GAB_HuskLobberCeilingMelee_classes.h"

UClass* UGAB_HuskLobberCeilingMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Lobber/GAB_HuskLobberCeilingMelee.GAB_HuskLobberCeilingMelee_C");

	return Class;
}

