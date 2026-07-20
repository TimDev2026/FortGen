#include "pch.h"

#include "FN_GE_AirStrike_Damage_classes.h"

UClass* UGE_AirStrike_Damage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/GE_AirStrike_Damage.GE_AirStrike_Damage_C");

	return Class;
}

