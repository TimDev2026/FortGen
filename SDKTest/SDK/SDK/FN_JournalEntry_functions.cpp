#include "pch.h"

#include "FN_JournalEntry_classes.h"

UClass* UJournalEntry_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Journal/JournalEntry.JournalEntry_C");

	return Class;
}

// Function /Game/UI/Journal/JournalEntry.JournalEntry_C:Setup
void UJournalEntry_C::Setup(class UFortQuestItem* Quest)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalEntry.JournalEntry_C:Setup");

	FUJournalEntry_C_Setup_Params Parms;

	Parms.Quest = Quest;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalEntry.JournalEntry_C:UpdateProgress
void UJournalEntry_C::UpdateProgress()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalEntry.JournalEntry_C:UpdateProgress");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Journal/JournalEntry.JournalEntry_C:Construct
void UJournalEntry_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalEntry.JournalEntry_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Journal/JournalEntry.JournalEntry_C:HandleSelectedChanged
void UJournalEntry_C::HandleSelectedChanged(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalEntry.JournalEntry_C:HandleSelectedChanged");

	FUJournalEntry_C_HandleSelectedChanged_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalEntry.JournalEntry_C:ExecuteUbergraph_JournalEntry
void UJournalEntry_C::ExecuteUbergraph_JournalEntry(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalEntry.JournalEntry_C:ExecuteUbergraph_JournalEntry");

	FUJournalEntry_C_ExecuteUbergraph_JournalEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

