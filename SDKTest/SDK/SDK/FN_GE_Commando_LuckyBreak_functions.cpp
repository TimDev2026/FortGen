#include "pch.h"

#include "FN_GE_Commando_LuckyBreak_classes.h"

UClass* UGE_Commando_LuckyBreak_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GE_Commando_LuckyBreak.GE_Commando_LuckyBreak_C");

	return Class;
}

