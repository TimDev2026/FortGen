#include "pch.h"

#include "FN_SlateContent_ActionHandlerPanel_classes.h"

UClass* USlateContent_ActionHandlerPanel_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C");

	return Class;
}

// Function /Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:SetSizeBoxOverrides
void USlateContent_ActionHandlerPanel_C::SetSizeBoxOverrides(float InWidth, float InHeight)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:SetSizeBoxOverrides");

	FUSlateContent_ActionHandlerPanel_C_SetSizeBoxOverrides_Params Parms;

	Parms.InWidth = InWidth;
	Parms.InHeight = InHeight;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:OnHandleAction
void USlateContent_ActionHandlerPanel_C::OnHandleAction(FEventReply Result, bool bPassThrough)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:OnHandleAction");

	FUSlateContent_ActionHandlerPanel_C_OnHandleAction_Params Parms;

	Parms.Result = Result;
	Parms.bPassThrough = bPassThrough;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:InitializeSlateContent
void USlateContent_ActionHandlerPanel_C::InitializeSlateContent(EFortLegacySlateWidget Slate_Widget_Type)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:InitializeSlateContent");

	FUSlateContent_ActionHandlerPanel_C_InitializeSlateContent_Params Parms;

	Parms.Slate_Widget_Type = Slate_Widget_Type;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:Construct
void USlateContent_ActionHandlerPanel_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:HandleOnSlateWidgetClosed
void USlateContent_ActionHandlerPanel_C::HandleOnSlateWidgetClosed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:HandleOnSlateWidgetClosed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:ExecuteUbergraph_SlateContent_ActionHandlerPanel
void USlateContent_ActionHandlerPanel_C::ExecuteUbergraph_SlateContent_ActionHandlerPanel(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C:ExecuteUbergraph_SlateContent_ActionHandlerPanel");

	FUSlateContent_ActionHandlerPanel_C_ExecuteUbergraph_SlateContent_ActionHandlerPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

