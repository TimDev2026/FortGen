#include "pch.h"

#include "FN_GE_ControlResistance_Small_classes.h"

UClass* UGE_ControlResistance_Small_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_ControlResistance_Small.GE_ControlResistance_Small_C");

	return Class;
}

