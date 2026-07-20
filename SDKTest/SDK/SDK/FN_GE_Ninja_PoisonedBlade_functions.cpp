#include "pch.h"

#include "FN_GE_Ninja_PoisonedBlade_classes.h"

UClass* UGE_Ninja_PoisonedBlade_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Blademastery/GE_Ninja_PoisonedBlade.GE_Ninja_PoisonedBlade_C");

	return Class;
}

