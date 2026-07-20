#include "pch.h"

#include "FN_GE_Commando_IfItBleeds_classes.h"

UClass* UGE_Commando_IfItBleeds_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Commando/GE_Commando_IfItBleeds.GE_Commando_IfItBleeds_C");

	return Class;
}

