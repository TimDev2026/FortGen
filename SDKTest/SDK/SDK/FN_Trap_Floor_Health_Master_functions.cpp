#include "pch.h"

#include "FN_Trap_Floor_Health_Master_classes.h"

UClass* ATrap_Floor_Health_Master_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C");

	return Class;
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:BP_ShouldTrigger
bool ATrap_Floor_Health_Master_C::BP_ShouldTrigger(TArray<class AActor*> TouchingActors) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:BP_ShouldTrigger");

	FATrap_Floor_Health_Master_C_BP_ShouldTrigger_Params Parms;

	Parms.TouchingActors = TouchingActors;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:Active_FX
void ATrap_Floor_Health_Master_C::Active_FX(bool Active)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:Active_FX");

	FATrap_Floor_Health_Master_C_Active_FX_Params Parms;

	Parms.Active = Active;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnRep_Charge_Value
void ATrap_Floor_Health_Master_C::OnRep_Charge_Value()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnRep_Charge_Value");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:UserConstructionScript
void ATrap_Floor_Health_Master_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnReloadEnd
void ATrap_Floor_Health_Master_C::OnReloadEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnReloadEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnPlaced
void ATrap_Floor_Health_Master_C::OnPlaced()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnPlaced");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnFinishedBuilding
void ATrap_Floor_Health_Master_C::OnFinishedBuilding()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnFinishedBuilding");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:GameplayCue.Abilities.Activation.Traps.ReloadBegin
void ATrap_Floor_Health_Master_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	FATrap_Floor_Health_Master_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap
void ATrap_Floor_Health_Master_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	FATrap_Floor_Health_Master_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnOutOfDurability
void ATrap_Floor_Health_Master_C::OnOutOfDurability()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnOutOfDurability");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature
void ATrap_Floor_Health_Master_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature");

	FATrap_Floor_Health_Master_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_288_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature
void ATrap_Floor_Health_Master_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature");

	FATrap_Floor_Health_Master_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_306_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnDamaged_Event_0
void ATrap_Floor_Health_Master_C::OnDamaged_Event_0(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:OnDamaged_Event_0");

	FATrap_Floor_Health_Master_C_OnDamaged_Event_0_Params Parms;

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

// Function /Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:ExecuteUbergraph_Trap_Floor_Health_Master
void ATrap_Floor_Health_Master_C::ExecuteUbergraph_Trap_Floor_Health_Master(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Master.Trap_Floor_Health_Master_C:ExecuteUbergraph_Trap_Floor_Health_Master");

	FATrap_Floor_Health_Master_C_ExecuteUbergraph_Trap_Floor_Health_Master_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

