#include "pch.h"

#include "FN_JournalEntryListItem_classes.h"

UClass* UJournalEntryListItem_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Journal/JournalEntryListItem.JournalEntryListItem_C");

	return Class;
}

// Function /Game/UI/Journal/JournalEntryListItem.JournalEntryListItem_C:SetSelected
void UJournalEntryListItem_C::SetSelected(bool bSelected)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalEntryListItem.JournalEntryListItem_C:SetSelected");

	FUJournalEntryListItem_C_SetSelected_Params Parms;

	Parms.bSelected = bSelected;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalEntryListItem.JournalEntryListItem_C:ExecuteUbergraph_JournalEntryListItem
void UJournalEntryListItem_C::ExecuteUbergraph_JournalEntryListItem(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalEntryListItem.JournalEntryListItem_C:ExecuteUbergraph_JournalEntryListItem");

	FUJournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

