#include "pch.h"

#include "FN_GCNS_Constructor_ElectrifiedFloors_classes.h"

UClass* UGCNS_Constructor_ElectrifiedFloors_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/GCNS_Constructor_ElectrifiedFloors.GCNS_Constructor_ElectrifiedFloors_C");

	return Class;
}

