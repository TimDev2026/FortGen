#include "pch.h"

#include "FN_GAB_HuskApplyKnockback_classes.h"

UClass* UGAB_HuskApplyKnockback_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskApplyKnockback.GAB_HuskApplyKnockback_C");

	return Class;
}

