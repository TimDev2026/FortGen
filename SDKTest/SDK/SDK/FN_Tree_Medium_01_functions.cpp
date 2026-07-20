#include "pch.h"

#include "FN_Tree_Medium_01_classes.h"

UClass* ATree_Medium_01_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Prop/Tree_Medium_01.Tree_Medium_01_C");

	return Class;
}

// Function /Game/Building/ActorBlueprints/Prop/Tree_Medium_01.Tree_Medium_01_C:UserConstructionScript
void ATree_Medium_01_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Prop/Tree_Medium_01.Tree_Medium_01_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Building/ActorBlueprints/Prop/Tree_Medium_01.Tree_Medium_01_C:OnDamagePlayEffects
void ATree_Medium_01_C::OnDamagePlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Prop/Tree_Medium_01.Tree_Medium_01_C:OnDamagePlayEffects");

	FATree_Medium_01_C_OnDamagePlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Building/ActorBlueprints/Prop/Tree_Medium_01.Tree_Medium_01_C:ExecuteUbergraph_Tree_Medium_01
void ATree_Medium_01_C::ExecuteUbergraph_Tree_Medium_01(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Building/ActorBlueprints/Prop/Tree_Medium_01.Tree_Medium_01_C:ExecuteUbergraph_Tree_Medium_01");

	FATree_Medium_01_C_ExecuteUbergraph_Tree_Medium_01_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

