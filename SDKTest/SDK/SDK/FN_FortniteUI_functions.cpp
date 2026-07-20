#include "pch.h"

#include "FN_FortniteUI_classes.h"

UClass* UFortAbstractButtonGroup::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortAbstractButtonGroup");

	return Class;
}

// Function /Script/FortniteUI.FortAbstractButtonGroup:SetDataProvider
void UFortAbstractButtonGroup::SetDataProvider(TArray<FText> InDataProvider)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortAbstractButtonGroup:SetDataProvider");

	FUFortAbstractButtonGroup_SetDataProvider_Params Parms;

	Parms.InDataProvider = InDataProvider;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortAbstractButtonGroup:HandleButtonClicked
void UFortAbstractButtonGroup::HandleButtonClicked(class UFortButton* Button)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortAbstractButtonGroup:HandleButtonClicked");

	FUFortAbstractButtonGroup_HandleButtonClicked_Params Parms;

	Parms.Button = Button;

	ProcessEvent(FN, &Parms);
}

UClass* UFortButtonGroup::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortButtonGroup");

	return Class;
}

UClass* UFortTabButtonGroup::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortTabButtonGroup");

	return Class;
}

// Function /Script/FortniteUI.FortTabButtonGroup:SetInitialButtonSelection
void UFortTabButtonGroup::SetInitialButtonSelection(int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTabButtonGroup:SetInitialButtonSelection");

	FUFortTabButtonGroup_SetInitialButtonSelection_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortTabButtonGroup:GetTabButton
class UFortTabButton* UFortTabButtonGroup::GetTabButton(int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTabButtonGroup:GetTabButton");

	FUFortTabButtonGroup_GetTabButton_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

UClass* UFortActorCanvas::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortActorCanvas");

	return Class;
}

// Function /Script/FortniteUI.FortActorCanvas:AddActorIndicator
class UFortActorCanvasSlot* UFortActorCanvas::AddActorIndicator(class UFortActorIndicatorWidget* Indicator)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActorCanvas:AddActorIndicator");

	FUFortActorCanvas_AddActorIndicator_Params Parms;

	Parms.Indicator = Indicator;

	ProcessEvent(FN, &Parms);
}

UClass* UFortActorCanvasSlot::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortActorCanvasSlot");

	return Class;
}

// Function /Script/FortniteUI.FortActorCanvasSlot:SetVerticalAlignment
void UFortActorCanvasSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActorCanvasSlot:SetVerticalAlignment");

	FUFortActorCanvasSlot_SetVerticalAlignment_Params Parms;

	Parms.InVerticalAlignment = InVerticalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortActorCanvasSlot:SetHorizontalAlignment
void UFortActorCanvasSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActorCanvasSlot:SetHorizontalAlignment");

	FUFortActorCanvasSlot_SetHorizontalAlignment_Params Parms;

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortActorCanvasSlot:SetCanAutoRemove
void UFortActorCanvasSlot::SetCanAutoRemove(bool bAllowAutoRemove)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActorCanvasSlot:SetCanAutoRemove");

	FUFortActorCanvasSlot_SetCanAutoRemove_Params Parms;

	Parms.bAllowAutoRemove = bAllowAutoRemove;

	ProcessEvent(FN, &Parms);
}

UClass* UFortAsyncAction_SetUIState::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortAsyncAction_SetUIState");

	return Class;
}

// Function /Script/FortniteUI.FortAsyncAction_SetUIState:SetUIState
class UFortAsyncAction_SetUIState* UFortAsyncAction_SetUIState::SetUIState(class UObject* InWorldContextObject, EFortUIState DesiredState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortAsyncAction_SetUIState:SetUIState");

	FUFortAsyncAction_SetUIState_SetUIState_Params Parms;

	Parms.InWorldContextObject = InWorldContextObject;
	Parms.DesiredState = DesiredState;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UFortAsyncAction_ShowConfirmation::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortAsyncAction_ShowConfirmation");

	return Class;
}

// Function /Script/FortniteUI.FortAsyncAction_ShowConfirmation:ShowConfirmationDialog
class UFortAsyncAction_ShowConfirmation* UFortAsyncAction_ShowConfirmation::ShowConfirmationDialog(class UObject* InWorldContextObject, FText Title, FText Message, FText ConfirmButtonText, FText DeclineButtonText, class UFortUserWidget* InAdditionalContent, float InDisplayTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortAsyncAction_ShowConfirmation:ShowConfirmationDialog");

	FUFortAsyncAction_ShowConfirmation_ShowConfirmationDialog_Params Parms;

	Parms.InWorldContextObject = InWorldContextObject;
	Parms.Title = Title;
	Parms.Message = Message;
	Parms.ConfirmButtonText = ConfirmButtonText;
	Parms.DeclineButtonText = DeclineButtonText;
	Parms.InAdditionalContent = InAdditionalContent;
	Parms.InDisplayTime = InDisplayTime;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UFortBangWrapper::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortBangWrapper");

	return Class;
}

// Function /Script/FortniteUI.FortBangWrapper:SetBangVisibility
void UFortBangWrapper::SetBangVisibility(bool InVisible)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBangWrapper:SetBangVisibility");

	FUFortBangWrapper_SetBangVisibility_Params Parms;

	Parms.InVisible = InVisible;

	ProcessEvent(FN, &Parms);
}

UClass* UFortButtonInternalWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortButtonInternalWidget");

	return Class;
}

UClass* UFortUserWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortUserWidget");

	return Class;
}

// Function /Script/FortniteUI.FortUserWidget:UnregisterForEvent
void UFortUserWidget::UnregisterForEvent(FName EventName, struct FFortniteUI_WidgetEventListener__DelegateSignature InCallback)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUserWidget:UnregisterForEvent");

	FUFortUserWidget_UnregisterForEvent_Params Parms;

	Parms.EventName = EventName;
	Parms.InCallback = InCallback;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUserWidget:RegisterForInvalidation
void UFortUserWidget::RegisterForInvalidation(FName InvalidationType, struct FFortniteUI_OnInvalidType__DelegateSignature Callback)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUserWidget:RegisterForInvalidation");

	FUFortUserWidget_RegisterForInvalidation_Params Parms;

	Parms.InvalidationType = InvalidationType;
	Parms.Callback = Callback;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUserWidget:RegisterForEvent
void UFortUserWidget::RegisterForEvent(FName EventName, struct FFortniteUI_WidgetEventListener__DelegateSignature InCallback)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUserWidget:RegisterForEvent");

	FUFortUserWidget_RegisterForEvent_Params Parms;

	Parms.EventName = EventName;
	Parms.InCallback = InCallback;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUserWidget:PreConstruct
void UFortUserWidget::PreConstruct(bool IsDesignTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUserWidget:PreConstruct");

	FUFortUserWidget_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUserWidget:IsInvalid
bool UFortUserWidget::IsInvalid(FName Type) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUserWidget:IsInvalid");

	FUFortUserWidget_IsInvalid_Params Parms;

	Parms.Type = Type;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUserWidget:DispatchEvent
void UFortUserWidget::DispatchEvent(FName EventName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUserWidget:DispatchEvent");

	FUFortUserWidget_DispatchEvent_Params Parms;

	Parms.EventName = EventName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUserWidget:_BPInvalidate
void UFortUserWidget::_BPInvalidate(FName Type)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUserWidget:_BPInvalidate");

	FUFortUserWidget__BPInvalidate_Params Parms;

	Parms.Type = Type;

	ProcessEvent(FN, &Parms);
}

UClass* UFortButtonStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortButtonStyle");

	return Class;
}

// Function /Script/FortniteUI.FortButtonStyle:GetMarginBySizeFromMultiSizeMargin
FMargin UFortButtonStyle::GetMarginBySizeFromMultiSizeMargin(FFortMultiSizeMargin MultiSizeMargin, EFortBrushSize Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButtonStyle:GetMarginBySizeFromMultiSizeMargin");

	FUFortButtonStyle_GetMarginBySizeFromMultiSizeMargin_Params Parms;

	Parms.MultiSizeMargin = MultiSizeMargin;
	Parms.Size = Size;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButtonStyle:GetFontBySizeFromMultiSizeFont
FSlateFontInfo UFortButtonStyle::GetFontBySizeFromMultiSizeFont(FFortMultiSizeFont MultiSizeFont, EFortBrushSize Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButtonStyle:GetFontBySizeFromMultiSizeFont");

	FUFortButtonStyle_GetFontBySizeFromMultiSizeFont_Params Parms;

	Parms.MultiSizeFont = MultiSizeFont;
	Parms.Size = Size;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButtonStyle:GetFontBySize
FSlateFontInfo UFortButtonStyle::GetFontBySize(EFortBrushSize Size) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButtonStyle:GetFontBySize");

	FUFortButtonStyle_GetFontBySize_Params Parms;

	Parms.Size = Size;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButtonStyle:GetCustomPaddingBySize
FMargin UFortButtonStyle::GetCustomPaddingBySize(EFortBrushSize Size) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButtonStyle:GetCustomPaddingBySize");

	FUFortButtonStyle_GetCustomPaddingBySize_Params Parms;

	Parms.Size = Size;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButtonStyle:GetButtonPaddingBySize
FMargin UFortButtonStyle::GetButtonPaddingBySize(EFortBrushSize Size) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButtonStyle:GetButtonPaddingBySize");

	FUFortButtonStyle_GetButtonPaddingBySize_Params Parms;

	Parms.Size = Size;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButtonStyle:GetBrushBySizeFromMultiSizeBrush
FSlateBrush UFortButtonStyle::GetBrushBySizeFromMultiSizeBrush(FFortMultiSizeBrush MultiSizeBrush, EFortBrushSize Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButtonStyle:GetBrushBySizeFromMultiSizeBrush");

	FUFortButtonStyle_GetBrushBySizeFromMultiSizeBrush_Params Parms;

	Parms.MultiSizeBrush = MultiSizeBrush;
	Parms.Size = Size;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UFortBaseButton::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortBaseButton");

	return Class;
}

// Function /Script/FortniteUI.FortBaseButton:SetStyle
void UFortBaseButton::SetStyle(class UClass* InStyle)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:SetStyle");

	FUFortBaseButton_SetStyle_Params Parms;

	Parms.InStyle = InStyle;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:SetSelectionGroup
void UFortBaseButton::SetSelectionGroup(FName InSelectionGroup)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:SetSelectionGroup");

	FUFortBaseButton_SetSelectionGroup_Params Parms;

	Parms.InSelectionGroup = InSelectionGroup;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:SetSelected
void UFortBaseButton::SetSelected(bool InSelected)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:SetSelected");

	FUFortBaseButton_SetSelected_Params Parms;

	Parms.InSelected = InSelected;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:SetHovered
void UFortBaseButton::SetHovered(bool InHovered)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:SetHovered");

	FUFortBaseButton_SetHovered_Params Parms;

	Parms.InHovered = InHovered;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:SetClickMethod
void UFortBaseButton::SetClickMethod(EButtonClickMethod InClickMethod)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:SetClickMethod");

	FUFortBaseButton_SetClickMethod_Params Parms;

	Parms.InClickMethod = InClickMethod;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:SetClickable
void UFortBaseButton::SetClickable(bool InClickable)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:SetClickable");

	FUFortBaseButton_SetClickable_Params Parms;

	Parms.InClickable = InClickable;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:SetBrushSize
void UFortBaseButton::SetBrushSize(EFortBrushSize InSize)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:SetBrushSize");

	FUFortBaseButton_SetBrushSize_Params Parms;

	Parms.InSize = InSize;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:SetBangVisibility
void UFortBaseButton::SetBangVisibility(bool bVisible)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:SetBangVisibility");

	FUFortBaseButton_SetBangVisibility_Params Parms;

	Parms.bVisible = bVisible;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:OnButtonClicked
void UFortBaseButton::OnButtonClicked()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:OnButtonClicked");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortBaseButton:GetStyle
class UFortButtonStyle* UFortBaseButton::GetStyle() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:GetStyle");

	FUFortBaseButton_GetStyle_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:GetSelectionGroupIndex
int32_t UFortBaseButton::GetSelectionGroupIndex()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:GetSelectionGroupIndex");

	FUFortBaseButton_GetSelectionGroupIndex_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:GetSelected
bool UFortBaseButton::GetSelected() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:GetSelected");

	FUFortBaseButton_GetSelected_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:GetCurrentStateStyle
FFortStateStyle UFortBaseButton::GetCurrentStateStyle() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:GetCurrentStateStyle");

	FUFortBaseButton_GetCurrentStateStyle_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:GetCurrentFont
FSlateFontInfo UFortBaseButton::GetCurrentFont() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:GetCurrentFont");

	FUFortBaseButton_GetCurrentFont_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:GetCurrentCustomPadding
FMargin UFortBaseButton::GetCurrentCustomPadding() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:GetCurrentCustomPadding");

	FUFortBaseButton_GetCurrentCustomPadding_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:GetCurrentButtonPadding
FMargin UFortBaseButton::GetCurrentButtonPadding() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:GetCurrentButtonPadding");

	FUFortBaseButton_GetCurrentButtonPadding_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortBaseButton:ForceClick
void UFortBaseButton::ForceClick()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBaseButton:ForceClick");

	ProcessEvent(FN, nullptr);
}

UClass* UFortFrontEndContext::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortFrontEndContext");

	return Class;
}

// Function /Script/FortniteUI.FortFrontEndContext:ViewVaultItem
void UFortFrontEndContext::ViewVaultItem(class UFortItem* ItemToView)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:ViewVaultItem");

	FUFortFrontEndContext_ViewVaultItem_Params Parms;

	Parms.ItemToView = ItemToView;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:TriggerUIFeedbackEvent
void UFortFrontEndContext::TriggerUIFeedbackEvent(FName EventName) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:TriggerUIFeedbackEvent");

	FUFortFrontEndContext_TriggerUIFeedbackEvent_Params Parms;

	Parms.EventName = EventName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:SkipInitialBenchmark
void UFortFrontEndContext::SkipInitialBenchmark()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:SkipInitialBenchmark");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortFrontEndContext:ShouldRunInitialBenchmark
bool UFortFrontEndContext::ShouldRunInitialBenchmark() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:ShouldRunInitialBenchmark");

	FUFortFrontEndContext_ShouldRunInitialBenchmark_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:SetSelectedTheater
