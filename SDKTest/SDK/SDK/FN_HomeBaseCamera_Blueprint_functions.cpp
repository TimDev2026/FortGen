#include "pch.h"

#include "FN_HomeBaseCamera_Blueprint_classes.h"

UClass* AHomeBaseCamera_Blueprint_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C");

	return Class;
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:IsBusy
void AHomeBaseCamera_Blueprint_C::IsBusy(bool IsBusy)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:IsBusy");

	FAHomeBaseCamera_Blueprint_C_IsBusy_Params Parms;

	Parms.IsBusy = IsBusy;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:StorePrevious
void AHomeBaseCamera_Blueprint_C::StorePrevious()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:StorePrevious");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:StoreLerpFrom
void AHomeBaseCamera_Blueprint_C::StoreLerpFrom()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:StoreLerpFrom");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:UserConstructionScript
void AHomeBaseCamera_Blueprint_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ZoomInTimeline__FinishedFunc
void AHomeBaseCamera_Blueprint_C::ZoomInTimeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ZoomInTimeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ZoomInTimeline__UpdateFunc
void AHomeBaseCamera_Blueprint_C::ZoomInTimeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ZoomInTimeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ZoomOutTimeline__FinishedFunc
void AHomeBaseCamera_Blueprint_C::ZoomOutTimeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ZoomOutTimeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ZoomOutTimeline__UpdateFunc
void AHomeBaseCamera_Blueprint_C::ZoomOutTimeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ZoomOutTimeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_31
void AHomeBaseCamera_Blueprint_C::InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_31(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_31");

	FAHomeBaseCamera_Blueprint_C_InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_31_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_30
void AHomeBaseCamera_Blueprint_C::InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_30(FKey Key)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_30");

	FAHomeBaseCamera_Blueprint_C_InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_30_Params Parms;

	Parms.Key = Key;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ReceiveTick
void AHomeBaseCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ReceiveTick");

	FAHomeBaseCamera_Blueprint_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:OnActivated
void AHomeBaseCamera_Blueprint_C::OnActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:OnActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:OnDeactivated
void AHomeBaseCamera_Blueprint_C::OnDeactivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:OnDeactivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ReceiveBeginPlay
void AHomeBaseCamera_Blueprint_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ClearBuildingFocus
void AHomeBaseCamera_Blueprint_C::ClearBuildingFocus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ClearBuildingFocus");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:SetBuildingFocus
void AHomeBaseCamera_Blueprint_C::SetBuildingFocus(class UCameraComponent* BuildingCameraComponent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:SetBuildingFocus");

	FAHomeBaseCamera_Blueprint_C_SetBuildingFocus_Params Parms;

	Parms.BuildingCameraComponent = BuildingCameraComponent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:BP Clear Focus
void AHomeBaseCamera_Blueprint_C::BP_Clear_Focus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:BP Clear Focus");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:OnDragBegin
void AHomeBaseCamera_Blueprint_C::OnDragBegin()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:OnDragBegin");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:OnDragEnd
void AHomeBaseCamera_Blueprint_C::OnDragEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:OnDragEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ExecuteUbergraph_HomeBaseCamera_Blueprint
void AHomeBaseCamera_Blueprint_C::ExecuteUbergraph_HomeBaseCamera_Blueprint(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C:ExecuteUbergraph_HomeBaseCamera_Blueprint");

	FAHomeBaseCamera_Blueprint_C_ExecuteUbergraph_HomeBaseCamera_Blueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__TVPostProcessBP_C_158::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/HomeBaseCamera_Blueprint.PLACEHOLDER-CLASS__TVPostProcessBP_C_158");

	return Class;
}

