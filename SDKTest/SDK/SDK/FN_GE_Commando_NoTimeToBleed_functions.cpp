#include "pch.h"

#include "FN_GE_Commando_NoTimeToBleed_classes.h"

UClass* UGE_Commando_NoTimeToBleed_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GE_Commando_NoTimeToBleed.GE_Commando_NoTimeToBleed_C");

	return Class;
}

