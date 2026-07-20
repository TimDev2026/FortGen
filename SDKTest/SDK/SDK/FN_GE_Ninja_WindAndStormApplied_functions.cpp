#include "pch.h"

#include "FN_GE_Ninja_WindAndStormApplied_classes.h"

UClass* UGE_Ninja_WindAndStormApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/NinjaGear/GE_Ninja_WindAndStormApplied.GE_Ninja_WindAndStormApplied_C");

	return Class;
}

