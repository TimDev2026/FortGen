#include "pch.h"

#include "FN_Prop_Explorer_OutlanderFragment_Llama_classes.h"

UClass* AProp_Explorer_OutlanderFragment_Llama_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:ShowHideModels
void AProp_Explorer_OutlanderFragment_Llama_C::ShowHideModels(bool Show_SkeletalMesh)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:ShowHideModels");

	FAProp_Explorer_OutlanderFragment_Llama_C_ShowHideModels_Params Parms;

	Parms.Show_SkeletalMesh = Show_SkeletalMesh;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnRep_KillParticle
void AProp_Explorer_OutlanderFragment_Llama_C::OnRep_KillParticle()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnRep_KillParticle");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:Llama_Lifespan_Expired
void AProp_Explorer_OutlanderFragment_Llama_C::Llama_Lifespan_Expired()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:Llama_Lifespan_Expired");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:CreateAndAttachEyes
void AProp_Explorer_OutlanderFragment_Llama_C::CreateAndAttachEyes(class USkeletalMeshComponent* Skeletal_Mesh)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:CreateAndAttachEyes");

	FAProp_Explorer_OutlanderFragment_Llama_C_CreateAndAttachEyes_Params Parms;

	Parms.Skeletal_Mesh = Skeletal_Mesh;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:SpawnHeadProjectile
void AProp_Explorer_OutlanderFragment_Llama_C::SpawnHeadProjectile(class USkeletalMeshComponent* SkeletalMesh)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:SpawnHeadProjectile");

	FAProp_Explorer_OutlanderFragment_Llama_C_SpawnHeadProjectile_Params Parms;

	Parms.SkeletalMesh = SkeletalMesh;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:SetupDiamonds
void AProp_Explorer_OutlanderFragment_Llama_C::SetupDiamonds()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:SetupDiamonds");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:Spawn Death Ingrediants
void AProp_Explorer_OutlanderFragment_Llama_C::Spawn_Death_Ingrediants()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:Spawn Death Ingrediants");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:SpawnRareCrystals
void AProp_Explorer_OutlanderFragment_Llama_C::SpawnRareCrystals()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:SpawnRareCrystals");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:ConvertDamageToResources
void AProp_Explorer_OutlanderFragment_Llama_C::ConvertDamageToResources(float Dealt_Damage, float Damage_Threshold, float Spawn_Threshold, int32_t MaxSpawnGroups, int32_t AmountSpawnGroups, class UFortWorldItemDefinition* SpawnItem, int32_t CurrentSpawned, float CarryOverDamage, float DamageRemainder, int32_t AmountSpawned, bool FinishedSpawning)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:ConvertDamageToResources");

	FAProp_Explorer_OutlanderFragment_Llama_C_ConvertDamageToResources_Params Parms;

	Parms.Dealt_Damage = Dealt_Damage;
	Parms.Damage_Threshold = Damage_Threshold;
	Parms.Spawn_Threshold = Spawn_Threshold;
	Parms.MaxSpawnGroups = MaxSpawnGroups;
	Parms.AmountSpawnGroups = AmountSpawnGroups;
	Parms.SpawnItem = SpawnItem;
	Parms.CurrentSpawned = CurrentSpawned;
	Parms.CarryOverDamage = CarryOverDamage;
	Parms.DamageRemainder = DamageRemainder;
	Parms.AmountSpawned = AmountSpawned;
	Parms.FinishedSpawning = FinishedSpawning;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:RollIngrediants
void AProp_Explorer_OutlanderFragment_Llama_C::RollIngrediants(class UFortIngredientItemDefinition* SpawnItem)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:RollIngrediants");

	FAProp_Explorer_OutlanderFragment_Llama_C_RollIngrediants_Params Parms;

	Parms.SpawnItem = SpawnItem;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:RollCrystalType
void AProp_Explorer_OutlanderFragment_Llama_C::RollCrystalType(class UFortWorldItemDefinition* RareCrystal)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:RollCrystalType");

	FAProp_Explorer_OutlanderFragment_Llama_C_RollCrystalType_Params Parms;

	Parms.RareCrystal = RareCrystal;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:UserConstructionScript
void AProp_Explorer_OutlanderFragment_Llama_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:Timeline_0__FinishedFunc
void AProp_Explorer_OutlanderFragment_Llama_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:Timeline_0__UpdateFunc
void AProp_Explorer_OutlanderFragment_Llama_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:ReceiveBeginPlay
void AProp_Explorer_OutlanderFragment_Llama_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnDamageServer
void AProp_Explorer_OutlanderFragment_Llama_C::OnDamageServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnDamageServer");

	FAProp_Explorer_OutlanderFragment_Llama_C_OnDamageServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnDeathServer
void AProp_Explorer_OutlanderFragment_Llama_C::OnDeathServer(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnDeathServer");

	FAProp_Explorer_OutlanderFragment_Llama_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:DefaultLlama
void AProp_Explorer_OutlanderFragment_Llama_C::DefaultLlama()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:DefaultLlama");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:DiamondsLlama
void AProp_Explorer_OutlanderFragment_Llama_C::DiamondsLlama()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:DiamondsLlama");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnDamagePlayEffects
void AProp_Explorer_OutlanderFragment_Llama_C::OnDamagePlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnDamagePlayEffects");

	FAProp_Explorer_OutlanderFragment_Llama_C_OnDamagePlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnDeathPlayEffects
void AProp_Explorer_OutlanderFragment_Llama_C::OnDeathPlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnDeathPlayEffects");

	FAProp_Explorer_OutlanderFragment_Llama_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnBounceAnimationUpdate
void AProp_Explorer_OutlanderFragment_Llama_C::OnBounceAnimationUpdate(FFortBounceData Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:OnBounceAnimationUpdate");

	FAProp_Explorer_OutlanderFragment_Llama_C_OnBounceAnimationUpdate_Params Parms;

	Parms.Data = Data;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:TheHeadWasSpawnedOnTheServerCallback
void AProp_Explorer_OutlanderFragment_Llama_C::TheHeadWasSpawnedOnTheServerCallback()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:TheHeadWasSpawnedOnTheServerCallback");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:LlamaDeathMontageIsComplete
void AProp_Explorer_OutlanderFragment_Llama_C::LlamaDeathMontageIsComplete()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:LlamaDeathMontageIsComplete");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:The First Llama Death Animation is Finished
void AProp_Explorer_OutlanderFragment_Llama_C::The_First_Llama_Death_Animation_is_Finished()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:The First Llama Death Animation is Finished");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:ExecuteUbergraph_Prop_Explorer_OutlanderFragment_Llama
void AProp_Explorer_OutlanderFragment_Llama_C::ExecuteUbergraph_Prop_Explorer_OutlanderFragment_Llama(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C:ExecuteUbergraph_Prop_Explorer_OutlanderFragment_Llama");

	FAProp_Explorer_OutlanderFragment_Llama_C_ExecuteUbergraph_Prop_Explorer_OutlanderFragment_Llama_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

