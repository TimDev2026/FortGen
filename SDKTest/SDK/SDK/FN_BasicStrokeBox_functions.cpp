#include "pch.h"

#include "FN_BasicStrokeBox_classes.h"

UClass* UBasicStrokeBox_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Main/BasicStrokeBox.BasicStrokeBox_C");

	return Class;
}

// Function /Game/UI/Main/BasicStrokeBox.BasicStrokeBox_C:Customize
void UBasicStrokeBox_C::Customize(int32_t Shape_Style, FLinearColor Fill_Color, FLinearColor Stroke_Color)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/BasicStrokeBox.BasicStrokeBox_C:Customize");

	FUBasicStrokeBox_C_Customize_Params Parms;

	Parms.Shape_Style = Shape_Style;
	Parms.Fill_Color = Fill_Color;
	Parms.Stroke_Color = Stroke_Color;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/BasicStrokeBox.BasicStrokeBox_C:Redraw
void UBasicStrokeBox_C::Redraw()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/BasicStrokeBox.BasicStrokeBox_C:Redraw");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Main/BasicStrokeBox.BasicStrokeBox_C:PreConstruct
void UBasicStrokeBox_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/BasicStrokeBox.BasicStrokeBox_C:PreConstruct");

	FUBasicStrokeBox_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Main/BasicStrokeBox.BasicStrokeBox_C:ExecuteUbergraph_BasicStrokeBox
void UBasicStrokeBox_C::ExecuteUbergraph_BasicStrokeBox(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Main/BasicStrokeBox.BasicStrokeBox_C:ExecuteUbergraph_BasicStrokeBox");

	FUBasicStrokeBox_C_ExecuteUbergraph_BasicStrokeBox_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

