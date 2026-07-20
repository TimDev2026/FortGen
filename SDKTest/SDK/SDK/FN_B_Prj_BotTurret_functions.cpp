#include "pch.h"

#include "FN_B_Prj_BotTurret_classes.h"

UClass* AB_Prj_BotTurret_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:SetTeamColorVFX
void AB_Prj_BotTurret_C::SetTeamColorVFX()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:SetTeamColorVFX");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:OnRep_Bounce
void AB_Prj_BotTurret_C::OnRep_Bounce()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:OnRep_Bounce");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:OnRep_ShouldBounce
void AB_Prj_BotTurret_C::OnRep_ShouldBounce()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:OnRep_ShouldBounce");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:UserConstructionScript
void AB_Prj_BotTurret_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:ReceiveBeginPlay
void AB_Prj_BotTurret_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:ReceiveHit
void AB_Prj_BotTurret_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:ReceiveHit");

	FAB_Prj_BotTurret_C_ReceiveHit_Params Parms;

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

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:ReceiveActorBeginOverlap
void AB_Prj_BotTurret_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:ReceiveActorBeginOverlap");

	FAB_Prj_BotTurret_C_ReceiveActorBeginOverlap_Params Parms;

	Parms.OtherActor = OtherActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:HitStaticMesh
void AB_Prj_BotTurret_C::HitStaticMesh()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:HitStaticMesh");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:Hit Pawn
void AB_Prj_BotTurret_C::Hit_Pawn()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:Hit Pawn");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:OnExploded
void AB_Prj_BotTurret_C::OnExploded(TArray<class AActor*> HitActors, TArray<FHitResult> HitResults)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:OnExploded");

	FAB_Prj_BotTurret_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:OnBounce
void AB_Prj_BotTurret_C::OnBounce(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:OnBounce");

	FAB_Prj_BotTurret_C_OnBounce_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:ExecuteUbergraph_B_Prj_BotTurret
void AB_Prj_BotTurret_C::ExecuteUbergraph_B_Prj_BotTurret(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_Prj_BotTurret.B_Prj_BotTurret_C:ExecuteUbergraph_B_Prj_BotTurret");

	FAB_Prj_BotTurret_C_ExecuteUbergraph_B_Prj_BotTurret_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

