#include "pch.h"

#include "FN_GE_FlingerMeleeSwipeCooldown_classes.h"

UClass* UGE_FlingerMeleeSwipeCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GE_FlingerMeleeSwipeCooldown.GE_FlingerMeleeSwipeCooldown_C");

	return Class;
}

