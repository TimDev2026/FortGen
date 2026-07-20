#include "pch.h"

#include "FN_GA_Ninja_DragonSlash_classes.h"

UClass* UGA_Ninja_DragonSlash_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:SetWeaponVisibility
void UGA_Ninja_DragonSlash_C::SetWeaponVisibility(bool Ability_Active)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:SetWeaponVisibility");

	FUGA_Ninja_DragonSlash_C_SetWeaponVisibility_Params Parms;

	Parms.Ability_Active = Ability_Active;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:SetupCollision
void UGA_Ninja_DragonSlash_C::SetupCollision(class APlayerPawn_Ninja_C* Ninja_Pawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:SetupCollision");

	FUGA_Ninja_DragonSlash_C_SetupCollision_Params Parms;

	Parms.Ninja_Pawn = Ninja_Pawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:SetupAbility
void UGA_Ninja_DragonSlash_C::SetupAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:SetupAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:ApplyDamageToTarget
void UGA_Ninja_DragonSlash_C::ApplyDamageToTarget(class AActor* Hit_Actor, class APlayerPawn_Ninja_C* Ninja_Pawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:ApplyDamageToTarget");

	FUGA_Ninja_DragonSlash_C_ApplyDamageToTarget_Params Parms;

	Parms.Hit_Actor = Hit_Actor;
	Parms.Ninja_Pawn = Ninja_Pawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A
void UGA_Ninja_DragonSlash_C::Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A");

	FUGA_Ninja_DragonSlash_C_Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A
void UGA_Ninja_DragonSlash_C::Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A");

	FUGA_Ninja_DragonSlash_C_Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A
void UGA_Ninja_DragonSlash_C::Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A");

	FUGA_Ninja_DragonSlash_C_Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13
void UGA_Ninja_DragonSlash_C::OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:OnFinish_5E00AB5343CB83D80843BE94EC51F21E
void UGA_Ninja_DragonSlash_C::OnFinish_5E00AB5343CB83D80843BE94EC51F21E()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:OnFinish_5E00AB5343CB83D80843BE94EC51F21E");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:K2_ActivateAbility
void UGA_Ninja_DragonSlash_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:K2_OnEndAbility
void UGA_Ninja_DragonSlash_C::K2_OnEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:K2_OnEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:OverlapActors
void UGA_Ninja_DragonSlash_C::OverlapActors(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:OverlapActors");

	FUGA_Ninja_DragonSlash_C_OverlapActors_Params Parms;

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:BeginAOETrail
void UGA_Ninja_DragonSlash_C::BeginAOETrail()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:BeginAOETrail");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:TrySpawnAOETrail
void UGA_Ninja_DragonSlash_C::TrySpawnAOETrail()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:TrySpawnAOETrail");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:ExecuteUbergraph_GA_Ninja_DragonSlash
void UGA_Ninja_DragonSlash_C::ExecuteUbergraph_GA_Ninja_DragonSlash(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/DragonSlash/GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C:ExecuteUbergraph_GA_Ninja_DragonSlash");

	FUGA_Ninja_DragonSlash_C_ExecuteUbergraph_GA_Ninja_DragonSlash_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

