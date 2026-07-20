#include "pch.h"

#include "FN_GE_Commando_WellLookAtThat_classes.h"

UClass* UGE_Commando_WellLookAtThat_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Perserverence/GE_Commando_WellLookAtThat.GE_Commando_WellLookAtThat_C");

	return Class;
}

