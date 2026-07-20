#include "pch.h"

#include "FN_GE_Commando_PowerImpact_classes.h"

UClass* UGE_Commando_PowerImpact_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Traits/Explosives/GE_Commando_PowerImpact.GE_Commando_PowerImpact_C");

	return Class;
}

