#include "pch.h"

#include "FN_GE_Teleporter_Cooldown_classes.h"

UClass* UGE_Teleporter_Cooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/GE_Teleporter_Cooldown.GE_Teleporter_Cooldown_C");

	return Class;
}

