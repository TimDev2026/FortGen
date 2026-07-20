#include "pch.h"

#include "FN_GE_Ninja_MantisLand_classes.h"

UClass* UGE_Ninja_MantisLand_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheShadow/GE_Ninja_MantisLand.GE_Ninja_MantisLand_C");

	return Class;
}

