#include "pch.h"

#include "FN_GE_Ninja_MantisStrike_classes.h"

UClass* UGE_Ninja_MantisStrike_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheSmoke/GE_Ninja_MantisStrike.GE_Ninja_MantisStrike_C");

	return Class;
}

