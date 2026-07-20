#include "pch.h"

#include "FN_NotificationWindow_classes.h"

UClass* UNotificationWindow_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C");

	return Class;
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:PlayFeedback
void UNotificationWindow_C::PlayFeedback(EFortDialogFeedbackType FeedBackType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:PlayFeedback");

	FUNotificationWindow_C_PlayFeedback_Params Parms;

	Parms.FeedBackType = FeedBackType;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:TryConsumeNextNotification
void UNotificationWindow_C::TryConsumeNextNotification()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:TryConsumeNextNotification");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:FinishHandlingNotification
void UNotificationWindow_C::FinishHandlingNotification()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:FinishHandlingNotification");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:SetIgnoreButton
void UNotificationWindow_C::SetIgnoreButton(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:SetIgnoreButton");

	FUNotificationWindow_C_SetIgnoreButton_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:SetAcceptButton
void UNotificationWindow_C::SetAcceptButton(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:SetAcceptButton");

	FUNotificationWindow_C_SetAcceptButton_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:SetMessage
void UNotificationWindow_C::SetMessage(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:SetMessage");

	FUNotificationWindow_C_SetMessage_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:SetTitle
void UNotificationWindow_C::SetTitle(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:SetTitle");

	FUNotificationWindow_C_SetTitle_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:RegisterNotificationHandler
void UNotificationWindow_C::RegisterNotificationHandler()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:RegisterNotificationHandler");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:StartNotification
void UNotificationWindow_C::StartNotification(FFortDialogDescription NotificationDescription)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:StartNotification");

	FUNotificationWindow_C_StartNotification_Params Parms;

	Parms.NotificationDescription = NotificationDescription;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:Construct
void UNotificationWindow_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:NextAnimation
void UNotificationWindow_C::NextAnimation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:NextAnimation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:HandleNotificationAvailable
void UNotificationWindow_C::HandleNotificationAvailable()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:HandleNotificationAvailable");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:Destruct
void UNotificationWindow_C::Destruct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:Destruct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:ExecuteUbergraph_NotificationWindow
void UNotificationWindow_C::ExecuteUbergraph_NotificationWindow(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:ExecuteUbergraph_NotificationWindow");

	FUNotificationWindow_C_ExecuteUbergraph_NotificationWindow_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Notification/NotificationWindow.NotificationWindow_C:OnTimerComplete__DelegateSignature
void UNotificationWindow_C::OnTimerComplete__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Notification/NotificationWindow.NotificationWindow_C:OnTimerComplete__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

