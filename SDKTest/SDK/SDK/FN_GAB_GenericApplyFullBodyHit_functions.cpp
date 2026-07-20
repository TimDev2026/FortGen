#include "pch.h"

#include "FN_GAB_GenericApplyFullBodyHit_classes.h"

UClass* UGAB_GenericApplyFullBodyHit_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C");

	return Class;
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:K2_CanActivateAbility
bool UGAB_GenericApplyFullBodyHit_C::K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer RelevantTags)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:K2_CanActivateAbility");

	FUGAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.RelevantTags = RelevantTags;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:OnCancelled_25E5E66442E815EB40A6DB8205FE0D98
void UGAB_GenericApplyFullBodyHit_C::OnCancelled_25E5E66442E815EB40A6DB8205FE0D98()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:OnCancelled_25E5E66442E815EB40A6DB8205FE0D98");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98
void UGAB_GenericApplyFullBodyHit_C::OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:OnComplete_25E5E66442E815EB40A6DB8205FE0D98
void UGAB_GenericApplyFullBodyHit_C::OnComplete_25E5E66442E815EB40A6DB8205FE0D98()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:OnComplete_25E5E66442E815EB40A6DB8205FE0D98");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:K2_OnEndAbility
void UGAB_GenericApplyFullBodyHit_C::K2_OnEndAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:K2_OnEndAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:OnHitPawn
void UGAB_GenericApplyFullBodyHit_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, FHitResult Hit)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:OnHitPawn");

	FUGAB_GenericApplyFullBodyHit_C_OnHitPawn_Params Parms;

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:K2_ActivateAbilityFromEvent
void UGAB_GenericApplyFullBodyHit_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:K2_ActivateAbilityFromEvent");

	FUGAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:PickFullBodyHitMontageSection
void UGAB_GenericApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:PickFullBodyHitMontageSection");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:ApplyPushMomentum
void UGAB_GenericApplyFullBodyHit_C::ApplyPushMomentum()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:ApplyPushMomentum");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:ExecuteUbergraph_GAB_GenericApplyFullBodyHit
void UGAB_GenericApplyFullBodyHit_C::ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C:ExecuteUbergraph_GAB_GenericApplyFullBodyHit");

	FUGAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