void UFortFrontEndContext::SetSelectedTheater(int32_t TheaterIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:SetSelectedTheater");

	FUFortFrontEndContext_SetSelectedTheater_Params Parms;

	Parms.TheaterIndex = TheaterIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:SetPersonalHeroChoice
void UFortFrontEndContext::SetPersonalHeroChoice(class UFortHero* Hero)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:SetPersonalHeroChoice");

	FUFortFrontEndContext_SetPersonalHeroChoice_Params Parms;

	Parms.Hero = Hero;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:SetHeroChoice
void UFortFrontEndContext::SetHeroChoice(int32_t PartyMemberIndex, class UFortHero* Hero)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:SetHeroChoice");

	FUFortFrontEndContext_SetHeroChoice_Params Parms;

	Parms.PartyMemberIndex = PartyMemberIndex;
	Parms.Hero = Hero;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:SetFrontEndCamera
void UFortFrontEndContext::SetFrontEndCamera(EFrontEndCamera NewState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:SetFrontEndCamera");

	FUFortFrontEndContext_SetFrontEndCamera_Params Parms;

	Parms.NewState = NewState;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:SelectGadgetForSlot
void UFortFrontEndContext::SelectGadgetForSlot(int32_t Slot, class UFortItemDefinition* GadgetDefinition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:SelectGadgetForSlot");

	FUFortFrontEndContext_SelectGadgetForSlot_Params Parms;

	Parms.Slot = Slot;
	Parms.GadgetDefinition = GadgetDefinition;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:SelectDefaultTheaterTile
void UFortFrontEndContext::SelectDefaultTheaterTile()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:SelectDefaultTheaterTile");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortFrontEndContext:RunBenchmarkAndApplyBestSettings
void UFortFrontEndContext::RunBenchmarkAndApplyBestSettings()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:RunBenchmarkAndApplyBestSettings");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortFrontEndContext:NotifyCreateBuildingClosed
void UFortFrontEndContext::NotifyCreateBuildingClosed(class UHomeBaseBuilding* Building)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:NotifyCreateBuildingClosed");

	FUFortFrontEndContext_NotifyCreateBuildingClosed_Params Parms;

	Parms.Building = Building;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:MarkSeenItemsInVault
void UFortFrontEndContext::MarkSeenItemsInVault()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:MarkSeenItemsInVault");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortFrontEndContext:LoadOutpostView
bool UFortFrontEndContext::LoadOutpostView(int32_t TheaterSlot)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:LoadOutpostView");

	FUFortFrontEndContext_LoadOutpostView_Params Parms;

	Parms.TheaterSlot = TheaterSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:IsFabricatorDisintegrating
bool UFortFrontEndContext::IsFabricatorDisintegrating(int32_t TheaterSlot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:IsFabricatorDisintegrating");

	FUFortFrontEndContext_IsFabricatorDisintegrating_Params Parms;

	Parms.TheaterSlot = TheaterSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:IsActiveTileMissionValid
bool UFortFrontEndContext::IsActiveTileMissionValid()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:IsActiveTileMissionValid");

	FUFortFrontEndContext_IsActiveTileMissionValid_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetTileMissionDetails
bool UFortFrontEndContext::GetTileMissionDetails(class AFortTheaterMapTile* Tile, FFortMissionDetails MissionDetails) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetTileMissionDetails");

	FUFortFrontEndContext_GetTileMissionDetails_Params Parms;

	Parms.Tile = Tile;
	Parms.MissionDetails = MissionDetails;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetTheaterType
EFortTheaterType UFortFrontEndContext::GetTheaterType(int32_t TheaterIndex) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetTheaterType");

	FUFortFrontEndContext_GetTheaterType_Params Parms;

	Parms.TheaterIndex = TheaterIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetTheaterRegionCount
int32_t UFortFrontEndContext::GetTheaterRegionCount(int32_t TheaterIndex) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetTheaterRegionCount");

	FUFortFrontEndContext_GetTheaterRegionCount_Params Parms;

	Parms.TheaterIndex = TheaterIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetTheaterName
FText UFortFrontEndContext::GetTheaterName(int32_t TheaterIndex) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetTheaterName");

	FUFortFrontEndContext_GetTheaterName_Params Parms;

	Parms.TheaterIndex = TheaterIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetTheaterDifficultyText
FText UFortFrontEndContext::GetTheaterDifficultyText(int32_t TheaterIndex) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetTheaterDifficultyText");

	FUFortFrontEndContext_GetTheaterDifficultyText_Params Parms;

	Parms.TheaterIndex = TheaterIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetTheaterData
bool UFortFrontEndContext::GetTheaterData(int32_t TheaterIndex, FFortTheaterMapData OutTheaterData) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetTheaterData");

	FUFortFrontEndContext_GetTheaterData_Params Parms;

	Parms.TheaterIndex = TheaterIndex;
	Parms.OutTheaterData = OutTheaterData;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetSelectedTheaterIndex
int32_t UFortFrontEndContext::GetSelectedTheaterIndex() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetSelectedTheaterIndex");

	FUFortFrontEndContext_GetSelectedTheaterIndex_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetSelectedTheaterData
bool UFortFrontEndContext::GetSelectedTheaterData(FFortTheaterMapData OutTheaterData) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetSelectedTheaterData");

	FUFortFrontEndContext_GetSelectedTheaterData_Params Parms;

	Parms.OutTheaterData = OutTheaterData;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetSelectableGadgets
void UFortFrontEndContext::GetSelectableGadgets(TArray<class UFortWorldItem*> SelectableGadgets, TArray<class UFortWorldItem*> LastSelectedGadgets)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetSelectableGadgets");

	FUFortFrontEndContext_GetSelectableGadgets_Params Parms;

	Parms.SelectableGadgets = SelectableGadgets;
	Parms.LastSelectedGadgets = LastSelectedGadgets;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetSchematicXpResourceBrush
FSlateBrush UFortFrontEndContext::GetSchematicXpResourceBrush() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetSchematicXpResourceBrush");

	FUFortFrontEndContext_GetSchematicXpResourceBrush_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetSchematicResourceItemDefinition
class UFortPersistentResourceItemDefinition* UFortFrontEndContext::GetSchematicResourceItemDefinition() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetSchematicResourceItemDefinition");

	FUFortFrontEndContext_GetSchematicResourceItemDefinition_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetRequirementText
FText UFortFrontEndContext::GetRequirementText(FFortRequirementsInfo InRequirements) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetRequirementText");

	FUFortFrontEndContext_GetRequirementText_Params Parms;

	Parms.InRequirements = InRequirements;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetPersonnelXpResourceBrush
FSlateBrush UFortFrontEndContext::GetPersonnelXpResourceBrush() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetPersonnelXpResourceBrush");

	FUFortFrontEndContext_GetPersonnelXpResourceBrush_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetPersonnelResourceItemDefinition
class UFortPersistentResourceItemDefinition* UFortFrontEndContext::GetPersonnelResourceItemDefinition() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetPersonnelResourceItemDefinition");

	FUFortFrontEndContext_GetPersonnelResourceItemDefinition_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetPersistentResourceItemDefinition
class UFortPersistentResourceItemDefinition* UFortFrontEndContext::GetPersistentResourceItemDefinition(EFortPersistentResources ResourceType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetPersistentResourceItemDefinition");

	FUFortFrontEndContext_GetPersistentResourceItemDefinition_Params Parms;

	Parms.ResourceType = ResourceType;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetOutpostStructureUpgradeCost
void UFortFrontEndContext::GetOutpostStructureUpgradeCost(int32_t TheaterSlot, int32_t UpgradeLevel, class UFortOutpostItemDefinition* OutpostStructure, TArray<FFortItemQuantityPair> OutWorldItems, TArray<FFortItemQuantityPair> OutAccountItems) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetOutpostStructureUpgradeCost");

	FUFortFrontEndContext_GetOutpostStructureUpgradeCost_Params Parms;

	Parms.TheaterSlot = TheaterSlot;
	Parms.UpgradeLevel = UpgradeLevel;
	Parms.OutpostStructure = OutpostStructure;
	Parms.OutWorldItems = OutWorldItems;
	Parms.OutAccountItems = OutAccountItems;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetOutpostStructureMaxLevel
int32_t UFortFrontEndContext::GetOutpostStructureMaxLevel(int32_t TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetOutpostStructureMaxLevel");

	FUFortFrontEndContext_GetOutpostStructureMaxLevel_Params Parms;

	Parms.TheaterSlot = TheaterSlot;
	Parms.OutpostStructure = OutpostStructure;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetOutpostStructureLevel
int32_t UFortFrontEndContext::GetOutpostStructureLevel(int32_t TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetOutpostStructureLevel");

	FUFortFrontEndContext_GetOutpostStructureLevel_Params Parms;

	Parms.TheaterSlot = TheaterSlot;
	Parms.OutpostStructure = OutpostStructure;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetNumberOfItemsInStorageVault
int32_t UFortFrontEndContext::GetNumberOfItemsInStorageVault(int32_t TheaterSlot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetNumberOfItemsInStorageVault");

	FUFortFrontEndContext_GetNumberOfItemsInStorageVault_Params Parms;

	Parms.TheaterSlot = TheaterSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetMaxNumberOfItemsInStorageVault
int32_t UFortFrontEndContext::GetMaxNumberOfItemsInStorageVault(int32_t TheaterSlot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetMaxNumberOfItemsInStorageVault");

	FUFortFrontEndContext_GetMaxNumberOfItemsInStorageVault_Params Parms;

	Parms.TheaterSlot = TheaterSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetItemFromItemQuantityPair
class UFortItemDefinition* UFortFrontEndContext::GetItemFromItemQuantityPair(FFortItemQuantityPair InPair) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetItemFromItemQuantityPair");

	FUFortFrontEndContext_GetItemFromItemQuantityPair_Params Parms;

	Parms.InPair = InPair;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetHeroPlayerPawnByIndex
class AFortPlayerPawn* UFortFrontEndContext::GetHeroPlayerPawnByIndex(int32_t PartyMemberIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetHeroPlayerPawnByIndex");

	FUFortFrontEndContext_GetHeroPlayerPawnByIndex_Params Parms;

	Parms.PartyMemberIndex = PartyMemberIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetHarvestingToolForLevel
class UFortWorldItemDefinition* UFortFrontEndContext::GetHarvestingToolForLevel(int32_t TheaterSlot, int32_t InHarvestingOptimizerLevel) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetHarvestingToolForLevel");

	FUFortFrontEndContext_GetHarvestingToolForLevel_Params Parms;

	Parms.TheaterSlot = TheaterSlot;
	Parms.InHarvestingOptimizerLevel = InHarvestingOptimizerLevel;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetFrontEndCamera
EFrontEndCamera UFortFrontEndContext::GetFrontEndCamera() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetFrontEndCamera");

	FUFortFrontEndContext_GetFrontEndCamera_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetFeatureState
EFortFrontEndFeatureState UFortFrontEndContext::GetFeatureState(EFortFrontEndFeature Feature) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetFeatureState");

	FUFortFrontEndContext_GetFeatureState_Params Parms;

	Parms.Feature = Feature;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetFabricatorStoredGooAmount
int32_t UFortFrontEndContext::GetFabricatorStoredGooAmount(int32_t TheaterSlot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetFabricatorStoredGooAmount");

	FUFortFrontEndContext_GetFabricatorStoredGooAmount_Params Parms;

	Parms.TheaterSlot = TheaterSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetFabricatorMaxCapacity
int32_t UFortFrontEndContext::GetFabricatorMaxCapacity(int32_t TheaterSlot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetFabricatorMaxCapacity");

	FUFortFrontEndContext_GetFabricatorMaxCapacity_Params Parms;

	Parms.TheaterSlot = TheaterSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetFabricatorIncomingGooAmount
int32_t UFortFrontEndContext::GetFabricatorIncomingGooAmount(int32_t TheaterSlot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetFabricatorIncomingGooAmount");

	FUFortFrontEndContext_GetFabricatorIncomingGooAmount_Params Parms;

	Parms.TheaterSlot = TheaterSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetFabricatorDisintegrationSecondsRemaining
int32_t UFortFrontEndContext::GetFabricatorDisintegrationSecondsRemaining(int32_t TheaterSlot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetFabricatorDisintegrationSecondsRemaining");

	FUFortFrontEndContext_GetFabricatorDisintegrationSecondsRemaining_Params Parms;

	Parms.TheaterSlot = TheaterSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetDesiredPlayButtonCamera
EFrontEndCamera UFortFrontEndContext::GetDesiredPlayButtonCamera() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetDesiredPlayButtonCamera");

	FUFortFrontEndContext_GetDesiredPlayButtonCamera_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetCurrentTheaterName
FText UFortFrontEndContext::GetCurrentTheaterName() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetCurrentTheaterName");

	FUFortFrontEndContext_GetCurrentTheaterName_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetAvailibleDifficulties
TArray<FGameDifficultyInfo> UFortFrontEndContext::GetAvailibleDifficulties() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetAvailibleDifficulties");

	FUFortFrontEndContext_GetAvailibleDifficulties_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetAttributeIcon
FFortMultiSizeBrush UFortFrontEndContext::GetAttributeIcon(FFortAttributeInfo InAttribute, FGameplayTagContainer InRequiredTags)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetAttributeIcon");

	FUFortFrontEndContext_GetAttributeIcon_Params Parms;

	Parms.InAttribute = InAttribute;
	Parms.InRequiredTags = InRequiredTags;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetAttributeDisplayName
FText UFortFrontEndContext::GetAttributeDisplayName(FFortAttributeInfo InAttribute, FGameplayTagContainer InRequiredTags)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetAttributeDisplayName");

	FUFortFrontEndContext_GetAttributeDisplayName_Params Parms;

	Parms.InAttribute = InAttribute;
	Parms.InRequiredTags = InRequiredTags;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetAttributeDescription
FText UFortFrontEndContext::GetAttributeDescription(FFortAttributeInfo InAttribute, FGameplayTagContainer InRequiredTags)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetAttributeDescription");

	FUFortFrontEndContext_GetAttributeDescription_Params Parms;

	Parms.InAttribute = InAttribute;
	Parms.InRequiredTags = InRequiredTags;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetAllTheaterData
bool UFortFrontEndContext::GetAllTheaterData(TArray<FFortTheaterMapData> OutAllTheaterData) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetAllTheaterData");

	FUFortFrontEndContext_GetAllTheaterData_Params Parms;

	Parms.OutAllTheaterData = OutAllTheaterData;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetActiveTileMissionDetails
bool UFortFrontEndContext::GetActiveTileMissionDetails(FFortMissionDetails MissionDetails) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetActiveTileMissionDetails");

	FUFortFrontEndContext_GetActiveTileMissionDetails_Params Parms;

	Parms.MissionDetails = MissionDetails;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetActiveTile
class AFortTheaterMapTile* UFortFrontEndContext::GetActiveTile() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetActiveTile");

	FUFortFrontEndContext_GetActiveTile_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:GetAccountLevelUpRewards
void UFortFrontEndContext::GetAccountLevelUpRewards(TArray<FFortItemQuantityPair> Rewards, int32_t AccountLevel) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:GetAccountLevelUpRewards");

	FUFortFrontEndContext_GetAccountLevelUpRewards_Params Parms;

	Parms.Rewards = Rewards;
	Parms.AccountLevel = AccountLevel;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:ForceSetFeatureState
void UFortFrontEndContext::ForceSetFeatureState(EFortFrontEndFeature Feature, EFortFrontEndFeatureState State)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:ForceSetFeatureState");

	FUFortFrontEndContext_ForceSetFeatureState_Params Parms;

	Parms.Feature = Feature;
	Parms.State = State;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:CreateKeepMenu
void UFortFrontEndContext::CreateKeepMenu(class UNativeWidgetHost* InNativeWidgetHost, class UHomeBaseBuilding* Building) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:CreateKeepMenu");

	FUFortFrontEndContext_CreateKeepMenu_Params Parms;

	Parms.InNativeWidgetHost = InNativeWidgetHost;
	Parms.Building = Building;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:ClearSelectedTheater
void UFortFrontEndContext::ClearSelectedTheater()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:ClearSelectedTheater");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortFrontEndContext:ClearNativeWidget
void UFortFrontEndContext::ClearNativeWidget(class UNativeWidgetHost* InNativeWidgetHost)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:ClearNativeWidget");

	FUFortFrontEndContext_ClearNativeWidget_Params Parms;

	Parms.InNativeWidgetHost = InNativeWidgetHost;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortFrontEndContext:BindToFeatureStateAndInitialize
void UFortFrontEndContext::BindToFeatureStateAndInitialize(EFortFrontEndFeature Feature, struct FFortniteUI_FrontEndFeatureStateChangedListener__DelegateSignature Delegate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortFrontEndContext:BindToFeatureStateAndInitialize");

	FUFortFrontEndContext_BindToFeatureStateAndInitialize_Params Parms;

	Parms.Feature = Feature;
	Parms.Delegate = Delegate;

	ProcessEvent(FN, &Parms);
}

UClass* UFortGlobalUIContext::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortGlobalUIContext");

	return Class;
}

// Function /Script/FortniteUI.FortGlobalUIContext:UnregisterToReceiveNotifications
void UFortGlobalUIContext::UnregisterToReceiveNotifications()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:UnregisterToReceiveNotifications");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGlobalUIContext:UnregisterScriptedAction
void UFortGlobalUIContext::UnregisterScriptedAction(class UClass* ScriptedAction)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:UnregisterScriptedAction");

	FUFortGlobalUIContext_UnregisterScriptedAction_Params Parms;

	Parms.ScriptedAction = ScriptedAction;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:TakeScreenshot
void UFortGlobalUIContext::TakeScreenshot(struct FFortniteUI_ScreenshotCaptured__DelegateSignature Callback)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:TakeScreenshot");

	FUFortGlobalUIContext_TakeScreenshot_Params Parms;

	Parms.Callback = Callback;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:ShowBang
void UFortGlobalUIContext::ShowBang(EFortBangType Type)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:ShowBang");

	FUFortGlobalUIContext_ShowBang_Params Parms;

	Parms.Type = Type;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:ShouldCloseMenuOnEscape
bool UFortGlobalUIContext::ShouldCloseMenuOnEscape() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:ShouldCloseMenuOnEscape");

	FUFortGlobalUIContext_ShouldCloseMenuOnEscape_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:SendUINavigationAnalytic
void UFortGlobalUIContext::SendUINavigationAnalytic(FString Destination, bool bUserInitiated)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:SendUINavigationAnalytic");

	FUFortGlobalUIContext_SendUINavigationAnalytic_Params Parms;

	Parms.Destination = Destination;
	Parms.bUserInitiated = bUserInitiated;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:SendLeaveZoneAnalytic
void UFortGlobalUIContext::SendLeaveZoneAnalytic()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:SendLeaveZoneAnalytic");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGlobalUIContext:SendExperienceRatingAnalytic
void UFortGlobalUIContext::SendExperienceRatingAnalytic(FString RatingType, int32_t StarCount, FString GameSessionID, FString Comment)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:SendExperienceRatingAnalytic");

	FUFortGlobalUIContext_SendExperienceRatingAnalytic_Params Parms;

	Parms.RatingType = RatingType;
	Parms.StarCount = StarCount;
	Parms.GameSessionID = GameSessionID;
	Parms.Comment = Comment;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:RemoveNotification
void UFortGlobalUIContext::RemoveNotification(FFortDialogDescription NotificationDescription)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:RemoveNotification");

	FUFortGlobalUIContext_RemoveNotification_Params Parms;

	Parms.NotificationDescription = NotificationDescription;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:RegisterToReceiveNotifications
void UFortGlobalUIContext::RegisterToReceiveNotifications(struct FFortniteGame_OnFortNotificationAvailable__DelegateSignature InOnNotifcationAvailable)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:RegisterToReceiveNotifications");

	FUFortGlobalUIContext_RegisterToReceiveNotifications_Params Parms;

	Parms.InOnNotifcationAvailable = InOnNotifcationAvailable;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:RegisterScriptedActions
void UFortGlobalUIContext::RegisterScriptedActions(TArray<class UClass*> ScriptedActions)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:RegisterScriptedActions");

	FUFortGlobalUIContext_RegisterScriptedActions_Params Parms;

	Parms.ScriptedActions = ScriptedActions;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:RegisterScriptedAction
void UFortGlobalUIContext::RegisterScriptedAction(class UClass* ScriptedAction)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:RegisterScriptedAction");

	FUFortGlobalUIContext_RegisterScriptedAction_Params Parms;

	Parms.ScriptedAction = ScriptedAction;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:QuitGame
void UFortGlobalUIContext::QuitGame()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:QuitGame");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGlobalUIContext:QueryGameBackendVersion
void UFortGlobalUIContext::QueryGameBackendVersion()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:QueryGameBackendVersion");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGlobalUIContext:ProcessNotificationResult
void UFortGlobalUIContext::ProcessNotificationResult(EFortDialogResult InResult, FFortDialogDescription NotificationDescription)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:ProcessNotificationResult");

	FUFortGlobalUIContext_ProcessNotificationResult_Params Parms;

	Parms.InResult = InResult;
	Parms.NotificationDescription = NotificationDescription;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/FortniteUI.FortGlobalUIContext:OnQueryFortBackendVersionDelegate__DelegateSignature
void UFortGlobalUIContext::OnQueryFortBackendVersionDelegate__DelegateSignature(FFortBackendVersion FortBackendVersion)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:OnQueryFortBackendVersionDelegate__DelegateSignature");

	FUFortGlobalUIContext_OnQueryFortBackendVersionDelegate__DelegateSignature_Params Parms;

	Parms.FortBackendVersion = FortBackendVersion;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/FortniteUI.FortGlobalUIContext:OnNetworkErrorDelegate__DelegateSignature
void UFortGlobalUIContext::OnNetworkErrorDelegate__DelegateSignature(FText NetworkErrorMessage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:OnNetworkErrorDelegate__DelegateSignature");

	FUFortGlobalUIContext_OnNetworkErrorDelegate__DelegateSignature_Params Parms;

	Parms.NetworkErrorMessage = NetworkErrorMessage;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:Logout
void UFortGlobalUIContext::Logout()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:Logout");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGlobalUIContext:IsUIVisible
bool UFortGlobalUIContext::IsUIVisible() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:IsUIVisible");

	FUFortGlobalUIContext_IsUIVisible_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:IsInZone
bool UFortGlobalUIContext::IsInZone() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:IsInZone");

	FUFortGlobalUIContext_IsInZone_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:IsInOutpostZone
bool UFortGlobalUIContext::IsInOutpostZone() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:IsInOutpostZone");

	FUFortGlobalUIContext_IsInOutpostZone_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:IsHUDVisible
bool UFortGlobalUIContext::IsHUDVisible()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:IsHUDVisible");

	FUFortGlobalUIContext_IsHUDVisible_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:IsBluGloEnabled
bool UFortGlobalUIContext::IsBluGloEnabled()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:IsBluGloEnabled");

	FUFortGlobalUIContext_IsBluGloEnabled_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:HideBang
void UFortGlobalUIContext::HideBang(EFortBangType Type)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:HideBang");

	FUFortGlobalUIContext_HideBang_Params Parms;

	Parms.Type = Type;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetWatermark
FString UFortGlobalUIContext::GetWatermark()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetWatermark");

	FUFortGlobalUIContext_GetWatermark_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetTeamPower
void UFortGlobalUIContext::GetTeamPower(int32_t TeamPower, int32_t PersonalPower) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetTeamPower");

	FUFortGlobalUIContext_GetTeamPower_Params Parms;

	Parms.TeamPower = TeamPower;
	Parms.PersonalPower = PersonalPower;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetQuestManager
class UFortQuestManager* UFortGlobalUIContext::GetQuestManager() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetQuestManager");

	FUFortGlobalUIContext_GetQuestManager_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetNextNotification
bool UFortGlobalUIContext::GetNextNotification(FFortDialogDescription NotifcationDescription)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetNextNotification");

	FUFortGlobalUIContext_GetNextNotification_Params Parms;

	Parms.NotifcationDescription = NotifcationDescription;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetMessageManager
class UFortUIMessageManager* UFortGlobalUIContext::GetMessageManager(FName ManagerName, bool bCreatedNew)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetMessageManager");

	FUFortGlobalUIContext_GetMessageManager_Params Parms;

	Parms.ManagerName = ManagerName;
	Parms.bCreatedNew = bCreatedNew;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetLastGameSummaryInfo
FGameSummaryInfo UFortGlobalUIContext::GetLastGameSummaryInfo() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetLastGameSummaryInfo");

	FUFortGlobalUIContext_GetLastGameSummaryInfo_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetKeyTextForAction
FText UFortGlobalUIContext::GetKeyTextForAction(FName Action) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetKeyTextForAction");

	FUFortGlobalUIContext_GetKeyTextForAction_Params Parms;

	Parms.Action = Action;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetKeyForAction
FKey UFortGlobalUIContext::GetKeyForAction(FName Action) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetKeyForAction");

	FUFortGlobalUIContext_GetKeyForAction_Params Parms;

	Parms.Action = Action;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetGameBackendVersion
FFortBackendVersion UFortGlobalUIContext::GetGameBackendVersion()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetGameBackendVersion");

	FUFortGlobalUIContext_GetGameBackendVersion_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetFeatureState
EFortUIFeatureState UFortGlobalUIContext::GetFeatureState(EFortUIFeature Feature) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetFeatureState");

	FUFortGlobalUIContext_GetFeatureState_Params Parms;

	Parms.Feature = Feature;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetBackendName
FString UFortGlobalUIContext::GetBackendName()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetBackendName");

	FUFortGlobalUIContext_GetBackendName_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:GetActiveKeybindSet
EFortInputPreset UFortGlobalUIContext::GetActiveKeybindSet() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:GetActiveKeybindSet");

	FUFortGlobalUIContext_GetActiveKeybindSet_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:DisplayStateContent
void UFortGlobalUIContext::DisplayStateContent(bool bDisplay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:DisplayStateContent");

	FUFortGlobalUIContext_DisplayStateContent_Params Parms;

	Parms.bDisplay = bDisplay;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:ClearSelectionGroup
void UFortGlobalUIContext::ClearSelectionGroup(FName SelectionGroup)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:ClearSelectionGroup");

	FUFortGlobalUIContext_ClearSelectionGroup_Params Parms;

	Parms.SelectionGroup = SelectionGroup;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:ClearLastGameSummaryInfo
void UFortGlobalUIContext::ClearLastGameSummaryInfo() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:ClearLastGameSummaryInfo");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGlobalUIContext:CheckNetworkError
void UFortGlobalUIContext::CheckNetworkError()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:CheckNetworkError");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGlobalUIContext:CheckFlag
void UFortGlobalUIContext::CheckFlag(FString FlagName, EFlagStatus OutStatus)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:CheckFlag");

	FUFortGlobalUIContext_CheckFlag_Params Parms;

	Parms.FlagName = FlagName;
	Parms.OutStatus = OutStatus;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGlobalUIContext:BindToFeatureStateAndInitialize
void UFortGlobalUIContext::BindToFeatureStateAndInitialize(EFortUIFeature Feature, struct FFortniteUI_UIFeatureStateChangedListener__DelegateSignature Delegate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGlobalUIContext:BindToFeatureStateAndInitialize");

	FUFortGlobalUIContext_BindToFeatureStateAndInitialize_Params Parms;

	Parms.Feature = Feature;
	Parms.Delegate = Delegate;

	ProcessEvent(FN, &Parms);
}

UClass* UFortGridPickerTile::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortGridPickerTile");

	return Class;
}

// Function /Script/FortniteUI.FortGridPickerTile:SetData
void UFortGridPickerTile::SetData(class UObject* InData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridPickerTile:SetData");

	FUFortGridPickerTile_SetData_Params Parms;

	Parms.InData = InData;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGridPickerTile:OnMouseLeave
void UFortGridPickerTile::OnMouseLeave()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridPickerTile:OnMouseLeave");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGridPickerTile:OnMouseEnter
void UFortGridPickerTile::OnMouseEnter()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridPickerTile:OnMouseEnter");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGridPickerTile:OnClicked
void UFortGridPickerTile::OnClicked()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridPickerTile:OnClicked");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortGridPickerTile:ForwardClicked
void UFortGridPickerTile::ForwardClicked()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridPickerTile:ForwardClicked");

	ProcessEvent(FN, nullptr);
}

UClass* UFortGridWidgetBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortGridWidgetBase");

	return Class;
}

// Function /Script/FortniteUI.FortGridWidgetBase:SetTileWidth
void UFortGridWidgetBase::SetTileWidth(float Width)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridWidgetBase:SetTileWidth");

	FUFortGridWidgetBase_SetTileWidth_Params Parms;

	Parms.Width = Width;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGridWidgetBase:SetTilesDown
void UFortGridWidgetBase::SetTilesDown(int32_t Down)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridWidgetBase:SetTilesDown");

	FUFortGridWidgetBase_SetTilesDown_Params Parms;

	Parms.Down = Down;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGridWidgetBase:SetTilesAcross
void UFortGridWidgetBase::SetTilesAcross(int32_t Across)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridWidgetBase:SetTilesAcross");

	FUFortGridWidgetBase_SetTilesAcross_Params Parms;

	Parms.Across = Across;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGridWidgetBase:SetTilePadding
void UFortGridWidgetBase::SetTilePadding(FMargin Padding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridWidgetBase:SetTilePadding");

	FUFortGridWidgetBase_SetTilePadding_Params Parms;

	Parms.Padding = Padding;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGridWidgetBase:SetTileHeight
void UFortGridWidgetBase::SetTileHeight(float Height)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridWidgetBase:SetTileHeight");

	FUFortGridWidgetBase_SetTileHeight_Params Parms;

	Parms.Height = Height;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGridWidgetBase:SetPeekOverflowTilePercentage
void UFortGridWidgetBase::SetPeekOverflowTilePercentage(float Percent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridWidgetBase:SetPeekOverflowTilePercentage");

	FUFortGridWidgetBase_SetPeekOverflowTilePercentage_Params Parms;

	Parms.Percent = Percent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGridWidgetBase:SetDataProvider
void UFortGridWidgetBase::SetDataProvider(TArray<class UObject*> Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridWidgetBase:SetDataProvider");

	FUFortGridWidgetBase_SetDataProvider_Params Parms;

	Parms.Data = Data;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGridWidgetBase:SetClearWidgetType
void UFortGridWidgetBase::SetClearWidgetType(class UClass* InClearWidgetType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridWidgetBase:SetClearWidgetType");

	FUFortGridWidgetBase_SetClearWidgetType_Params Parms;

	Parms.InClearWidgetType = InClearWidgetType;

	ProcessEvent(FN, &Parms);
}

UClass* UFortGridPickerGrid::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortGridPickerGrid");

	return Class;
}

UClass* UFortGridPickerButton::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortGridPickerButton");

	return Class;
}

// Function /Script/FortniteUI.FortGridPickerButton:SetIsOpen
void UFortGridPickerButton::SetIsOpen(bool ShouldBeOpen)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridPickerButton:SetIsOpen");

	FUFortGridPickerButton_SetIsOpen_Params Parms;

	Parms.ShouldBeOpen = ShouldBeOpen;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/FortniteUI.FortGridPickerButton:OnIsGridPickerOpenChanged__DelegateSignature
void UFortGridPickerButton::OnIsGridPickerOpenChanged__DelegateSignature(bool IsOpen)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridPickerButton:OnIsGridPickerOpenChanged__DelegateSignature");

	FUFortGridPickerButton_OnIsGridPickerOpenChanged__DelegateSignature_Params Parms;

	Parms.IsOpen = IsOpen;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortGridPickerButton:OnButtonClicked
void UFortGridPickerButton::OnButtonClicked()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridPickerButton:OnButtonClicked");

	ProcessEvent(FN, nullptr);
}

// DelegateFunction /Script/FortniteUI.FortGridPickerButton:CreateGridWidget__DelegateSignature
class UFortGridPickerGrid* UFortGridPickerButton::CreateGridWidget__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortGridPickerButton:CreateGridWidget__DelegateSignature");

	FUFortGridPickerButton_CreateGridWidget__DelegateSignature_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortGridWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortGridWidget");

	return Class;
}

UClass* UFortHeroManagementContext::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortHeroManagementContext");

	return Class;
}

// Function /Script/FortniteUI.FortHeroManagementContext:SetShowingStatsScreen
void UFortHeroManagementContext::SetShowingStatsScreen(bool bIsShowingStats)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:SetShowingStatsScreen");

	FUFortHeroManagementContext_SetShowingStatsScreen_Params Parms;

	Parms.bIsShowingStats = bIsShowingStats;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:SetHeroNameFromID
bool UFortHeroManagementContext::SetHeroNameFromID(FString HeroId, FString NewName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:SetHeroNameFromID");

	FUFortHeroManagementContext_SetHeroNameFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.NewName = NewName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:SetHeroName
bool UFortHeroManagementContext::SetHeroName(FString NewName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:SetHeroName");

	FUFortHeroManagementContext_SetHeroName_Params Parms;

	Parms.NewName = NewName;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:SetCurrentHero
bool UFortHeroManagementContext::SetCurrentHero(FString HeroId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:SetCurrentHero");

	FUFortHeroManagementContext_SetCurrentHero_Params Parms;

	Parms.HeroId = HeroId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:RequestSetTraitDepthFromID
bool UFortHeroManagementContext::RequestSetTraitDepthFromID(FString HeroId, int32_t TraitIdx, int32_t Depth)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:RequestSetTraitDepthFromID");

	FUFortHeroManagementContext_RequestSetTraitDepthFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;
	Parms.Depth = Depth;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:RequestSetTraitDepth
bool UFortHeroManagementContext::RequestSetTraitDepth(int32_t TraitIdx, int32_t Depth)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:RequestSetTraitDepth");

	FUFortHeroManagementContext_RequestSetTraitDepth_Params Parms;

	Parms.TraitIdx = TraitIdx;
	Parms.Depth = Depth;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:RequestDeleteHero
bool UFortHeroManagementContext::RequestDeleteHero(FString HeroId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:RequestDeleteHero");

	FUFortHeroManagementContext_RequestDeleteHero_Params Parms;

	Parms.HeroId = HeroId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:RequestCreateHero
bool UFortHeroManagementContext::RequestCreateHero(class UFortHeroType* HeroType, FString Name, EFortCustomGender Gender)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:RequestCreateHero");

	FUFortHeroManagementContext_RequestCreateHero_Params Parms;

	Parms.HeroType = HeroType;
	Parms.Name = Name;
	Parms.Gender = Gender;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:RedeemPrevAbilityFromID
bool UFortHeroManagementContext::RedeemPrevAbilityFromID(FString HeroId, int32_t TraitIdx)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:RedeemPrevAbilityFromID");

	FUFortHeroManagementContext_RedeemPrevAbilityFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:RedeemPrevAbility
bool UFortHeroManagementContext::RedeemPrevAbility(int32_t TraitIdx)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:RedeemPrevAbility");

	FUFortHeroManagementContext_RedeemPrevAbility_Params Parms;

	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:RedeemAllAbilitiesFromID
void UFortHeroManagementContext::RedeemAllAbilitiesFromID(FString HeroId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:RedeemAllAbilitiesFromID");

	FUFortHeroManagementContext_RedeemAllAbilitiesFromID_Params Parms;

	Parms.HeroId = HeroId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:RedeemAllAbilities
bool UFortHeroManagementContext::RedeemAllAbilities()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:RedeemAllAbilities");

	FUFortHeroManagementContext_RedeemAllAbilities_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:PurchaseNextAbilityFromID
bool UFortHeroManagementContext::PurchaseNextAbilityFromID(FString HeroId, int32_t TraitIdx)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:PurchaseNextAbilityFromID");

	FUFortHeroManagementContext_PurchaseNextAbilityFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:PurchaseNextAbility
bool UFortHeroManagementContext::PurchaseNextAbility(int32_t TraitIdx)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:PurchaseNextAbility");

	FUFortHeroManagementContext_PurchaseNextAbility_Params Parms;

	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:NumHeroSlots
int32_t UFortHeroManagementContext::NumHeroSlots() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:NumHeroSlots");

	FUFortHeroManagementContext_NumHeroSlots_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:IsSkillTreeUnlockedFromID
bool UFortHeroManagementContext::IsSkillTreeUnlockedFromID(FString HeroId) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:IsSkillTreeUnlockedFromID");

	FUFortHeroManagementContext_IsSkillTreeUnlockedFromID_Params Parms;

	Parms.HeroId = HeroId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:IsSkillTreeUnlocked
bool UFortHeroManagementContext::IsSkillTreeUnlocked() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:IsSkillTreeUnlocked");

	FUFortHeroManagementContext_IsSkillTreeUnlocked_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:IsShowingStatsScreen
bool UFortHeroManagementContext::IsShowingStatsScreen() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:IsShowingStatsScreen");

	FUFortHeroManagementContext_IsShowingStatsScreen_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:IsDeleteHeroEnabled
bool UFortHeroManagementContext::IsDeleteHeroEnabled() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:IsDeleteHeroEnabled");

	FUFortHeroManagementContext_IsDeleteHeroEnabled_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:IsCreateHeroEnabled
bool UFortHeroManagementContext::IsCreateHeroEnabled() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:IsCreateHeroEnabled");

	FUFortHeroManagementContext_IsCreateHeroEnabled_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetTraitFromID
class UFortTrait* UFortHeroManagementContext::GetTraitFromID(FString HeroId, int32_t TraitIdx) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetTraitFromID");

	FUFortHeroManagementContext_GetTraitFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetTraitDepthFromID
int32_t UFortHeroManagementContext::GetTraitDepthFromID(FString HeroId, int32_t TraitIdx) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetTraitDepthFromID");

	FUFortHeroManagementContext_GetTraitDepthFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetTraitDepth
bool UFortHeroManagementContext::GetTraitDepth(int32_t TraitIdx, int32_t Depth) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetTraitDepth");

	FUFortHeroManagementContext_GetTraitDepth_Params Parms;

	Parms.TraitIdx = TraitIdx;
	Parms.Depth = Depth;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetTrait
class UFortTrait* UFortHeroManagementContext::GetTrait(int32_t TraitIdx) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetTrait");

	FUFortHeroManagementContext_GetTrait_Params Parms;

	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetNumUnspentAbilityPointsFromID
int32_t UFortHeroManagementContext::GetNumUnspentAbilityPointsFromID(FString HeroId) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetNumUnspentAbilityPointsFromID");

	FUFortHeroManagementContext_GetNumUnspentAbilityPointsFromID_Params Parms;

	Parms.HeroId = HeroId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetNumUnspentAbilityPoints
bool UFortHeroManagementContext::GetNumUnspentAbilityPoints(int32_t NumAbilityPoints) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetNumUnspentAbilityPoints");

	FUFortHeroManagementContext_GetNumUnspentAbilityPoints_Params Parms;

	Parms.NumAbilityPoints = NumAbilityPoints;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetNumHeroTraits
int32_t UFortHeroManagementContext::GetNumHeroTraits() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetNumHeroTraits");

	FUFortHeroManagementContext_GetNumHeroTraits_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetNextAbilityCostFromID
int32_t UFortHeroManagementContext::GetNextAbilityCostFromID(FString HeroId, int32_t TraitIdx) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetNextAbilityCostFromID");

	FUFortHeroManagementContext_GetNextAbilityCostFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetNextAbilityCost
int32_t UFortHeroManagementContext::GetNextAbilityCost(int32_t TraitIdx) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetNextAbilityCost");

	FUFortHeroManagementContext_GetNextAbilityCost_Params Parms;

	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetMaxNameLength
int32_t UFortHeroManagementContext::GetMaxNameLength() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetMaxNameLength");

	FUFortHeroManagementContext_GetMaxNameLength_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetHeroDataFromID
FHeroUIData UFortHeroManagementContext::GetHeroDataFromID(FString HeroId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetHeroDataFromID");

	FUFortHeroManagementContext_GetHeroDataFromID_Params Parms;

	Parms.HeroId = HeroId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetHeroData
bool UFortHeroManagementContext::GetHeroData(FHeroUIData HeroData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetHeroData");

	FUFortHeroManagementContext_GetHeroData_Params Parms;

	Parms.HeroData = HeroData;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetEmptyHeroSlots
TArray<FEmptyHeroSlot> UFortHeroManagementContext::GetEmptyHeroSlots()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetEmptyHeroSlots");

	FUFortHeroManagementContext_GetEmptyHeroSlots_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetDisplayStats
void UFortHeroManagementContext::GetDisplayStats(TArray<FFortGameplayEffectModifierDescription> Stats)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetDisplayStats");

	FUFortHeroManagementContext_GetDisplayStats_Params Parms;

	Parms.Stats = Stats;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetCurrentHeroID
bool UFortHeroManagementContext::GetCurrentHeroID(FString HeroId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetCurrentHeroID");

	FUFortHeroManagementContext_GetCurrentHeroID_Params Parms;

	Parms.HeroId = HeroId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetCoreAbilitiesFromID
TArray<class UFortAbilityKit*> UFortHeroManagementContext::GetCoreAbilitiesFromID(FString HeroId) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetCoreAbilitiesFromID");

	FUFortHeroManagementContext_GetCoreAbilitiesFromID_Params Parms;

	Parms.HeroId = HeroId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetCoreAbilities
TArray<class UFortAbilityKit*> UFortHeroManagementContext::GetCoreAbilities() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetCoreAbilities");

	FUFortHeroManagementContext_GetCoreAbilities_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetAttributeValuesArrayFromID
bool UFortHeroManagementContext::GetAttributeValuesArrayFromID(FString HeroId, TArray<FGameplayAttribute> Attributes, TArray<float> Values) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetAttributeValuesArrayFromID");

	FUFortHeroManagementContext_GetAttributeValuesArrayFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.Attributes = Attributes;
	Parms.Values = Values;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetAttributeValuesArray
bool UFortHeroManagementContext::GetAttributeValuesArray(TArray<FGameplayAttribute> Attributes, TArray<float> Values) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetAttributeValuesArray");

	FUFortHeroManagementContext_GetAttributeValuesArray_Params Parms;

	Parms.Attributes = Attributes;
	Parms.Values = Values;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetAttributeValueFromID
float UFortHeroManagementContext::GetAttributeValueFromID(FString HeroId, FGameplayAttribute Attribute) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetAttributeValueFromID");

	FUFortHeroManagementContext_GetAttributeValueFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.Attribute = Attribute;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetAttributeValue
float UFortHeroManagementContext::GetAttributeValue(FGameplayAttribute Attribute) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetAttributeValue");

	FUFortHeroManagementContext_GetAttributeValue_Params Parms;

	Parms.Attribute = Attribute;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetAllHeroIDs
TArray<FString> UFortHeroManagementContext::GetAllHeroIDs() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetAllHeroIDs");

	FUFortHeroManagementContext_GetAllHeroIDs_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetAbilityCostFromID
int32_t UFortHeroManagementContext::GetAbilityCostFromID(FString HeroId, int32_t TraitIdx, int32_t TraitDepth) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetAbilityCostFromID");

	FUFortHeroManagementContext_GetAbilityCostFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;
	Parms.TraitDepth = TraitDepth;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GetAbilityCost
int32_t UFortHeroManagementContext::GetAbilityCost(int32_t TraitIdx, int32_t TraitDepth) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GetAbilityCost");

	FUFortHeroManagementContext_GetAbilityCost_Params Parms;

	Parms.TraitIdx = TraitIdx;
	Parms.TraitDepth = TraitDepth;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:GenerateRandomHeroName
void UFortHeroManagementContext::GenerateRandomHeroName(class UDataTable* NameTable, FString Name) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:GenerateRandomHeroName");

	FUFortHeroManagementContext_GenerateRandomHeroName_Params Parms;

	Parms.NameTable = NameTable;
	Parms.Name = Name;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:CheckHeroNameValidity
ENameStatus UFortHeroManagementContext::CheckHeroNameValidity(FString Name) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:CheckHeroNameValidity");

	FUFortHeroManagementContext_CheckHeroNameValidity_Params Parms;

	Parms.Name = Name;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:CanRedeemAllAbilities
bool UFortHeroManagementContext::CanRedeemAllAbilities() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:CanRedeemAllAbilities");

	FUFortHeroManagementContext_CanRedeemAllAbilities_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:CanModifyTraitDepthFromID
bool UFortHeroManagementContext::CanModifyTraitDepthFromID(FString HeroId, int32_t TraitIdx) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:CanModifyTraitDepthFromID");

	FUFortHeroManagementContext_CanModifyTraitDepthFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:CanModifyTraitDepth
bool UFortHeroManagementContext::CanModifyTraitDepth(int32_t TraitIdx) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:CanModifyTraitDepth");

	FUFortHeroManagementContext_CanModifyTraitDepth_Params Parms;

	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:CanAffordNextAbilityFromID
bool UFortHeroManagementContext::CanAffordNextAbilityFromID(FString HeroId, int32_t TraitIdx)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:CanAffordNextAbilityFromID");

	FUFortHeroManagementContext_CanAffordNextAbilityFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:CanAffordNextAbility
bool UFortHeroManagementContext::CanAffordNextAbility(int32_t TraitIdx)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:CanAffordNextAbility");

	FUFortHeroManagementContext_CanAffordNextAbility_Params Parms;

	Parms.TraitIdx = TraitIdx;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:CanAffordAbilityFromID
bool UFortHeroManagementContext::CanAffordAbilityFromID(FString HeroId, int32_t TraitIdx, int32_t TraitDepth)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:CanAffordAbilityFromID");

	FUFortHeroManagementContext_CanAffordAbilityFromID_Params Parms;

	Parms.HeroId = HeroId;
	Parms.TraitIdx = TraitIdx;
	Parms.TraitDepth = TraitDepth;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHeroManagementContext:CanAffordAbility
bool UFortHeroManagementContext::CanAffordAbility(int32_t TraitIdx, int32_t TraitDepth)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHeroManagementContext:CanAffordAbility");

	FUFortHeroManagementContext_CanAffordAbility_Params Parms;

	Parms.TraitIdx = TraitIdx;
	Parms.TraitDepth = TraitDepth;

	ProcessEvent(FN, &Parms);
}

UClass* UFortHUDContext::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortHUDContext");

	return Class;
}

// Function /Script/FortniteUI.FortHUDContext:SetIndicatorsAllowed
void UFortHUDContext::SetIndicatorsAllowed(bool bIndicatorsAllowed)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:SetIndicatorsAllowed");

	FUFortHUDContext_SetIndicatorsAllowed_Params Parms;

	Parms.bIndicatorsAllowed = bIndicatorsAllowed;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:IsInCursorMode
bool UFortHUDContext::IsInCursorMode() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:IsInCursorMode");

	FUFortHUDContext_IsInCursorMode_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:HandleLocalPawnDied
void UFortHUDContext::HandleLocalPawnDied(FFortPlayerDeathReport DeathReport)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:HandleLocalPawnDied");

	FUFortHUDContext_HandleLocalPawnDied_Params Parms;

	Parms.DeathReport = DeathReport;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:GetTeamCornerstone
class AFortPvPBaseCornerstone* UFortHUDContext::GetTeamCornerstone(EFortTeam Team) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:GetTeamCornerstone");

	FUFortHUDContext_GetTeamCornerstone_Params Parms;

	Parms.Team = Team;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:GetScoreDisplayFactor
float UFortHUDContext::GetScoreDisplayFactor() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:GetScoreDisplayFactor");

	FUFortHUDContext_GetScoreDisplayFactor_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:GetPlayerStateZone
class AFortPlayerStateZone* UFortHUDContext::GetPlayerStateZone() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:GetPlayerStateZone");

	FUFortHUDContext_GetPlayerStateZone_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:GetPlayerAbilitySystemComponent
class UFortAbilitySystemComponent* UFortHUDContext::GetPlayerAbilitySystemComponent() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:GetPlayerAbilitySystemComponent");

	FUFortHUDContext_GetPlayerAbilitySystemComponent_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:GetKillerVisualInfoFromDeathReport
FFortKillerVisualInfo UFortHUDContext::GetKillerVisualInfoFromDeathReport(FFortPlayerDeathReport DeathReport)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:GetKillerVisualInfoFromDeathReport");

	FUFortHUDContext_GetKillerVisualInfoFromDeathReport_Params Parms;

	Parms.DeathReport = DeathReport;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:GetGameStateZone
class AFortGameStateZone* UFortHUDContext::GetGameStateZone() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:GetGameStateZone");

	FUFortHUDContext_GetGameStateZone_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:GetFocusedBuildingInfo
bool UFortHUDContext::GetFocusedBuildingInfo(FFortFocusedBuildingInfo OutBuildingInfo) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:GetFocusedBuildingInfo");

	FUFortHUDContext_GetFocusedBuildingInfo_Params Parms;

	Parms.OutBuildingInfo = OutBuildingInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:GetCurrentHero
class UFortHero* UFortHUDContext::GetCurrentHero() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:GetCurrentHero");

	FUFortHUDContext_GetCurrentHero_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:ForwardOnWeaponEquipped
void UFortHUDContext::ForwardOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:ForwardOnWeaponEquipped");

	FUFortHUDContext_ForwardOnWeaponEquipped_Params Parms;

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:ForwardOnAbilityDecisionWindowStackUpdated
void UFortHUDContext::ForwardOnAbilityDecisionWindowStackUpdated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:ForwardOnAbilityDecisionWindowStackUpdated");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortHUDContext:EnterCursorMode
void UFortHUDContext::EnterCursorMode(FName ActionName, class UUserWidget* CursorModeWidget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:EnterCursorMode");

	FUFortHUDContext_EnterCursorMode_Params Parms;

	Parms.ActionName = ActionName;
	Parms.CursorModeWidget = CursorModeWidget;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortHUDContext:EnterCameraMode
void UFortHUDContext::EnterCameraMode()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:EnterCameraMode");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortHUDContext:AreIndicatorsEnabled
bool UFortHUDContext::AreIndicatorsEnabled() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortHUDContext:AreIndicatorsEnabled");

	FUFortHUDContext_AreIndicatorsEnabled_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortInventoryContext::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortInventoryContext");

	return Class;
}

// Function /Script/FortniteUI.FortInventoryContext:WillQuickBarAcceptItem
bool UFortInventoryContext::WillQuickBarAcceptItem(class UFortItem* Item, EFortQuickBars InQuickBar, int32_t Slot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:WillQuickBarAcceptItem");

	FUFortInventoryContext_WillQuickBarAcceptItem_Params Parms;

	Parms.Item = Item;
	Parms.InQuickBar = InQuickBar;
	Parms.Slot = Slot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:UnlockSchematic
void UFortInventoryContext::UnlockSchematic(class UFortSchematicItemDefinition* SchematicDefinition)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:UnlockSchematic");

	FUFortInventoryContext_UnlockSchematic_Params Parms;

	Parms.SchematicDefinition = SchematicDefinition;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:UnlockAllSchematics
void UFortInventoryContext::UnlockAllSchematics()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:UnlockAllSchematics");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortInventoryContext:SetSchematicPinned
bool UFortInventoryContext::SetSchematicPinned(class UFortSchematicItem* Schematic, bool bEnabled)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:SetSchematicPinned");

	FUFortInventoryContext_SetSchematicPinned_Params Parms;

	Parms.Schematic = Schematic;
	Parms.bEnabled = bEnabled;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:RemoveItemFromQuickBar
bool UFortInventoryContext::RemoveItemFromQuickBar(class UFortItem* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:RemoveItemFromQuickBar");

	FUFortInventoryContext_RemoveItemFromQuickBar_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:LockAllSchematics
void UFortInventoryContext::LockAllSchematics()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:LockAllSchematics");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortInventoryContext:IsSchematicPinned
bool UFortInventoryContext::IsSchematicPinned(class UFortSchematicItem* Schematic) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:IsSchematicPinned");

	FUFortInventoryContext_IsSchematicPinned_Params Parms;

	Parms.Schematic = Schematic;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetWorldItemList
void UFortInventoryContext::GetWorldItemList(TArray<class UFortWorldItem*> Items, FFortItemListFilter FilterSettings) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetWorldItemList");

	FUFortInventoryContext_GetWorldItemList_Params Parms;

	Parms.Items = Items;
	Parms.FilterSettings = FilterSettings;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetSchematicItemList
void UFortInventoryContext::GetSchematicItemList(TArray<class UFortSchematicItem*> Items, FFortItemListFilter FilterSettings) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetSchematicItemList");

	FUFortInventoryContext_GetSchematicItemList_Params Parms;

	Parms.Items = Items;
	Parms.FilterSettings = FilterSettings;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetResourceItemDefinition
class UFortResourceItemDefinition* UFortInventoryContext::GetResourceItemDefinition(EFortResourceType ResourceType) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetResourceItemDefinition");

	FUFortInventoryContext_GetResourceItemDefinition_Params Parms;

	Parms.ResourceType = ResourceType;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetResourceIcon
class UTexture2D* UFortInventoryContext::GetResourceIcon(EFortResourceType ResourceType) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetResourceIcon");

	FUFortInventoryContext_GetResourceIcon_Params Parms;

	Parms.ResourceType = ResourceType;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetResourceCount
int32_t UFortInventoryContext::GetResourceCount(EFortResourceType ResourceType) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetResourceCount");

	FUFortInventoryContext_GetResourceCount_Params Parms;

	Parms.ResourceType = ResourceType;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetQuickBarSlottedItem
class UFortItem* UFortInventoryContext::GetQuickBarSlottedItem(EFortQuickBars InQuickBar, int32_t Slot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetQuickBarSlottedItem");

	FUFortInventoryContext_GetQuickBarSlottedItem_Params Parms;

	Parms.InQuickBar = InQuickBar;
	Parms.Slot = Slot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetQuickbarFocus
void UFortInventoryContext::GetQuickbarFocus(EFortQuickBars OutQuickBar, int32_t OutSlot) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetQuickbarFocus");

	FUFortInventoryContext_GetQuickbarFocus_Params Parms;

	Parms.OutQuickBar = OutQuickBar;
	Parms.OutSlot = OutSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetPinnedSchematicList
void UFortInventoryContext::GetPinnedSchematicList(TArray<class UFortSchematicItem*> PinnedItems) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetPinnedSchematicList");

	FUFortInventoryContext_GetPinnedSchematicList_Params Parms;

	Parms.PinnedItems = PinnedItems;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetNumInInventory
int32_t UFortInventoryContext::GetNumInInventory(class UFortWorldItemDefinition* ItemDefinition, bool bIncludeReserved) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetNumInInventory");

	FUFortInventoryContext_GetNumInInventory_Params Parms;

	Parms.ItemDefinition = ItemDefinition;
	Parms.bIncludeReserved = bIncludeReserved;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetEquippedWeapon
class AFortWeapon* UFortInventoryContext::GetEquippedWeapon() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetEquippedWeapon");

	FUFortInventoryContext_GetEquippedWeapon_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetCurrentResourceItemDefinition
class UFortResourceItemDefinition* UFortInventoryContext::GetCurrentResourceItemDefinition() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetCurrentResourceItemDefinition");

	FUFortInventoryContext_GetCurrentResourceItemDefinition_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetCurrentResourceIcon
class UTexture2D* UFortInventoryContext::GetCurrentResourceIcon() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetCurrentResourceIcon");

	FUFortInventoryContext_GetCurrentResourceIcon_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetCurrentResourceCount
int32_t UFortInventoryContext::GetCurrentResourceCount() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetCurrentResourceCount");

	FUFortInventoryContext_GetCurrentResourceCount_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetCurrentAmmoItemDefinition
class UFortWorldItemDefinition* UFortInventoryContext::GetCurrentAmmoItemDefinition() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetCurrentAmmoItemDefinition");

	FUFortInventoryContext_GetCurrentAmmoItemDefinition_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetCurrentAmmoIcon
class UTexture2D* UFortInventoryContext::GetCurrentAmmoIcon() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetCurrentAmmoIcon");

	FUFortInventoryContext_GetCurrentAmmoIcon_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:GetBackpackItemCounts
void UFortInventoryContext::GetBackpackItemCounts(int32_t ItemsCount, int32_t MaxItemsCount, int32_t OverflowItemsCount) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:GetBackpackItemCounts");

	FUFortInventoryContext_GetBackpackItemCounts_Params Parms;

	Parms.ItemsCount = ItemsCount;
	Parms.MaxItemsCount = MaxItemsCount;
	Parms.OverflowItemsCount = OverflowItemsCount;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:DropItemOnQuickBar
bool UFortInventoryContext::DropItemOnQuickBar(class UFortItem* Item, EFortQuickBars TargetQuickbar, int32_t TargetSlot)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:DropItemOnQuickBar");

	FUFortInventoryContext_DropItemOnQuickBar_Params Parms;

	Parms.Item = Item;
	Parms.TargetQuickbar = TargetQuickbar;
	Parms.TargetSlot = TargetSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:DropItemOnPlayerOrWorld
void UFortInventoryContext::DropItemOnPlayerOrWorld(class UFortWorldItem* ItemBeingDropped, class AFortPlayerState* InDestinationPlayer, class UWidget* OwnerWidget, FPointerEvent PointerEvent, FGeometry InGeometry)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:DropItemOnPlayerOrWorld");

	FUFortInventoryContext_DropItemOnPlayerOrWorld_Params Parms;

	Parms.ItemBeingDropped = ItemBeingDropped;
	Parms.InDestinationPlayer = InDestinationPlayer;
	Parms.OwnerWidget = OwnerWidget;
	Parms.PointerEvent = PointerEvent;
	Parms.InGeometry = InGeometry;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:DoesItemMatchFilter
bool UFortInventoryContext::DoesItemMatchFilter(class UFortItem* Item, FFortItemListFilter FilterSettings) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:DoesItemMatchFilter");

	FUFortInventoryContext_DoesItemMatchFilter_Params Parms;

	Parms.Item = Item;
	Parms.FilterSettings = FilterSettings;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:DisassembleItem
bool UFortInventoryContext::DisassembleItem(class UFortWorldItem* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:DisassembleItem");

	FUFortInventoryContext_DisassembleItem_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:CraftSchematic
bool UFortInventoryContext::CraftSchematic(class UFortSchematicItem* SchematicItem, EFortCraftFailCause FailCause)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:CraftSchematic");

	FUFortInventoryContext_CraftSchematic_Params Parms;

	Parms.SchematicItem = SchematicItem;
	Parms.FailCause = FailCause;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:CanPinSchematic
bool UFortInventoryContext::CanPinSchematic(class UFortSchematicItem* Schematic) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:CanPinSchematic");

	FUFortInventoryContext_CanPinSchematic_Params Parms;

	Parms.Schematic = Schematic;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:CanDisassembleItem
bool UFortInventoryContext::CanDisassembleItem(class UFortWorldItem* Item) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:CanDisassembleItem");

	FUFortInventoryContext_CanDisassembleItem_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:CanCraftSchematic
bool UFortInventoryContext::CanCraftSchematic(class UFortSchematicItem* SchematicItem, EFortCraftFailCause FailCause) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:CanCraftSchematic");

	FUFortInventoryContext_CanCraftSchematic_Params Parms;

	Parms.SchematicItem = SchematicItem;
	Parms.FailCause = FailCause;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortInventoryContext:ActivateItem
bool UFortInventoryContext::ActivateItem(class UFortItem* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortInventoryContext:ActivateItem");

	FUFortInventoryContext_ActivateItem_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

UClass* UFortLegacySlateBridgeWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortLegacySlateBridgeWidget");

	return Class;
}

// Function /Script/FortniteUI.FortLegacySlateBridgeWidget:UpdateSlateWidget
void UFortLegacySlateBridgeWidget::UpdateSlateWidget(EFortLegacySlateWidget SlateWidgetType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLegacySlateBridgeWidget:UpdateSlateWidget");

	FUFortLegacySlateBridgeWidget_UpdateSlateWidget_Params Parms;

	Parms.SlateWidgetType = SlateWidgetType;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLegacySlateBridgeWidget:SetOnCloseHandler
void UFortLegacySlateBridgeWidget::SetOnCloseHandler(struct FFortniteUI_OnCloseLegacyWidget__DelegateSignature OnCloseHandler)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLegacySlateBridgeWidget:SetOnCloseHandler");

	FUFortLegacySlateBridgeWidget_SetOnCloseHandler_Params Parms;

	Parms.OnCloseHandler = OnCloseHandler;

	ProcessEvent(FN, &Parms);
}

UClass* UFortListView::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortListView");

	return Class;
}

// Function /Script/FortniteUI.FortListView:SetItemSelected
bool UFortListView::SetItemSelected(class UObject* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListView:SetItemSelected");

	FUFortListView_SetItemSelected_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListView:SetIndexSelected
bool UFortListView::SetIndexSelected(int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListView:SetIndexSelected");

	FUFortListView_SetIndexSelected_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListView:SetDataProvider
void UFortListView::SetDataProvider(TArray<class UObject*> NewData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListView:SetDataProvider");

	FUFortListView_SetDataProvider_Params Parms;

	Parms.NewData = NewData;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListView:RemoveItemAt
void UFortListView::RemoveItemAt(int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListView:RemoveItemAt");

	FUFortListView_RemoveItemAt_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListView:GetItemAt
class UObject* UFortListView::GetItemAt(int32_t INDEX) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListView:GetItemAt");

	FUFortListView_GetItemAt_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListView:GetIndexForItem
int32_t UFortListView::GetIndexForItem(class UObject* Item) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListView:GetIndexForItem");

	FUFortListView_GetIndexForItem_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListView:ClearSelection
void UFortListView::ClearSelection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListView:ClearSelection");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortListView:Clear
void UFortListView::Clear()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListView:Clear");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortListView:AddItem
void UFortListView::AddItem(class UObject* NewItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListView:AddItem");

	FUFortListView_AddItem_Params Parms;

	Parms.NewItem = NewItem;

	ProcessEvent(FN, &Parms);
}

UClass* UFortModalContainerData::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortModalContainerData");

	return Class;
}

UClass* UFortModalContainerWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortModalContainerWidget");

	return Class;
}

UClass* UFortSocialListView::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortSocialListView");

	return Class;
}

// Function /Script/FortniteUI.FortSocialListView:SetList
void UFortSocialListView::SetList(TArray<class UFortSocialItem*> InList)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortSocialListView:SetList");

	FUFortSocialListView_SetList_Params Parms;

	Parms.InList = InList;

	ProcessEvent(FN, &Parms);
}

UClass* UFortStoreContext::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortStoreContext");

	return Class;
}

// Function /Script/FortniteUI.FortStoreContext:OpenWebPayment
bool UFortStoreContext::OpenWebPayment(FString AttemptedMTXOfferId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:OpenWebPayment");

	FUFortStoreContext_OpenWebPayment_Params Parms;

	Parms.AttemptedMTXOfferId = AttemptedMTXOfferId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:MakePurchase
ECardPackPurchaseError UFortStoreContext::MakePurchase(FCardPackOffer Offer, int32_t Quantity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:MakePurchase");

	FUFortStoreContext_MakePurchase_Params Parms;

	Parms.Offer = Offer;
	Parms.Quantity = Quantity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:IsNewStoreEnabled
bool UFortStoreContext::IsNewStoreEnabled() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:IsNewStoreEnabled");

	FUFortStoreContext_IsNewStoreEnabled_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:IsCatalogAvailable
bool UFortStoreContext::IsCatalogAvailable() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:IsCatalogAvailable");

	FUFortStoreContext_IsCatalogAvailable_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:GetTimeUntilMarketplaceRefresh
FTimespan UFortStoreContext::GetTimeUntilMarketplaceRefresh()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:GetTimeUntilMarketplaceRefresh");

	FUFortStoreContext_GetTimeUntilMarketplaceRefresh_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:GetTimeUntilDailyLimitReset
FTimespan UFortStoreContext::GetTimeUntilDailyLimitReset()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:GetTimeUntilDailyLimitReset");

	FUFortStoreContext_GetTimeUntilDailyLimitReset_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:GetStoreState
EFortStoreState UFortStoreContext::GetStoreState() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:GetStoreState");

	FUFortStoreContext_GetStoreState_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:GetRarityColor
FLinearColor UFortStoreContext::GetRarityColor(EFortRarity Rarity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:GetRarityColor");

	FUFortStoreContext_GetRarityColor_Params Parms;

	Parms.Rarity = Rarity;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:GetPreviousState
EFortStoreState UFortStoreContext::GetPreviousState() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:GetPreviousState");

	FUFortStoreContext_GetPreviousState_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:GetNumUnopenedCardPacksRemaining
int32_t UFortStoreContext::GetNumUnopenedCardPacksRemaining(class UFortCardPackItemDefinition* PackType) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:GetNumUnopenedCardPacksRemaining");

	FUFortStoreContext_GetNumUnopenedCardPacksRemaining_Params Parms;

	Parms.PackType = PackType;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:GetCard
bool UFortStoreContext::GetCard(int32_t CardIdx, FCard ResultOut) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:GetCard");

	FUFortStoreContext_GetCard_Params Parms;

	Parms.CardIdx = CardIdx;
	Parms.ResultOut = ResultOut;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:GetAccountItems
void UFortStoreContext::GetAccountItems(TArray<class UFortAccountItemDefinition*> AccountItemDefinitions, TArray<class UFortAccountItem*> AccountItems)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:GetAccountItems");

	FUFortStoreContext_GetAccountItems_Params Parms;

	Parms.AccountItemDefinitions = AccountItemDefinitions;
	Parms.AccountItems = AccountItems;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:FreshenCache
void UFortStoreContext::FreshenCache()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:FreshenCache");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortStoreContext:FireInteractionAnalyticsEvent
void UFortStoreContext::FireInteractionAnalyticsEvent(FString Interaction, FString Details) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:FireInteractionAnalyticsEvent");

	FUFortStoreContext_FireInteractionAnalyticsEvent_Params Parms;

	Parms.Interaction = Interaction;
	Parms.Details = Details;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:ExitWebPayment
bool UFortStoreContext::ExitWebPayment()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:ExitWebPayment");

	FUFortStoreContext_ExitWebPayment_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:ExitSummary
bool UFortStoreContext::ExitSummary()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:ExitSummary");

	FUFortStoreContext_ExitSummary_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:ExitCurrencyStore
bool UFortStoreContext::ExitCurrencyStore()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:ExitCurrencyStore");

	FUFortStoreContext_ExitCurrencyStore_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:ExitCardPackStore
bool UFortStoreContext::ExitCardPackStore()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:ExitCardPackStore");

	FUFortStoreContext_ExitCardPackStore_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:ErrorOccurred
bool UFortStoreContext::ErrorOccurred(FString ErrorAnalytics)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:ErrorOccurred");

	FUFortStoreContext_ErrorOccurred_Params Parms;

	Parms.ErrorAnalytics = ErrorAnalytics;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:EnterCurrencyStore
bool UFortStoreContext::EnterCurrencyStore(FString AttemptedPurchaseCardPackId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:EnterCurrencyStore");

	FUFortStoreContext_EnterCurrencyStore_Params Parms;

	Parms.AttemptedPurchaseCardPackId = AttemptedPurchaseCardPackId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:EnterCardPackStore
bool UFortStoreContext::EnterCardPackStore()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:EnterCardPackStore");

	FUFortStoreContext_EnterCardPackStore_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:DismissError
void UFortStoreContext::DismissError()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:DismissError");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortStoreContext:CardPackOpeningComplete
bool UFortStoreContext::CardPackOpeningComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:CardPackOpeningComplete");

	FUFortStoreContext_CardPackOpeningComplete_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:CardPackDestroyComplete
bool UFortStoreContext::CardPackDestroyComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:CardPackDestroyComplete");

	FUFortStoreContext_CardPackDestroyComplete_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:CardFrontRevealComplete
bool UFortStoreContext::CardFrontRevealComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:CardFrontRevealComplete");

	FUFortStoreContext_CardFrontRevealComplete_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:CardFlipComplete
bool UFortStoreContext::CardFlipComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:CardFlipComplete");

	FUFortStoreContext_CardFlipComplete_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:CardExitComplete
bool UFortStoreContext::CardExitComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:CardExitComplete");

	FUFortStoreContext_CardExitComplete_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:CardEntryComplete
bool UFortStoreContext::CardEntryComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:CardEntryComplete");

	FUFortStoreContext_CardEntryComplete_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:CardBackRevealComplete
bool UFortStoreContext::CardBackRevealComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:CardBackRevealComplete");

	FUFortStoreContext_CardBackRevealComplete_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortStoreContext:CardAddedToSummaryComplete
bool UFortStoreContext::CardAddedToSummaryComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortStoreContext:CardAddedToSummaryComplete");

	FUFortStoreContext_CardAddedToSummaryComplete_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortUIMessageManager::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortUIMessageManager");

	return Class;
}

// Function /Script/FortniteUI.FortUIMessageManager:HandleMessageRemoved
void UFortUIMessageManager::HandleMessageRemoved(class UFortUIMessageItemWidget* MessageItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIMessageManager:HandleMessageRemoved");

	FUFortUIMessageManager_HandleMessageRemoved_Params Parms;

	Parms.MessageItem = MessageItem;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIMessageManager:HandleMessageDisplayed
void UFortUIMessageManager::HandleMessageDisplayed(class UFortUIMessageItemWidget* MessageItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIMessageManager:HandleMessageDisplayed");

	FUFortUIMessageManager_HandleMessageDisplayed_Params Parms;

	Parms.MessageItem = MessageItem;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIMessageManager:GetNumDisplayedItems
int32_t UFortUIMessageManager::GetNumDisplayedItems() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIMessageManager:GetNumDisplayedItems");

	FUFortUIMessageManager_GetNumDisplayedItems_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIMessageManager:GetNextMessageInQueue
class UFortUIMessageItemWidget* UFortUIMessageManager::GetNextMessageInQueue()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIMessageManager:GetNextMessageInQueue");

	FUFortUIMessageManager_GetNextMessageInQueue_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIMessageManager:AddMessageItem
void UFortUIMessageManager::AddMessageItem(class UFortUIMessageItemWidget* MessageItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIMessageManager:AddMessageItem");

	FUFortUIMessageManager_AddMessageItem_Params Parms;

	Parms.MessageItem = MessageItem;

	ProcessEvent(FN, &Parms);
}

UClass* UFortUIStateTrigger::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortUIStateTrigger");

	return Class;
}

// Function /Script/FortniteUI.FortUIStateTrigger:IsLoggedIn
bool UFortUIStateTrigger::IsLoggedIn() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIStateTrigger:IsLoggedIn");

	FUFortUIStateTrigger_IsLoggedIn_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIStateTrigger:EvalBP
bool UFortUIStateTrigger::EvalBP() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIStateTrigger:EvalBP");

	FUFortUIStateTrigger_EvalBP_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortUIStateTrigger_InGame::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortUIStateTrigger_InGame");

	return Class;
}

UClass* UFortUIStateTrigger_Login::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortUIStateTrigger_Login");

	return Class;
}

UClass* UFortActionHandlerPanel::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortActionHandlerPanel");

	return Class;
}

// Function /Script/FortniteUI.FortActionHandlerPanel:SetOnPanelDeactivated
void UFortActionHandlerPanel::SetOnPanelDeactivated(struct FFortniteUI_PanelActivationDelegate__DelegateSignature OnDeactivatedHandler)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActionHandlerPanel:SetOnPanelDeactivated");

	FUFortActionHandlerPanel_SetOnPanelDeactivated_Params Parms;

	Parms.OnDeactivatedHandler = OnDeactivatedHandler;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortActionHandlerPanel:SetOnPanelActivated
void UFortActionHandlerPanel::SetOnPanelActivated(struct FFortniteUI_PanelActivationDelegate__DelegateSignature OnActivatedHandler)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActionHandlerPanel:SetOnPanelActivated");

	FUFortActionHandlerPanel_SetOnPanelActivated_Params Parms;

	Parms.OnActivatedHandler = OnActivatedHandler;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortActionHandlerPanel:RemoveOnPanelDeactivated
void UFortActionHandlerPanel::RemoveOnPanelDeactivated(class UObject* BoundObject)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActionHandlerPanel:RemoveOnPanelDeactivated");

	FUFortActionHandlerPanel_RemoveOnPanelDeactivated_Params Parms;

	Parms.BoundObject = BoundObject;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortActionHandlerPanel:RemoveOnPanelActivated
void UFortActionHandlerPanel::RemoveOnPanelActivated(class UObject* BoundObject)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActionHandlerPanel:RemoveOnPanelActivated");

	FUFortActionHandlerPanel_RemoveOnPanelActivated_Params Parms;

	Parms.BoundObject = BoundObject;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortActionHandlerPanel:OnHandleAction
void UFortActionHandlerPanel::OnHandleAction(FEventReply Result, bool bPassThrough)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActionHandlerPanel:OnHandleAction");

	FUFortActionHandlerPanel_OnHandleAction_Params Parms;

	Parms.Result = Result;
	Parms.bPassThrough = bPassThrough;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortActionHandlerPanel:DeactivateActionHandler
void UFortActionHandlerPanel::DeactivateActionHandler()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActionHandlerPanel:DeactivateActionHandler");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortActionHandlerPanel:ActivateActionHandler
void UFortActionHandlerPanel::ActivateActionHandler()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActionHandlerPanel:ActivateActionHandler");

	ProcessEvent(FN, nullptr);
}

UClass* UFortConfirmationWindow::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortConfirmationWindow");

	return Class;
}

// Function /Script/FortniteUI.FortConfirmationWindow:ShowConfirmation
void UFortConfirmationWindow::ShowConfirmation(FFortDialogDescription Description)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortConfirmationWindow:ShowConfirmation");

	FUFortConfirmationWindow_ShowConfirmation_Params Parms;

	Parms.Description = Description;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortConfirmationWindow:ProcessResult
void UFortConfirmationWindow::ProcessResult(EFortDialogResult DialogResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortConfirmationWindow:ProcessResult");

	FUFortConfirmationWindow_ProcessResult_Params Parms;

	Parms.DialogResult = DialogResult;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortConfirmationWindow:OnShow
void UFortConfirmationWindow::OnShow()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortConfirmationWindow:OnShow");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortConfirmationWindow:OnKill
void UFortConfirmationWindow::OnKill()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortConfirmationWindow:OnKill");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortConfirmationWindow:KillConfirmation
void UFortConfirmationWindow::KillConfirmation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortConfirmationWindow:KillConfirmation");

	ProcessEvent(FN, nullptr);
}

UClass* UFortErrorDialog::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortErrorDialog");

	return Class;
}

// Function /Script/FortniteUI.FortErrorDialog:ResetErrorInfo
void UFortErrorDialog::ResetErrorInfo()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortErrorDialog:ResetErrorInfo");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortErrorDialog:OnRebuildDialog
void UFortErrorDialog::OnRebuildDialog(int32_t NewIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortErrorDialog:OnRebuildDialog");

	FUFortErrorDialog_OnRebuildDialog_Params Parms;

	Parms.NewIndex = NewIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortErrorDialog:DisplaySimpleError
void UFortErrorDialog::DisplaySimpleError(FText ErrorMessage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortErrorDialog:DisplaySimpleError");

	FUFortErrorDialog_DisplaySimpleError_Params Parms;

	Parms.ErrorMessage = ErrorMessage;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortErrorDialog:DisplayError
void UFortErrorDialog::DisplayError(FFortErrorInfo ErrorInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortErrorDialog:DisplayError");

	FUFortErrorDialog_DisplayError_Params Parms;

	Parms.ErrorInfo = ErrorInfo;

	ProcessEvent(FN, &Parms);
}

UClass* UFortUIStateWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortUIStateWidget");

	return Class;
}

// Function /Script/FortniteUI.FortUIStateWidget:OnExitState
void UFortUIStateWidget::OnExitState(EFortUIState NextUIState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIStateWidget:OnExitState");

	FUFortUIStateWidget_OnExitState_Params Parms;

	Parms.NextUIState = NextUIState;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIStateWidget:OnEnterState
void UFortUIStateWidget::OnEnterState(EFortUIState PreviousUIState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIStateWidget:OnEnterState");

	FUFortUIStateWidget_OnEnterState_Params Parms;

	Parms.PreviousUIState = PreviousUIState;

	ProcessEvent(FN, &Parms);
}

UClass* UFortVerticalRibbon::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortVerticalRibbon");

	return Class;
}

// Function /Script/FortniteUI.FortVerticalRibbon:PushContent
void UFortVerticalRibbon::PushContent(class UWidget* NewContent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVerticalRibbon:PushContent");

	FUFortVerticalRibbon_PushContent_Params Parms;

	Parms.NewContent = NewContent;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVerticalRibbon:PopContent
void UFortVerticalRibbon::PopContent()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVerticalRibbon:PopContent");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortVerticalRibbon:GetTop
class UWidget* UFortVerticalRibbon::GetTop() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVerticalRibbon:GetTop");

	FUFortVerticalRibbon_GetTop_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVerticalRibbon:_BPOnStackDepthChanged
void UFortVerticalRibbon::_BPOnStackDepthChanged(int32_t NewDepth)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVerticalRibbon:_BPOnStackDepthChanged");

	FUFortVerticalRibbon__BPOnStackDepthChanged_Params Parms;

	Parms.NewDepth = NewDepth;

	ProcessEvent(FN, &Parms);
}

UClass* UFortActorIndicatorWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortActorIndicatorWidget");

	return Class;
}

// Function /Script/FortniteUI.FortActorIndicatorWidget:OnIndicatedActorSet
void UFortActorIndicatorWidget::OnIndicatedActorSet()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortActorIndicatorWidget:OnIndicatedActorSet");

	ProcessEvent(FN, nullptr);
}

UClass* UFortItemWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortItemWidget");

	return Class;
}

// Function /Script/FortniteUI.FortItemWidget:SetOnGetItemToCompareDelegate
void UFortItemWidget::SetOnGetItemToCompareDelegate(struct FUFortItemWidget_OnGetItemToCompare__DelegateSignature InDelegate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:SetOnGetItemToCompareDelegate");

	FUFortItemWidget_SetOnGetItemToCompareDelegate_Params Parms;

	Parms.InDelegate = InDelegate;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:SetItem
void UFortItemWidget::SetItem(class UFortItem* InItem, int32_t QuantityOverride)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:SetItem");

	FUFortItemWidget_SetItem_Params Parms;

	Parms.InItem = InItem;
	Parms.QuantityOverride = QuantityOverride;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/FortniteUI.FortItemWidget:OnGetItemToCompare__DelegateSignature
void UFortItemWidget::OnGetItemToCompare__DelegateSignature(class UFortItem* ItemToCompare)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:OnGetItemToCompare__DelegateSignature");

	FUFortItemWidget_OnGetItemToCompare__DelegateSignature_Params Parms;

	Parms.ItemToCompare = ItemToCompare;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:OnFortItemUpdated
void UFortItemWidget::OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:OnFortItemUpdated");

	FUFortItemWidget_OnFortItemUpdated_Params Parms;

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:OnFortItemInvalidated
void UFortItemWidget::OnFortItemInvalidated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:OnFortItemInvalidated");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortItemWidget:OnFortItemDestroyed
void UFortItemWidget::OnFortItemDestroyed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:OnFortItemDestroyed");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortItemWidget:IsSlotted
bool UFortItemWidget::IsSlotted() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:IsSlotted");

	FUFortItemWidget_IsSlotted_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:IsSchematic
bool UFortItemWidget::IsSchematic() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:IsSchematic");

	FUFortItemWidget_IsSchematic_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:IsItemValid
bool UFortItemWidget::IsItemValid() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:IsItemValid");

	FUFortItemWidget_IsItemValid_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:IsInBackpackOverflow
bool UFortItemWidget::IsInBackpackOverflow() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:IsInBackpackOverflow");

	FUFortItemWidget_IsInBackpackOverflow_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:IsEquipped
bool UFortItemWidget::IsEquipped() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:IsEquipped");

	FUFortItemWidget_IsEquipped_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:HasTertiaryCategory
bool UFortItemWidget::HasTertiaryCategory() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:HasTertiaryCategory");

	FUFortItemWidget_HasTertiaryCategory_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:HasSecondaryCategory
bool UFortItemWidget::HasSecondaryCategory() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:HasSecondaryCategory");

	FUFortItemWidget_HasSecondaryCategory_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:HasLevel
bool UFortItemWidget::HasLevel() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:HasLevel");

	FUFortItemWidget_HasLevel_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:HasDurability
bool UFortItemWidget::HasDurability() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:HasDurability");

	FUFortItemWidget_HasDurability_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetType
float UFortItemWidget::GetType() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetType");

	FUFortItemWidget_GetType_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetTertiaryCategoryTexture
FSlateBrush UFortItemWidget::GetTertiaryCategoryTexture(EFortBrushSize InBrushSize) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetTertiaryCategoryTexture");

	FUFortItemWidget_GetTertiaryCategoryTexture_Params Parms;

	Parms.InBrushSize = InBrushSize;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetStackCount
int32_t UFortItemWidget::GetStackCount() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetStackCount");

	FUFortItemWidget_GetStackCount_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetSecondaryCategoryTexture
FSlateBrush UFortItemWidget::GetSecondaryCategoryTexture(EFortBrushSize InBrushSize) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetSecondaryCategoryTexture");

	FUFortItemWidget_GetSecondaryCategoryTexture_Params Parms;

	Parms.InBrushSize = InBrushSize;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetRarity
EFortRarity UFortItemWidget::GetRarity() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetRarity");

	FUFortItemWidget_GetRarity_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetPulse
float UFortItemWidget::GetPulse() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetPulse");

	FUFortItemWidget_GetPulse_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetLevel
int32_t UFortItemWidget::GetLevel() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetLevel");

	FUFortItemWidget_GetLevel_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetItemToCompare
class UFortItem* UFortItemWidget::GetItemToCompare()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetItemToCompare");

	FUFortItemWidget_GetItemToCompare_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetItem
class UFortItem* UFortItemWidget::GetItem() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetItem");

	FUFortItemWidget_GetItem_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetIconTexture
class UTexture* UFortItemWidget::GetIconTexture(EFortBrushSize InBrushSize) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetIconTexture");

	FUFortItemWidget_GetIconTexture_Params Parms;

	Parms.InBrushSize = InBrushSize;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetIconScale
float UFortItemWidget::GetIconScale() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetIconScale");

	FUFortItemWidget_GetIconScale_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetDurability
float UFortItemWidget::GetDurability() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetDurability");

	FUFortItemWidget_GetDurability_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetDisplayName
FText UFortItemWidget::GetDisplayName() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetDisplayName");

	FUFortItemWidget_GetDisplayName_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetDescription
FText UFortItemWidget::GetDescription() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetDescription");

	FUFortItemWidget_GetDescription_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:GetAmmoCount
int32_t UFortItemWidget::GetAmmoCount() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:GetAmmoCount");

	FUFortItemWidget_GetAmmoCount_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:BPOnItemSet
void UFortItemWidget::BPOnItemSet(class UFortItem* NewItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:BPOnItemSet");

	FUFortItemWidget_BPOnItemSet_Params Parms;

	Parms.NewItem = NewItem;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemWidget:BPOnItemChanged
void UFortItemWidget::BPOnItemChanged()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemWidget:BPOnItemChanged");

	ProcessEvent(FN, nullptr);
}

UClass* UFortBluGloCounter::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortBluGloCounter");

	return Class;
}

// Function /Script/FortniteUI.FortBluGloCounter:OnBluGloQuantityChanged
void UFortBluGloCounter::OnBluGloQuantityChanged(int32_t Quantity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortBluGloCounter:OnBluGloQuantityChanged");

	FUFortBluGloCounter_OnBluGloQuantityChanged_Params Parms;

	Parms.Quantity = Quantity;

	ProcessEvent(FN, &Parms);
}

UClass* UFortButton::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortButton");

	return Class;
}

// Function /Script/FortniteUI.FortButton:SetText
void UFortButton::SetText(FText InText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButton:SetText");

	FUFortButton_SetText_Params Parms;

	Parms.InText = InText;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButton:SetIndex
void UFortButton::SetIndex(int32_t InIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButton:SetIndex");

	FUFortButton_SetIndex_Params Parms;

	Parms.InIndex = InIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButton:SetDisabled
void UFortButton::SetDisabled(bool InDisable)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButton:SetDisabled");

	FUFortButton_SetDisabled_Params Parms;

	Parms.InDisable = InDisable;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButton:SetCurrentState
void UFortButton::SetCurrentState(EFortButtonState NewState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButton:SetCurrentState");

	FUFortButton_SetCurrentState_Params Parms;

	Parms.NewState = NewState;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButton:GetText
FText UFortButton::GetText() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButton:GetText");

	FUFortButton_GetText_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButton:GetPendingState
EFortButtonState UFortButton::GetPendingState() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButton:GetPendingState");

	FUFortButton_GetPendingState_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButton:GetIndex
int32_t UFortButton::GetIndex() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButton:GetIndex");

	FUFortButton_GetIndex_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButton:GetDisabled
bool UFortButton::GetDisabled() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButton:GetDisabled");

	FUFortButton_GetDisabled_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortButton:GetCurrentState
EFortButtonState UFortButton::GetCurrentState() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortButton:GetCurrentState");

	FUFortButton_GetCurrentState_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortTabButton::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortTabButton");

	return Class;
}

// Function /Script/FortniteUI.FortTabButton:SetSelection
void UFortTabButton::SetSelection(bool InSelected)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTabButton:SetSelection");

	FUFortTabButton_SetSelection_Params Parms;

	Parms.InSelected = InSelected;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortTabButton:IsSelected
bool UFortTabButton::IsSelected() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTabButton:IsSelected");

	FUFortTabButton_IsSelected_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortTabButton:ClearSelection
void UFortTabButton::ClearSelection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTabButton:ClearSelection");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortTabButton:_BPOnSelectedChanged
void UFortTabButton::_BPOnSelectedChanged()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTabButton:_BPOnSelectedChanged");

	ProcessEvent(FN, nullptr);
}

UClass* UFortCapturePointWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortCapturePointWidget");

	return Class;
}

// Function /Script/FortniteUI.FortCapturePointWidget:OnCapturePointDataChanged
void UFortCapturePointWidget::OnCapturePointDataChanged(bool bActivated, bool bLocked, float CapturePercentage, ECaptureState CaptureState, EFortTeam ControllingTeam)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortCapturePointWidget:OnCapturePointDataChanged");

	FUFortCapturePointWidget_OnCapturePointDataChanged_Params Parms;

	Parms.bActivated = bActivated;
	Parms.bLocked = bLocked;
	Parms.CapturePercentage = CapturePercentage;
	Parms.CaptureState = CaptureState;
	Parms.ControllingTeam = ControllingTeam;

	ProcessEvent(FN, &Parms);
}

UClass* UFortChatContainer::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortChatContainer");

	return Class;
}

// Function /Script/FortniteUI.FortChatContainer:SetNativeWidgetHost
void UFortChatContainer::SetNativeWidgetHost(class UNativeWidgetHost* InNativeWidgetHost)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortChatContainer:SetNativeWidgetHost");

	FUFortChatContainer_SetNativeWidgetHost_Params Parms;

	Parms.InNativeWidgetHost = InNativeWidgetHost;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortChatContainer:AttachChatWindowToNativeWidget
void UFortChatContainer::AttachChatWindowToNativeWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortChatContainer:AttachChatWindowToNativeWidget");

	ProcessEvent(FN, nullptr);
}

UClass* UFortItemCollectorWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortItemCollectorWidget");

	return Class;
}

// Function /Script/FortniteUI.FortItemCollectorWidget:OnItemCollectorValuesChanged
void UFortItemCollectorWidget::OnItemCollectorValuesChanged(TArray<int32_t> DepositAmounts, TArray<int32_t> DepositGoals)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemCollectorWidget:OnItemCollectorValuesChanged");

	FUFortItemCollectorWidget_OnItemCollectorValuesChanged_Params Parms;

	Parms.DepositAmounts = DepositAmounts;
	Parms.DepositGoals = DepositGoals;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemCollectorWidget:OnItemCollectorStateChanged
void UFortItemCollectorWidget::OnItemCollectorStateChanged(EFortItemCollectorState ItemCollectorState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemCollectorWidget:OnItemCollectorStateChanged");

	FUFortItemCollectorWidget_OnItemCollectorStateChanged_Params Parms;

	Parms.ItemCollectorState = ItemCollectorState;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortItemCollectorWidget:OnItemCollectorChanged
void UFortItemCollectorWidget::OnItemCollectorChanged(class ABuildingItemCollectorActor* OutItemCollector)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortItemCollectorWidget:OnItemCollectorChanged");

	FUFortItemCollectorWidget_OnItemCollectorChanged_Params Parms;

	Parms.OutItemCollector = OutItemCollector;

	ProcessEvent(FN, &Parms);
}

UClass* UFortListItem::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortListItem");

	return Class;
}

// Function /Script/FortniteUI.FortListItem:ToggleExpansion
void UFortListItem::ToggleExpansion()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListItem:ToggleExpansion");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortListItem:SetSelected
void UFortListItem::SetSelected(bool bSelected)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListItem:SetSelected");

	FUFortListItem_SetSelected_Params Parms;

	Parms.bSelected = bSelected;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListItem:SetIndexInList
void UFortListItem::SetIndexInList(int32_t InIndexInList)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListItem:SetIndexInList");

	FUFortListItem_SetIndexInList_Params Parms;

	Parms.InIndexInList = InIndexInList;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListItem:SetData
void UFortListItem::SetData(class UObject* InData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListItem:SetData");

	FUFortListItem_SetData_Params Parms;

	Parms.InData = InData;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListItem:Private_OnExpanderArrowShiftClicked
void UFortListItem::Private_OnExpanderArrowShiftClicked()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListItem:Private_OnExpanderArrowShiftClicked");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortListItem:IsItemExpanded
bool UFortListItem::IsItemExpanded() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListItem:IsItemExpanded");

	FUFortListItem_IsItemExpanded_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListItem:GetSelectionMode
ESelectionMode UFortListItem::GetSelectionMode() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListItem:GetSelectionMode");

	FUFortListItem_GetSelectionMode_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListItem:GetIndentLevel
int32_t UFortListItem::GetIndentLevel() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListItem:GetIndentLevel");

	FUFortListItem_GetIndentLevel_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortListItem:DoesItemHaveChildren
int32_t UFortListItem::DoesItemHaveChildren() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortListItem:DoesItemHaveChildren");

	FUFortListItem_DoesItemHaveChildren_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortLoginRewardItem::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortLoginRewardItem");

	return Class;
}

// Function /Script/FortniteUI.FortLoginRewardItem:SetUnclaimedItem
void UFortLoginRewardItem::SetUnclaimedItem(bool bInUnclaimedItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewardItem:SetUnclaimedItem");

	FUFortLoginRewardItem_SetUnclaimedItem_Params Parms;

	Parms.bInUnclaimedItem = bInUnclaimedItem;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewardItem:SetPlayClaimAnimation
void UFortLoginRewardItem::SetPlayClaimAnimation(bool bInPlayClaimAnimation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewardItem:SetPlayClaimAnimation");

	FUFortLoginRewardItem_SetPlayClaimAnimation_Params Parms;

	Parms.bInPlayClaimAnimation = bInPlayClaimAnimation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewardItem:SetLoginRewardDay
void UFortLoginRewardItem::SetLoginRewardDay(int32_t InLoginRewardDay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewardItem:SetLoginRewardDay");

	FUFortLoginRewardItem_SetLoginRewardDay_Params Parms;

	Parms.InLoginRewardDay = InLoginRewardDay;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewardItem:SetHighValueItem
void UFortLoginRewardItem::SetHighValueItem(bool bInHighValueItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewardItem:SetHighValueItem");

	FUFortLoginRewardItem_SetHighValueItem_Params Parms;

	Parms.bInHighValueItem = bInHighValueItem;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewardItem:SetFortItem
void UFortLoginRewardItem::SetFortItem(class UFortItem* InFortItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewardItem:SetFortItem");

	FUFortLoginRewardItem_SetFortItem_Params Parms;

	Parms.InFortItem = InFortItem;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewardItem:CreateItemTooltip
void UFortLoginRewardItem::CreateItemTooltip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewardItem:CreateItemTooltip");

	ProcessEvent(FN, nullptr);
}

UClass* UFortLoginRewards::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortLoginRewards");

	return Class;
}

// Function /Script/FortniteUI.FortLoginRewards:SetGridPanel
void UFortLoginRewards::SetGridPanel(class UUniformGridPanel* InGridPanel)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewards:SetGridPanel");

	FUFortLoginRewards_SetGridPanel_Params Parms;

	Parms.InGridPanel = InGridPanel;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewards:HandlePageRight
void UFortLoginRewards::HandlePageRight()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewards:HandlePageRight");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortLoginRewards:HandlePageLeft
void UFortLoginRewards::HandlePageLeft()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewards:HandlePageLeft");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortLoginRewards:GetCurrentPage
int32_t UFortLoginRewards::GetCurrentPage() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewards:GetCurrentPage");

	FUFortLoginRewards_GetCurrentPage_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewards:GetCurrentLoginDays
int32_t UFortLoginRewards::GetCurrentLoginDays() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewards:GetCurrentLoginDays");

	FUFortLoginRewards_GetCurrentLoginDays_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewards:EnablePaging
void UFortLoginRewards::EnablePaging(EPageDirection Direction)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewards:EnablePaging");

	FUFortLoginRewards_EnablePaging_Params Parms;

	Parms.Direction = Direction;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewards:DisablePaging
void UFortLoginRewards::DisablePaging(EPageDirection Direction)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewards:DisablePaging");

	FUFortLoginRewards_DisablePaging_Params Parms;

	Parms.Direction = Direction;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginRewards:CreateLoginRewardWidget
class UFortLoginRewardItem* UFortLoginRewards::CreateLoginRewardWidget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginRewards:CreateLoginRewardWidget");

	FUFortLoginRewards_CreateLoginRewardWidget_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortLoginWindow::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortLoginWindow");

	return Class;
}

// Function /Script/FortniteUI.FortLoginWindow:ShouldShowLoginButton
bool UFortLoginWindow::ShouldShowLoginButton(FString InEmail, FString InPassword) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginWindow:ShouldShowLoginButton");

	FUFortLoginWindow_ShouldShowLoginButton_Params Parms;

	Parms.InEmail = InEmail;
	Parms.InPassword = InPassword;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginWindow:OnLoginStatusChanged
void UFortLoginWindow::OnLoginStatusChanged(EUILoginStatus NewStatus, FText InMessage)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginWindow:OnLoginStatusChanged");

	FUFortLoginWindow_OnLoginStatusChanged_Params Parms;

	Parms.NewStatus = NewStatus;
	Parms.InMessage = InMessage;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginWindow:Login
void UFortLoginWindow::Login(FString InEmail, FString InPassword, bool bRemember)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginWindow:Login");

	FUFortLoginWindow_Login_Params Parms;

	Parms.InEmail = InEmail;
	Parms.InPassword = InPassword;
	Parms.bRemember = bRemember;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginWindow:IsRememberMeChecked
bool UFortLoginWindow::IsRememberMeChecked() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginWindow:IsRememberMeChecked");

	FUFortLoginWindow_IsRememberMeChecked_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginWindow:GetLoginStatusText
FText UFortLoginWindow::GetLoginStatusText() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginWindow:GetLoginStatusText");

	FUFortLoginWindow_GetLoginStatusText_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortLoginWindow:GetDefaultEmail
FString UFortLoginWindow::GetDefaultEmail() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortLoginWindow:GetDefaultEmail");

	FUFortLoginWindow_GetDefaultEmail_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortMovieWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortMovieWidget");

	return Class;
}

// Function /Script/FortniteUI.FortMovieWidget:SetMediaPlayer
void UFortMovieWidget::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortMovieWidget:SetMediaPlayer");

	FUFortMovieWidget_SetMediaPlayer_Params Parms;

	Parms.NewMediaPlayer = NewMediaPlayer;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortMovieWidget:RequestStopMovie
void UFortMovieWidget::RequestStopMovie()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortMovieWidget:RequestStopMovie");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortMovieWidget:RequestPlayMovie
void UFortMovieWidget::RequestPlayMovie()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortMovieWidget:RequestPlayMovie");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortMovieWidget:GetMediaPlayer
class UMediaPlayer* UFortMovieWidget::GetMediaPlayer() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortMovieWidget:GetMediaPlayer");

	FUFortMovieWidget_GetMediaPlayer_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortPvPMinimapWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortPvPMinimapWidget");

	return Class;
}

UClass* UFortSocialItemWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortSocialItemWidget");

	return Class;
}

// Function /Script/FortniteUI.FortSocialItemWidget:SetSocialItem
void UFortSocialItemWidget::SetSocialItem(class UFortSocialItem* InSocialItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortSocialItemWidget:SetSocialItem");

	FUFortSocialItemWidget_SetSocialItem_Params Parms;

	Parms.InSocialItem = InSocialItem;

	ProcessEvent(FN, &Parms);
}

UClass* UFortStorefront::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortStorefront");

	return Class;
}

UClass* UFortTutorialOverlay::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortTutorialOverlay");

	return Class;
}

// Function /Script/FortniteUI.FortTutorialOverlay:SetupNativeWidgets
void UFortTutorialOverlay::SetupNativeWidgets(class UNamedSlot* NativeSlot)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTutorialOverlay:SetupNativeWidgets");

	FUFortTutorialOverlay_SetupNativeWidgets_Params Parms;

	Parms.NativeSlot = NativeSlot;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortTutorialOverlay:SetTutorialNotificationActive
void UFortTutorialOverlay::SetTutorialNotificationActive(bool bActive)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTutorialOverlay:SetTutorialNotificationActive");

	FUFortTutorialOverlay_SetTutorialNotificationActive_Params Parms;

	Parms.bActive = bActive;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortTutorialOverlay:OpenBannerMenu
void UFortTutorialOverlay::OpenBannerMenu()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTutorialOverlay:OpenBannerMenu");

	ProcessEvent(FN, nullptr);
}

UClass* UFortTutorialScreen::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortTutorialScreen");

	return Class;
}

// Function /Script/FortniteUI.FortTutorialScreen:PlayerFinished
void UFortTutorialScreen::PlayerFinished()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTutorialScreen:PlayerFinished");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortTutorialScreen:OnShowTutorialScreen
void UFortTutorialScreen::OnShowTutorialScreen(class UTexture2D* Image)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTutorialScreen:OnShowTutorialScreen");

	FUFortTutorialScreen_OnShowTutorialScreen_Params Parms;

	Parms.Image = Image;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortTutorialScreen:OnHideTutorialScreen
void UFortTutorialScreen::OnHideTutorialScreen()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortTutorialScreen:OnHideTutorialScreen");

	ProcessEvent(FN, nullptr);
}

UClass* UFortUIManagerWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortUIManagerWidget");

	return Class;
}

// Function /Script/FortniteUI.FortUIManagerWidget:UpdateStateWidgetContent
void UFortUIManagerWidget::UpdateStateWidgetContent(class UFortUIStateWidget* StateWidget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:UpdateStateWidgetContent");

	FUFortUIManagerWidget_UpdateStateWidgetContent_Params Parms;

	Parms.StateWidget = StateWidget;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:UnregisterStateTrigger
void UFortUIManagerWidget::UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:UnregisterStateTrigger");

	FUFortUIManagerWidget_UnregisterStateTrigger_Params Parms;

	Parms.TriggerToRemove = TriggerToRemove;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:ShowErrorDialog
void UFortUIManagerWidget::ShowErrorDialog(class UObject* WorldContextObject, FText OperationDesc, FText DisplayMessage, FString ErrorCode)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:ShowErrorDialog");

	FUFortUIManagerWidget_ShowErrorDialog_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.OperationDesc = OperationDesc;
	Parms.DisplayMessage = DisplayMessage;
	Parms.ErrorCode = ErrorCode;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:SetStateContentDisplayed
void UFortUIManagerWidget::SetStateContentDisplayed(bool bDisplay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:SetStateContentDisplayed");

	FUFortUIManagerWidget_SetStateContentDisplayed_Params Parms;

	Parms.bDisplay = bDisplay;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:RegisterStateTrigger
void UFortUIManagerWidget::RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:RegisterStateTrigger");

	FUFortUIManagerWidget_RegisterStateTrigger_Params Parms;

	Parms.StateTrigger = StateTrigger;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:OnStateStarted
void UFortUIManagerWidget::OnStateStarted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:OnStateStarted");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortUIManagerWidget:OnShowConfirmation
void UFortUIManagerWidget::OnShowConfirmation(FFortDialogDescription Description)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:OnShowConfirmation");

	FUFortUIManagerWidget_OnShowConfirmation_Params Parms;

	Parms.Description = Description;

	ProcessEvent(FN, &Parms);
}

// DelegateFunction /Script/FortniteUI.FortUIManagerWidget:OnEndSpokenDialog__DelegateSignature
void UFortUIManagerWidget::OnEndSpokenDialog__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:OnEndSpokenDialog__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// DelegateFunction /Script/FortniteUI.FortUIManagerWidget:OnBeginSpokenDialog__DelegateSignature
void UFortUIManagerWidget::OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, FText Title)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:OnBeginSpokenDialog__DelegateSignature");

	FUFortUIManagerWidget_OnBeginSpokenDialog__DelegateSignature_Params Parms;

	Parms.Image = Image;
	Parms.Title = Title;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:KillConfirmationDialog
void UFortUIManagerWidget::KillConfirmationDialog(class UObject* WorldContextObject)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:KillConfirmationDialog");

	FUFortUIManagerWidget_KillConfirmationDialog_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:IsStateContentDisplayed
bool UFortUIManagerWidget::IsStateContentDisplayed() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:IsStateContentDisplayed");

	FUFortUIManagerWidget_IsStateContentDisplayed_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:GetUIManagerWidget
class UFortUIManagerWidget* UFortUIManagerWidget::GetUIManagerWidget(class UObject* WorldContextObject)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:GetUIManagerWidget");

	FUFortUIManagerWidget_GetUIManagerWidget_Params Parms;

	Parms.WorldContextObject = WorldContextObject;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:GetCurrentUIStateWidget
class UFortUIStateWidget* UFortUIManagerWidget::GetCurrentUIStateWidget() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:GetCurrentUIStateWidget");

	FUFortUIManagerWidget_GetCurrentUIStateWidget_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:DisplayStateContent
void UFortUIManagerWidget::DisplayStateContent(bool bDisplay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:DisplayStateContent");

	FUFortUIManagerWidget_DisplayStateContent_Params Parms;

	Parms.bDisplay = bDisplay;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:DisplayErrorDialog
void UFortUIManagerWidget::DisplayErrorDialog(FFortErrorInfo Info)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:DisplayErrorDialog");

	FUFortUIManagerWidget_DisplayErrorDialog_Params Parms;

	Parms.Info = Info;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:CreateUIStateTrigger
class UFortUIStateTrigger* UFortUIManagerWidget::CreateUIStateTrigger(class UClass* Class, class UObject* WorldContextObject)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:CreateUIStateTrigger");

	FUFortUIManagerWidget_CreateUIStateTrigger_Params Parms;

	Parms.Class = Class;
	Parms.WorldContextObject = WorldContextObject;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIManagerWidget:_BPGetCurrentUIState
EFortUIState UFortUIManagerWidget::_BPGetCurrentUIState() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIManagerWidget:_BPGetCurrentUIState");

	FUFortUIManagerWidget__BPGetCurrentUIState_Params Parms;


	ProcessEvent(FN, &Parms);
}

UClass* UFortUIMessageItemWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortUIMessageItemWidget");

	return Class;
}

// Function /Script/FortniteUI.FortUIMessageItemWidget:StackItem
void UFortUIMessageItemWidget::StackItem(class UFortUIMessageItemWidget* StackedItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIMessageItemWidget:StackItem");

	FUFortUIMessageItemWidget_StackItem_Params Parms;

	Parms.StackedItem = StackedItem;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortUIMessageItemWidget:RequestRemove
void UFortUIMessageItemWidget::RequestRemove()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIMessageItemWidget:RequestRemove");

	ProcessEvent(FN, nullptr);
}

// Function /Script/FortniteUI.FortUIMessageItemWidget:OnRemoveRequested
void UFortUIMessageItemWidget::OnRemoveRequested()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortUIMessageItemWidget:OnRemoveRequested");

	ProcessEvent(FN, nullptr);
}

