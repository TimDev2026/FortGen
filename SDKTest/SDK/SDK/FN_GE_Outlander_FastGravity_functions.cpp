#include "pch.h"

#include "FN_GE_Outlander_FastGravity_classes.h"

UClass* UGE_Outlander_FastGravity_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Gravitas/GE_Outlander_FastGravity.GE_Outlander_FastGravity_C");

	return Class;
}

