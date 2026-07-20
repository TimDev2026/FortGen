#include "pch.h"

#include "FN_GE_Outlander_ShiftyEyed_classes.h"

UClass* UGE_Outlander_ShiftyEyed_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/ZonedOut/GE_Outlander_ShiftyEyed.GE_Outlander_ShiftyEyed_C");

	return Class;
}