UClass* UFortVaultDetailsWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortVaultDetailsWidget");

	return Class;
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:SetItemForCommand
void UFortVaultDetailsWidget::SetItemForCommand(class UFortItem* InItem, EVaultCommandType InCommand, bool bForce)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:SetItemForCommand");

	FUFortVaultDetailsWidget_SetItemForCommand_Params Parms;

	Parms.InItem = InItem;
	Parms.InCommand = InCommand;
	Parms.bForce = bForce;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:SetItem
void UFortVaultDetailsWidget::SetItem(class UFortItem* InItem, bool bForce)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:SetItem");

	FUFortVaultDetailsWidget_SetItem_Params Parms;

	Parms.InItem = InItem;
	Parms.bForce = bForce;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:HasPendingUpgrade
bool UFortVaultDetailsWidget::HasPendingUpgrade()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:HasPendingUpgrade");

	FUFortVaultDetailsWidget_HasPendingUpgrade_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:HasPendingCustomization
bool UFortVaultDetailsWidget::HasPendingCustomization()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:HasPendingCustomization");

	FUFortVaultDetailsWidget_HasPendingCustomization_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:GetProperties
void UFortVaultDetailsWidget::GetProperties(TArray<FVaultPropertyInfo> Properties, bool bWithUpgradeData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:GetProperties");

	FUFortVaultDetailsWidget_GetProperties_Params Parms;

	Parms.Properties = Properties;
	Parms.bWithUpgradeData = bWithUpgradeData;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:GetMaxLevelProperty
FVaultPropertyInfo UFortVaultDetailsWidget::GetMaxLevelProperty()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:GetMaxLevelProperty");

	FUFortVaultDetailsWidget_GetMaxLevelProperty_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:GetLevelProperty
FVaultPropertyInfo UFortVaultDetailsWidget::GetLevelProperty()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:GetLevelProperty");

	FUFortVaultDetailsWidget_GetLevelProperty_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:GetItem
class UFortItem* UFortVaultDetailsWidget::GetItem()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:GetItem");

	FUFortVaultDetailsWidget_GetItem_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:GetInfo
FVaultDetailsInfo UFortVaultDetailsWidget::GetInfo()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:GetInfo");

	FUFortVaultDetailsWidget_GetInfo_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:GetAlterationSlots
void UFortVaultDetailsWidget::GetAlterationSlots(TArray<FVaultAlterationInfo> Slots) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:GetAlterationSlots");

	FUFortVaultDetailsWidget_GetAlterationSlots_Params Parms;

	Parms.Slots = Slots;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultDetailsWidget:_BPOnNewItemSet
void UFortVaultDetailsWidget::_BPOnNewItemSet()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultDetailsWidget:_BPOnNewItemSet");

	ProcessEvent(FN, nullptr);
}

