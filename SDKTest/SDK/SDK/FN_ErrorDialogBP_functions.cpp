#include "pch.h"

#include "FN_ErrorDialogBP_classes.h"

UClass* UErrorDialogBP_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C");

	return Class;
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:KillErrorsDisplayed
void UErrorDialogBP_C::KillErrorsDisplayed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:KillErrorsDisplayed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:OnHandleAction
void UErrorDialogBP_C::OnHandleAction(FEventReply Result, bool bPassThrough)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:OnHandleAction");

	FUErrorDialogBP_C_OnHandleAction_Params Parms;

	Parms.Result = Result;
	Parms.bPassThrough = bPassThrough;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:Deactivate
void UErrorDialogBP_C::Deactivate()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:Deactivate");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:BindDelegates
void UErrorDialogBP_C::BindDelegates()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:BindDelegates");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:Construct
void UErrorDialogBP_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:OnRebuildDialog
void UErrorDialogBP_C::OnRebuildDialog(int32_t NewIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:OnRebuildDialog");

	FUErrorDialogBP_C_OnRebuildDialog_Params Parms;

	Parms.NewIndex = NewIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:PartyContextBasicError
void UErrorDialogBP_C::PartyContextBasicError(FText Message, FString ErrorCode)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:PartyContextBasicError");

	FUErrorDialogBP_C_PartyContextBasicError_Params Parms;

	Parms.Message = Message;
	Parms.ErrorCode = ErrorCode;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:OnNetworkError
void UErrorDialogBP_C::OnNetworkError(FText NetworkErrorMessage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:OnNetworkError");

	FUErrorDialogBP_C_OnNetworkError_Params Parms;

	Parms.NetworkErrorMessage = NetworkErrorMessage;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature
void UErrorDialogBP_C::BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature");

	FUErrorDialogBP_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:ExecuteUbergraph_ErrorDialogBP
void UErrorDialogBP_C::ExecuteUbergraph_ErrorDialogBP(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/ErrorDialog/ErrorDialogBP.ErrorDialogBP_C:ExecuteUbergraph_ErrorDialogBP");

	FUErrorDialogBP_C_ExecuteUbergraph_ErrorDialogBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

