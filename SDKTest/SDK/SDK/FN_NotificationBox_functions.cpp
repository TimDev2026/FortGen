#include "pch.h"

#include "FN_NotificationBox_classes.h"

UClass* UNotificationBox_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Notification/NotificationBox.NotificationBox_C");

	return Class;
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:HideMessage
void UNotificationBox_C::HideMessage()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:HideMessage");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:HideTitle
void UNotificationBox_C::HideTitle()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:HideTitle");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:ShowTitle
void UNotificationBox_C::ShowTitle(FText Title)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:ShowTitle");

	FUNotificationBox_C_ShowTitle_Params Parms;

	Parms.Title = Title;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:SetIcon
void UNotificationBox_C::SetIcon(FSlateBrush Icon_Brush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:SetIcon");

	FUNotificationBox_C_SetIcon_Params Parms;

	Parms.Icon_Brush = Icon_Brush;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:SetTitle
void UNotificationBox_C::SetTitle(FText Title)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:SetTitle");

	FUNotificationBox_C_SetTitle_Params Parms;

	Parms.Title = Title;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:Outro
void UNotificationBox_C::Outro()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:Outro");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:Intro
void UNotificationBox_C::Intro()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:Intro");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:HideIgnoreButton
void UNotificationBox_C::HideIgnoreButton()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:HideIgnoreButton");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:HideAcceptButton
void UNotificationBox_C::HideAcceptButton()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:HideAcceptButton");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:ShowIgnoreButton
void UNotificationBox_C::ShowIgnoreButton(FText ButtonName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:ShowIgnoreButton");

	FUNotificationBox_C_ShowIgnoreButton_Params Parms;

	Parms.ButtonName = ButtonName;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:ShowAcceptButton
void UNotificationBox_C::ShowAcceptButton(FText ButtonName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:ShowAcceptButton");

	FUNotificationBox_C_ShowAcceptButton_Params Parms;

	Parms.ButtonName = ButtonName;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:ShowMessage
void UNotificationBox_C::ShowMessage(FText Message)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:ShowMessage");

	FUNotificationBox_C_ShowMessage_Params Parms;

	Parms.Message = Message;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:Construct
void UNotificationBox_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:OnMouseEnter
void UNotificationBox_C::OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:OnMouseEnter");

	FUNotificationBox_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:OnMouseLeave
void UNotificationBox_C::OnMouseLeave(FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:OnMouseLeave");

	FUNotificationBox_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:BndEvt__Button-1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature
void UNotificationBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:BndEvt__Button-1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature");

	FUNotificationBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:BndEvt__Button-2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature
void UNotificationBox_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:BndEvt__Button-2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature");

	FUNotificationBox_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:HandleIntroComplete
void UNotificationBox_C::HandleIntroComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:HandleIntroComplete");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:HandleOutroComplete
void UNotificationBox_C::HandleOutroComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:HandleOutroComplete");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:ExecuteUbergraph_NotificationBox
void UNotificationBox_C::ExecuteUbergraph_NotificationBox(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:ExecuteUbergraph_NotificationBox");

	FUNotificationBox_C_ExecuteUbergraph_NotificationBox_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:OnOutroComplete__DelegateSignature
void UNotificationBox_C::OnOutroComplete__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:OnOutroComplete__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:OnIntroComplete__DelegateSignature
void UNotificationBox_C::OnIntroComplete__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:OnIntroComplete__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:OnMouseLeft__DelegateSignature
void UNotificationBox_C::OnMouseLeft__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:OnMouseLeft__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:OnMouseEntered__DelegateSignature
void UNotificationBox_C::OnMouseEntered__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:OnMouseEntered__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:OnIgnored__DelegateSignature
void UNotificationBox_C::OnIgnored__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:OnIgnored__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationBox.NotificationBox_C:OnConfirmed__DelegateSignature
void UNotificationBox_C::OnConfirmed__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationBox.NotificationBox_C:OnConfirmed__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

