#include "pch.h"

#include "FN_GE_Outlander_FindersKeepersApplied_classes.h"

UClass* UGE_Outlander_FindersKeepersApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Observation/GE_Outlander_FindersKeepersApplied.GE_Outlander_FindersKeepersApplied_C");

	return Class;
}

