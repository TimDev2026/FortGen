#include "pch.h"

#include "FN_B_Constructor_BASE_classes.h"

UClass* AB_Constructor_BASE_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BaseSelfApplyGameplaySpec
void AB_Constructor_BASE_C::BaseSelfApplyGameplaySpec(FGameplayEffectSpecHandle GE_Spec)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BaseSelfApplyGameplaySpec");

	FAB_Constructor_BASE_C_BaseSelfApplyGameplaySpec_Params Parms;

	Parms.GE_Spec = GE_Spec;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetBaseVisualGlow
void AB_Constructor_BASE_C::SetBaseVisualGlow()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetBaseVisualGlow");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetDamageMultiplier
void AB_Constructor_BASE_C::SetDamageMultiplier()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetDamageMultiplier");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:OnRep_CollectResources
void AB_Constructor_BASE_C::OnRep_CollectResources()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:OnRep_CollectResources");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BlueprintGetInteractionString
FText AB_Constructor_BASE_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BlueprintGetInteractionString");

	FAB_Constructor_BASE_C_BlueprintGetInteractionString_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:AddResourceToStack
void AB_Constructor_BASE_C::AddResourceToStack(FStructRecyclingResource RecyclingResource, int32_t AmountToSpawn, class UFortWorldItemDefinition* Stored_Resource, FStructRecyclingResource SetValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:AddResourceToStack");

	FAB_Constructor_BASE_C_AddResourceToStack_Params Parms;

	Parms.RecyclingResource = RecyclingResource;
	Parms.AmountToSpawn = AmountToSpawn;
	Parms.Stored_Resource = Stored_Resource;
	Parms.SetValue = SetValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SpawnResourceForRecycling
void AB_Constructor_BASE_C::SpawnResourceForRecycling(class UFortWorldItemDefinition* ItemDefinition, int32_t AmountToSpawn, EFortResourceType ResourceType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SpawnResourceForRecycling");

	FAB_Constructor_BASE_C_SpawnResourceForRecycling_Params Parms;

	Parms.ItemDefinition = ItemDefinition;
	Parms.AmountToSpawn = AmountToSpawn;
	Parms.ResourceType = ResourceType;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BlueprintCanInteract
bool AB_Constructor_BASE_C::BlueprintCanInteract(class AFortPawn* InteractingPawn) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BlueprintCanInteract");

	FAB_Constructor_BASE_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:AddGEToBaseArray
void AB_Constructor_BASE_C::AddGEToBaseArray(TArray<FBASEGameplayEffect> BaseArray, class UClass* GameplayEffect, int32_t LevelOverride)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:AddGEToBaseArray");

	FAB_Constructor_BASE_C_AddGEToBaseArray_Params Parms;

	Parms.BaseArray = BaseArray;
	Parms.GameplayEffect = GameplayEffect;
	Parms.LevelOverride = LevelOverride;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:OnRep_NumbPlayersNearBase
void AB_Constructor_BASE_C::OnRep_NumbPlayersNearBase()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:OnRep_NumbPlayersNearBase");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:OnRep_BaseIsPlaced
void AB_Constructor_BASE_C::OnRep_BaseIsPlaced()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:OnRep_BaseIsPlaced");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:RecycleResources
void AB_Constructor_BASE_C::RecycleResources()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:RecycleResources");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetupHostileEffects
void AB_Constructor_BASE_C::SetupHostileEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<FBASEGameplayEffect> HostileEffects)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetupHostileEffects");

	FAB_Constructor_BASE_C_SetupHostileEffects_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.HostileEffects = HostileEffects;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetupFriendlyEffects
void AB_Constructor_BASE_C::SetupFriendlyEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<FBASEGameplayEffect> FriendlyEffects)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetupFriendlyEffects");

	FAB_Constructor_BASE_C_SetupFriendlyEffects_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.FriendlyEffects = FriendlyEffects;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetupBuildingEffects
void AB_Constructor_BASE_C::SetupBuildingEffects(class UAbilitySystemComponent* AbilitySystemComponent, TArray<FBASEGameplayEffect> BuildingEffects)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetupBuildingEffects");

	FAB_Constructor_BASE_C_SetupBuildingEffects_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.BuildingEffects = BuildingEffects;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:Setup Base Effect Array
void AB_Constructor_BASE_C::Setup_Base_Effect_Array(class UAbilitySystemComponent* Instigator_Ability_System, TArray<FBASEGameplayEffect> BASEBuildingEffects, TArray<FBASEGameplayEffect> BASEFriendlyEffects, TArray<FBASEGameplayEffect> BASEHostileEffects)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:Setup Base Effect Array");

	FAB_Constructor_BASE_C_Setup_Base_Effect_Array_Params Parms;

	Parms.Instigator_Ability_System = Instigator_Ability_System;
	Parms.BASEBuildingEffects = BASEBuildingEffects;
	Parms.BASEFriendlyEffects = BASEFriendlyEffects;
	Parms.BASEHostileEffects = BASEHostileEffects;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetupBaseDefaultValues
void AB_Constructor_BASE_C::SetupBaseDefaultValues(class UAbilitySystemComponent* Ability_System_Component, int32_t NodesToAffect)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:SetupBaseDefaultValues");

	FAB_Constructor_BASE_C_SetupBaseDefaultValues_Params Parms;

	Parms.Ability_System_Component = Ability_System_Component;
	Parms.NodesToAffect = NodesToAffect;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:UserConstructionScript
void AB_Constructor_BASE_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:OnPlaced
void AB_Constructor_BASE_C::OnPlaced(class UAbilitySystemComponent* InstigatorAbilitySystemComponent)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:OnPlaced");

	FAB_Constructor_BASE_C_OnPlaced_Params Parms;

	Parms.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:Recycling
void AB_Constructor_BASE_C::Recycling()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:Recycling");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature");

	FAB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature
void AB_Constructor_BASE_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature");

	FAB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:AnimateLegs
void AB_Constructor_BASE_C::AnimateLegs(bool LegsUp)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:AnimateLegs");

	FAB_Constructor_BASE_C_AnimateLegs_Params Parms;

	Parms.LegsUp = LegsUp;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:StartBuildingActorVisuals
void AB_Constructor_BASE_C::StartBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:StartBuildingActorVisuals");

	FAB_Constructor_BASE_C_StartBuildingActorVisuals_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.EffectMeshComp = EffectMeshComp;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:StopBuildingActorVisuals
void AB_Constructor_BASE_C::StopBuildingActorVisuals(class ABuildingSMActor* BuildingActor, class UStaticMeshComponent* EffectMeshComp)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:StopBuildingActorVisuals");

	FAB_Constructor_BASE_C_StopBuildingActorVisuals_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.EffectMeshComp = EffectMeshComp;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BlueprintOnInteract
void AB_Constructor_BASE_C::BlueprintOnInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:BlueprintOnInteract");

	FAB_Constructor_BASE_C_BlueprintOnInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:GetDamageAmp
void AB_Constructor_BASE_C::GetDamageAmp()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:GetDamageAmp");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:ResourcesCreated
void AB_Constructor_BASE_C::ResourcesCreated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:ResourcesCreated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:ExecuteUbergraph_B_Constructor_BASE
void AB_Constructor_BASE_C::ExecuteUbergraph_B_Constructor_BASE(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/BASE/B_Constructor_BASE.B_Constructor_BASE_C:ExecuteUbergraph_B_Constructor_BASE");

	FAB_Constructor_BASE_C_ExecuteUbergraph_B_Constructor_BASE_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

