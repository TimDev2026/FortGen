#include "pch.h"

#include "FN_GE_AirStrike_Cooldown_classes.h"

UClass* UGE_AirStrike_Cooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/GE_AirStrike_Cooldown.GE_AirStrike_Cooldown_C");

	return Class;
}

