#include "pch.h"

#include "FN_B_Prj_Commando_FragGrenade_classes.h"

UClass* AB_Prj_Commando_FragGrenade_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:OnRep_StoredHit
void AB_Prj_Commando_FragGrenade_C::OnRep_StoredHit()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:OnRep_StoredHit");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:UserConstructionScript
void AB_Prj_Commando_FragGrenade_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:Prj_Rotation__FinishedFunc
void AB_Prj_Commando_FragGrenade_C::Prj_Rotation__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:Prj_Rotation__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:Prj_Rotation__UpdateFunc
void AB_Prj_Commando_FragGrenade_C::Prj_Rotation__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:Prj_Rotation__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:ReceiveBeginPlay
void AB_Prj_Commando_FragGrenade_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:OnStop
void AB_Prj_Commando_FragGrenade_C::OnStop(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:OnStop");

	FAB_Prj_Commando_FragGrenade_C_OnStop_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:Stop_Rotation
void AB_Prj_Commando_FragGrenade_C::Stop_Rotation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:Stop_Rotation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:OnExploded
void AB_Prj_Commando_FragGrenade_C::OnExploded(TArray<class AActor*> HitActors, TArray<FHitResult> HitResults)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:OnExploded");

	FAB_Prj_Commando_FragGrenade_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:ReceiveAnyDamage
void AB_Prj_Commando_FragGrenade_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:ReceiveAnyDamage");

	FAB_Prj_Commando_FragGrenade_C_ReceiveAnyDamage_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:OnBounce
void AB_Prj_Commando_FragGrenade_C::OnBounce(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:OnBounce");

	FAB_Prj_Commando_FragGrenade_C_OnBounce_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:ExecuteUbergraph_B_Prj_Commando_FragGrenade
void AB_Prj_Commando_FragGrenade_C::ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C:ExecuteUbergraph_B_Prj_Commando_FragGrenade");

	FAB_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

