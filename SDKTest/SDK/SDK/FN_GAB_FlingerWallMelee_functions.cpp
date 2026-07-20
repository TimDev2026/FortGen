#include "pch.h"

#include "FN_GAB_FlingerWallMelee_classes.h"

UClass* UGAB_FlingerWallMelee_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerWallMelee.GAB_FlingerWallMelee_C");

	return Class;
}

