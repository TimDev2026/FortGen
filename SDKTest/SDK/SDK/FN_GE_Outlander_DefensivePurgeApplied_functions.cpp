#include "pch.h"

#include "FN_GE_Outlander_DefensivePurgeApplied_classes.h"

UClass* UGE_Outlander_DefensivePurgeApplied_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GE_Outlander_DefensivePurgeApplied.GE_Outlander_DefensivePurgeApplied_C");

	return Class;
}

