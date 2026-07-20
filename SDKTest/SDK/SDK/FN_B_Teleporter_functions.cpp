#include "pch.h"

#include "FN_B_Teleporter_classes.h"

UClass* AB_Teleporter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:InternalSetActive
void AB_Teleporter_C::InternalSetActive(bool bActive)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:InternalSetActive");

	FAB_Teleporter_C_InternalSetActive_Params Parms;

	Parms.bActive = bActive;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:TriggerRechargeInternal
void AB_Teleporter_C::TriggerRechargeInternal()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:TriggerRechargeInternal");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_TeleporterArrowColor
void AB_Teleporter_C::OnRep_TeleporterArrowColor()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_TeleporterArrowColor");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_bRecharging
void AB_Teleporter_C::OnRep_bRecharging()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_bRecharging");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:InitializeTeleporter
void AB_Teleporter_C::InitializeTeleporter(float NewMaxRange, float NewRechargeDecay, FLinearColor TeleporterArrowColor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:InitializeTeleporter");

	FAB_Teleporter_C_InitializeTeleporter_Params Parms;

	Parms.NewMaxRange = NewMaxRange;
	Parms.NewRechargeDecay = NewRechargeDecay;
	Parms.TeleporterArrowColor = TeleporterArrowColor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:SetShowGlow
void AB_Teleporter_C::SetShowGlow(bool Show)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:SetShowGlow");

	FAB_Teleporter_C_SetShowGlow_Params Parms;

	Parms.Show = Show;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UpdateGlowVisuals
void AB_Teleporter_C::UpdateGlowVisuals()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UpdateGlowVisuals");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_bBeingCarried
void AB_Teleporter_C::OnRep_bBeingCarried()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_bBeingCarried");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UpdateTargetTeleporterLocation
void AB_Teleporter_C::UpdateTargetTeleporterLocation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UpdateTargetTeleporterLocation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:IsAcceptablePositionForPlacement
bool AB_Teleporter_C::IsAcceptablePositionForPlacement(FVector InLocation, FRotator InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, FText OutFailureReason) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:IsAcceptablePositionForPlacement");

	FAB_Teleporter_C_IsAcceptablePositionForPlacement_Params Parms;

	Parms.InLocation = InLocation;
	Parms.InRotation = InRotation;
	Parms.DecoTool = DecoTool;
	Parms.bIsCDO = bIsCDO;
	Parms.OutFailureReason = OutFailureReason;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_TeleportCount
void AB_Teleporter_C::OnRep_TeleportCount()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_TeleportCount");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:TriggerRecharge
void AB_Teleporter_C::TriggerRecharge()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:TriggerRecharge");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RechargeComplete
void AB_Teleporter_C::RechargeComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RechargeComplete");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_bTeleporterActive
void AB_Teleporter_C::OnRep_bTeleporterActive()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRep_bTeleporterActive");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:IsExclusivelyActive
void AB_Teleporter_C::IsExclusivelyActive(bool IsActive)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:IsExclusivelyActive");

	FAB_Teleporter_C_IsExclusivelyActive_Params Parms;

	Parms.IsActive = IsActive;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UpdateTeleportersActive
void AB_Teleporter_C::UpdateTeleportersActive()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UpdateTeleportersActive");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:IsValidActorToTeleport
void AB_Teleporter_C::IsValidActorToTeleport(class AActor* ActorToTeleport, bool ValidActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:IsValidActorToTeleport");

	FAB_Teleporter_C_IsValidActorToTeleport_Params Parms;

	Parms.ActorToTeleport = ActorToTeleport;
	Parms.ValidActor = ValidActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:BlueprintGetInteractionString
FText AB_Teleporter_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:BlueprintGetInteractionString");

	FAB_Teleporter_C_BlueprintGetInteractionString_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:BlueprintCanInteract
bool AB_Teleporter_C::BlueprintCanInteract(class AFortPawn* InteractingPawn) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:BlueprintCanInteract");

	FAB_Teleporter_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:TeleportToTarget
void AB_Teleporter_C::TeleportToTarget(class AActor* ActorToTeleport)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:TeleportToTarget");

	FAB_Teleporter_C_TeleportToTarget_Params Parms;

	Parms.ActorToTeleport = ActorToTeleport;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:SetTargetTeleporter
void AB_Teleporter_C::SetTargetTeleporter(class AB_Teleporter_C* NewTarget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:SetTargetTeleporter");

	FAB_Teleporter_C_SetTargetTeleporter_Params Parms;

	Parms.NewTarget = NewTarget;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UserConstructionScript
void AB_Teleporter_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RingSpeedUp__FinishedFunc
void AB_Teleporter_C::RingSpeedUp__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RingSpeedUp__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RingSpeedUp__UpdateFunc
void AB_Teleporter_C::RingSpeedUp__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RingSpeedUp__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:GlowMaterialTransitionIn__FinishedFunc
void AB_Teleporter_C::GlowMaterialTransitionIn__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:GlowMaterialTransitionIn__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:GlowMaterialTransitionIn__UpdateFunc
void AB_Teleporter_C::GlowMaterialTransitionIn__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:GlowMaterialTransitionIn__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:GlowMaterialTransitionOut__FinishedFunc
void AB_Teleporter_C::GlowMaterialTransitionOut__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:GlowMaterialTransitionOut__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:GlowMaterialTransitionOut__UpdateFunc
void AB_Teleporter_C::GlowMaterialTransitionOut__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:GlowMaterialTransitionOut__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:LightrayFade__FinishedFunc
void AB_Teleporter_C::LightrayFade__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:LightrayFade__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:LightrayFade__UpdateFunc
void AB_Teleporter_C::LightrayFade__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:LightrayFade__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RotateArrowTimeline__FinishedFunc
void AB_Teleporter_C::RotateArrowTimeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RotateArrowTimeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RotateArrowTimeline__UpdateFunc
void AB_Teleporter_C::RotateArrowTimeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:RotateArrowTimeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ScaleLoadingRings__FinishedFunc
void AB_Teleporter_C::ScaleLoadingRings__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ScaleLoadingRings__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ScaleLoadingRings__UpdateFunc
void AB_Teleporter_C::ScaleLoadingRings__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ScaleLoadingRings__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:PostProcessTL__FinishedFunc
void AB_Teleporter_C::PostProcessTL__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:PostProcessTL__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:PostProcessTL__UpdateFunc
void AB_Teleporter_C::PostProcessTL__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:PostProcessTL__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:BlueprintOnInteract
void AB_Teleporter_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:BlueprintOnInteract");

	FAB_Teleporter_C_BlueprintOnInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnComponentBeginOverlap_Event_0
void AB_Teleporter_C::OnComponentBeginOverlap_Event_0(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnComponentBeginOverlap_Event_0");

	FAB_Teleporter_C_OnComponentBeginOverlap_Event_0_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnDeathServer
void AB_Teleporter_C::OnDeathServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnDeathServer");

	FAB_Teleporter_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ReceiveDestroyed
void AB_Teleporter_C::ReceiveDestroyed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ReceiveDestroyed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnActiveChanged
void AB_Teleporter_C::OnActiveChanged()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnActiveChanged");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:DirectionalRayActivate
void AB_Teleporter_C::DirectionalRayActivate()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:DirectionalRayActivate");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:DirectionalRayDeactivate
void AB_Teleporter_C::DirectionalRayDeactivate()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:DirectionalRayDeactivate");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UpdateArrowDirection
void AB_Teleporter_C::UpdateArrowDirection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:UpdateArrowDirection");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRechargingChanged
void AB_Teleporter_C::OnRechargingChanged()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnRechargingChanged");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnWorldReady
void AB_Teleporter_C::OnWorldReady()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnWorldReady");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnDeathPlayEffects
void AB_Teleporter_C::OnDeathPlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:OnDeathPlayEffects");

	FAB_Teleporter_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ClientActorsTeleported
void AB_Teleporter_C::ClientActorsTeleported(class AActor* TeleportedActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ClientActorsTeleported");

	FAB_Teleporter_C_ClientActorsTeleported_Params Parms;

	Parms.TeleportedActor = TeleportedActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ExecuteUbergraph_B_Teleporter
void AB_Teleporter_C::ExecuteUbergraph_B_Teleporter(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Teleporter/B_Teleporter.B_Teleporter_C:ExecuteUbergraph_B_Teleporter");

	FAB_Teleporter_C_ExecuteUbergraph_B_Teleporter_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

