#include "pch.h"

#include "FN_TheaterCamera_Blueprint_classes.h"

UClass* ATheaterCamera_Blueprint_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C");

	return Class;
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:UserConstructionScript
void ATheaterCamera_Blueprint_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:FocusTimeline__FinishedFunc
void ATheaterCamera_Blueprint_C::FocusTimeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:FocusTimeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:FocusTimeline__UpdateFunc
void ATheaterCamera_Blueprint_C::FocusTimeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:FocusTimeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_11
void ATheaterCamera_Blueprint_C::InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_11(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_11");

	FATheaterCamera_Blueprint_C_InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_11_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_10
void ATheaterCamera_Blueprint_C::InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_10(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_10");

	FATheaterCamera_Blueprint_C_InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_10_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:OnActivated
void ATheaterCamera_Blueprint_C::OnActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:OnActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:OnDeactivated
void ATheaterCamera_Blueprint_C::OnDeactivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:OnDeactivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:SetTileFocus
void ATheaterCamera_Blueprint_C::SetTileFocus(class AFortTheaterMapTile* TargetTile)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:SetTileFocus");

	FATheaterCamera_Blueprint_C_SetTileFocus_Params Parms;

	Parms.TargetTile = TargetTile;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:ReceiveTick
void ATheaterCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:ReceiveTick");

	FATheaterCamera_Blueprint_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:OnDragBegin
void ATheaterCamera_Blueprint_C::OnDragBegin()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:OnDragBegin");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:OnDragEnd
void ATheaterCamera_Blueprint_C::OnDragEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:OnDragEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:SetEnteringTheaterZoom
void ATheaterCamera_Blueprint_C::SetEnteringTheaterZoom()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:SetEnteringTheaterZoom");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:ExecuteUbergraph_TheaterCamera_Blueprint
void ATheaterCamera_Blueprint_C::ExecuteUbergraph_TheaterCamera_Blueprint(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.TheaterCamera_Blueprint_C:ExecuteUbergraph_TheaterCamera_Blueprint");

	FATheaterCamera_Blueprint_C_ExecuteUbergraph_TheaterCamera_Blueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__BP_Hex_Outpost_C_130::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.PLACEHOLDER-CLASS__BP_Hex_Outpost_C_130");

	return Class;
}

UClass* PLACEHOLDER_CLASS__DayPhaseLightingAndFog_C_131::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.PLACEHOLDER-CLASS__DayPhaseLightingAndFog_C_131");

	return Class;
}

UClass* PLACEHOLDER_CLASS__TVPostProcessBP_C_132::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.PLACEHOLDER-CLASS__TVPostProcessBP_C_132");

	return Class;
}

UClass* PLACEHOLDER_CLASS__WriteOutTextToTheScreen_C_133::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/TheaterCamera_Blueprint.PLACEHOLDER-CLASS__WriteOutTextToTheScreen_C_133");

	return Class;
}

