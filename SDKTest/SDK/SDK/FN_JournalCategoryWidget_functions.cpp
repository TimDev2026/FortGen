#include "pch.h"

#include "FN_JournalCategoryWidget_classes.h"

UClass* UJournalCategoryWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C");

	return Class;
}

// Function /Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:ClearSelection
void UJournalCategoryWidget_C::ClearSelection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:ClearSelection");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:On_EntryList_GenerateRow
class UWidget* UJournalCategoryWidget_C::On_EntryList_GenerateRow(class UObject* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:On_EntryList_GenerateRow");

	FUJournalCategoryWidget_C_On_EntryList_GenerateRow_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:Construct
void UJournalCategoryWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature
void UJournalCategoryWidget_C::BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature(class UObject* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature");

	FUJournalCategoryWidget_C_BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature
void UJournalCategoryWidget_C::BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature");

	FUJournalCategoryWidget_C_BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:ExecuteUbergraph_JournalCategoryWidget
void UJournalCategoryWidget_C::ExecuteUbergraph_JournalCategoryWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:ExecuteUbergraph_JournalCategoryWidget");

	FUJournalCategoryWidget_C_ExecuteUbergraph_JournalCategoryWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:OnItemSelected__DelegateSignature
void UJournalCategoryWidget_C::OnItemSelected__DelegateSignature(class UJournalCategoryWidget_C* CategoryWidget, class UFortQuestItem* QuestItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalCategoryWidget.JournalCategoryWidget_C:OnItemSelected__DelegateSignature");

	FUJournalCategoryWidget_C_OnItemSelected__DelegateSignature_Params Parms;

	Parms.CategoryWidget = CategoryWidget;
	Parms.QuestItem = QuestItem;

	ProcessEvent(FN, &Parms);
}

