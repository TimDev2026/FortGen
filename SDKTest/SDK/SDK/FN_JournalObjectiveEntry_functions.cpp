#include "pch.h"

#include "FN_JournalObjectiveEntry_classes.h"

UClass* UJournalObjectiveEntry_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Journal/JournalObjectiveEntry.JournalObjectiveEntry_C");

	return Class;
}

// Function /Game/UI/Journal/JournalObjectiveEntry.JournalObjectiveEntry_C:Update
void UJournalObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalObjectiveEntry.JournalObjectiveEntry_C:Update");

	FUJournalObjectiveEntry_C_Update_Params Parms;

	Parms.Objective = Objective;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalObjectiveEntry.JournalObjectiveEntry_C:UpdateProgress
void UJournalObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalObjectiveEntry.JournalObjectiveEntry_C:UpdateProgress");

	FUJournalObjectiveEntry_C_UpdateProgress_Params Parms;

	Parms.Objective = Objective;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalObjectiveEntry.JournalObjectiveEntry_C:SetData
void UJournalObjectiveEntry_C::SetData(class UObject* InData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalObjectiveEntry.JournalObjectiveEntry_C:SetData");

	FUJournalObjectiveEntry_C_SetData_Params Parms;

	Parms.InData = InData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalObjectiveEntry.JournalObjectiveEntry_C:ExecuteUbergraph_JournalObjectiveEntry
void UJournalObjectiveEntry_C::ExecuteUbergraph_JournalObjectiveEntry(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalObjectiveEntry.JournalObjectiveEntry_C:ExecuteUbergraph_JournalObjectiveEntry");

	FUJournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

