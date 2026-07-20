#include "pch.h"

#include "FN_GE_Constructor_ElectrifiedFloors_classes.h"

UClass* UGE_Constructor_ElectrifiedFloors_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/Territorial/GE_Constructor_ElectrifiedFloors.GE_Constructor_ElectrifiedFloors_C");

	return Class;
}

