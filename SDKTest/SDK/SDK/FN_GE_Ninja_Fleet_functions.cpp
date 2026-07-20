#include "pch.h"

#include "FN_GE_Ninja_Fleet_classes.h"

UClass* UGE_Ninja_Fleet_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheShadow/GE_Ninja_Fleet.GE_Ninja_Fleet_C");

	return Class;
}

