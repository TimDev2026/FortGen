#include "pch.h"

#include "FN_InlineHeroCoreStat_classes.h"

UClass* UInlineHeroCoreStat_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/InlineHeroCoreStat.InlineHeroCoreStat_C");

	return Class;
}

// Function /Game/UI/Heroes/InlineHeroCoreStat.InlineHeroCoreStat_C:Get Tooltip Widget
class UWidget* UInlineHeroCoreStat_C::Get_Tooltip_Widget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/InlineHeroCoreStat.InlineHeroCoreStat_C:Get Tooltip Widget");

	FUInlineHeroCoreStat_C_Get_Tooltip_Widget_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/InlineHeroCoreStat.InlineHeroCoreStat_C:Update
void UInlineHeroCoreStat_C::Update(FHeroCoreStat Data, float Value, EFortBrushSize Brush_Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/InlineHeroCoreStat.InlineHeroCoreStat_C:Update");

	FUInlineHeroCoreStat_C_Update_Params Parms;

	Parms.Data = Data;
	Parms.Value = Value;
	Parms.Brush_Size = Brush_Size;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/InlineHeroCoreStat.InlineHeroCoreStat_C:Construct
void UInlineHeroCoreStat_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/InlineHeroCoreStat.InlineHeroCoreStat_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/InlineHeroCoreStat.InlineHeroCoreStat_C:ExecuteUbergraph_InlineHeroCoreStat
void UInlineHeroCoreStat_C::ExecuteUbergraph_InlineHeroCoreStat(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/InlineHeroCoreStat.InlineHeroCoreStat_C:ExecuteUbergraph_InlineHeroCoreStat");

	FUInlineHeroCoreStat_C_ExecuteUbergraph_InlineHeroCoreStat_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

