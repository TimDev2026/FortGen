#include "pch.h"

#include "FN_GE_Outlander_IncreasedGravity_classes.h"

UClass* UGE_Outlander_IncreasedGravity_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Gravitas/GE_Outlander_IncreasedGravity.GE_Outlander_IncreasedGravity_C");

	return Class;
}

