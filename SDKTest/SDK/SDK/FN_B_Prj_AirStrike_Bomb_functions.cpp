#include "pch.h"

#include "FN_B_Prj_AirStrike_Bomb_classes.h"

UClass* AB_Prj_AirStrike_Bomb_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:UserConstructionScript
void AB_Prj_AirStrike_Bomb_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:FadeDecal__FinishedFunc
void AB_Prj_AirStrike_Bomb_C::FadeDecal__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:FadeDecal__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:FadeDecal__UpdateFunc
void AB_Prj_AirStrike_Bomb_C::FadeDecal__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:FadeDecal__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:ReceiveBeginPlay
void AB_Prj_AirStrike_Bomb_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:ReceiveAnyDamage
void AB_Prj_AirStrike_Bomb_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:ReceiveAnyDamage");

	FAB_Prj_AirStrike_Bomb_C_ReceiveAnyDamage_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:ReceiveHit
void AB_Prj_AirStrike_Bomb_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:ReceiveHit");

	FAB_Prj_AirStrike_Bomb_C_ReceiveHit_Params Parms;

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

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:OnExploded
void AB_Prj_AirStrike_Bomb_C::OnExploded(TArray<class AActor*> HitActors, TArray<FHitResult> HitResults)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:OnExploded");

	FAB_Prj_AirStrike_Bomb_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:ExecuteUbergraph_B_Prj_AirStrike_Bomb
void AB_Prj_AirStrike_Bomb_C::ExecuteUbergraph_B_Prj_AirStrike_Bomb(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C:ExecuteUbergraph_B_Prj_AirStrike_Bomb");

	FAB_Prj_AirStrike_Bomb_C_ExecuteUbergraph_B_Prj_AirStrike_Bomb_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

