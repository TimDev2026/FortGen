#include "pch.h"

#include "FN_Slate_classes.h"

UClass* UButtonWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.ButtonWidgetStyle");

	return Class;
}

UClass* UCheckBoxWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.CheckBoxWidgetStyle");

	return Class;
}

UClass* UComboBoxWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.ComboBoxWidgetStyle");

	return Class;
}

UClass* UComboButtonWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.ComboButtonWidgetStyle");

	return Class;
}

UClass* UEditableTextBoxWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.EditableTextBoxWidgetStyle");

	return Class;
}

UClass* UEditableTextWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.EditableTextWidgetStyle");

	return Class;
}

UClass* UProgressWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.ProgressWidgetStyle");

	return Class;
}

UClass* UScrollBarWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.ScrollBarWidgetStyle");

	return Class;
}

UClass* UScrollBoxWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.ScrollBoxWidgetStyle");

	return Class;
}

UClass* USpinBoxWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.SpinBoxWidgetStyle");

	return Class;
}

UClass* UTextBlockWidgetStyle::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Slate.TextBlockWidgetStyle");

	return Class;
}

UScriptStruct* FAnchors::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Slate.Anchors");

	return Struct;
}

UScriptStruct* FInputChord::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Slate.InputChord");

	return Struct;
}

