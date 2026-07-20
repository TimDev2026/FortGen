#include "pch.h"

#include "FN_GE_HuskPitcherRangedCooldown_classes.h"

UClass* UGE_HuskPitcherRangedCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Pitcher/GE_HuskPitcherRangedCooldown.GE_HuskPitcherRangedCooldown_C");

	return Class;
}

