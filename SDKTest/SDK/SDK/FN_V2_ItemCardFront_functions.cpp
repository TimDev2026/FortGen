#include "pch.h"

#include "FN_V2_ItemCardFront_classes.h"

UClass* UV2_ItemCardFront_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C");

	return Class;
}

// Function /Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:Get_CardOverlay_ToolTipWidget_1
class UWidget* UV2_ItemCardFront_C::Get_CardOverlay_ToolTipWidget_1()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:Get_CardOverlay_ToolTipWidget_1");

	FUV2_ItemCardFront_C_Get_CardOverlay_ToolTipWidget_1_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:Draw_Card
void UV2_ItemCardFront_C::Draw_Card()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:Draw_Card");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:Initialize_Card
void UV2_ItemCardFront_C::Initialize_Card(FCard inCard)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:Initialize_Card");

	FUV2_ItemCardFront_C_Initialize_Card_Params Parms;

	Parms.inCard = inCard;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:Construct
void UV2_ItemCardFront_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:OnFortStoreStateChanged
void UV2_ItemCardFront_C::OnFortStoreStateChanged(EFortStoreState NewStoreState)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:OnFortStoreStateChanged");

	FUV2_ItemCardFront_C_OnFortStoreStateChanged_Params Parms;

	Parms.NewStoreState = NewStoreState;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:ExecuteUbergraph_V2_ItemCardFront
void UV2_ItemCardFront_C::ExecuteUbergraph_V2_ItemCardFront(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Store/V2_ItemCardFront.V2_ItemCardFront_C:ExecuteUbergraph_V2_ItemCardFront");

	FUV2_ItemCardFront_C_ExecuteUbergraph_V2_ItemCardFront_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__Item_C_167::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Store/V2_ItemCardFront.PLACEHOLDER-CLASS__Item_C_167");

	return Class;
}

