#include "pch.h"

#include "FN_JournalWidget_classes.h"

UClass* UJournalWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Journal/JournalWidget.JournalWidget_C");

	return Class;
}

// Function /Game/UI/Journal/JournalWidget.JournalWidget_C:QuestSelected
void UJournalWidget_C::QuestSelected(class UJournalCategoryWidget_C* CategoryWidget, class UFortQuestItem* SelectedQuest)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalWidget.JournalWidget_C:QuestSelected");

	FUJournalWidget_C_QuestSelected_Params Parms;

	Parms.CategoryWidget = CategoryWidget;
	Parms.SelectedQuest = SelectedQuest;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalWidget.JournalWidget_C:Update
void UJournalWidget_C::Update(class UFortQuestManager* QuestManager)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalWidget.JournalWidget_C:Update");

	FUJournalWidget_C_Update_Params Parms;

	Parms.QuestManager = QuestManager;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalWidget.JournalWidget_C:Construct
void UJournalWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalWidget.JournalWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Journal/JournalWidget.JournalWidget_C:HandleQuestsUpdates
void UJournalWidget_C::HandleQuestsUpdates()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalWidget.JournalWidget_C:HandleQuestsUpdates");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Journal/JournalWidget.JournalWidget_C:ExecuteUbergraph_JournalWidget
void UJournalWidget_C::ExecuteUbergraph_JournalWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalWidget.JournalWidget_C:ExecuteUbergraph_JournalWidget");

	FUJournalWidget_C_ExecuteUbergraph_JournalWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

