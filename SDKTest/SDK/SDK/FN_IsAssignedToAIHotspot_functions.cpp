#include "pch.h"

#include "FN_IsAssignedToAIHotspot_classes.h"

UClass* UIsAssignedToAIHotSpot_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Decorators/IsAssignedToAIHotspot.IsAssignedToAIHotSpot_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Decorators/IsAssignedToAIHotspot.IsAssignedToAIHotSpot_C:PerformConditionCheckAI
bool UIsAssignedToAIHotSpot_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Decorators/IsAssignedToAIHotspot.IsAssignedToAIHotSpot_C:PerformConditionCheckAI");

	FUIsAssignedToAIHotSpot_C_PerformConditionCheckAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

