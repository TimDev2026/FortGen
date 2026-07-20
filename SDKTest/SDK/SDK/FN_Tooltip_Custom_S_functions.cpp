#include "pch.h"

#include "FN_Tooltip_Custom_S_classes.h"

UClass* UTooltip_Custom_S_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C");

	return Class;
}

// Function /Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:Get Icon Brush
FSlateBrush UTooltip_Custom_S_C::Get_Icon_Brush()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:Get Icon Brush");

	FUTooltip_Custom_S_C_Get_Icon_Brush_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:Get Header Text
FText UTooltip_Custom_S_C::Get_Header_Text()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:Get Header Text");

	FUTooltip_Custom_S_C_Get_Header_Text_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:Get Body Text
FText UTooltip_Custom_S_C::Get_Body_Text()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:Get Body Text");

	FUTooltip_Custom_S_C_Get_Body_Text_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:Construct
void UTooltip_Custom_S_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:ExecuteUbergraph_Tooltip-Custom-S
void UTooltip_Custom_S_C::ExecuteUbergraph_Tooltip_Custom_S(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Custom-S.Tooltip-Custom-S_C:ExecuteUbergraph_Tooltip-Custom-S");

	FUTooltip_Custom_S_C_ExecuteUbergraph_Tooltip_Custom_S_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

