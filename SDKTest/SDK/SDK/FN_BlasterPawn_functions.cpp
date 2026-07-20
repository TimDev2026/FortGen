#include "pch.h"

#include "FN_BlasterPawn_classes.h"

UClass* ABlasterPawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C");

	return Class;
}

// Function /Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:OnRep_HeadEffectStatus
void ABlasterPawn_C::OnRep_HeadEffectStatus()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:OnRep_HeadEffectStatus");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:UserConstructionScript
void ABlasterPawn_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:OnDeathServer
void ABlasterPawn_C::OnDeathServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:OnDeathServer");

	FABlasterPawn_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:GameplayCue.Impact.Physical.Energy
void ABlasterPawn_C::GameplayCue_Impact_Physical_Energy(EGameplayCueEvent EventType, FGameplayCueParameters Parameters)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:GameplayCue.Impact.Physical.Energy");

	FABlasterPawn_C_GameplayCue_Impact_Physical_Energy_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:ExecuteUbergraph_BlasterPawn
void ABlasterPawn_C::ExecuteUbergraph_BlasterPawn(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/BlasterPawn.BlasterPawn_C:ExecuteUbergraph_BlasterPawn");

	FABlasterPawn_C_ExecuteUbergraph_BlasterPawn_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

