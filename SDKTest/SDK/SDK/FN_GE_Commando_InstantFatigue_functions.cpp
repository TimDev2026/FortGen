#include "pch.h"

#include "FN_GE_Commando_InstantFatigue_classes.h"

UClass* UGE_Commando_InstantFatigue_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Packages/GE_Commando_InstantFatigue.GE_Commando_InstantFatigue_C");

	return Class;
}

