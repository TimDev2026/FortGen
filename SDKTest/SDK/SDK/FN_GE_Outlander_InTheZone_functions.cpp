#include "pch.h"

#include "FN_GE_Outlander_InTheZone_classes.h"

UClass* UGE_Outlander_InTheZone_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/FocusedAcquisition/GE_Outlander_InTheZone.GE_Outlander_InTheZone_C");

	return Class;
}

