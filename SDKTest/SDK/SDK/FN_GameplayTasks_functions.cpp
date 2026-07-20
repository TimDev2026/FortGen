#include "pch.h"

#include "FN_GameplayTasks_classes.h"

UClass* UGameplayTasksComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTasksComponent");

	return Class;
}

// Function /Script/GameplayTasks.GameplayTasksComponent:OnRep_SimulatedTasks
void UGameplayTasksComponent::OnRep_SimulatedTasks()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTasksComponent:OnRep_SimulatedTasks");

	ProcessEvent(FN, nullptr);
}

// Function /Script/GameplayTasks.GameplayTasksComponent:K2_RunGameplayTask
EGameplayTaskRunResult UGameplayTasksComponent::K2_RunGameplayTask(TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner, class UGameplayTask* Task, uint8_t Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTasksComponent:K2_RunGameplayTask");

	FUGameplayTasksComponent_K2_RunGameplayTask_Params Parms;

	Parms.TaskOwner = TaskOwner;
	Parms.Task = Task;
	Parms.Priority = Priority;
	Parms.AdditionalRequiredResources = AdditionalRequiredResources;
	Parms.AdditionalClaimedResources = AdditionalClaimedResources;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UGameplayTask::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTask");

	return Class;
}

// Function /Script/GameplayTasks.GameplayTask:ReadyForActivation
void UGameplayTask::ReadyForActivation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTask:ReadyForActivation");

	ProcessEvent(FN, nullptr);
}

// DelegateFunction /Script/GameplayTasks.GameplayTask:GenericGameplayTaskDelegate__DelegateSignature
void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTask:GenericGameplayTaskDelegate__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Script/GameplayTasks.GameplayTask:EndTask
void UGameplayTask::EndTask()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTask:EndTask");

	ProcessEvent(FN, nullptr);
}

UClass* UGameplayTaskOwnerInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTaskOwnerInterface");

	return Class;
}

UClass* UGameplayTask_SpawnActor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTask_SpawnActor");

	return Class;
}

// Function /Script/GameplayTasks.GameplayTask_SpawnActor:SpawnActor
class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTask_SpawnActor:SpawnActor");

	FUGameplayTask_SpawnActor_SpawnActor_Params Parms;

	Parms.TaskOwner = TaskOwner;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnRotation = SpawnRotation;
	Parms.Class = Class;
	Parms.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTasks.GameplayTask_SpawnActor:FinishSpawningActor
void UGameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTask_SpawnActor:FinishSpawningActor");

	FUGameplayTask_SpawnActor_FinishSpawningActor_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SpawnedActor = SpawnedActor;

	ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTasks.GameplayTask_SpawnActor:BeginSpawningActor
bool UGameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTask_SpawnActor:BeginSpawningActor");

	FUGameplayTask_SpawnActor_BeginSpawningActor_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.SpawnedActor = SpawnedActor;

	ProcessEvent(FN, &Parms);
}

UClass* UGameplayTask_WaitDelay::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTask_WaitDelay");

	return Class;
}

// Function /Script/GameplayTasks.GameplayTask_WaitDelay:TaskWaitDelay
class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::TaskWaitDelay(TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner, float Time)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTask_WaitDelay:TaskWaitDelay");

	FUGameplayTask_WaitDelay_TaskWaitDelay_Params Parms;

	Parms.TaskOwner = TaskOwner;
	Parms.Time = Time;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/GameplayTasks.GameplayTask_WaitDelay:TaskDelayDelegate__DelegateSignature
void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTasks.GameplayTask_WaitDelay:TaskDelayDelegate__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

UClass* UGameplayTaskResource::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTaskResource");

	return Class;
}

UScriptStruct* FGameplayResourceSet::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameplayTasks.GameplayResourceSet");

	return Struct;
}

