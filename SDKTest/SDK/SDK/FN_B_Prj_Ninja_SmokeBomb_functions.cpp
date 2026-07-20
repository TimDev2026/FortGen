#include "pch.h"

#include "FN_B_Prj_Ninja_SmokeBomb_classes.h"

UClass* AB_Prj_Ninja_SmokeBomb_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C:UserConstructionScript
void AB_Prj_Ninja_SmokeBomb_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C:ReceiveHit
void AB_Prj_Ninja_SmokeBomb_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C:ReceiveHit");

	FAB_Prj_Ninja_SmokeBomb_C_ReceiveHit_Params Parms;

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

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C:OnExploded
void AB_Prj_Ninja_SmokeBomb_C::OnExploded(TArray<class AActor*> HitActors, TArray<FHitResult> HitResults)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C:OnExploded");

	FAB_Prj_Ninja_SmokeBomb_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C:ExecuteUbergraph_B_Prj_Ninja_SmokeBomb
void AB_Prj_Ninja_SmokeBomb_C::ExecuteUbergraph_B_Prj_Ninja_SmokeBomb(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C:ExecuteUbergraph_B_Prj_Ninja_SmokeBomb");

	FAB_Prj_Ninja_SmokeBomb_C_ExecuteUbergraph_B_Prj_Ninja_SmokeBomb_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

