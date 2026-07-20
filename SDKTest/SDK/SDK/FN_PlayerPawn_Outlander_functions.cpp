#include "pch.h"

#include "FN_PlayerPawn_Outlander_classes.h"

UClass* APlayerPawn_Outlander_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C");

	return Class;
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:OnRep_OnPlayerBuiltFloor
void APlayerPawn_Outlander_C::OnRep_OnPlayerBuiltFloor()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:OnRep_OnPlayerBuiltFloor");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:UserConstructionScript
void APlayerPawn_Outlander_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:Phase Shift Activation Timeline__FinishedFunc
void APlayerPawn_Outlander_C::Phase_Shift_Activation_Timeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:Phase Shift Activation Timeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:Phase Shift Activation Timeline__UpdateFunc
void APlayerPawn_Outlander_C::Phase_Shift_Activation_Timeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:Phase Shift Activation Timeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:PhaseShiftHitSweep__FinishedFunc
void APlayerPawn_Outlander_C::PhaseShiftHitSweep__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:PhaseShiftHitSweep__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:PhaseShiftHitSweep__UpdateFunc
void APlayerPawn_Outlander_C::PhaseShiftHitSweep__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:PhaseShiftHitSweep__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Explorer.Fragment
void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Explorer.Fragment");

	FAPlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Outlander.InTheZone.FX
void APlayerPawn_Outlander_C::GameplayCue_Outlander_InTheZone_FX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Outlander.InTheZone.FX");

	FAPlayerPawn_Outlander_C_GameplayCue_Outlander_InTheZone_FX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:OnBaseChanged
void APlayerPawn_Outlander_C::OnBaseChanged(class AActor* NewBase)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:OnBaseChanged");

	FAPlayerPawn_Outlander_C_OnBaseChanged_Params Parms;

	Parms.NewBase = NewBase;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:ReceivePossessed
void APlayerPawn_Outlander_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:ReceivePossessed");

	FAPlayerPawn_Outlander_C_ReceivePossessed_Params Parms;

	Parms.NewController = NewController;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Explorer.Fragment.Offense.PickupFX
void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment_Offense_PickupFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Explorer.Fragment.Offense.PickupFX");

	FAPlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Offense_PickupFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Explorer.Fragment.Defense.PickupFX
void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment_Defense_PickupFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Explorer.Fragment.Defense.PickupFX");

	FAPlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Defense_PickupFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Explorer.Fragment.Specialty.PickupFX
void APlayerPawn_Outlander_C::GameplayCue_Explorer_Fragment_Specialty_PickupFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Explorer.Fragment.Specialty.PickupFX");

	FAPlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Specialty_PickupFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:WithinReachOfTreasure
void APlayerPawn_Outlander_C::WithinReachOfTreasure(FLinearColor VSpawnColor, bool Activate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:WithinReachOfTreasure");

	FAPlayerPawn_Outlander_C_WithinReachOfTreasure_Params Parms;

	Parms.VSpawnColor = VSpawnColor;
	Parms.Activate = Activate;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	FAPlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	FAPlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Outlander.PhaseShift.AppliedFX
void APlayerPawn_Outlander_C::GameplayCue_Outlander_PhaseShift_AppliedFX(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Outlander.PhaseShift.AppliedFX");

	FAPlayerPawn_Outlander_C_GameplayCue_Outlander_PhaseShift_AppliedFX_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:RefreshIcons
void APlayerPawn_Outlander_C::RefreshIcons()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:RefreshIcons");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:OnCharacterPartsReinitialized
void APlayerPawn_Outlander_C::OnCharacterPartsReinitialized()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:OnCharacterPartsReinitialized");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:OnDamagePlayEffects
void APlayerPawn_Outlander_C::OnDamagePlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:OnDamagePlayEffects");

	FAPlayerPawn_Outlander_C_OnDamagePlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:EventOnDamagePlayFX
void APlayerPawn_Outlander_C::EventOnDamagePlayFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:EventOnDamagePlayFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Outlander.KnockKnock
void APlayerPawn_Outlander_C::GameplayCue_Outlander_KnockKnock(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Outlander.KnockKnock");

	FAPlayerPawn_Outlander_C_GameplayCue_Outlander_KnockKnock_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Outlander.AntiMaterialCharge
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Outlander.AntiMaterialCharge");

	FAPlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeThruster
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeThruster");

	FAPlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeChargeUp
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeChargeUp");

	FAPlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeImpact
void APlayerPawn_Outlander_C::GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeImpact");

	FAPlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:ExecuteUbergraph_PlayerPawn_Outlander
void APlayerPawn_Outlander_C::ExecuteUbergraph_PlayerPawn_Outlander(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Pawns/PlayerPawn_Outlander.PlayerPawn_Outlander_C:ExecuteUbergraph_PlayerPawn_Outlander");

	FAPlayerPawn_Outlander_C_ExecuteUbergraph_PlayerPawn_Outlander_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

