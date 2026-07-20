#include "pch.h"

#include "FN_B_Prj_Outlander_GravitySphere_classes.h"

UClass* AB_Prj_Outlander_GravitySphere_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:OnRep_bHasHeavyStuff
void AB_Prj_Outlander_GravitySphere_C::OnRep_bHasHeavyStuff()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:OnRep_bHasHeavyStuff");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SpawnRippleFX
void AB_Prj_Outlander_GravitySphere_C::SpawnRippleFX(class AActor* As_Fort_Pawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SpawnRippleFX");

	FAB_Prj_Outlander_GravitySphere_C_SpawnRippleFX_Params Parms;

	Parms.As_Fort_Pawn = As_Fort_Pawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:UserConstructionScript
void AB_Prj_Outlander_GravitySphere_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:ScaleSphere__FinishedFunc
void AB_Prj_Outlander_GravitySphere_C::ScaleSphere__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:ScaleSphere__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:ScaleSphere__UpdateFunc
void AB_Prj_Outlander_GravitySphere_C::ScaleSphere__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:ScaleSphere__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:EnterTheSphere__FinishedFunc
void AB_Prj_Outlander_GravitySphere_C::EnterTheSphere__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:EnterTheSphere__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:EnterTheSphere__UpdateFunc
void AB_Prj_Outlander_GravitySphere_C::EnterTheSphere__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:EnterTheSphere__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SphereEnemyReact__FinishedFunc
void AB_Prj_Outlander_GravitySphere_C::SphereEnemyReact__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SphereEnemyReact__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SphereEnemyReact__UpdateFunc
void AB_Prj_Outlander_GravitySphere_C::SphereEnemyReact__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SphereEnemyReact__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:OnBounce
void AB_Prj_Outlander_GravitySphere_C::OnBounce(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:OnBounce");

	FAB_Prj_Outlander_GravitySphere_C_OnBounce_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:Planted
void AB_Prj_Outlander_GravitySphere_C::Planted(FVector ImpactPoint, FVector ImpactNormal)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:Planted");

	FAB_Prj_Outlander_GravitySphere_C_Planted_Params Parms;

	Parms.ImpactPoint = ImpactPoint;
	Parms.ImpactNormal = ImpactNormal;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:BndEvt__ActualCollide_K2Node_ComponentBoundEvent_493_ComponentBeginOverlapSignature__DelegateSignature
void AB_Prj_Outlander_GravitySphere_C::BndEvt__ActualCollide_K2Node_ComponentBoundEvent_493_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:BndEvt__ActualCollide_K2Node_ComponentBoundEvent_493_ComponentBeginOverlapSignature__DelegateSignature");

	FAB_Prj_Outlander_GravitySphere_C_BndEvt__ActualCollide_K2Node_ComponentBoundEvent_493_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:BndEvt__ActualCollide_K2Node_ComponentBoundEvent_496_ComponentEndOverlapSignature__DelegateSignature
void AB_Prj_Outlander_GravitySphere_C::BndEvt__ActualCollide_K2Node_ComponentBoundEvent_496_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:BndEvt__ActualCollide_K2Node_ComponentBoundEvent_496_ComponentEndOverlapSignature__DelegateSignature");

	FAB_Prj_Outlander_GravitySphere_C_BndEvt__ActualCollide_K2Node_ComponentBoundEvent_496_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:RewindSphere
void AB_Prj_Outlander_GravitySphere_C::RewindSphere()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:RewindSphere");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:RewindPP
void AB_Prj_Outlander_GravitySphere_C::RewindPP()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:RewindPP");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:Loop
void AB_Prj_Outlander_GravitySphere_C::Loop()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:Loop");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SetHasHeavyStuff
void AB_Prj_Outlander_GravitySphere_C::SetHasHeavyStuff(bool bInHasHeavyStuff)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SetHasHeavyStuff");

	FAB_Prj_Outlander_GravitySphere_C_SetHasHeavyStuff_Params Parms;

	Parms.bInHasHeavyStuff = bInHasHeavyStuff;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:OnEnterGravitySphere
void AB_Prj_Outlander_GravitySphere_C::OnEnterGravitySphere(class AActor* EnteringActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:OnEnterGravitySphere");

	FAB_Prj_Outlander_GravitySphere_C_OnEnterGravitySphere_Params Parms;

	Parms.EnteringActor = EnteringActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:OnExitGravitySphere
void AB_Prj_Outlander_GravitySphere_C::OnExitGravitySphere(class AActor* ExitingActor)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:OnExitGravitySphere");

	FAB_Prj_Outlander_GravitySphere_C_OnExitGravitySphere_Params Parms;

	Parms.ExitingActor = ExitingActor;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SetHasEnemyExtraGravity
void AB_Prj_Outlander_GravitySphere_C::SetHasEnemyExtraGravity(bool bHasEnemyExtraGravity)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:SetHasEnemyExtraGravity");

	FAB_Prj_Outlander_GravitySphere_C_SetHasEnemyExtraGravity_Params Parms;

	Parms.bHasEnemyExtraGravity = bHasEnemyExtraGravity;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:ExecuteUbergraph_B_Prj_Outlander_GravitySphere
void AB_Prj_Outlander_GravitySphere_C::ExecuteUbergraph_B_Prj_Outlander_GravitySphere(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C:ExecuteUbergraph_B_Prj_Outlander_GravitySphere");

	FAB_Prj_Outlander_GravitySphere_C_ExecuteUbergraph_B_Prj_Outlander_GravitySphere_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

