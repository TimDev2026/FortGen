#include "pch.h"

#include "FN_GAB_FlingerDespawn_classes.h"

UClass* UGAB_FlingerDespawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerDespawn.GAB_FlingerDespawn_C");

	return Class;
}

