#include "pch.h"

#include "FN_StartForgettingGoal_classes.h"

UClass* UStartForgettingGoal_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Tasks/StartForgettingGoal.StartForgettingGoal_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Tasks/StartForgettingGoal.StartForgettingGoal_C:ReceiveExecute
void UStartForgettingGoal_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Tasks/StartForgettingGoal.StartForgettingGoal_C:ReceiveExecute");

	FUStartForgettingGoal_C_ReceiveExecute_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/AI/BehaviorTrees/Tasks/StartForgettingGoal.StartForgettingGoal_C:ExecuteUbergraph_StartForgettingGoal
void UStartForgettingGoal_C::ExecuteUbergraph_StartForgettingGoal(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Tasks/StartForgettingGoal.StartForgettingGoal_C:ExecuteUbergraph_StartForgettingGoal");

	FUStartForgettingGoal_C_ExecuteUbergraph_StartForgettingGoal_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

