#include "pch.h"

#include "FN_StoreCamera_Blueprint_classes.h"

UClass* AStoreCamera_Blueprint_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C");

	return Class;
}

// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:UserConstructionScript
void AStoreCamera_Blueprint_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:Timeline_0__FinishedFunc
void AStoreCamera_Blueprint_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:Timeline_0__UpdateFunc
void AStoreCamera_Blueprint_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:OnActivated
void AStoreCamera_Blueprint_C::OnActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:OnActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:OnDeactivated
void AStoreCamera_Blueprint_C::OnDeactivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:OnDeactivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:OpeningCameraTransition
void AStoreCamera_Blueprint_C::OpeningCameraTransition()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:OpeningCameraTransition");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:ResetCamera
void AStoreCamera_Blueprint_C::ResetCamera()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:ResetCamera");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:DarkenBGVisibility
void AStoreCamera_Blueprint_C::DarkenBGVisibility(bool Enable)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:DarkenBGVisibility");

	FAStoreCamera_Blueprint_C_DarkenBGVisibility_Params Parms;

	Parms.Enable = Enable;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:ExecuteUbergraph_StoreCamera_Blueprint
void AStoreCamera_Blueprint_C::ExecuteUbergraph_StoreCamera_Blueprint(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C:ExecuteUbergraph_StoreCamera_Blueprint");

	FAStoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

UClass* PLACEHOLDER_CLASS__DayPhaseLightingAndFog_C_159::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.PLACEHOLDER-CLASS__DayPhaseLightingAndFog_C_159");

	return Class;
}

UClass* PLACEHOLDER_CLASS__StorePinataMaster_BP_C_160::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.PLACEHOLDER-CLASS__StorePinataMaster_BP_C_160");

	return Class;
}

UClass* PLACEHOLDER_CLASS__StoreCardReveal_BP_C_161::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/Cameras/StoreCamera_Blueprint.PLACEHOLDER-CLASS__StoreCardReveal_BP_C_161");

	return Class;
}

