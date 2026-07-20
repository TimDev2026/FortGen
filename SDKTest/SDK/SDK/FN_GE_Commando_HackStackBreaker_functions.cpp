#include "pch.h"

#include "FN_GE_Commando_HackStackBreaker_classes.h"

UClass* UGE_Commando_HackStackBreaker_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/AdvancedTactics/GE_Commando_HackStackBreaker.GE_Commando_HackStackBreaker_C");

	return Class;
}

