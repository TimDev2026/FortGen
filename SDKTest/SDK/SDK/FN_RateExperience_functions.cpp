#include "pch.h"

#include "FN_RateExperience_classes.h"

UClass* URateExperience_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/RateExperience.RateExperience_C");

	return Class;
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:HandleFinished
void URateExperience_C::HandleFinished()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:HandleFinished");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:OnHandleAction
void URateExperience_C::OnHandleAction(FEventReply Result, bool bPassThrough)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:OnHandleAction");

	FURateExperience_C_OnHandleAction_Params Parms;

	Parms.Result = Result;
	Parms.bPassThrough = bPassThrough;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:UpdateVisibility
void URateExperience_C::UpdateVisibility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:UpdateVisibility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:SendAnalyticsEvent
void URateExperience_C::SendAnalyticsEvent()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:SendAnalyticsEvent");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:CreateToolTip
void URateExperience_C::CreateToolTip(class UWidget* StarWidget, int32_t WidgetIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:CreateToolTip");

	FURateExperience_C_CreateToolTip_Params Parms;

	Parms.StarWidget = StarWidget;
	Parms.WidgetIndex = WidgetIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:SetStarCount
void URateExperience_C::SetStarCount(int32_t StarCount)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:SetStarCount");

	FURateExperience_C_SetStarCount_Params Parms;

	Parms.StarCount = StarCount;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:Construct
void URateExperience_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature
void URateExperience_C::BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature");

	FURateExperience_C_BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature
void URateExperience_C::BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature");

	FURateExperience_C_BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:StarButtonClicked
void URateExperience_C::StarButtonClicked(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:StarButtonClicked");

	FURateExperience_C_StarButtonClicked_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
void URateExperience_C::BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	FURateExperience_C_BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/RateExperience.RateExperience_C:ExecuteUbergraph_RateExperience
void URateExperience_C::ExecuteUbergraph_RateExperience(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/RateExperience.RateExperience_C:ExecuteUbergraph_RateExperience");

	FURateExperience_C_ExecuteUbergraph_RateExperience_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

