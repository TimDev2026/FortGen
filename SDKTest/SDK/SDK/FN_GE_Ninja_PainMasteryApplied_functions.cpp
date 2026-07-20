#include "pch.h"

#include "FN_GE_Ninja_PainMasteryApplied_classes.h"

UClass* UGE_Ninja_PainMasteryApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/NinjaGear/GE_Ninja_PainMasteryApplied.GE_Ninja_PainMasteryApplied_C");

	return Class;
}

