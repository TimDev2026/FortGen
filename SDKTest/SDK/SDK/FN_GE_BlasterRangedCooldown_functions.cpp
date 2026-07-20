#include "pch.h"

#include "FN_GE_BlasterRangedCooldown_classes.h"

UClass* UGE_BlasterRangedCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Blaster/GE_BlasterRangedCooldown.GE_BlasterRangedCooldown_C");

	return Class;
}

