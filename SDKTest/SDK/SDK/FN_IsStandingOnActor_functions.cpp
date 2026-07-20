#include "pch.h"

#include "FN_IsStandingOnActor_classes.h"

UClass* UIsStandingOnActor_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Decorators/IsStandingOnActor.IsStandingOnActor_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Decorators/IsStandingOnActor.IsStandingOnActor_C:PerformConditionCheckAI
bool UIsStandingOnActor_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Decorators/IsStandingOnActor.IsStandingOnActor_C:PerformConditionCheckAI");

	FUIsStandingOnActor_C_PerformConditionCheckAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

