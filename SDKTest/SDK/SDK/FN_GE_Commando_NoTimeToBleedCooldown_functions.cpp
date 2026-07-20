#include "pch.h"

#include "FN_GE_Commando_NoTimeToBleedCooldown_classes.h"

UClass* UGE_Commando_NoTimeToBleedCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GE_Commando_NoTimeToBleedCooldown.GE_Commando_NoTimeToBleedCooldown_C");

	return Class;
}

