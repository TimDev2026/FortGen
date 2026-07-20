#include "pch.h"

#include "FN_AllowedToSleep_classes.h"

UClass* UAllowedToSleep_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Decorators/AllowedToSleep.AllowedToSleep_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Decorators/AllowedToSleep.AllowedToSleep_C:PerformConditionCheckAI
bool UAllowedToSleep_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Decorators/AllowedToSleep.AllowedToSleep_C:PerformConditionCheckAI");

	FUAllowedToSleep_C_PerformConditionCheckAI_Params Parms;

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	ProcessEvent(FN, &Parms);
}

