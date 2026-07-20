#include "pch.h"

#include "FN_GE_Constructor_BullRushCooldown_classes.h"

UClass* UGE_Constructor_BullRushCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BullRush/GE_Constructor_BullRushCooldown.GE_Constructor_BullRushCooldown_C");

	return Class;
}

