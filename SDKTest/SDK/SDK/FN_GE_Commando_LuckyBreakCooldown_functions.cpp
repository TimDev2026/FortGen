#include "pch.h"

#include "FN_GE_Commando_LuckyBreakCooldown_classes.h"

UClass* UGE_Commando_LuckyBreakCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GE_Commando_LuckyBreakCooldown.GE_Commando_LuckyBreakCooldown_C");

	return Class;
}

