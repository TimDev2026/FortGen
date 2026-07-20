#include "pch.h"

#include "FN_GE_Ninja_RapidFire_classes.h"

UClass* UGE_Ninja_RapidFire_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheStar/GE_Ninja_RapidFire.GE_Ninja_RapidFire_C");

	return Class;
}

