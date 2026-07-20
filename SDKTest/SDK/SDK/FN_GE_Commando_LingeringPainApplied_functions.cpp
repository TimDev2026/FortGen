#include "pch.h"

#include "FN_GE_Commando_LingeringPainApplied_classes.h"

UClass* UGE_Commando_LingeringPainApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GE_Commando_LingeringPainApplied.GE_Commando_LingeringPainApplied_C");

	return Class;
}

