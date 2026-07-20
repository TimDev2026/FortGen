#include "pch.h"

#include "FN_BTTask_GetSleepLocation_classes.h"

UClass* UBTTask_GetSleepLocation_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Tasks/BTTask_GetSleepLocation.BTTask_GetSleepLocation_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Tasks/BTTask_GetSleepLocation.BTTask_GetSleepLocation_C:ReceiveExecute
void UBTTask_GetSleepLocation_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Tasks/BTTask_GetSleepLocation.BTTask_GetSleepLocation_C:ReceiveExecute");

	FUBTTask_GetSleepLocation_C_ReceiveExecute_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/AI/BehaviorTrees/Tasks/BTTask_GetSleepLocation.BTTask_GetSleepLocation_C:ExecuteUbergraph_BTTask_GetSleepLocation
void UBTTask_GetSleepLocation_C::ExecuteUbergraph_BTTask_GetSleepLocation(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Tasks/BTTask_GetSleepLocation.BTTask_GetSleepLocation_C:ExecuteUbergraph_BTTask_GetSleepLocation");

	FUBTTask_GetSleepLocation_C_ExecuteUbergraph_BTTask_GetSleepLocation_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

