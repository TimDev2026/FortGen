#include "pch.h"

#include "FN_WM_PinManager_classes.h"

UClass* AWM_PinManager_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/FrontEnd/WM_PinManager.WM_PinManager_C");

	return Class;
}

// Function /Game/FrontEnd/WM_PinManager.WM_PinManager_C:CreateWorldMapPin
class AWorldMapPin* AWM_PinManager_C::CreateWorldMapPin(int32_t TheaterIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/WM_PinManager.WM_PinManager_C:CreateWorldMapPin");

	FAWM_PinManager_C_CreateWorldMapPin_Params Parms;

	Parms.TheaterIndex = TheaterIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/FrontEnd/WM_PinManager.WM_PinManager_C:UserConstructionScript
void AWM_PinManager_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/WM_PinManager.WM_PinManager_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/WM_PinManager.WM_PinManager_C:ReceiveBeginPlay
void AWM_PinManager_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/WM_PinManager.WM_PinManager_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/FrontEnd/WM_PinManager.WM_PinManager_C:ExecuteUbergraph_WM_PinManager
void AWM_PinManager_C::ExecuteUbergraph_WM_PinManager(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/FrontEnd/WM_PinManager.WM_PinManager_C:ExecuteUbergraph_WM_PinManager");

	FAWM_PinManager_C_ExecuteUbergraph_WM_PinManager_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

