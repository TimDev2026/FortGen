#include "pch.h"

#include "FN_LeaveButton_classes.h"

UClass* ULeaveButton_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Main/LeaveButton.LeaveButton_C");

	return Class;
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:LeaveParty
void ULeaveButton_C::LeaveParty()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:LeaveParty");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:UpdateState
void ULeaveButton_C::UpdateState()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:UpdateState");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:IsConsideredInGame
void ULeaveButton_C::IsConsideredInGame(bool InGame)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:IsConsideredInGame");

	FULeaveButton_C_IsConsideredInGame_Params Parms;

	Parms.InGame = InGame;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:GetLeaveActionText
void ULeaveButton_C::GetLeaveActionText(FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:GetLeaveActionText");

	FULeaveButton_C_GetLeaveActionText_Params Parms;

	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769
void ULeaveButton_C::OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769
void ULeaveButton_C::OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769
void ULeaveButton_C::OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79
void ULeaveButton_C::OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79
void ULeaveButton_C::OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79
void ULeaveButton_C::OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:Construct
void ULeaveButton_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:HandleLobbyEvents
void ULeaveButton_C::HandleLobbyEvents()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:HandleLobbyEvents");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:HandleTeamMemberAdded
void ULeaveButton_C::HandleTeamMemberAdded(FFortTeamMemberInfo NewTeamMemberInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:HandleTeamMemberAdded");

	FULeaveButton_C_HandleTeamMemberAdded_Params Parms;

	Parms.NewTeamMemberInfo = NewTeamMemberInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:HandleTeamMemberRemoved
void ULeaveButton_C::HandleTeamMemberRemoved(int32_t PlayerIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:HandleTeamMemberRemoved");

	FULeaveButton_C_HandleTeamMemberRemoved_Params Parms;

	Parms.PlayerIndex = PlayerIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:BndEvt__[Button] Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature
void ULeaveButton_C::BndEvt___Button__Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:BndEvt__[Button] Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature");

	FULeaveButton_C_BndEvt___Button__Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:PreConstruct
void ULeaveButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:PreConstruct");

	FULeaveButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:ExecuteUbergraph_LeaveButton
void ULeaveButton_C::ExecuteUbergraph_LeaveButton(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:ExecuteUbergraph_LeaveButton");

	FULeaveButton_C_ExecuteUbergraph_LeaveButton_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/LeaveButton.LeaveButton_C:OnClicked__DelegateSignature
void ULeaveButton_C::OnClicked__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/LeaveButton.LeaveButton_C:OnClicked__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

