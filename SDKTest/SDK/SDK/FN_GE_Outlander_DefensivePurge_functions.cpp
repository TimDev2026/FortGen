#include "pch.h"

#include "FN_GE_Outlander_DefensivePurge_classes.h"

UClass* UGE_Outlander_DefensivePurge_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/DontAsk/GE_Outlander_DefensivePurge.GE_Outlander_DefensivePurge_C");

	return Class;
}

