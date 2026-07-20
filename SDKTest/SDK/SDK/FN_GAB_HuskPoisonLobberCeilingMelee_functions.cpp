#include "pch.h"

#include "FN_GAB_HuskPoisonLobberCeilingMelee_classes.h"

UClass* UGAB_HuskPoisonLobberCeilingMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/PoisonLobber/GAB_HuskPoisonLobberCeilingMelee.GAB_HuskPoisonLobberCeilingMelee_C");

	return Class;
}

