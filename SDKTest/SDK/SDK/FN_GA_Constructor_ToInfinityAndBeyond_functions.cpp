#include "pch.h"

#include "FN_GA_Constructor_ToInfinityAndBeyond_classes.h"

UClass* UGA_Constructor_ToInfinityAndBeyond_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:K2_ShouldAbilityRespondToEvent
bool UGA_Constructor_ToInfinityAndBeyond_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Constructor_ToInfinityAndBeyond_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:Cancelled_35315E614EE08E9B38A0B1BBADAA3319
void UGA_Constructor_ToInfinityAndBeyond_C::Cancelled_35315E614EE08E9B38A0B1BBADAA3319(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:Cancelled_35315E614EE08E9B38A0B1BBADAA3319");

	FUGA_Constructor_ToInfinityAndBeyond_C_Cancelled_35315E614EE08E9B38A0B1BBADAA3319_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:Targeted_35315E614EE08E9B38A0B1BBADAA3319
void UGA_Constructor_ToInfinityAndBeyond_C::Targeted_35315E614EE08E9B38A0B1BBADAA3319(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:Targeted_35315E614EE08E9B38A0B1BBADAA3319");

	FUGA_Constructor_ToInfinityAndBeyond_C_Targeted_35315E614EE08E9B38A0B1BBADAA3319_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:K2_ActivateAbilityFromEvent
void UGA_Constructor_ToInfinityAndBeyond_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:K2_ActivateAbilityFromEvent");

	FUGA_Constructor_ToInfinityAndBeyond_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond
void UGA_Constructor_ToInfinityAndBeyond_C::ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_ToInfinityAndBeyond.GA_Constructor_ToInfinityAndBeyond_C:ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond");

	FUGA_Constructor_ToInfinityAndBeyond_C_ExecuteUbergraph_GA_Constructor_ToInfinityAndBeyond_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

