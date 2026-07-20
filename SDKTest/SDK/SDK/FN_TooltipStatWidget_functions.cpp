#include "pch.h"

#include "FN_TooltipStatWidget_classes.h"

UClass* UTooltipStatWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C");

	return Class;
}

// Function /Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:Init
void UTooltipStatWidget_C::Init()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:Init");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:Construct
void UTooltipStatWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature
void UTooltipStatWidget_C::BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1026_OnButtonHoverEvent__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature
void UTooltipStatWidget_C::BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:BndEvt__ButtonHover_K2Node_ComponentBoundEvent_1037_OnButtonHoverEvent__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:ExecuteUbergraph_TooltipStatWidget
void UTooltipStatWidget_C::ExecuteUbergraph_TooltipStatWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/TooltipStatWidget.TooltipStatWidget_C:ExecuteUbergraph_TooltipStatWidget");

	FUTooltipStatWidget_C_ExecuteUbergraph_TooltipStatWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

