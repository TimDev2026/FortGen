#include "pch.h"

#include "FN_B_Prj_Constructor_MiniPulse_classes.h"

UClass* AB_Prj_Constructor_MiniPulse_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:UserConstructionScript
void AB_Prj_Constructor_MiniPulse_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:ReceiveBeginPlay
void AB_Prj_Constructor_MiniPulse_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:OnBounce
void AB_Prj_Constructor_MiniPulse_C::OnBounce(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:OnBounce");

	FAB_Prj_Constructor_MiniPulse_C_OnBounce_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:OnExploded
void AB_Prj_Constructor_MiniPulse_C::OnExploded(TArray<class AActor*> HitActors, TArray<FHitResult> HitResults)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:OnExploded");

	FAB_Prj_Constructor_MiniPulse_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:ExecuteUbergraph_B_Prj_Constructor_MiniPulse
void AB_Prj_Constructor_MiniPulse_C::ExecuteUbergraph_B_Prj_Constructor_MiniPulse(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C:ExecuteUbergraph_B_Prj_Constructor_MiniPulse");

	FAB_Prj_Constructor_MiniPulse_C_ExecuteUbergraph_B_Prj_Constructor_MiniPulse_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

