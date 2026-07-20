#include "pch.h"

#include "FN_CombatManager_classes.h"

UClass* ACombatManager_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/CombatManager.CombatManager_C");

	return Class;
}

// Function /Game/Blueprints/CombatManager.CombatManager_C:UserConstructionScript
void ACombatManager_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/CombatManager.CombatManager_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

