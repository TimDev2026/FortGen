#include "pch.h"

#include "FN_TopLevelRibbon_classes.h"

UClass* UTopLevelRibbon_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C");

	return Class;
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:SetupButtons
void UTopLevelRibbon_C::SetupButtons()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:SetupButtons");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:GetFrontEndOptionsVisibility
void UTopLevelRibbon_C::GetFrontEndOptionsVisibility(ESlateVisibility Visibility)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:GetFrontEndOptionsVisibility");

	FUTopLevelRibbon_C_GetFrontEndOptionsVisibility_Params Parms;

	Parms.Visibility = Visibility;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BindDelegates
void UTopLevelRibbon_C::BindDelegates()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BindDelegates");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:ShowRateExperience
void UTopLevelRibbon_C::ShowRateExperience()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:ShowRateExperience");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:ShowFeedback
void UTopLevelRibbon_C::ShowFeedback()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:ShowFeedback");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:ShowGameOptions
void UTopLevelRibbon_C::ShowGameOptions()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:ShowGameOptions");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:LeavePartyAndGame
void UTopLevelRibbon_C::LeavePartyAndGame()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:LeavePartyAndGame");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnTimedOut_79E55F534B88358E4441C485A4E14D6E
void UTopLevelRibbon_C::OnTimedOut_79E55F534B88358E4441C485A4E14D6E()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnTimedOut_79E55F534B88358E4441C485A4E14D6E");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnDeclined_79E55F534B88358E4441C485A4E14D6E
void UTopLevelRibbon_C::OnDeclined_79E55F534B88358E4441C485A4E14D6E()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnDeclined_79E55F534B88358E4441C485A4E14D6E");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnConfirmed_79E55F534B88358E4441C485A4E14D6E
void UTopLevelRibbon_C::OnConfirmed_79E55F534B88358E4441C485A4E14D6E()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnConfirmed_79E55F534B88358E4441C485A4E14D6E");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnTimedOut_5265A9FE464FA87840004EB001876A10
void UTopLevelRibbon_C::OnTimedOut_5265A9FE464FA87840004EB001876A10()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnTimedOut_5265A9FE464FA87840004EB001876A10");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnDeclined_5265A9FE464FA87840004EB001876A10
void UTopLevelRibbon_C::OnDeclined_5265A9FE464FA87840004EB001876A10()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnDeclined_5265A9FE464FA87840004EB001876A10");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnConfirmed_5265A9FE464FA87840004EB001876A10
void UTopLevelRibbon_C::OnConfirmed_5265A9FE464FA87840004EB001876A10()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnConfirmed_5265A9FE464FA87840004EB001876A10");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:Construct
void UTopLevelRibbon_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__[Button] Feedback_K2Node_ComponentBoundEvent_1732_FortBaseButtonClicked__DelegateSignature
void UTopLevelRibbon_C::BndEvt___Button__Feedback_K2Node_ComponentBoundEvent_1732_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__[Button] Feedback_K2Node_ComponentBoundEvent_1732_FortBaseButtonClicked__DelegateSignature");

	FUTopLevelRibbon_C_BndEvt___Button__Feedback_K2Node_ComponentBoundEvent_1732_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__[Button] Log Out_K2Node_ComponentBoundEvent_2079_FortBaseButtonClicked__DelegateSignature
void UTopLevelRibbon_C::BndEvt___Button__Log_Out_K2Node_ComponentBoundEvent_2079_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__[Button] Log Out_K2Node_ComponentBoundEvent_2079_FortBaseButtonClicked__DelegateSignature");

	FUTopLevelRibbon_C_BndEvt___Button__Log_Out_K2Node_ComponentBoundEvent_2079_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__[Button] Quit_K2Node_ComponentBoundEvent_2092_FortBaseButtonClicked__DelegateSignature
void UTopLevelRibbon_C::BndEvt___Button__Quit_K2Node_ComponentBoundEvent_2092_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__[Button] Quit_K2Node_ComponentBoundEvent_2092_FortBaseButtonClicked__DelegateSignature");

	FUTopLevelRibbon_C_BndEvt___Button__Quit_K2Node_ComponentBoundEvent_2092_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_2469_FortBaseButtonClicked__DelegateSignature
void UTopLevelRibbon_C::BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_2469_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_2469_FortBaseButtonClicked__DelegateSignature");

	FUTopLevelRibbon_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_2469_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnLeaveClicked
void UTopLevelRibbon_C::OnLeaveClicked()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnLeaveClicked");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_632_FortBaseButtonClicked__DelegateSignature
void UTopLevelRibbon_C::BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_632_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_632_FortBaseButtonClicked__DelegateSignature");

	FUTopLevelRibbon_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_632_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:ExecuteUbergraph_TopLevelRibbon
void UTopLevelRibbon_C::ExecuteUbergraph_TopLevelRibbon(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:ExecuteUbergraph_TopLevelRibbon");

	FUTopLevelRibbon_C_ExecuteUbergraph_TopLevelRibbon_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnClosed__DelegateSignature
void UTopLevelRibbon_C::OnClosed__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/TopLevelRibbon.TopLevelRibbon_C:OnClosed__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

