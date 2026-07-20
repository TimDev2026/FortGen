#include "pch.h"

#include "FN_B_GoinCommandoWeapon_classes.h"

UClass* AB_GoinCommandoWeapon_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:UserConstructionScript
void AB_GoinCommandoWeapon_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:OnStartCharge
void AB_GoinCommandoWeapon_C::OnStartCharge()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:OnStartCharge");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:OnEndCharge
void AB_GoinCommandoWeapon_C::OnEndCharge()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:OnEndCharge");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:OnPlayWeaponFireFX
void AB_GoinCommandoWeapon_C::OnPlayWeaponFireFX(bool bPersistentFire)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:OnPlayWeaponFireFX");

	FAB_GoinCommandoWeapon_C_OnPlayWeaponFireFX_Params Parms;

	Parms.bPersistentFire = bPersistentFire;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:OnPlayImpactFX
void AB_GoinCommandoWeapon_C::OnPlayImpactFX(FHitResult HitResult, EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:OnPlayImpactFX");

	FAB_GoinCommandoWeapon_C_OnPlayImpactFX_Params Parms;

	Parms.HitResult = HitResult;
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:SetUpgradeLevel
void AB_GoinCommandoWeapon_C::SetUpgradeLevel()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:SetUpgradeLevel");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:ReceiveBeginPlay
void AB_GoinCommandoWeapon_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:ExecuteUbergraph_B_GoinCommandoWeapon
void AB_GoinCommandoWeapon_C::ExecuteUbergraph_B_GoinCommandoWeapon(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/GoinCommando/B_GoinCommandoWeapon.B_GoinCommandoWeapon_C:ExecuteUbergraph_B_GoinCommandoWeapon");

	FAB_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

