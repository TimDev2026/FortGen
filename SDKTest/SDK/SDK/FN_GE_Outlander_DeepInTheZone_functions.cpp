#include "pch.h"

#include "FN_GE_Outlander_DeepInTheZone_classes.h"

UClass* UGE_Outlander_DeepInTheZone_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/ZonedOut/GE_Outlander_DeepInTheZone.GE_Outlander_DeepInTheZone_C");

	return Class;
}

