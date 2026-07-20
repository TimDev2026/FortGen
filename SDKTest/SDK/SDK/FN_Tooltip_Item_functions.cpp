#include "pch.h"

#include "FN_Tooltip_Item_classes.h"

UClass* UTooltip_Item_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C");

	return Class;
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Durability
void UTooltip_Item_C::Build_Durability()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Durability");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Consumable Stats
void UTooltip_Item_C::Build_Consumable_Stats()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Consumable Stats");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Trap Stats
void UTooltip_Item_C::Build_Trap_Stats()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Trap Stats");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Alteration Info
void UTooltip_Item_C::Build_Alteration_Info()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Alteration Info");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Worker Stats
void UTooltip_Item_C::Build_Worker_Stats()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Worker Stats");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Weapon DPS Stat
void UTooltip_Item_C::Build_Weapon_DPS_Stat()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Weapon DPS Stat");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Scaled Stat (float)
void UTooltip_Item_C::Get_Scaled_Stat__float_(float Base_Stat, float Scaling, int32_t Level, float Scaled_Stat)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Scaled Stat (float)");

	FUTooltip_Item_C_Get_Scaled_Stat__float__Params Parms;

	Parms.Base_Stat = Base_Stat;
	Parms.Scaling = Scaling;
	Parms.Level = Level;
	Parms.Scaled_Stat = Scaled_Stat;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Base Weapon Stats
void UTooltip_Item_C::Build_Base_Weapon_Stats(FFortBaseWeaponStats Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Base Weapon Stats");

	FUTooltip_Item_C_Build_Base_Weapon_Stats_Params Parms;

	Parms.Data = Data;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Melee Weapon Stats
void UTooltip_Item_C::Build_Melee_Weapon_Stats(FFortMeleeWeaponStats Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Melee Weapon Stats");

	FUTooltip_Item_C_Build_Melee_Weapon_Stats_Params Parms;

	Parms.Data = Data;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Ranged Weapon Stats
void UTooltip_Item_C::Build_Ranged_Weapon_Stats(FFortRangedWeaponStats Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Ranged Weapon Stats");

	FUTooltip_Item_C_Build_Ranged_Weapon_Stats_Params Parms;

	Parms.Data = Data;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Basic Info
void UTooltip_Item_C::Build_Basic_Info()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Basic Info");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Weapon Stats
void UTooltip_Item_C::Build_Weapon_Stats()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Build Weapon Stats");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Set Item Data
void UTooltip_Item_C::Set_Item_Data(class UFortItem* Item)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Set Item Data");

	FUTooltip_Item_C_Set_Item_Data_Params Parms;

	Parms.Item = Item;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Tooltip Header Text Visibility
ESlateVisibility UTooltip_Item_C::Get_Tooltip_Header_Text_Visibility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Tooltip Header Text Visibility");

	FUTooltip_Item_C_Get_Tooltip_Header_Text_Visibility_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Tooltip Header Icon Visibility
ESlateVisibility UTooltip_Item_C::Get_Tooltip_Header_Icon_Visibility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Tooltip Header Icon Visibility");

	FUTooltip_Item_C_Get_Tooltip_Header_Icon_Visibility_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Tooltip Header Visibility
ESlateVisibility UTooltip_Item_C::Get_Tooltip_Header_Visibility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Tooltip Header Visibility");

	FUTooltip_Item_C_Get_Tooltip_Header_Visibility_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Update
void UTooltip_Item_C::Update()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Update");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Theme Color [Normal]
FLinearColor UTooltip_Item_C::Get_Theme_Color__Normal_()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Theme Color [Normal]");

	FUTooltip_Item_C_Get_Theme_Color__Normal__Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Icon Brush
FSlateBrush UTooltip_Item_C::Get_Icon_Brush()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Get Icon Brush");

	FUTooltip_Item_C_Get_Icon_Brush_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Construct
void UTooltip_Item_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:ExecuteUbergraph_Tooltip-Item
void UTooltip_Item_C::ExecuteUbergraph_Tooltip_Item(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/Tooltip-Item.Tooltip-Item_C:ExecuteUbergraph_Tooltip-Item");

	FUTooltip_Item_C_ExecuteUbergraph_Tooltip_Item_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

