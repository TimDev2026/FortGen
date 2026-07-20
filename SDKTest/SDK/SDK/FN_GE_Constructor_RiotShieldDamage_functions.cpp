#include "pch.h"

#include "FN_GE_Constructor_RiotShieldDamage_classes.h"

UClass* UGE_Constructor_RiotShieldDamage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BullRush/GE_Constructor_RiotShieldDamage.GE_Constructor_RiotShieldDamage_C");

	return Class;
}

