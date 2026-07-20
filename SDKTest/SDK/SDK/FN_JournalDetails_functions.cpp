#include "pch.h"

#include "FN_JournalDetails_classes.h"

UClass* UJournalDetails_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Journal/JournalDetails.JournalDetails_C");

	return Class;
}

// Function /Game/UI/Journal/JournalDetails.JournalDetails_C:GenerateAbandonButtonToolTipWidget
class UWidget* UJournalDetails_C::GenerateAbandonButtonToolTipWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalDetails.JournalDetails_C:GenerateAbandonButtonToolTipWidget");

	FUJournalDetails_C_GenerateAbandonButtonToolTipWidget_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalDetails.JournalDetails_C:SetupAbandonBtn
void UJournalDetails_C::SetupAbandonBtn()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalDetails.JournalDetails_C:SetupAbandonBtn");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Journal/JournalDetails.JournalDetails_C:Update
void UJournalDetails_C::Update()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalDetails.JournalDetails_C:Update");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Journal/JournalDetails.JournalDetails_C:Setup
void UJournalDetails_C::Setup(class UFortQuestItem* QuestItem, bool ShowObjectives, bool ShowRewards)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalDetails.JournalDetails_C:Setup");

	FUJournalDetails_C_Setup_Params Parms;

	Parms.QuestItem = QuestItem;
	Parms.ShowObjectives = ShowObjectives;
	Parms.ShowRewards = ShowRewards;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalDetails.JournalDetails_C:Construct
void UJournalDetails_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalDetails.JournalDetails_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Journal/JournalDetails.JournalDetails_C:BndEvt__AbandonButton_K2Node_ComponentBoundEvent_71_FortBaseButtonClicked__DelegateSignature
void UJournalDetails_C::BndEvt__AbandonButton_K2Node_ComponentBoundEvent_71_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalDetails.JournalDetails_C:BndEvt__AbandonButton_K2Node_ComponentBoundEvent_71_FortBaseButtonClicked__DelegateSignature");

	FUJournalDetails_C_BndEvt__AbandonButton_K2Node_ComponentBoundEvent_71_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Journal/JournalDetails.JournalDetails_C:ExecuteUbergraph_JournalDetails
void UJournalDetails_C::ExecuteUbergraph_JournalDetails(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Journal/JournalDetails.JournalDetails_C:ExecuteUbergraph_JournalDetails");

	FUJournalDetails_C_ExecuteUbergraph_JournalDetails_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

