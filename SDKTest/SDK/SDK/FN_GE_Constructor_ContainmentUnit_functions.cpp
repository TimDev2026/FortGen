#include "pch.h"

#include "FN_GE_Constructor_ContainmentUnit_classes.h"

UClass* UGE_Constructor_ContainmentUnit_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_Constructor_ContainmentUnit.GE_Constructor_ContainmentUnit_C");

	return Class;
}

