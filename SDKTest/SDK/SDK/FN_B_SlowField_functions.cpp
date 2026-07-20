#include "pch.h"

#include "FN_B_SlowField_classes.h"

UClass* AB_SlowField_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:SetTeamColorsVFX
void AB_SlowField_C::SetTeamColorsVFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:SetTeamColorsVFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:OnRep_IsDeployed
void AB_SlowField_C::OnRep_IsDeployed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:OnRep_IsDeployed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:UserConstructionScript
void AB_SlowField_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:SlowPP__FinishedFunc
void AB_SlowField_C::SlowPP__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:SlowPP__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:SlowPP__UpdateFunc
void AB_SlowField_C::SlowPP__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:SlowPP__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:Audio Powerdown__FinishedFunc
void AB_SlowField_C::Audio_Powerdown__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:Audio Powerdown__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:Audio Powerdown__UpdateFunc
void AB_SlowField_C::Audio_Powerdown__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:Audio Powerdown__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:MaterializeCylinder__FinishedFunc
void AB_SlowField_C::MaterializeCylinder__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:MaterializeCylinder__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:MaterializeCylinder__UpdateFunc
void AB_SlowField_C::MaterializeCylinder__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:MaterializeCylinder__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:OnDeathPlayEffects
void AB_SlowField_C::OnDeathPlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:OnDeathPlayEffects");

	FAB_SlowField_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature
void AB_SlowField_C::BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature");

	FAB_SlowField_C_BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature
void AB_SlowField_C::BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature");

	FAB_SlowField_C_BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:PP_Activate
void AB_SlowField_C::PP_Activate()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:PP_Activate");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:PP_Deactivate
void AB_SlowField_C::PP_Deactivate()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:PP_Deactivate");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:PassInfo
void AB_SlowField_C::PassInfo(float Height, float Radius, float Activation_Delay)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:PassInfo");

	FAB_SlowField_C_PassInfo_Params Parms;

	Parms.Height = Height;
	Parms.Radius = Radius;
	Parms.Activation_Delay = Activation_Delay;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:Beacon Loop
void AB_SlowField_C::Beacon_Loop()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:Beacon Loop");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature
void AB_SlowField_C::BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature(FHitResult ImpactResult, FVector ImpactVelocity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature");

	FAB_SlowField_C_BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature_Params Parms;

	Parms.ImpactResult = ImpactResult;
	Parms.ImpactVelocity = ImpactVelocity;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:OnLocalPlayerDeath
void AB_SlowField_C::OnLocalPlayerDeath(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, FVector HitLocation, class AActor* DamageCauser)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:OnLocalPlayerDeath");

	FAB_SlowField_C_OnLocalPlayerDeath_Params Parms;

	Parms.DeadActor = DeadActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.HitLocation = HitLocation;
	Parms.DamageCauser = DamageCauser;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:ExecuteUbergraph_B_SlowField
void AB_SlowField_C::ExecuteUbergraph_B_SlowField(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SlowField/B_SlowField.B_SlowField_C:ExecuteUbergraph_B_SlowField");

	FAB_SlowField_C_ExecuteUbergraph_B_SlowField_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

