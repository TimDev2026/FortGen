#include "pch.h"

#include "FN_GA_Constructor_PlasmaPulse_classes.h"

UClass* UGA_Constructor_PlasmaPulse_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:DarkHackyMath
void UGA_Constructor_PlasmaPulse_C::DarkHackyMath(float SetByCallerValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:DarkHackyMath");

	FUGA_Constructor_PlasmaPulse_C_DarkHackyMath_Params Parms;

	Parms.SetByCallerValue = SetByCallerValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:SpawnMiniPulses
void UGA_Constructor_PlasmaPulse_C::SpawnMiniPulses(FVector HitLocation, FFortGameplayEffectContainerSpec EffectContainerSpec, class AActor* ParentPulse)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:SpawnMiniPulses");

	FUGA_Constructor_PlasmaPulse_C_SpawnMiniPulses_Params Parms;

	Parms.HitLocation = HitLocation;
	Parms.EffectContainerSpec = EffectContainerSpec;
	Parms.ParentPulse = ParentPulse;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:SetupPlasmaPulse
void UGA_Constructor_PlasmaPulse_C::SetupPlasmaPulse(class UAbilitySystemComponent* Ability_System_Component, FVector Spawn_Location, FRotator Spawn_Rotation, FFortGameplayEffectContainerSpec Plasma_Explosion, FFortGameplayEffectContainerSpec Mini_Explosion)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:SetupPlasmaPulse");

	FUGA_Constructor_PlasmaPulse_C_SetupPlasmaPulse_Params Parms;

	Parms.Ability_System_Component = Ability_System_Component;
	Parms.Spawn_Location = Spawn_Location;
	Parms.Spawn_Rotation = Spawn_Rotation;
	Parms.Plasma_Explosion = Plasma_Explosion;
	Parms.Mini_Explosion = Mini_Explosion;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Destroyed_76104D9B4F6C3F61303653918697EC35
void UGA_Constructor_PlasmaPulse_C::Destroyed_76104D9B4F6C3F61303653918697EC35(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Destroyed_76104D9B4F6C3F61303653918697EC35");

	FUGA_Constructor_PlasmaPulse_C_Destroyed_76104D9B4F6C3F61303653918697EC35_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Exploded_76104D9B4F6C3F61303653918697EC35
void UGA_Constructor_PlasmaPulse_C::Exploded_76104D9B4F6C3F61303653918697EC35(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Exploded_76104D9B4F6C3F61303653918697EC35");

	FUGA_Constructor_PlasmaPulse_C_Exploded_76104D9B4F6C3F61303653918697EC35_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Stopped_76104D9B4F6C3F61303653918697EC35
void UGA_Constructor_PlasmaPulse_C::Stopped_76104D9B4F6C3F61303653918697EC35(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Stopped_76104D9B4F6C3F61303653918697EC35");

	FUGA_Constructor_PlasmaPulse_C_Stopped_76104D9B4F6C3F61303653918697EC35_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Bounced_76104D9B4F6C3F61303653918697EC35
void UGA_Constructor_PlasmaPulse_C::Bounced_76104D9B4F6C3F61303653918697EC35(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Bounced_76104D9B4F6C3F61303653918697EC35");

	FUGA_Constructor_PlasmaPulse_C_Bounced_76104D9B4F6C3F61303653918697EC35_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Touched_76104D9B4F6C3F61303653918697EC35
void UGA_Constructor_PlasmaPulse_C::Touched_76104D9B4F6C3F61303653918697EC35(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Touched_76104D9B4F6C3F61303653918697EC35");

	FUGA_Constructor_PlasmaPulse_C_Touched_76104D9B4F6C3F61303653918697EC35_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Created_76104D9B4F6C3F61303653918697EC35
void UGA_Constructor_PlasmaPulse_C::Created_76104D9B4F6C3F61303653918697EC35(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Created_76104D9B4F6C3F61303653918697EC35");

	FUGA_Constructor_PlasmaPulse_C_Created_76104D9B4F6C3F61303653918697EC35_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Completed_6AC3F9A4491B91FDE0457DAC0E8B468B
void UGA_Constructor_PlasmaPulse_C::Completed_6AC3F9A4491B91FDE0457DAC0E8B468B(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Completed_6AC3F9A4491B91FDE0457DAC0E8B468B");

	FUGA_Constructor_PlasmaPulse_C_Completed_6AC3F9A4491B91FDE0457DAC0E8B468B_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B
void UGA_Constructor_PlasmaPulse_C::Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B");

	FUGA_Constructor_PlasmaPulse_C_Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B
void UGA_Constructor_PlasmaPulse_C::Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B");

	FUGA_Constructor_PlasmaPulse_C_Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:K2_ActivateAbility
void UGA_Constructor_PlasmaPulse_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:ExecuteUbergraph_GA_Constructor_PlasmaPulse
void UGA_Constructor_PlasmaPulse_C::ExecuteUbergraph_GA_Constructor_PlasmaPulse(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Gadgets/PlasmaPulse/GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C:ExecuteUbergraph_GA_Constructor_PlasmaPulse");

	FUGA_Constructor_PlasmaPulse_C_ExecuteUbergraph_GA_Constructor_PlasmaPulse_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

