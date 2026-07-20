#include "pch.h"

#include "FN_GE_Outlander_ShiftyEyedApplied_classes.h"

UClass* UGE_Outlander_ShiftyEyedApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/ZonedOut/GE_Outlander_ShiftyEyedApplied.GE_Outlander_ShiftyEyedApplied_C");

	return Class;
}

