#include "pch.h"

#include "FN_GE_Outlander_PhaseShiftApplied_classes.h"

UClass* UGE_Outlander_PhaseShiftApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/PhaseShift/GE_Outlander_PhaseShiftApplied.GE_Outlander_PhaseShiftApplied_C");

	return Class;
}

