#include "pch.h"

#include "FN_GE_Constructor_StrongerExit_classes.h"

UClass* UGE_Constructor_StrongerExit_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/EnergyFabrication/GE_Constructor_StrongerExit.GE_Constructor_StrongerExit_C");

	return Class;
}

