#include "pch.h"

#include "FN_ProjectileHuskRanged_classes.h"

UClass* AProjectileHuskRanged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C");

	return Class;
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:UserConstructionScript
void AProjectileHuskRanged_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:ReceiveHit
void AProjectileHuskRanged_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:ReceiveHit");

	FAProjectileHuskRanged_C_ReceiveHit_Params Parms;

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

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:ReceiveBeginPlay
void AProjectileHuskRanged_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:ProjectileCheck
void AProjectileHuskRanged_C::ProjectileCheck()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:ProjectileCheck");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:StopHoming
void AProjectileHuskRanged_C::StopHoming()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:StopHoming");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:OnExploded
void AProjectileHuskRanged_C::OnExploded(TArray<class AActor*> HitActors, TArray<FHitResult> HitResults)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:OnExploded");

	FAProjectileHuskRanged_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:ExecuteUbergraph_ProjectileHuskRanged
void AProjectileHuskRanged_C::ExecuteUbergraph_ProjectileHuskRanged(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskRanged.ProjectileHuskRanged_C:ExecuteUbergraph_ProjectileHuskRanged");

	FAProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

