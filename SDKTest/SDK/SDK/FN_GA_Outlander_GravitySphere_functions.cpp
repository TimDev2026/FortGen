#include "pch.h"

#include "FN_GA_Outlander_GravitySphere_classes.h"

UClass* UGA_Outlander_GravitySphere_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:GetCustomAbilitySourceTransform
FTransform UGA_Outlander_GravitySphere_C::GetCustomAbilitySourceTransform() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:GetCustomAbilitySourceTransform");

	FUGA_Outlander_GravitySphere_C_GetCustomAbilitySourceTransform_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:DamageTargets
void UGA_Outlander_GravitySphere_C::DamageTargets(FProjectileEventData ProjectileEventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:DamageTargets");

	FUGA_Outlander_GravitySphere_C_DamageTargets_Params Parms;

	Parms.ProjectileEventData = ProjectileEventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:SetupCollector
void UGA_Outlander_GravitySphere_C::SetupCollector(class UClass* MatterCollector, FVector SpawnLocation, FRotator ProjectileRotation, float MatterSpeed, float MatterGravity, FFortGameplayEffectContainerSpec TargetSpec)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:SetupCollector");

	FUGA_Outlander_GravitySphere_C_SetupCollector_Params Parms;

	Parms.MatterCollector = MatterCollector;
	Parms.SpawnLocation = SpawnLocation;
	Parms.ProjectileRotation = ProjectileRotation;
	Parms.MatterSpeed = MatterSpeed;
	Parms.MatterGravity = MatterGravity;
	Parms.TargetSpec = TargetSpec;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8
void UGA_Outlander_GravitySphere_C::Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8");

	FUGA_Outlander_GravitySphere_C_Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8
void UGA_Outlander_GravitySphere_C::Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8");

	FUGA_Outlander_GravitySphere_C_Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8
void UGA_Outlander_GravitySphere_C::Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8");

	FUGA_Outlander_GravitySphere_C_Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8
void UGA_Outlander_GravitySphere_C::Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8");

	FUGA_Outlander_GravitySphere_C_Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Touched_E1B7FD7947617E82F2B80E9DEA42A6E8
void UGA_Outlander_GravitySphere_C::Touched_E1B7FD7947617E82F2B80E9DEA42A6E8(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Touched_E1B7FD7947617E82F2B80E9DEA42A6E8");

	FUGA_Outlander_GravitySphere_C_Touched_E1B7FD7947617E82F2B80E9DEA42A6E8_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Created_E1B7FD7947617E82F2B80E9DEA42A6E8
void UGA_Outlander_GravitySphere_C::Created_E1B7FD7947617E82F2B80E9DEA42A6E8(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Created_E1B7FD7947617E82F2B80E9DEA42A6E8");

	FUGA_Outlander_GravitySphere_C_Created_E1B7FD7947617E82F2B80E9DEA42A6E8_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Completed_A8F6F5F8468ED284B63ADFA133F95943
void UGA_Outlander_GravitySphere_C::Completed_A8F6F5F8468ED284B63ADFA133F95943(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Completed_A8F6F5F8468ED284B63ADFA133F95943");

	FUGA_Outlander_GravitySphere_C_Completed_A8F6F5F8468ED284B63ADFA133F95943_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Cancelled_A8F6F5F8468ED284B63ADFA133F95943
void UGA_Outlander_GravitySphere_C::Cancelled_A8F6F5F8468ED284B63ADFA133F95943(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Cancelled_A8F6F5F8468ED284B63ADFA133F95943");

	FUGA_Outlander_GravitySphere_C_Cancelled_A8F6F5F8468ED284B63ADFA133F95943_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Triggered_A8F6F5F8468ED284B63ADFA133F95943
void UGA_Outlander_GravitySphere_C::Triggered_A8F6F5F8468ED284B63ADFA133F95943(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:Triggered_A8F6F5F8468ED284B63ADFA133F95943");

	FUGA_Outlander_GravitySphere_C_Triggered_A8F6F5F8468ED284B63ADFA133F95943_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:K2_ActivateAbility
void UGA_Outlander_GravitySphere_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:ExecuteUbergraph_GA_Outlander_GravitySphere
void UGA_Outlander_GravitySphere_C::ExecuteUbergraph_GA_Outlander_GravitySphere(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/GravitySphere/GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C:ExecuteUbergraph_GA_Outlander_GravitySphere");

	FUGA_Outlander_GravitySphere_C_ExecuteUbergraph_GA_Outlander_GravitySphere_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

