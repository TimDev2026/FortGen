#include "pch.h"

#include "FN_IsActorAirbornePawn_classes.h"

UClass* UIsActorAirbornePawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Decorators/IsActorAirbornePawn.IsActorAirbornePawn_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Decorators/IsActorAirbornePawn.IsActorAirbornePawn_C:PerformConditionCheckAI
bool UIsActorAirbornePawn_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Decorators/IsActorAirbornePawn.IsActorAirbornePawn_C:PerformConditionCheckAI");

	FUIsActorAirbornePawn_C_PerformConditionCheckAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

