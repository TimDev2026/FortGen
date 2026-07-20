#include "pch.h"

#include "FN_GE_ControlResistance_Medium_classes.h"

UClass* UGE_ControlResistance_Medium_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_ControlResistance_Medium.GE_ControlResistance_Medium_C");

	return Class;
}

