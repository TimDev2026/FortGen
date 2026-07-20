#include "pch.h"

#include "FN_StyleLibrary_classes.h"

UClass* UStyleLibrary_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C");

	return Class;
}

// Function /Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Item Size
void UStyleLibrary_C::Get_Item_Size(FFortUIStylesheet Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, FVector2D Item_Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Item Size");

	FUStyleLibrary_C_Get_Item_Size_Params Parms;

	Parms.Stylesheet = Stylesheet;
	Parms.Brush_Size = Brush_Size;
	Parms.__WorldContext = __WorldContext;
	Parms.Item_Size = Item_Size;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Negative Color
void UStyleLibrary_C::Get_Negative_Color(FFortUIStylesheet Stylesheet, class UObject* __WorldContext, FLinearColor Color)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Negative Color");

	FUStyleLibrary_C_Get_Negative_Color_Params Parms;

	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;
	Parms.Color = Color;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Additive Color
void UStyleLibrary_C::Get_Additive_Color(FFortUIStylesheet Stylesheet, class UObject* __WorldContext, FLinearColor Color)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Additive Color");

	FUStyleLibrary_C_Get_Additive_Color_Params Parms;

	Parms.Stylesheet = Stylesheet;
	Parms.__WorldContext = __WorldContext;
	Parms.Color = Color;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Item Icon Size
void UStyleLibrary_C::Get_Item_Icon_Size(FFortUIStylesheet Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, FVector2D Icon_Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Item Icon Size");

	FUStyleLibrary_C_Get_Item_Icon_Size_Params Parms;

	Parms.Stylesheet = Stylesheet;
	Parms.Brush_Size = Brush_Size;
	Parms.__WorldContext = __WorldContext;
	Parms.Icon_Size = Icon_Size;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Standard Icon Size
void UStyleLibrary_C::Get_Standard_Icon_Size(FFortUIStylesheet Stylesheet, EFortBrushSize Brush_Size, class UObject* __WorldContext, FVector2D Icon_Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Standard Icon Size");

	FUStyleLibrary_C_Get_Standard_Icon_Size_Params Parms;

	Parms.Stylesheet = Stylesheet;
	Parms.Brush_Size = Brush_Size;
	Parms.__WorldContext = __WorldContext;
	Parms.Icon_Size = Icon_Size;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Theme
void UStyleLibrary_C::Get_Theme(FFortUIStylesheet Stylesheet, EFortUITheme Theme_Type, class UObject* __WorldContext, FFortUITheme Theme)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Theme");

	FUStyleLibrary_C_Get_Theme_Params Parms;

	Parms.Stylesheet = Stylesheet;
	Parms.Theme_Type = Theme_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Theme = Theme;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Theme Color
void UStyleLibrary_C::Get_Theme_Color(FFortUIStylesheet Stylesheet, EFortUITheme Theme_Type, EFortUIThemeColor Color_Type, class UObject* __WorldContext, FLinearColor Theme_Color)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/StyleLibrary.StyleLibrary_C:Get Theme Color");

	FUStyleLibrary_C_Get_Theme_Color_Params Parms;

	Parms.Stylesheet = Stylesheet;
	Parms.Theme_Type = Theme_Type;
	Parms.Color_Type = Color_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Theme_Color = Theme_Color;

	StaticClass()->ProcessEvent(FN, &Parms);
}

