#include "pch.h"

#include "FN_GE_Constructor_PowerModulation_classes.h"

UClass* UGE_Constructor_PowerModulation_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_Constructor_PowerModulation.GE_Constructor_PowerModulation_C");

	return Class;
}

