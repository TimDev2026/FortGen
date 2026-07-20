#include "pch.h"

#include "FN_B_BGA_Explorer_OutlanderFragmentBear_classes.h"

UClass* AB_BGA_Explorer_OutlanderFragmentBear_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnRep_TargetPawnToTrack
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnRep_TargetPawnToTrack()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnRep_TargetPawnToTrack");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ToggleFireCue
void AB_BGA_Explorer_OutlanderFragmentBear_C::ToggleFireCue(bool bEnable)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ToggleFireCue");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_ToggleFireCue_Params Parms;

	Parms.bEnable = bEnable;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:Is Pawn Inside Pitch Limits
void AB_BGA_Explorer_OutlanderFragmentBear_C::Is_Pawn_Inside_Pitch_Limits(class AFortPawn* Pawn, bool bInsidePitchLimits)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:Is Pawn Inside Pitch Limits");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_Is_Pawn_Inside_Pitch_Limits_Params Parms;

	Parms.Pawn = Pawn;
	Parms.bInsidePitchLimits = bInsidePitchLimits;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:IsValidTarget
void AB_BGA_Explorer_OutlanderFragmentBear_C::IsValidTarget(class AFortPawn* PotentialTarget, bool bIncludeSimpleRangeCheck, bool bIncludeFiringLimitCheck, bool bIncludeObstructionCheck, bool bValidTarget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:IsValidTarget");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_IsValidTarget_Params Parms;

	Parms.PotentialTarget = PotentialTarget;
	Parms.bIncludeSimpleRangeCheck = bIncludeSimpleRangeCheck;
	Parms.bIncludeFiringLimitCheck = bIncludeFiringLimitCheck;
	Parms.bIncludeObstructionCheck = bIncludeObstructionCheck;
	Parms.bValidTarget = bValidTarget;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnPotentialTargetUntouched
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnPotentialTargetUntouched(class AFortPawn* UntouchedPotentialTarget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnPotentialTargetUntouched");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_OnPotentialTargetUntouched_Params Parms;

	Parms.UntouchedPotentialTarget = UntouchedPotentialTarget;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnNewPotentialTargetTouched
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnNewPotentialTargetTouched(class AFortPawn* PotentialTargetPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnNewPotentialTargetTouched");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_OnNewPotentialTargetTouched_Params Parms;

	Parms.PotentialTargetPawn = PotentialTargetPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ShouldFire
void AB_BGA_Explorer_OutlanderFragmentBear_C::ShouldFire(bool ShouldFire)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ShouldFire");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_ShouldFire_Params Parms;

	Parms.ShouldFire = ShouldFire;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ClearTargetAcquisitionTimer
void AB_BGA_Explorer_OutlanderFragmentBear_C::ClearTargetAcquisitionTimer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ClearTargetAcquisitionTimer");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ClearFiringTimer
void AB_BGA_Explorer_OutlanderFragmentBear_C::ClearFiringTimer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ClearFiringTimer");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SpawnImpactEffects
void AB_BGA_Explorer_OutlanderFragmentBear_C::SpawnImpactEffects(FVector HitLocation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SpawnImpactEffects");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_SpawnImpactEffects_Params Parms;

	Parms.HitLocation = HitLocation;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SpawnTracer
void AB_BGA_Explorer_OutlanderFragmentBear_C::SpawnTracer(FVector HitLocation, bool bLeftTracer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SpawnTracer");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_SpawnTracer_Params Parms;

	Parms.HitLocation = HitLocation;
	Parms.bLeftTracer = bLeftTracer;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:UpdateRotation
void AB_BGA_Explorer_OutlanderFragmentBear_C::UpdateRotation(class AActor* LookAtActor, float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:UpdateRotation");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_UpdateRotation_Params Parms;

	Parms.LookAtActor = LookAtActor;
	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SetTargetAcquisitionTimer
void AB_BGA_Explorer_OutlanderFragmentBear_C::SetTargetAcquisitionTimer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SetTargetAcquisitionTimer");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SetFiringTimer
void AB_BGA_Explorer_OutlanderFragmentBear_C::SetFiringTimer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SetFiringTimer");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:AttemptFire
void AB_BGA_Explorer_OutlanderFragmentBear_C::AttemptFire()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:AttemptFire");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:AttemptAcquireTarget
void AB_BGA_Explorer_OutlanderFragmentBear_C::AttemptAcquireTarget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:AttemptAcquireTarget");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:GetTargetingSourceTransform
FTransform AB_BGA_Explorer_OutlanderFragmentBear_C::GetTargetingSourceTransform(EFortAbilityTargetingSource Source) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:GetTargetingSourceTransform");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_GetTargetingSourceTransform_Params Parms;

	Parms.Source = Source;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:UserConstructionScript
void AB_BGA_Explorer_OutlanderFragmentBear_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ReceiveBeginPlay
void AB_BGA_Explorer_OutlanderFragmentBear_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:GameplayCue.Impact.Physical
void AB_BGA_Explorer_OutlanderFragmentBear_C::GameplayCue_Impact_Physical(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:GameplayCue.Impact.Physical");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_GameplayCue_Impact_Physical_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ReceiveTick
void AB_BGA_Explorer_OutlanderFragmentBear_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ReceiveTick");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnDeathPlayEffects
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnDeathPlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnDeathPlayEffects");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnDeathServer
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnDeathServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnDeathServer");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature
void AB_BGA_Explorer_OutlanderFragmentBear_C::BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature
void AB_BGA_Explorer_OutlanderFragmentBear_C::BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:KilledTargetPawn
void AB_BGA_Explorer_OutlanderFragmentBear_C::KilledTargetPawn()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:KilledTargetPawn");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:GameplayCue.Weapons.Activation
void AB_BGA_Explorer_OutlanderFragmentBear_C::GameplayCue_Weapons_Activation(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:GameplayCue.Weapons.Activation");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_GameplayCue_Weapons_Activation_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SetTargetPawn
void AB_BGA_Explorer_OutlanderFragmentBear_C::SetTargetPawn(class AFortPawn* NewTargetPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:SetTargetPawn");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_SetTargetPawn_Params Parms;

	Parms.NewTargetPawn = NewTargetPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnTargetPawnDied
void AB_BGA_Explorer_OutlanderFragmentBear_C::OnTargetPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:OnTargetPawnDied");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_OnTargetPawnDied_Params Parms;

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:Bearricade
void AB_BGA_Explorer_OutlanderFragmentBear_C::Bearricade()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:Bearricade");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear
void AB_BGA_Explorer_OutlanderFragmentBear_C::ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C:ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear");

	FAB_BGA_Explorer_OutlanderFragmentBear_C_ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

