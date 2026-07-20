#include "pch.h"

#include "FN_ItemDragIcon_classes.h"

UClass* UItemDragIcon_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/ItemDragIcon.ItemDragIcon_C");

	return Class;
}

// Function /Game/UI/Items/ItemDragIcon.ItemDragIcon_C:Construct
void UItemDragIcon_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemDragIcon.ItemDragIcon_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/ItemDragIcon.ItemDragIcon_C:ExecuteUbergraph_ItemDragIcon
void UItemDragIcon_C::ExecuteUbergraph_ItemDragIcon(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/ItemDragIcon.ItemDragIcon_C:ExecuteUbergraph_ItemDragIcon");

	FUItemDragIcon_C_ExecuteUbergraph_ItemDragIcon_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

