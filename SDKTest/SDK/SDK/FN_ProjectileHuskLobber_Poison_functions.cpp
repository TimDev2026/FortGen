#include "pch.h"

#include "FN_ProjectileHuskLobber_Poison_classes.h"

UClass* AProjectileHuskLobber_Poison_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C");

	return Class;
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:Is Valid Damage Target
void AProjectileHuskLobber_Poison_C::Is_Valid_Damage_Target(class AActor* CollidingActor, bool Is_Valid_Damage_Target, class AFortPawn* Valid_Pawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:Is Valid Damage Target");

	FAProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target_Params Parms;

	Parms.CollidingActor = CollidingActor;
	Parms.Is_Valid_Damage_Target = Is_Valid_Damage_Target;
	Parms.Valid_Pawn = Valid_Pawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:UserConstructionScript
void AProjectileHuskLobber_Poison_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:Timeline_0__FinishedFunc
void AProjectileHuskLobber_Poison_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:Timeline_0__UpdateFunc
void AProjectileHuskLobber_Poison_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:ReceiveHit
void AProjectileHuskLobber_Poison_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:ReceiveHit");

	FAProjectileHuskLobber_Poison_C_ReceiveHit_Params Parms;

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

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:EndCloud
void AProjectileHuskLobber_Poison_C::EndCloud()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:EndCloud");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature
void AProjectileHuskLobber_Poison_C::BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature");

	FAProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:ExecuteUbergraph_ProjectileHuskLobber_Poison
void AProjectileHuskLobber_Poison_C::ExecuteUbergraph_ProjectileHuskLobber_Poison(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C:ExecuteUbergraph_ProjectileHuskLobber_Poison");

	FAProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

