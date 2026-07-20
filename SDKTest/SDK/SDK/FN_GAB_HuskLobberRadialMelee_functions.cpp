#include "pch.h"

#include "FN_GAB_HuskLobberRadialMelee_classes.h"

UClass* UGAB_HuskLobberRadialMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Lobber/GAB_HuskLobberRadialMelee.GAB_HuskLobberRadialMelee_C");

	return Class;
}

