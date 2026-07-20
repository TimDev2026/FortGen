#include "pch.h"

#include "FN_B_BGA_ProximityMine_classes.h"

UClass* AB_BGA_ProximityMine_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:VFX_SetTeamColors
void AB_BGA_ProximityMine_C::VFX_SetTeamColors()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:VFX_SetTeamColors");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:AttachFX
void AB_BGA_ProximityMine_C::AttachFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:AttachFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:DestroyFX
void AB_BGA_ProximityMine_C::DestroyFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:DestroyFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:OnRep_IsDead?
void AB_BGA_ProximityMine_C::OnRep_IsDead_()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:OnRep_IsDead?");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:OnRep_bActivated
void AB_BGA_ProximityMine_C::OnRep_bActivated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:OnRep_bActivated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:OnRep_IsPlaced
void AB_BGA_ProximityMine_C::OnRep_IsPlaced()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:OnRep_IsPlaced");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:IsValidTarget
bool AB_BGA_ProximityMine_C::IsValidTarget(class UObject* Object)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:IsValidTarget");

	FAB_BGA_ProximityMine_C_IsValidTarget_Params Parms;

	Parms.Object = Object;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:UserConstructionScript
void AB_BGA_ProximityMine_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Timeline_0__FinishedFunc
void AB_BGA_ProximityMine_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Timeline_0__UpdateFunc
void AB_BGA_ProximityMine_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Scale Rings Up__FinishedFunc
void AB_BGA_ProximityMine_C::Scale_Rings_Up__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Scale Rings Up__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Scale Rings Up__UpdateFunc
void AB_BGA_ProximityMine_C::Scale_Rings_Up__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Scale Rings Up__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Scale Ring In__FinishedFunc
void AB_BGA_ProximityMine_C::Scale_Ring_In__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Scale Ring In__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Scale Ring In__UpdateFunc
void AB_BGA_ProximityMine_C::Scale_Ring_In__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Scale Ring In__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ScaleDownAll__FinishedFunc
void AB_BGA_ProximityMine_C::ScaleDownAll__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ScaleDownAll__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ScaleDownAll__UpdateFunc
void AB_BGA_ProximityMine_C::ScaleDownAll__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ScaleDownAll__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:SetProjectile
void AB_BGA_ProximityMine_C::SetProjectile(float Init_Speed, float Gravity, float Activation_Delay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:SetProjectile");

	FAB_BGA_ProximityMine_C_SetProjectile_Params Parms;

	Parms.Init_Speed = Init_Speed;
	Parms.Gravity = Gravity;
	Parms.Activation_Delay = Activation_Delay;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ReceiveHit
void AB_BGA_ProximityMine_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ReceiveHit");

	FAB_BGA_ProximityMine_C_ReceiveHit_Params Parms;

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ReceiveBeginPlay
void AB_BGA_ProximityMine_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:StopSpin
void AB_BGA_ProximityMine_C::StopSpin()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:StopSpin");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:OnDamageServer
void AB_BGA_ProximityMine_C::OnDamageServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:OnDamageServer");

	FAB_BGA_ProximityMine_C_OnDamageServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:DamageExplode
void AB_BGA_ProximityMine_C::DamageExplode()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:DamageExplode");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:StartSpin
void AB_BGA_ProximityMine_C::StartSpin()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:StartSpin");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:GameplayCue.Abilities.Activation.Generic.proxymine
void AB_BGA_ProximityMine_C::GameplayCue_Abilities_Activation_Generic_proxymine(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:GameplayCue.Abilities.Activation.Generic.proxymine");

	FAB_BGA_ProximityMine_C_GameplayCue_Abilities_Activation_Generic_proxymine_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:SetExplosion
void AB_BGA_ProximityMine_C::SetExplosion(int32_t Explosion_Level, float Activation_Radius, class AFortPlayerPawn* PlayerPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:SetExplosion");

	FAB_BGA_ProximityMine_C_SetExplosion_Params Parms;

	Parms.Explosion_Level = Explosion_Level;
	Parms.Activation_Radius = Activation_Radius;
	Parms.PlayerPawn = PlayerPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:BaseDied
void AB_BGA_ProximityMine_C::BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:BaseDied");

	FAB_BGA_ProximityMine_C_BaseDied_Params Parms;

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

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:BaseDestroyed
void AB_BGA_ProximityMine_C::BaseDestroyed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:BaseDestroyed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:BndEvt__S_HalfSphere_Collision_1_Unit_K2Node_ComponentBoundEvent_420_ComponentBeginOverlapSignature__DelegateSignature
void AB_BGA_ProximityMine_C::BndEvt__S_HalfSphere_Collision_1_Unit_K2Node_ComponentBoundEvent_420_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:BndEvt__S_HalfSphere_Collision_1_Unit_K2Node_ComponentBoundEvent_420_ComponentBeginOverlapSignature__DelegateSignature");

	FAB_BGA_ProximityMine_C_BndEvt__S_HalfSphere_Collision_1_Unit_K2Node_ComponentBoundEvent_420_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Beacon Loop
void AB_BGA_ProximityMine_C::Beacon_Loop()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:Beacon Loop");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ExecuteUbergraph_B_BGA_ProximityMine
void AB_BGA_ProximityMine_C::ExecuteUbergraph_B_BGA_ProximityMine(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/B_BGA_ProximityMine.B_BGA_ProximityMine_C:ExecuteUbergraph_B_BGA_ProximityMine");

	FAB_BGA_ProximityMine_C_ExecuteUbergraph_B_BGA_ProximityMine_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

