#include "pch.h"

#include "FN_GAB_HuskPoisonLobberMelee_classes.h"

UClass* UGAB_HuskPoisonLobberMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/PoisonLobber/GAB_HuskPoisonLobberMelee.GAB_HuskPoisonLobberMelee_C");

	return Class;
}

