#include "pch.h"

#include "FN_GAB_HuskLobberMelee_classes.h"

UClass* UGAB_HuskLobberMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Lobber/GAB_HuskLobberMelee.GAB_HuskLobberMelee_C");

	return Class;
}

