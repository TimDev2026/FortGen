#include "pch.h"

#include "FN_GAB_BaseDespawn_classes.h"

UClass* UGAB_BaseDespawn_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C");

	return Class;
}

// Function /Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:Completed_32BE25FF4375C5CD3FD5BABD11D3AB12
void UGAB_BaseDespawn_C::Completed_32BE25FF4375C5CD3FD5BABD11D3AB12(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:Completed_32BE25FF4375C5CD3FD5BABD11D3AB12");

	FUGAB_BaseDespawn_C_Completed_32BE25FF4375C5CD3FD5BABD11D3AB12_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:Cancelled_32BE25FF4375C5CD3FD5BABD11D3AB12
void UGAB_BaseDespawn_C::Cancelled_32BE25FF4375C5CD3FD5BABD11D3AB12(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:Cancelled_32BE25FF4375C5CD3FD5BABD11D3AB12");

	FUGAB_BaseDespawn_C_Cancelled_32BE25FF4375C5CD3FD5BABD11D3AB12_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:Triggered_32BE25FF4375C5CD3FD5BABD11D3AB12
void UGAB_BaseDespawn_C::Triggered_32BE25FF4375C5CD3FD5BABD11D3AB12(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:Triggered_32BE25FF4375C5CD3FD5BABD11D3AB12");

	FUGAB_BaseDespawn_C_Triggered_32BE25FF4375C5CD3FD5BABD11D3AB12_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:K2_ActivateAbilityFromEvent
void UGAB_BaseDespawn_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:K2_ActivateAbilityFromEvent");

	FUGAB_BaseDespawn_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:ExecuteUbergraph_GAB_BaseDespawn
void UGAB_BaseDespawn_C::ExecuteUbergraph_GAB_BaseDespawn(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C:ExecuteUbergraph_GAB_BaseDespawn");

	FUGAB_BaseDespawn_C_ExecuteUbergraph_GAB_BaseDespawn_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

