#include "pch.h"

#include "FN_B_Prj_Llama_Head_classes.h"

UClass* AB_Prj_Llama_Head_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:SpawnBounceFX
void AB_Prj_Llama_Head_C::SpawnBounceFX(FHitResult Hit, FHitResult HitResult, EPhysicalSurface SurfaceType, FRotator HitResultRotation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:SpawnBounceFX");

	FAB_Prj_Llama_Head_C_SpawnBounceFX_Params Parms;

	Parms.Hit = Hit;
	Parms.HitResult = HitResult;
	Parms.SurfaceType = SurfaceType;
	Parms.HitResultRotation = HitResultRotation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:UserConstructionScript
void AB_Prj_Llama_Head_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:OnBounce
void AB_Prj_Llama_Head_C::OnBounce(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:OnBounce");

	FAB_Prj_Llama_Head_C_OnBounce_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:ReceiveTick
void AB_Prj_Llama_Head_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:ReceiveTick");

	FAB_Prj_Llama_Head_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:OnProjectileStop_Event_0
void AB_Prj_Llama_Head_C::OnProjectileStop_Event_0(FHitResult ImpactResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:OnProjectileStop_Event_0");

	FAB_Prj_Llama_Head_C_OnProjectileStop_Event_0_Params Parms;

	Parms.ImpactResult = ImpactResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:ReceiveBeginPlay
void AB_Prj_Llama_Head_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:ExecuteUbergraph_B_Prj_Llama_Head
void AB_Prj_Llama_Head_C::ExecuteUbergraph_B_Prj_Llama_Head(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_Prj_Llama_Head.B_Prj_Llama_Head_C:ExecuteUbergraph_B_Prj_Llama_Head");

	FAB_Prj_Llama_Head_C_ExecuteUbergraph_B_Prj_Llama_Head_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

