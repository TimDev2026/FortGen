#include "pch.h"

#include "FN_GE_Outlander_PhaseShiftCooldown_classes.h"

UClass* UGE_Outlander_PhaseShiftCooldown_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/PhaseShift/GE_Outlander_PhaseShiftCooldown.GE_Outlander_PhaseShiftCooldown_C");

	return Class;
}

