#include "pch.h"

#include "FN_GE_SlowFieldCooldown_classes.h"

UClass* UGE_SlowFieldCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SlowField/GE_SlowFieldCooldown.GE_SlowFieldCooldown_C");

	return Class;
}

