#include "pch.h"

#include "FN_ConfirmationWindow_classes.h"

UClass* UConfirmationWindow_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C");

	return Class;
}

// Function /Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:OnHandleAction
void UConfirmationWindow_C::OnHandleAction(FEventReply Result, bool bPassThrough)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:OnHandleAction");

	FUConfirmationWindow_C_OnHandleAction_Params Parms;

	Parms.Result = Result;
	Parms.bPassThrough = bPassThrough;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:HandleTimedOut
void UConfirmationWindow_C::HandleTimedOut()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:HandleTimedOut");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:UpdateTimer
void UConfirmationWindow_C::UpdateTimer(float Display_Time)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:UpdateTimer");

	FUConfirmationWindow_C_UpdateTimer_Params Parms;

	Parms.Display_Time = Display_Time;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:UpdateButton
void UConfirmationWindow_C::UpdateButton(class UButtonIconText_C* Button, FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:UpdateButton");

	FUConfirmationWindow_C_UpdateButton_Params Parms;

	Parms.Button = Button;
	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:OnShow
void UConfirmationWindow_C::OnShow()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:OnShow");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:OnKill
void UConfirmationWindow_C::OnKill()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:OnKill");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:BndEvt__Button-Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature
void UConfirmationWindow_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:BndEvt__Button-Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature");

	FUConfirmationWindow_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:BndEvt__Button-Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature
void UConfirmationWindow_C::BndEvt__Button_Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:BndEvt__Button-Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature");

	FUConfirmationWindow_C_BndEvt__Button_Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:ExecuteUbergraph_ConfirmationWindow
void UConfirmationWindow_C::ExecuteUbergraph_ConfirmationWindow(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C:ExecuteUbergraph_ConfirmationWindow");

	FUConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

