#include "pch.h"

#include "FN_GAB_FlingerDeath_classes.h"

UClass* UGAB_FlingerDeath_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerDeath.GAB_FlingerDeath_C");

	return Class;
}

