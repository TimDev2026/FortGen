#include "pch.h"

#include "FN_B_Prj_Constructor_PlasmaPulse_classes.h"

UClass* AB_Prj_Constructor_PlasmaPulse_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:OnRep_Explode
void AB_Prj_Constructor_PlasmaPulse_C::OnRep_Explode()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:OnRep_Explode");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:UserConstructionScript
void AB_Prj_Constructor_PlasmaPulse_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:FlashShield
void AB_Prj_Constructor_PlasmaPulse_C::FlashShield()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:FlashShield");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:OnStop
void AB_Prj_Constructor_PlasmaPulse_C::OnStop(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:OnStop");

	FAB_Prj_Constructor_PlasmaPulse_C_OnStop_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:ReceiveBeginPlay
void AB_Prj_Constructor_PlasmaPulse_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:ReceiveEndPlay
void AB_Prj_Constructor_PlasmaPulse_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:ReceiveEndPlay");

	FAB_Prj_Constructor_PlasmaPulse_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:OnBounce
void AB_Prj_Constructor_PlasmaPulse_C::OnBounce(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:OnBounce");

	FAB_Prj_Constructor_PlasmaPulse_C_OnBounce_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:AttachedObj_Died
void AB_Prj_Constructor_PlasmaPulse_C::AttachedObj_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:AttachedObj_Died");

	FAB_Prj_Constructor_PlasmaPulse_C_AttachedObj_Died_Params Parms;

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

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:BaseDestroyed
void AB_Prj_Constructor_PlasmaPulse_C::BaseDestroyed()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:BaseDestroyed");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse
void AB_Prj_Constructor_PlasmaPulse_C::ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C:ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse");

	FAB_Prj_Constructor_PlasmaPulse_C_ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

