#include "pch.h"

#include "FN_GE_Outlander_InTheZoneHit_classes.h"

UClass* UGE_Outlander_InTheZoneHit_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GE_Outlander_InTheZoneHit.GE_Outlander_InTheZoneHit_C");

	return Class;
}

