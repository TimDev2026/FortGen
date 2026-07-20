#include "pch.h"

#include "FN_AIGoalManager_classes.h"

UClass* AAIGoalManager_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/GoalSelection/AIGoalManager.AIGoalManager_C");

	return Class;
}

// Function /Game/AI/GoalSelection/AIGoalManager.AIGoalManager_C:UserConstructionScript
void AAIGoalManager_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/GoalSelection/AIGoalManager.AIGoalManager_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

