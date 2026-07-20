#include "pch.h"

#include "FN_GE_Ninja_PoisonedBladeSnare_classes.h"

UClass* UGE_Ninja_PoisonedBladeSnare_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Blademastery/GE_Ninja_PoisonedBladeSnare.GE_Ninja_PoisonedBladeSnare_C");

	return Class;
}

