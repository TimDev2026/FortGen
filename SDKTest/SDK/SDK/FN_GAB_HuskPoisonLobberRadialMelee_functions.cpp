#include "pch.h"

#include "FN_GAB_HuskPoisonLobberRadialMelee_classes.h"

UClass* UGAB_HuskPoisonLobberRadialMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/PoisonLobber/GAB_HuskPoisonLobberRadialMelee.GAB_HuskPoisonLobberRadialMelee_C");

	return Class;
}