UClass* UFortVaultWidget::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.FortVaultWidget");

	return Class;
}

// Function /Script/FortniteUI.FortVaultWidget:IsSupportedSortType
bool UFortVaultWidget::IsSupportedSortType(EVaultContentSortType InSortType, EVaultContentType InContentType, EFortInventoryFilter InContentSubType) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultWidget:IsSupportedSortType");

	FUFortVaultWidget_IsSupportedSortType_Params Parms;

	Parms.InSortType = InSortType;
	Parms.InContentType = InContentType;
	Parms.InContentSubType = InContentSubType;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultWidget:GetItemList
void UFortVaultWidget::GetItemList(TArray<class UFortAccountItem*> OutItemList, EVaultContentType InContentType, FVaultContentDetails Details) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultWidget:GetItemList");

	FUFortVaultWidget_GetItemList_Params Parms;

	Parms.OutItemList = OutItemList;
	Parms.InContentType = InContentType;
	Parms.Details = Details;

	ProcessEvent(FN, &Parms);
}

// Function /Script/FortniteUI.FortVaultWidget:_BPOnContentUpdated
void UFortVaultWidget::_BPOnContentUpdated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/FortniteUI.FortVaultWidget:_BPOnContentUpdated");

	ProcessEvent(FN, nullptr);
}

