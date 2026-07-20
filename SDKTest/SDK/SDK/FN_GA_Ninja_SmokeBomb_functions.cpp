#include "pch.h"

#include "FN_GA_Ninja_SmokeBomb_classes.h"

UClass* UGA_Ninja_SmokeBomb_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:ThrowSmokeBomb
void UGA_Ninja_SmokeBomb_C::ThrowSmokeBomb(class APlayerPawn_Ninja_C* Requestor, FVector Location, FRotator Rotation, FFortGameplayEffectContainerSpec EffectSpec)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:ThrowSmokeBomb");

	FUGA_Ninja_SmokeBomb_C_ThrowSmokeBomb_Params Parms;

	Parms.Requestor = Requestor;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.EffectSpec = EffectSpec;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Completed_3644944049E84BE80D314DBC53F664CB
void UGA_Ninja_SmokeBomb_C::Completed_3644944049E84BE80D314DBC53F664CB(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Completed_3644944049E84BE80D314DBC53F664CB");

	FUGA_Ninja_SmokeBomb_C_Completed_3644944049E84BE80D314DBC53F664CB_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Cancelled_3644944049E84BE80D314DBC53F664CB
void UGA_Ninja_SmokeBomb_C::Cancelled_3644944049E84BE80D314DBC53F664CB(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Cancelled_3644944049E84BE80D314DBC53F664CB");

	FUGA_Ninja_SmokeBomb_C_Cancelled_3644944049E84BE80D314DBC53F664CB_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Triggered_3644944049E84BE80D314DBC53F664CB
void UGA_Ninja_SmokeBomb_C::Triggered_3644944049E84BE80D314DBC53F664CB(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Triggered_3644944049E84BE80D314DBC53F664CB");

	FUGA_Ninja_SmokeBomb_C_Triggered_3644944049E84BE80D314DBC53F664CB_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Destroyed_4C7C12404F5C962CA59DD49973166CB9
void UGA_Ninja_SmokeBomb_C::Destroyed_4C7C12404F5C962CA59DD49973166CB9(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Destroyed_4C7C12404F5C962CA59DD49973166CB9");

	FUGA_Ninja_SmokeBomb_C_Destroyed_4C7C12404F5C962CA59DD49973166CB9_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Exploded_4C7C12404F5C962CA59DD49973166CB9
void UGA_Ninja_SmokeBomb_C::Exploded_4C7C12404F5C962CA59DD49973166CB9(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Exploded_4C7C12404F5C962CA59DD49973166CB9");

	FUGA_Ninja_SmokeBomb_C_Exploded_4C7C12404F5C962CA59DD49973166CB9_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Stopped_4C7C12404F5C962CA59DD49973166CB9
void UGA_Ninja_SmokeBomb_C::Stopped_4C7C12404F5C962CA59DD49973166CB9(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Stopped_4C7C12404F5C962CA59DD49973166CB9");

	FUGA_Ninja_SmokeBomb_C_Stopped_4C7C12404F5C962CA59DD49973166CB9_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Bounced_4C7C12404F5C962CA59DD49973166CB9
void UGA_Ninja_SmokeBomb_C::Bounced_4C7C12404F5C962CA59DD49973166CB9(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Bounced_4C7C12404F5C962CA59DD49973166CB9");

	FUGA_Ninja_SmokeBomb_C_Bounced_4C7C12404F5C962CA59DD49973166CB9_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Touched_4C7C12404F5C962CA59DD49973166CB9
void UGA_Ninja_SmokeBomb_C::Touched_4C7C12404F5C962CA59DD49973166CB9(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Touched_4C7C12404F5C962CA59DD49973166CB9");

	FUGA_Ninja_SmokeBomb_C_Touched_4C7C12404F5C962CA59DD49973166CB9_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Created_4C7C12404F5C962CA59DD49973166CB9
void UGA_Ninja_SmokeBomb_C::Created_4C7C12404F5C962CA59DD49973166CB9(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:Created_4C7C12404F5C962CA59DD49973166CB9");

	FUGA_Ninja_SmokeBomb_C_Created_4C7C12404F5C962CA59DD49973166CB9_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:K2_ActivateAbility
void UGA_Ninja_SmokeBomb_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:ExecuteUbergraph_GA_Ninja_SmokeBomb
void UGA_Ninja_SmokeBomb_C::ExecuteUbergraph_GA_Ninja_SmokeBomb(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/SmokeBomb/GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C:ExecuteUbergraph_GA_Ninja_SmokeBomb");

	FUGA_Ninja_SmokeBomb_C_ExecuteUbergraph_GA_Ninja_SmokeBomb_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

