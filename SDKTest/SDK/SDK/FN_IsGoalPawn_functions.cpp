#include "pch.h"

#include "FN_IsGoalPawn_classes.h"

UClass* UIsGoalPawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Decorators/IsGoalPawn.IsGoalPawn_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Decorators/IsGoalPawn.IsGoalPawn_C:PerformConditionCheckAI
bool UIsGoalPawn_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Decorators/IsGoalPawn.IsGoalPawn_C:PerformConditionCheckAI");

	FUIsGoalPawn_C_PerformConditionCheckAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