UClass* USocialStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/FortniteUI.SocialStyle");

	return Class;
}

UScriptStruct* FFortBackendVersion::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortBackendVersion");

	return Struct;
}

UScriptStruct* FFortDialogDescription::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortDialogDescription");

	return Struct;
}

UScriptStruct* FFortUIFeatureStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortUIFeatureStruct");

	return Struct;
}

UScriptStruct* FFortFocusedBuildingInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortFocusedBuildingInfo");

	return Struct;
}

UScriptStruct* FFortStateStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortStateStyle");

	return Struct;
}

UScriptStruct* FFortErrorInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortErrorInfo");

	return Struct;
}

UScriptStruct* FGridSortKey::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.GridSortKey");

	return Struct;
}

UScriptStruct* FFortFrontEndFeatureStruct::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortFrontEndFeatureStruct");

	return Struct;
}

UScriptStruct* FFortMissionDetails::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortMissionDetails");

	return Struct;
}

UScriptStruct* FFortMissionRewardInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortMissionRewardInfo");

	return Struct;
}

UScriptStruct* FBuildingRequirements::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.BuildingRequirements");

	return Struct;
}

UScriptStruct* FAttributeRequirement::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.AttributeRequirement");

	return Struct;
}

UScriptStruct* FHeroStat::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.HeroStat");

	return Struct;
}

