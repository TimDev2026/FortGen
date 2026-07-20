#include "pch.h"

#include "FN_B_Prj_Ninja_ThrowingStars_classes.h"

UClass* AB_Prj_Ninja_ThrowingStars_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:OnRep_Piercing
void AB_Prj_Ninja_ThrowingStars_C::OnRep_Piercing()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:OnRep_Piercing");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:OnRep_HitLocation
void AB_Prj_Ninja_ThrowingStars_C::OnRep_HitLocation()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:OnRep_HitLocation");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:UserConstructionScript
void AB_Prj_Ninja_ThrowingStars_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:ReceiveHit
void AB_Prj_Ninja_ThrowingStars_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:ReceiveHit");

	FAB_Prj_Ninja_ThrowingStars_C_ReceiveHit_Params Parms;

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

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:OnExploded
void AB_Prj_Ninja_ThrowingStars_C::OnExploded(TArray<class AActor*> HitActors, TArray<FHitResult> HitResults)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:OnExploded");

	FAB_Prj_Ninja_ThrowingStars_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:SetHoming
void AB_Prj_Ninja_ThrowingStars_C::SetHoming()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:SetHoming");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:HomeTargetDied
void AB_Prj_Ninja_ThrowingStars_C::HomeTargetDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:HomeTargetDied");

	FAB_Prj_Ninja_ThrowingStars_C_HomeTargetDied_Params Parms;

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

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:ShouldPierce
void AB_Prj_Ninja_ThrowingStars_C::ShouldPierce()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:ShouldPierce");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature
void AB_Prj_Ninja_ThrowingStars_C::BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature");

	FAB_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:ExecuteUbergraph_B_Prj_Ninja_ThrowingStars
void AB_Prj_Ninja_ThrowingStars_C::ExecuteUbergraph_B_Prj_Ninja_ThrowingStars(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C:ExecuteUbergraph_B_Prj_Ninja_ThrowingStars");

	FAB_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

