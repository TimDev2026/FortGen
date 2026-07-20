#include "pch.h"

#include "FN_GE_Outlander_LowerGravity_classes.h"

UClass* UGE_Outlander_LowerGravity_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Gravitas/GE_Outlander_LowerGravity.GE_Outlander_LowerGravity_C");

	return Class;
}