UScriptStruct* FEmptyHeroSlot::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.EmptyHeroSlot");

	return Struct;
}

UScriptStruct* FHeroUIData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.HeroUIData");

	return Struct;
}

UScriptStruct* FFortKillerVisualInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortKillerVisualInfo");

	return Struct;
}

UScriptStruct* FFortItemListFilter::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortItemListFilter");

	return Struct;
}

UScriptStruct* FFortModalContainerSizeEntry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortModalContainerSizeEntry");

	return Struct;
}

UScriptStruct* FOpenedCardPack::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.OpenedCardPack");

	return Struct;
}

UScriptStruct* FCard::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.Card");

	return Struct;
}

UScriptStruct* FCardPackOffer::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.CardPackOffer");

	return Struct;
}

UScriptStruct* FVaultDetailsInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.VaultDetailsInfo");

	return Struct;
}

UScriptStruct* FVaultButtonInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.VaultButtonInfo");

	return Struct;
}

UScriptStruct* FVaultIngredientInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.VaultIngredientInfo");

	return Struct;
}

UScriptStruct* FVaultPropertyInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.VaultPropertyInfo");

	return Struct;
}

UScriptStruct* FVaultAlterationInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.VaultAlterationInfo");

	return Struct;
}

UScriptStruct* FVaultContentDetails::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.VaultContentDetails");

	return Struct;
}

UScriptStruct* FFortHeroNamesData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/FortniteUI.FortHeroNamesData");

	return Struct;
}

