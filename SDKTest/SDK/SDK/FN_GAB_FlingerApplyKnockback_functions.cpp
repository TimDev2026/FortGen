#include "pch.h"

#include "FN_GAB_FlingerApplyKnockback_classes.h"

UClass* UGAB_FlingerApplyKnockback_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerApplyKnockback.GAB_FlingerApplyKnockback_C");

	return Class;
}

