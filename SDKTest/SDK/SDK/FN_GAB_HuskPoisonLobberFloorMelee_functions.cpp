#include "pch.h"

#include "FN_GAB_HuskPoisonLobberFloorMelee_classes.h"

UClass* UGAB_HuskPoisonLobberFloorMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/PoisonLobber/GAB_HuskPoisonLobberFloorMelee.GAB_HuskPoisonLobberFloorMelee_C");

	return Class;
}

