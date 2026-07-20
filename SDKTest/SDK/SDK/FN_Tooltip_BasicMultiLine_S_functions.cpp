#include "pch.h"

#include "FN_Tooltip_BasicMultiLine_S_classes.h"

UClass* UTooltip_BasicMultiLine_S_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C");

	return Class;
}

// Function /Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:Get Icon Brush
FSlateBrush UTooltip_BasicMultiLine_S_C::Get_Icon_Brush()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:Get Icon Brush");

	FUTooltip_BasicMultiLine_S_C_Get_Icon_Brush_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:Get Header Text
FText UTooltip_BasicMultiLine_S_C::Get_Header_Text()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:Get Header Text");

	FUTooltip_BasicMultiLine_S_C_Get_Header_Text_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:Get Body Text
void UTooltip_BasicMultiLine_S_C::Get_Body_Text()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:Get Body Text");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:Construct
void UTooltip_BasicMultiLine_S_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:ExecuteUbergraph_Tooltip-BasicMultiLine-S
void UTooltip_BasicMultiLine_S_C::ExecuteUbergraph_Tooltip_BasicMultiLine_S(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C:ExecuteUbergraph_Tooltip-BasicMultiLine-S");

	FUTooltip_BasicMultiLine_S_C_ExecuteUbergraph_Tooltip_BasicMultiLine_S_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

