#include "pch.h"

#include "FN_GE_Commando_FlakVest_classes.h"

UClass* UGE_Commando_FlakVest_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GE_Commando_FlakVest.GE_Commando_FlakVest_C");

	return Class;
}

