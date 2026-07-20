#include "pch.h"

#include "FN_GE_Commando_SteadyAim_classes.h"

UClass* UGE_Commando_SteadyAim_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Marksmanship/GE_Commando_SteadyAim.GE_Commando_SteadyAim_C");

	return Class;
}

