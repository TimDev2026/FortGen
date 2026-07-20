#include "pch.h"

#include "FN_RatingWidget_classes.h"

UClass* URatingWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C");

	return Class;
}

// Function /Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Redraw
void URatingWidget_C::Redraw()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Redraw");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Display Style
void URatingWidget_C::Set_Display_Style(RatingDisplayStyle New_Style)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Display Style");

	FURatingWidget_C_Set_Display_Style_Params Parms;

	Parms.New_Style = New_Style;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Padding
void URatingWidget_C::Set_Padding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Padding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Size Box
void URatingWidget_C::Set_Size_Box(class USizeBox* Size_Box)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Size Box");

	FURatingWidget_C_Set_Size_Box_Params Parms;

	Parms.Size_Box = Size_Box;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Icon
void URatingWidget_C::Set_Icon(FFortMultiSizeBrush Icon_Brush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Icon");

	FURatingWidget_C_Set_Icon_Params Parms;

	Parms.Icon_Brush = Icon_Brush;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Rating Value
void URatingWidget_C::Set_Rating_Value(int32_t Rating)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:Set Rating Value");

	FURatingWidget_C_Set_Rating_Value_Params Parms;

	Parms.Rating = Rating;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:PreConstruct
void URatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:PreConstruct");

	FURatingWidget_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:ExecuteUbergraph_RatingWidget
void URatingWidget_C::ExecuteUbergraph_RatingWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/HomeBase/Rating/RatingWidget.RatingWidget_C:ExecuteUbergraph_RatingWidget");

	FURatingWidget_C_ExecuteUbergraph_RatingWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

