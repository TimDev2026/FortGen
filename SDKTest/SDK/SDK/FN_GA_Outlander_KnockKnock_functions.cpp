#include "pch.h"

#include "FN_GA_Outlander_KnockKnock_classes.h"

UClass* UGA_Outlander_KnockKnock_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:OtherTargetting
void UGA_Outlander_KnockKnock_C::OtherTargetting()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:OtherTargetting");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:GetCustomAbilitySourceTransform
FTransform UGA_Outlander_KnockKnock_C::GetCustomAbilitySourceTransform() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:GetCustomAbilitySourceTransform");

	FUGA_Outlander_KnockKnock_C_GetCustomAbilitySourceTransform_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:K2_ShouldAbilityRespondToEvent
bool UGA_Outlander_KnockKnock_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Outlander_KnockKnock_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:Cancelled_8217F61642070692A0A818BB146A36B8
void UGA_Outlander_KnockKnock_C::Cancelled_8217F61642070692A0A818BB146A36B8(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:Cancelled_8217F61642070692A0A818BB146A36B8");

	FUGA_Outlander_KnockKnock_C_Cancelled_8217F61642070692A0A818BB146A36B8_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:Targeted_8217F61642070692A0A818BB146A36B8
void UGA_Outlander_KnockKnock_C::Targeted_8217F61642070692A0A818BB146A36B8(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:Targeted_8217F61642070692A0A818BB146A36B8");

	FUGA_Outlander_KnockKnock_C_Targeted_8217F61642070692A0A818BB146A36B8_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:K2_ActivateAbilityFromEvent
void UGA_Outlander_KnockKnock_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:K2_ActivateAbilityFromEvent");

	FUGA_Outlander_KnockKnock_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:ExecuteUbergraph_GA_Outlander_KnockKnock
void UGA_Outlander_KnockKnock_C::ExecuteUbergraph_GA_Outlander_KnockKnock(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Traits/PunchIt/GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C:ExecuteUbergraph_GA_Outlander_KnockKnock");

	FUGA_Outlander_KnockKnock_C_ExecuteUbergraph_GA_Outlander_KnockKnock_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

