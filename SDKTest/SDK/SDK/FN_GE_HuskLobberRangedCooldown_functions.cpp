#include "pch.h"

#include "FN_GE_HuskLobberRangedCooldown_classes.h"

UClass* UGE_HuskLobberRangedCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Lobber/GE_HuskLobberRangedCooldown.GE_HuskLobberRangedCooldown_C");

	return Class;
}

