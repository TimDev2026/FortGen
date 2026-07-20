#include "pch.h"

#include "FN_GE_Outlander_DefaultCombatStats_classes.h"

UClass* UGE_Outlander_DefaultCombatStats_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Default/GE_Outlander_DefaultCombatStats.GE_Outlander_DefaultCombatStats_C");

	return Class;
}

