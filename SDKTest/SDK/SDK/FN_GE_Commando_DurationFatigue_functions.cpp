#include "pch.h"

#include "FN_GE_Commando_DurationFatigue_classes.h"

UClass* UGE_Commando_DurationFatigue_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Packages/GE_Commando_DurationFatigue.GE_Commando_DurationFatigue_C");

	return Class;
}

