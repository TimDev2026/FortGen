#include "pch.h"

#include "FN_ButtonIconText_classes.h"

UClass* UButtonIconText_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C");

	return Class;
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Set Alignment
void UButtonIconText_C::Set_Alignment(ETextJustify Align)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Set Alignment");

	FUButtonIconText_C_Set_Alignment_Params Parms;

	Parms.Align = Align;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Update Size Box
void UButtonIconText_C::Update_Size_Box()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Update Size Box");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Get Primary Color
FSlateColor UButtonIconText_C::Get_Primary_Color()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Get Primary Color");

	FUButtonIconText_C_Get_Primary_Color_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Get Secondary Color
FLinearColor UButtonIconText_C::Get_Secondary_Color()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Get Secondary Color");

	FUButtonIconText_C_Get_Secondary_Color_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Update Padding
void UButtonIconText_C::Update_Padding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Update Padding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Set Icon
void UButtonIconText_C::Set_Icon(FSlateBrush InBrush, bool RefreshPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Set Icon");

	FUButtonIconText_C_Set_Icon_Params Parms;

	Parms.InBrush = InBrush;
	Parms.RefreshPadding = RefreshPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Set Text
void UButtonIconText_C::Set_Text(FText InText, bool RefreshPadding)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:Set Text");

	FUButtonIconText_C_Set_Text_Params Parms;

	Parms.InText = InText;
	Parms.RefreshPadding = RefreshPadding;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:PreConstruct
void UButtonIconText_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:PreConstruct");

	FUButtonIconText_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:OnMouseEnter
void UButtonIconText_C::OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:OnMouseEnter");

	FUButtonIconText_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:OnMouseLeave
void UButtonIconText_C::OnMouseLeave(FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:OnMouseLeave");

	FUButtonIconText_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:ExecuteUbergraph_ButtonIconText
void UButtonIconText_C::ExecuteUbergraph_ButtonIconText(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:ExecuteUbergraph_ButtonIconText");

	FUButtonIconText_C_ExecuteUbergraph_ButtonIconText_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Buttons/ButtonIconText.ButtonIconText_C:On Mouse Hovered Changed__DelegateSignature
void UButtonIconText_C::On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Buttons/ButtonIconText.ButtonIconText_C:On Mouse Hovered Changed__DelegateSignature");

	FUButtonIconText_C_On_Mouse_Hovered_Changed__DelegateSignature_Params Parms;

	Parms.Is_Hovered = Is_Hovered;

	ProcessEvent(FN, &Parms);
}

