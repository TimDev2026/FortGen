#include "pch.h"

#include "FN_ProjectileHuskLobber_classes.h"

UClass* AProjectileHuskLobber_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C");

	return Class;
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:UserConstructionScript
void AProjectileHuskLobber_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:Timeline_0__FinishedFunc
void AProjectileHuskLobber_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:Timeline_0__UpdateFunc
void AProjectileHuskLobber_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:ReceiveHit
void AProjectileHuskLobber_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:ReceiveHit");

	FAProjectileHuskLobber_C_ReceiveHit_Params Parms;

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

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:ExecuteUbergraph_ProjectileHuskLobber
void AProjectileHuskLobber_C::ExecuteUbergraph_ProjectileHuskLobber(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber.ProjectileHuskLobber_C:ExecuteUbergraph_ProjectileHuskLobber");

	FAProjectileHuskLobber_C_ExecuteUbergraph_ProjectileHuskLobber_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

