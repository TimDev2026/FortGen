#include "pch.h"

#include "FN_GA_Ninja_MantisLeap_classes.h"

UClass* UGA_Ninja_MantisLeap_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:SetJumpHeight
void UGA_Ninja_MantisLeap_C::SetJumpHeight(class APlayerPawn_Ninja_C* Ninja_Pawn, class AFortPlayerPawn* Ninja_Pawn_Out, FVector Jump_Height)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:SetJumpHeight");

	FUGA_Ninja_MantisLeap_C_SetJumpHeight_Params Parms;

	Parms.Ninja_Pawn = Ninja_Pawn;
	Parms.Ninja_Pawn_Out = Ninja_Pawn_Out;
	Parms.Jump_Height = Jump_Height;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:K2_ShouldAbilityRespondToEvent
bool UGA_Ninja_MantisLeap_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:Cancelled_023C704A4687994EABB842B14222FB9B
void UGA_Ninja_MantisLeap_C::Cancelled_023C704A4687994EABB842B14222FB9B(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:Cancelled_023C704A4687994EABB842B14222FB9B");

	FUGA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:Targeted_023C704A4687994EABB842B14222FB9B
void UGA_Ninja_MantisLeap_C::Targeted_023C704A4687994EABB842B14222FB9B(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:Targeted_023C704A4687994EABB842B14222FB9B");

	FUGA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:K2_ActivateAbilityFromEvent
void UGA_Ninja_MantisLeap_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:K2_ActivateAbilityFromEvent");

	FUGA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:OnPawnLanded_Event_0
void UGA_Ninja_MantisLeap_C::OnPawnLanded_Event_0(FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:OnPawnLanded_Event_0");

	FUGA_Ninja_MantisLeap_C_OnPawnLanded_Event_0_Params Parms;

	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:ExecuteUbergraph_GA_Ninja_MantisLeap
void UGA_Ninja_MantisLeap_C::ExecuteUbergraph_GA_Ninja_MantisLeap(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Default/GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C:ExecuteUbergraph_GA_Ninja_MantisLeap");

	FUGA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

