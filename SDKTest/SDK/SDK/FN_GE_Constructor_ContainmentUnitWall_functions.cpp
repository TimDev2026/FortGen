#include "pch.h"

#include "FN_GE_Constructor_ContainmentUnitWall_classes.h"

UClass* UGE_Constructor_ContainmentUnitWall_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/CreativeEngineering/GE_Constructor_ContainmentUnitWall.GE_Constructor_ContainmentUnitWall_C");

	return Class;
}

