#include "pch.h"

#include "FN_B_Prj_Fragment_Orb_classes.h"

UClass* AB_Prj_Fragment_Orb_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:UserConstructionScript
void AB_Prj_Fragment_Orb_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:OnStop
void AB_Prj_Fragment_Orb_C::OnStop(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:OnStop");

	FAB_Prj_Fragment_Orb_C_OnStop_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:OnBounce
void AB_Prj_Fragment_Orb_C::OnBounce(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:OnBounce");

	FAB_Prj_Fragment_Orb_C_OnBounce_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:ReceiveBeginPlay
void AB_Prj_Fragment_Orb_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:ExecuteUbergraph_B_Prj_Fragment_Orb
void AB_Prj_Fragment_Orb_C::ExecuteUbergraph_B_Prj_Fragment_Orb(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C:ExecuteUbergraph_B_Prj_Fragment_Orb");

	FAB_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

