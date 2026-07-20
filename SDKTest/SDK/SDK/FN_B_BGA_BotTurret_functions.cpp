#include "pch.h"

#include "FN_B_BGA_BotTurret_classes.h"

UClass* AB_BGA_BotTurret_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnRep_Left_Right_Gun
void AB_BGA_BotTurret_C::OnRep_Left_Right_Gun()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnRep_Left_Right_Gun");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:SetTeamColorsVFX
void AB_BGA_BotTurret_C::SetTeamColorsVFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:SetTeamColorsVFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:UpdateScannerRay
void AB_BGA_BotTurret_C::UpdateScannerRay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:UpdateScannerRay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:AttemptAcquireTarget
void AB_BGA_BotTurret_C::AttemptAcquireTarget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:AttemptAcquireTarget");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:SetFiringTimer
void AB_BGA_BotTurret_C::SetFiringTimer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:SetFiringTimer");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnPotentialTargetUntouched
void AB_BGA_BotTurret_C::OnPotentialTargetUntouched(class AFortPawn* UntouchedPotentialTarget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnPotentialTargetUntouched");

	FAB_BGA_BotTurret_C_OnPotentialTargetUntouched_Params Parms;

	Parms.UntouchedPotentialTarget = UntouchedPotentialTarget;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ClearFiringTimer
void AB_BGA_BotTurret_C::ClearFiringTimer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ClearFiringTimer");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ClearTargetAcquisitionTimer
void AB_BGA_BotTurret_C::ClearTargetAcquisitionTimer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ClearTargetAcquisitionTimer");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:SetTargetAcquisitionTimer
void AB_BGA_BotTurret_C::SetTargetAcquisitionTimer()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:SetTargetAcquisitionTimer");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:SetTrackingTarget
void AB_BGA_BotTurret_C::SetTrackingTarget(class AFortPawn* Target)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:SetTrackingTarget");

	FAB_BGA_BotTurret_C_SetTrackingTarget_Params Parms;

	Parms.Target = Target;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:IsValidTarget
void AB_BGA_BotTurret_C::IsValidTarget(class AFortPawn* PotentialTarget, bool IncludeSimpleRangeCheck, bool IncludeFireLimitCheck, bool IncludeObstructionCheck, bool ValidTarget)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:IsValidTarget");

	FAB_BGA_BotTurret_C_IsValidTarget_Params Parms;

	Parms.PotentialTarget = PotentialTarget;
	Parms.IncludeSimpleRangeCheck = IncludeSimpleRangeCheck;
	Parms.IncludeFireLimitCheck = IncludeFireLimitCheck;
	Parms.IncludeObstructionCheck = IncludeObstructionCheck;
	Parms.ValidTarget = ValidTarget;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnNewPotentialTargetTouched
void AB_BGA_BotTurret_C::OnNewPotentialTargetTouched(class AFortPawn* PotentialTargetPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnNewPotentialTargetTouched");

	FAB_BGA_BotTurret_C_OnNewPotentialTargetTouched_Params Parms;

	Parms.PotentialTargetPawn = PotentialTargetPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Perform_Bot_Rotation
void AB_BGA_BotTurret_C::Perform_Bot_Rotation(class AActor* LookAtActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Perform_Bot_Rotation");

	FAB_BGA_BotTurret_C_Perform_Bot_Rotation_Params Parms;

	Parms.LookAtActor = LookAtActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnRep_NewVar0
void AB_BGA_BotTurret_C::OnRep_NewVar0()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnRep_NewVar0");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnRep_ShootingGun
void AB_BGA_BotTurret_C::OnRep_ShootingGun()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnRep_ShootingGun");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnRep_Target_Location
void AB_BGA_BotTurret_C::OnRep_Target_Location()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnRep_Target_Location");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:UserConstructionScript
void AB_BGA_BotTurret_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Timeline_0__FinishedFunc
void AB_BGA_BotTurret_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Timeline_0__UpdateFunc
void AB_BGA_BotTurret_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Timeline_2__FinishedFunc
void AB_BGA_BotTurret_C::Timeline_2__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Timeline_2__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Timeline_2__UpdateFunc
void AB_BGA_BotTurret_C::Timeline_2__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Timeline_2__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ReceiveBeginPlay
void AB_BGA_BotTurret_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:PassBotInfo
void AB_BGA_BotTurret_C::PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:PassBotInfo");

	FAB_BGA_BotTurret_C_PassBotInfo_Params Parms;

	Parms.WarmupTime = WarmupTime;
	Parms.BotDuration = BotDuration;
	Parms.FireRate = FireRate;
	Parms.Radius = Radius;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Bot_Explode
void AB_BGA_BotTurret_C::Bot_Explode()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:Bot_Explode");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnDamageServer
void AB_BGA_BotTurret_C::OnDamageServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnDamageServer");

	FAB_BGA_BotTurret_C_OnDamageServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ReceiveTick
void AB_BGA_BotTurret_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ReceiveTick");

	FAB_BGA_BotTurret_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature
void AB_BGA_BotTurret_C::BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature");

	FAB_BGA_BotTurret_C_BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature
void AB_BGA_BotTurret_C::BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature");

	FAB_BGA_BotTurret_C_BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnDeathServer
void AB_BGA_BotTurret_C::OnDeathServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:OnDeathServer");

	FAB_BGA_BotTurret_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:AttemptFire
void AB_BGA_BotTurret_C::AttemptFire()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:AttemptFire");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ExecuteUbergraph_B_BGA_BotTurret
void AB_BGA_BotTurret_C::ExecuteUbergraph_B_BGA_BotTurret(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret.B_BGA_BotTurret_C:ExecuteUbergraph_B_BGA_BotTurret");

	FAB_BGA_BotTurret_C_ExecuteUbergraph_B_BGA_BotTurret_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

