#include "pch.h"

#include "FN_SlateCore_classes.h"

UClass* UFontBulkData::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/SlateCore.FontBulkData");

	return Class;
}

UClass* UFontProviderInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/SlateCore.FontProviderInterface");

	return Class;
}

UClass* USlateTypes::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/SlateCore.SlateTypes");

	return Class;
}

UClass* USlateWidgetStyleContainerInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/SlateCore.SlateWidgetStyleContainerInterface");

	return Class;
}

UClass* USlateWidgetStyleContainerBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/SlateCore.SlateWidgetStyleContainerBase");

	return Class;
}

UClass* USlateWidgetStyleAsset::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/SlateCore.SlateWidgetStyleAsset");

	return Class;
}

UScriptStruct* FSlateBrush::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.SlateBrush");

	return Struct;
}

UScriptStruct* FSlateColor::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.SlateColor");

	return Struct;
}

UScriptStruct* FMargin::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.Margin");

	return Struct;
}

UScriptStruct* FPointerEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.PointerEvent");

	return Struct;
}

UScriptStruct* FInputEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.InputEvent");

	return Struct;
}

UScriptStruct* FGeometry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.Geometry");

	return Struct;
}

UScriptStruct* FComboBoxStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.ComboBoxStyle");

	return Struct;
}

UScriptStruct* FSlateWidgetStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.SlateWidgetStyle");

	return Struct;
}

UScriptStruct* FSlateSound::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.SlateSound");

	return Struct;
}

UScriptStruct* FComboButtonStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.ComboButtonStyle");

	return Struct;
}

UScriptStruct* FButtonStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.ButtonStyle");

	return Struct;
}

UScriptStruct* FSlateFontInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.SlateFontInfo");

	return Struct;
}

UScriptStruct* FEditableTextStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.EditableTextStyle");

	return Struct;
}

UScriptStruct* FEditableTextBoxStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.EditableTextBoxStyle");

	return Struct;
}

UScriptStruct* FScrollBarStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.ScrollBarStyle");

	return Struct;
}

UScriptStruct* FTextBlockStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.TextBlockStyle");

	return Struct;
}

UScriptStruct* FSpinBoxStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.SpinBoxStyle");

	return Struct;
}

UScriptStruct* FAnalogInputEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.AnalogInputEvent");

	return Struct;
}

UScriptStruct* FKeyEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.KeyEvent");

	return Struct;
}

UScriptStruct* FControllerEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.ControllerEvent");

	return Struct;
}

UScriptStruct* FFocusEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.FocusEvent");

	return Struct;
}

UScriptStruct* FCharacterEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.CharacterEvent");

	return Struct;
}

UScriptStruct* FMotionEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.MotionEvent");

	return Struct;
}

UScriptStruct* FCompositeFont::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.CompositeFont");

	return Struct;
}

UScriptStruct* FCompositeSubFont::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.CompositeSubFont");

	return Struct;
}

UScriptStruct* FTypeface::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.Typeface");

	return Struct;
}

UScriptStruct* FTypefaceEntry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.TypefaceEntry");

	return Struct;
}

UScriptStruct* FFontData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.FontData");

	return Struct;
}

UScriptStruct* FWindowStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.WindowStyle");

	return Struct;
}

UScriptStruct* FScrollBorderStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.ScrollBorderStyle");

	return Struct;
}

UScriptStruct* FScrollBoxStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.ScrollBoxStyle");

	return Struct;
}

UScriptStruct* FDockTabStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.DockTabStyle");

	return Struct;
}

UScriptStruct* FHeaderRowStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.HeaderRowStyle");

	return Struct;
}

UScriptStruct* FSplitterStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.SplitterStyle");

	return Struct;
}

UScriptStruct* FTableColumnHeaderStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.TableColumnHeaderStyle");

	return Struct;
}

UScriptStruct* FTableRowStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.TableRowStyle");

	return Struct;
}

UScriptStruct* FInlineTextImageStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.InlineTextImageStyle");

	return Struct;
}

UScriptStruct* FVolumeControlStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.VolumeControlStyle");

	return Struct;
}

UScriptStruct* FSliderStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.SliderStyle");

	return Struct;
}

UScriptStruct* FSearchBoxStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.SearchBoxStyle");

	return Struct;
}

UScriptStruct* FExpandableAreaStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.ExpandableAreaStyle");

	return Struct;
}

UScriptStruct* FProgressBarStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.ProgressBarStyle");

	return Struct;
}

UScriptStruct* FInlineEditableTextBlockStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.InlineEditableTextBlockStyle");

	return Struct;
}

UScriptStruct* FHyperlinkStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.HyperlinkStyle");

	return Struct;
}

UScriptStruct* FCheckBoxStyle::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.CheckBoxStyle");

	return Struct;
}

UScriptStruct* FNavigationEvent::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SlateCore.NavigationEvent");

	return Struct;
}

