#include "pch.h"

#include "FN_GA_Commando_FragGrenade_classes.h"

UClass* UGA_Commando_FragGrenade_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C");

	return Class;
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:KeepOut
void UGA_Commando_FragGrenade_C::KeepOut(FProjectileEventData Projectile_Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:KeepOut");

	FUGA_Commando_FragGrenade_C_KeepOut_Params Parms;

	Parms.Projectile_Data = Projectile_Data;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:PerfectEngineering
void UGA_Commando_FragGrenade_C::PerfectEngineering(FProjectileEventData Projectile_Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:PerfectEngineering");

	FUGA_Commando_FragGrenade_C_PerfectEngineering_Params Parms;

	Parms.Projectile_Data = Projectile_Data;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:ActivateClusterBombs
void UGA_Commando_FragGrenade_C::ActivateClusterBombs(FProjectileEventData Projectile_Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:ActivateClusterBombs");

	FUGA_Commando_FragGrenade_C_ActivateClusterBombs_Params Parms;

	Parms.Projectile_Data = Projectile_Data;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:ThrowGrenade
void UGA_Commando_FragGrenade_C::ThrowGrenade(class UAbilitySystemComponent* AbilitySystemComponent, class UClass* Base_Grenade, FVector Spawn_Location, FRotator Spawn_Rotation, float Projectile_Speed, float Projectile_Gravity, FFortGameplayEffectContainerSpec Explosion_Gameplay_Spec)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:ThrowGrenade");

	FUGA_Commando_FragGrenade_C_ThrowGrenade_Params Parms;

	Parms.AbilitySystemComponent = AbilitySystemComponent;
	Parms.Base_Grenade = Base_Grenade;
	Parms.Spawn_Location = Spawn_Location;
	Parms.Spawn_Rotation = Spawn_Rotation;
	Parms.Projectile_Speed = Projectile_Speed;
	Parms.Projectile_Gravity = Projectile_Gravity;
	Parms.Explosion_Gameplay_Spec = Explosion_Gameplay_Spec;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Destroyed_A0715E3447A5D46682E46A89960E35AA
void UGA_Commando_FragGrenade_C::Destroyed_A0715E3447A5D46682E46A89960E35AA(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Destroyed_A0715E3447A5D46682E46A89960E35AA");

	FUGA_Commando_FragGrenade_C_Destroyed_A0715E3447A5D46682E46A89960E35AA_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Exploded_A0715E3447A5D46682E46A89960E35AA
void UGA_Commando_FragGrenade_C::Exploded_A0715E3447A5D46682E46A89960E35AA(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Exploded_A0715E3447A5D46682E46A89960E35AA");

	FUGA_Commando_FragGrenade_C_Exploded_A0715E3447A5D46682E46A89960E35AA_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Stopped_A0715E3447A5D46682E46A89960E35AA
void UGA_Commando_FragGrenade_C::Stopped_A0715E3447A5D46682E46A89960E35AA(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Stopped_A0715E3447A5D46682E46A89960E35AA");

	FUGA_Commando_FragGrenade_C_Stopped_A0715E3447A5D46682E46A89960E35AA_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Bounced_A0715E3447A5D46682E46A89960E35AA
void UGA_Commando_FragGrenade_C::Bounced_A0715E3447A5D46682E46A89960E35AA(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Bounced_A0715E3447A5D46682E46A89960E35AA");

	FUGA_Commando_FragGrenade_C_Bounced_A0715E3447A5D46682E46A89960E35AA_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Touched_A0715E3447A5D46682E46A89960E35AA
void UGA_Commando_FragGrenade_C::Touched_A0715E3447A5D46682E46A89960E35AA(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Touched_A0715E3447A5D46682E46A89960E35AA");

	FUGA_Commando_FragGrenade_C_Touched_A0715E3447A5D46682E46A89960E35AA_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Created_A0715E3447A5D46682E46A89960E35AA
void UGA_Commando_FragGrenade_C::Created_A0715E3447A5D46682E46A89960E35AA(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Created_A0715E3447A5D46682E46A89960E35AA");

	FUGA_Commando_FragGrenade_C_Created_A0715E3447A5D46682E46A89960E35AA_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Completed_DE7AD8FA464F26E37AC20281DAD7839E
void UGA_Commando_FragGrenade_C::Completed_DE7AD8FA464F26E37AC20281DAD7839E(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Completed_DE7AD8FA464F26E37AC20281DAD7839E");

	FUGA_Commando_FragGrenade_C_Completed_DE7AD8FA464F26E37AC20281DAD7839E_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Cancelled_DE7AD8FA464F26E37AC20281DAD7839E
void UGA_Commando_FragGrenade_C::Cancelled_DE7AD8FA464F26E37AC20281DAD7839E(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Cancelled_DE7AD8FA464F26E37AC20281DAD7839E");

	FUGA_Commando_FragGrenade_C_Cancelled_DE7AD8FA464F26E37AC20281DAD7839E_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Triggered_DE7AD8FA464F26E37AC20281DAD7839E
void UGA_Commando_FragGrenade_C::Triggered_DE7AD8FA464F26E37AC20281DAD7839E(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:Triggered_DE7AD8FA464F26E37AC20281DAD7839E");

	FUGA_Commando_FragGrenade_C_Triggered_DE7AD8FA464F26E37AC20281DAD7839E_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:OnFinish_978FA3324D06E995EB838282AB600A46
void UGA_Commando_FragGrenade_C::OnFinish_978FA3324D06E995EB838282AB600A46()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:OnFinish_978FA3324D06E995EB838282AB600A46");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:K2_ActivateAbility
void UGA_Commando_FragGrenade_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:ExecuteUbergraph_GA_Commando_FragGrenade
void UGA_Commando_FragGrenade_C::ExecuteUbergraph_GA_Commando_FragGrenade(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Commando/Gadgets/FragGrenade/GA_Commando_FragGrenade.GA_Commando_FragGrenade_C:ExecuteUbergraph_GA_Commando_FragGrenade");

	FUGA_Commando_FragGrenade_C_ExecuteUbergraph_GA_Commando_FragGrenade_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

