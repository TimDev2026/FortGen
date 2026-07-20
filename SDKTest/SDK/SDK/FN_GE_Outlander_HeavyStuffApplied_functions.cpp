#include "pch.h"

#include "FN_GE_Outlander_HeavyStuffApplied_classes.h"

UClass* UGE_Outlander_HeavyStuffApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/Gravitas/GE_Outlander_HeavyStuffApplied.GE_Outlander_HeavyStuffApplied_C");

	return Class;
}

