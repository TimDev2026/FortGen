#include "pch.h"

#include "FN_BTTask_AlwaysFail_classes.h"

UClass* UBTTask_AlwaysFail_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysFail.BTTask_AlwaysFail_C");

	return Class;
}

// Function /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysFail.BTTask_AlwaysFail_C:ReceiveExecute
void UBTTask_AlwaysFail_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysFail.BTTask_AlwaysFail_C:ReceiveExecute");

	FUBTTask_AlwaysFail_C_ReceiveExecute_Params Parms;

	Parms.OwnerActor = OwnerActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysFail.BTTask_AlwaysFail_C:ExecuteUbergraph_BTTask_AlwaysFail
void UBTTask_AlwaysFail_C::ExecuteUbergraph_BTTask_AlwaysFail(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysFail.BTTask_AlwaysFail_C:ExecuteUbergraph_BTTask_AlwaysFail");

	FUBTTask_AlwaysFail_C_ExecuteUbergraph_BTTask_AlwaysFail_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

