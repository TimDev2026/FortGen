#include "pch.h"

#include "FN_GAB_ATLASZapHigh_classes.h"

UClass* UGAB_ATLASZapHigh_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_ATLASZapHigh.GAB_ATLASZapHigh_C");

	return Class;
}

