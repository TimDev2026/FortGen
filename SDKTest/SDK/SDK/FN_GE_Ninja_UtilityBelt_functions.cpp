#include "pch.h"

#include "FN_GE_Ninja_UtilityBelt_classes.h"

UClass* UGE_Ninja_UtilityBelt_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheSmoke/GE_Ninja_UtilityBelt.GE_Ninja_UtilityBelt_C");

	return Class;
}

