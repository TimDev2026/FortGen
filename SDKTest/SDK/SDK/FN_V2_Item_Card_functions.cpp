#include "pch.h"

#include "FN_V2_Item_Card_classes.h"

UClass* UV2_Item_Card_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C");

	return Class;
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:Draw_Card
void UV2_Item_Card_C::Draw_Card()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:Draw_Card");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:Get_CardOverlay_ToolTipWidget_1
class UWidget* UV2_Item_Card_C::Get_CardOverlay_ToolTipWidget_1()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:Get_CardOverlay_ToolTipWidget_1");

	FUV2_Item_Card_C_Get_CardOverlay_ToolTipWidget_1_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:ShowCardBack
void UV2_Item_Card_C::ShowCardBack()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:ShowCardBack");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:ShowCardFront
void UV2_Item_Card_C::ShowCardFront()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:ShowCardFront");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:Initialize_Card
void UV2_Item_Card_C::Initialize_Card(FCard inCard, bool isOn3DCard, bool isFront)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:Initialize_Card");

	FUV2_Item_Card_C_Initialize_Card_Params Parms;

	Parms.inCard = inCard;
	Parms.isOn3DCard = isOn3DCard;
	Parms.isFront = isFront;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:Construct
void UV2_Item_Card_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:OnFortStoreStateChanged
void UV2_Item_Card_C::OnFortStoreStateChanged(EFortStoreState NewStoreState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:OnFortStoreStateChanged");

	FUV2_Item_Card_C_OnFortStoreStateChanged_Params Parms;

	Parms.NewStoreState = NewStoreState;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:OnMouseEnter
void UV2_Item_Card_C::OnMouseEnter(FGeometry MyGeometry, FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:OnMouseEnter");

	FUV2_Item_Card_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:OnMouseLeave
void UV2_Item_Card_C::OnMouseLeave(FPointerEvent MouseEvent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:OnMouseLeave");

	FUV2_Item_Card_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Store/V2_Item_Card.V2_Item_Card_C:ExecuteUbergraph_V2_Item_Card
void UV2_Item_Card_C::ExecuteUbergraph_V2_Item_Card(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_Item_Card.V2_Item_Card_C:ExecuteUbergraph_V2_Item_Card");

	FUV2_Item_Card_C_ExecuteUbergraph_V2_Item_Card_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__V2_ItemCardFront_C_166::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Store/V2_Item_Card.PLACEHOLDER-CLASS__V2_ItemCardFront_C_166");

	return Class;
}

