#include "pch.h"

#include "FN_B_Prj_Commando_FragGrenade_Cluster_classes.h"

UClass* AB_Prj_Commando_FragGrenade_Cluster_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:UserConstructionScript
void AB_Prj_Commando_FragGrenade_Cluster_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:OnStop
void AB_Prj_Commando_FragGrenade_Cluster_C::OnStop(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:OnStop");

	FAB_Prj_Commando_FragGrenade_Cluster_C_OnStop_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:ReceiveAnyDamage
void AB_Prj_Commando_FragGrenade_Cluster_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:ReceiveAnyDamage");

	FAB_Prj_Commando_FragGrenade_Cluster_C_ReceiveAnyDamage_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:ReceiveBeginPlay
void AB_Prj_Commando_FragGrenade_Cluster_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:OnExploded
void AB_Prj_Commando_FragGrenade_Cluster_C::OnExploded(TArray<class AActor*> HitActors, TArray<FHitResult> HitResults)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:OnExploded");

	FAB_Prj_Commando_FragGrenade_Cluster_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster
void AB_Prj_Commando_FragGrenade_Cluster_C::ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C:ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster");

	FAB_Prj_Commando_FragGrenade_Cluster_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

