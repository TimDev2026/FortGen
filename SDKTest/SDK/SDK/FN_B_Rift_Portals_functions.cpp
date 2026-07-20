#include "pch.h"

#include "FN_B_Rift_Portals_classes.h"

UClass* AB_Rift_Portals_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C");

	return Class;
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:UserConstructionScript
void AB_Rift_Portals_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:Color__FinishedFunc
void AB_Rift_Portals_C::Color__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:Color__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:Color__UpdateFunc
void AB_Rift_Portals_C::Color__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:Color__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:OnPlaced
void AB_Rift_Portals_C::OnPlaced()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:OnPlaced");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:OnRemoved
void AB_Rift_Portals_C::OnRemoved()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:OnRemoved");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:OnSpawnAI
void AB_Rift_Portals_C::OnSpawnAI()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:OnSpawnAI");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:Lightning Impact Event
void AB_Rift_Portals_C::Lightning_Impact_Event()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:Lightning Impact Event");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:OnActivated
void AB_Rift_Portals_C::OnActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:OnActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:ReceiveEndPlay
void AB_Rift_Portals_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:ReceiveEndPlay");

	FAB_Rift_Portals_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	ProcessEvent(FN, &Parms);
}

// Function /Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:ExecuteUbergraph_B_Rift_Portals
void AB_Rift_Portals_C::ExecuteUbergraph_B_Rift_Portals(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/VisualThreatManager/Rifts/B_Rift_Portals.B_Rift_Portals_C:ExecuteUbergraph_B_Rift_Portals");

	FAB_Rift_Portals_C_ExecuteUbergraph_B_Rift_Portals_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

