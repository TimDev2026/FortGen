#include "pch.h"

#include "FN_IsPlayingMontage_classes.h"

UClass* UIsPlayingMontage_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Decorators/IsPlayingMontage.IsPlayingMontage_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Decorators/IsPlayingMontage.IsPlayingMontage_C:PerformConditionCheckAI
bool UIsPlayingMontage_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Decorators/IsPlayingMontage.IsPlayingMontage_C:PerformConditionCheckAI");

	FUIsPlayingMontage_C_PerformConditionCheckAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

