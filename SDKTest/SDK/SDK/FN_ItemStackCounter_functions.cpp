#include "pch.h"

#include "FN_ItemStackCounter_classes.h"

UClass* UItemStackCounter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/ItemStackCounter.ItemStackCounter_C");

	return Class;
}

// Function /Game/UI/Items/ItemStackCounter.ItemStackCounter_C:Refresh Visibility
void UItemStackCounter_C::Refresh_Visibility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemStackCounter.ItemStackCounter_C:Refresh Visibility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/ItemStackCounter.ItemStackCounter_C:Set Stack Count
void UItemStackCounter_C::Set_Stack_Count(int32_t Count)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemStackCounter.ItemStackCounter_C:Set Stack Count");

	FUItemStackCounter_C_Set_Stack_Count_Params Parms;

	Parms.Count = Count;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemStackCounter.ItemStackCounter_C:Update
void UItemStackCounter_C::Update(EFortBrushSize Brush_Size, int32_t Count)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemStackCounter.ItemStackCounter_C:Update");

	FUItemStackCounter_C_Update_Params Parms;

	Parms.Brush_Size = Brush_Size;
	Parms.Count = Count;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemStackCounter.ItemStackCounter_C:PreConstruct
void UItemStackCounter_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemStackCounter.ItemStackCounter_C:PreConstruct");

	FUItemStackCounter_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/ItemStackCounter.ItemStackCounter_C:ExecuteUbergraph_ItemStackCounter
void UItemStackCounter_C::ExecuteUbergraph_ItemStackCounter(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemStackCounter.ItemStackCounter_C:ExecuteUbergraph_ItemStackCounter");

	FUItemStackCounter_C_ExecuteUbergraph_ItemStackCounter_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

