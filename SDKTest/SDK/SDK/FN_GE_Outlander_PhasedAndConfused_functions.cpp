#include "pch.h"

#include "FN_GE_Outlander_PhasedAndConfused_classes.h"

UClass* UGE_Outlander_PhasedAndConfused_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/ZonedOut/GE_Outlander_PhasedAndConfused.GE_Outlander_PhasedAndConfused_C");

	return Class;
}

