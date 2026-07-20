#include "pch.h"

#include "FN_GCNS_Commando_IfItBleedsTick_classes.h"

UClass* UGCNS_Commando_IfItBleedsTick_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Commando/GCNS_Commando_IfItBleedsTick.GCNS_Commando_IfItBleedsTick_C");

	return Class;
}

