#include "pch.h"

#include "FN_GCNS_Constructor_ContainmentUnitFX_classes.h"

UClass* UGCNS_Constructor_ContainmentUnitFX_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GCNS_Constructor_ContainmentUnitFX.GCNS_Constructor_ContainmentUnitFX_C");

	return Class;
}

