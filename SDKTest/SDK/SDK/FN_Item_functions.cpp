#include "pch.h"

#include "FN_Item_classes.h"

UClass* UItem_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/Item.Item_C");

	return Class;
}

// Function /Game/UI/Items/Item.Item_C:Set Display Style
void UItem_C::Set_Display_Style(bool Override_Display_Style, ItemDisplayStyle DisplayStyle)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Display Style");

	FUItem_C_Set_Display_Style_Params Parms;

	Parms.Override_Display_Style = Override_Display_Style;
	Parms.DisplayStyle = DisplayStyle;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Hide Subtype Icons
void UItem_C::Hide_Subtype_Icons()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Hide Subtype Icons");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Set Item Icon Visibility
void UItem_C::Set_Item_Icon_Visibility(bool Override_Icon_Visibility, ESlateVisibility Item_Icon_Visibility)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Item Icon Visibility");

	FUItem_C_Set_Item_Icon_Visibility_Params Parms;

	Parms.Override_Icon_Visibility = Override_Icon_Visibility;
	Parms.Item_Icon_Visibility = Item_Icon_Visibility;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Set Subtype Icons & Ammo Color
void UItem_C::Set_Subtype_Icons___Ammo_Color(bool Override_Secondary_Icon_Color, FLinearColor Secondary_Icon_Override_Color, bool Override_Tertiary_Icon_Color, FLinearColor Tertiary_Icon_Override_Color)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Subtype Icons & Ammo Color");

	FUItem_C_Set_Subtype_Icons___Ammo_Color_Params Parms;

	Parms.Override_Secondary_Icon_Color = Override_Secondary_Icon_Color;
	Parms.Secondary_Icon_Override_Color = Secondary_Icon_Override_Color;
	Parms.Override_Tertiary_Icon_Color = Override_Tertiary_Icon_Color;
	Parms.Tertiary_Icon_Override_Color = Tertiary_Icon_Override_Color;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:OnMouseButtonDoubleClick
FEventReply UItem_C::OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent InMouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:OnMouseButtonDoubleClick");

	FUItem_C_OnMouseButtonDoubleClick_Params Parms;

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Resize
void UItem_C::Resize(EFortBrushSize Brush_Size)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Resize");

	FUItem_C_Resize_Params Parms;

	Parms.Brush_Size = Brush_Size;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Refresh
void UItem_C::Refresh()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Refresh");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Set Stack Count
void UItem_C::Set_Stack_Count(int32_t Count)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Stack Count");

	FUItem_C_Set_Stack_Count_Params Parms;

	Parms.Count = Count;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Set Cooldown
void UItem_C::Set_Cooldown(FTimespan Time_Left, float Percentage, bool Show_Disabled_Without_Cooldown)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Cooldown");

	FUItem_C_Set_Cooldown_Params Parms;

	Parms.Time_Left = Time_Left;
	Parms.Percentage = Percentage;
	Parms.Show_Disabled_Without_Cooldown = Show_Disabled_Without_Cooldown;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Set Durability
void UItem_C::Set_Durability(float Durability)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Durability");

	FUItem_C_Set_Durability_Params Parms;

	Parms.Durability = Durability;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Update Cooldown Meter
void UItem_C::Update_Cooldown_Meter()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Cooldown Meter");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Update Durability Meter
void UItem_C::Update_Durability_Meter()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Durability Meter");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Set Tooltip Header
void UItem_C::Set_Tooltip_Header(FText Header_Text, class USlateBrushAsset* Icon_Brush)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Tooltip Header");

	FUItem_C_Set_Tooltip_Header_Params Parms;

	Parms.Header_Text = Header_Text;
	Parms.Icon_Brush = Icon_Brush;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Get Item Tooltip
class UWidget* UItem_C::Get_Item_Tooltip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Get Item Tooltip");

	FUItem_C_Get_Item_Tooltip_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Set Display Mode
void UItem_C::Set_Display_Mode(EFortUIState Current_UI_State, bool Cursor_Mode)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Display Mode");

	FUItem_C_Set_Display_Mode_Params Parms;

	Parms.Current_UI_State = Current_UI_State;
	Parms.Cursor_Mode = Cursor_Mode;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Set Ammo Count
void UItem_C::Set_Ammo_Count(int32_t Count)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Ammo Count");

	FUItem_C_Set_Ammo_Count_Params Parms;

	Parms.Count = Count;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Update Subtype Icons & Ammo
