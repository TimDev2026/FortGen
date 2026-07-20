#include "pch.h"

#include "FN_GE_Ninja_Masamune_classes.h"

UClass* UGE_Ninja_Masamune_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/WayOfTheShadow/GE_Ninja_Masamune.GE_Ninja_Masamune_C");

	return Class;
}

