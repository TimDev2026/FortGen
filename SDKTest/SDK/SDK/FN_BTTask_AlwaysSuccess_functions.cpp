#include "pch.h"

#include "FN_BTTask_AlwaysSuccess_classes.h"

UClass* UBTTask_AlwaysSuccess_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C:ReceiveExecute
void UBTTask_AlwaysSuccess_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C:ReceiveExecute");

	FUBTTask_AlwaysSuccess_C_ReceiveExecute_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C:ExecuteUbergraph_BTTask_AlwaysSuccess
void UBTTask_AlwaysSuccess_C::ExecuteUbergraph_BTTask_AlwaysSuccess(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C:ExecuteUbergraph_BTTask_AlwaysSuccess");

	FUBTTask_AlwaysSuccess_C_ExecuteUbergraph_BTTask_AlwaysSuccess_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