void UItem_C::Update_Subtype_Icons___Ammo()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Subtype Icons & Ammo");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Update Accent Tint/Shade
void UItem_C::Update_Accent_Tint_Shade()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Accent Tint/Shade");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Update Side Bevel
void UItem_C::Update_Side_Bevel()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Side Bevel");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Update Top Bevel
void UItem_C::Update_Top_Bevel()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Top Bevel");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Update Bottom Bevel
void UItem_C::Update_Bottom_Bevel()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Bottom Bevel");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Update Masked Gradient
void UItem_C::Update_Masked_Gradient(class UImage* Image, class UTexture* Texture_Mask, FLinearColor Color_A, FLinearColor Color_B)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Masked Gradient");

	FUItem_C_Update_Masked_Gradient_Params Parms;

	Parms.Image = Image;
	Parms.Texture_Mask = Texture_Mask;
	Parms.Color_A = Color_A;
	Parms.Color_B = Color_B;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Get Display Style
void UItem_C::Get_Display_Style(EFortItemType Item_Type, ItemDisplayStyle Style)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Get Display Style");

	FUItem_C_Get_Display_Style_Params Parms;

	Parms.Item_Type = Item_Type;
	Parms.Style = Style;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Update Tier/Level Badge
void UItem_C::Update_Tier_Level_Badge()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Tier/Level Badge");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Update Item Icon
void UItem_C::Update_Item_Icon()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Item Icon");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Get Item Texture Set
void UItem_C::Get_Item_Texture_Set(ItemDisplayStyle Display_Style, FItemTextureSet Texture_Set)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Get Item Texture Set");

	FUItem_C_Get_Item_Texture_Set_Params Parms;

	Parms.Display_Style = Display_Style;
	Parms.Texture_Set = Texture_Set;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Update Background
void UItem_C::Update_Background()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Background");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Update Size Box
void UItem_C::Update_Size_Box()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Size Box");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:OnDragDetected
void UItem_C::OnDragDetected(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:OnDragDetected");

	FUItem_C_OnDragDetected_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:OnMouseButtonDown
FEventReply UItem_C::OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:OnMouseButtonDown");

	FUItem_C_OnMouseButtonDown_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Update All
void UItem_C::Update_All()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update All");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Update Stack Counter
void UItem_C::Update_Stack_Counter()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Stack Counter");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Set Item Data
void UItem_C::Set_Item_Data(class UFortItem* Item_Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Set Item Data");

	FUItem_C_Set_Item_Data_Params Parms;

	Parms.Item_Data = Item_Data;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:Update Base
void UItem_C::Update_Base()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Update Base");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:BPOnItemChanged
void UItem_C::BPOnItemChanged()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:BPOnItemChanged");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:Construct
void UItem_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/Item.Item_C:PreConstruct
void UItem_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:PreConstruct");

	FUItem_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:BPOnItemSet
void UItem_C::BPOnItemSet(class UFortItem* NewItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:BPOnItemSet");

	FUItem_C_BPOnItemSet_Params Parms;

	Parms.NewItem = NewItem;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:OnCursorModeChanged
void UItem_C::OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:OnCursorModeChanged");

	FUItem_C_OnCursorModeChanged_Params Parms;

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Items/Item.Item_C:ExecuteUbergraph_Item
void UItem_C::ExecuteUbergraph_Item(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/Item.Item_C:ExecuteUbergraph_Item");

	FUItem_C_ExecuteUbergraph_Item_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__ItemDragIcon_C_147::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/Item.PLACEHOLDER-CLASS__ItemDragIcon_C_147");

	return Class;
}

UClass* PLACEHOLDER_CLASS__ItemBadge_C_148::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/Item.PLACEHOLDER-CLASS__ItemBadge_C_148");

	return Class;
}

UClass* PLACEHOLDER_CLASS__ItemCooldownMeter_C_149::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/Item.PLACEHOLDER-CLASS__ItemCooldownMeter_C_149");

	return Class;
}

UClass* PLACEHOLDER_CLASS__ItemDurabilityMeter_C_150::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/Item.PLACEHOLDER-CLASS__ItemDurabilityMeter_C_150");

	return Class;
}

UClass* PLACEHOLDER_CLASS__ItemStackCounter_C_151::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/Item.PLACEHOLDER-CLASS__ItemStackCounter_C_151");

	return Class;
}

