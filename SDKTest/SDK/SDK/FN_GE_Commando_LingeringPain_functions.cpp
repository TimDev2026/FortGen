#include "pch.h"

#include "FN_GE_Commando_LingeringPain_classes.h"

UClass* UGE_Commando_LingeringPain_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GE_Commando_LingeringPain.GE_Commando_LingeringPain_C");

	return Class;
}

