#include "pch.h"

#include "FN_LoginWindow_classes.h"

UClass* ULoginWindow_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C");

	return Class;
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:RunInitialBenchmark
void ULoginWindow_C::RunInitialBenchmark()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:RunInitialBenchmark");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Update Watermark
void ULoginWindow_C::Update_Watermark()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Update Watermark");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:SetEditingFocus
void ULoginWindow_C::SetEditingFocus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:SetEditingFocus");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Show Login Result Error
void ULoginWindow_C::Show_Login_Result_Error(FText In_Text)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Show Login Result Error");

	FULoginWindow_C_Show_Login_Result_Error_Params Parms;

	Parms.In_Text = In_Text;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Set Login Permission
void ULoginWindow_C::Set_Login_Permission(bool Login_Enabled)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Set Login Permission");

	FULoginWindow_C_Set_Login_Permission_Params Parms;

	Parms.Login_Enabled = Login_Enabled;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Check Login Permission
void ULoginWindow_C::Check_Login_Permission()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Check Login Permission");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:RequestLogin
void ULoginWindow_C::RequestLogin()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:RequestLogin");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnKeyDown
FEventReply ULoginWindow_C::OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnKeyDown");

	FULoginWindow_C_OnKeyDown_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7
void ULoginWindow_C::OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7
void ULoginWindow_C::OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7
void ULoginWindow_C::OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Construct
void ULoginWindow_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnLoginStatusChanged
void ULoginWindow_C::OnLoginStatusChanged(EUILoginStatus NewStatus, FText InMessage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnLoginStatusChanged");

	FULoginWindow_C_OnLoginStatusChanged_Params Parms;

	Parms.NewStatus = NewStatus;
	Parms.InMessage = InMessage;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature
void ULoginWindow_C::BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature(FText TEXT, ETextCommit CommitMethod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature");

	FULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;
	Parms.CommitMethod = CommitMethod;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature
void ULoginWindow_C::BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature(FText TEXT, ETextCommit CommitMethod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature");

	FULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;
	Parms.CommitMethod = CommitMethod;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature
void ULoginWindow_C::BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature(FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature");

	FULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature
void ULoginWindow_C::BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature(FText TEXT)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature");

	FULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature_Params Parms;

	Parms.TEXT = TEXT;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnQueryFortBackendVersionComplete
void ULoginWindow_C::OnQueryFortBackendVersionComplete(FFortBackendVersion FortBackendVersion)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:OnQueryFortBackendVersionComplete");

	FULoginWindow_C_OnQueryFortBackendVersionComplete_Params Parms;

	Parms.FortBackendVersion = FortBackendVersion;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Login Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature
void ULoginWindow_C::BndEvt__Login_Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:BndEvt__Login Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature");

	FULoginWindow_C_BndEvt__Login_Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/LoginWindow/LoginWindow.LoginWindow_C:ExecuteUbergraph_LoginWindow
void ULoginWindow_C::ExecuteUbergraph_LoginWindow(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/LoginWindow/LoginWindow.LoginWindow_C:ExecuteUbergraph_LoginWindow");

	FULoginWindow_C_ExecuteUbergraph_LoginWindow_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

