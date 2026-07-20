#include "pch.h"

#include "FN_GA_Constructor_KineticOverload_classes.h"

UClass* UGA_Constructor_KineticOverload_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C");

	return Class;
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:GetCustomAbilitySourceTransform
FTransform UGA_Constructor_KineticOverload_C::GetCustomAbilitySourceTransform() const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:GetCustomAbilitySourceTransform");

	FUGA_Constructor_KineticOverload_C_GetCustomAbilitySourceTransform_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:HitTarget
void UGA_Constructor_KineticOverload_C::HitTarget()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:HitTarget");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:K2_ShouldAbilityRespondToEvent
bool UGA_Constructor_KineticOverload_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Constructor_KineticOverload_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:Cancelled_AEF31BFB4F9F700D450DB3A243436FC5
void UGA_Constructor_KineticOverload_C::Cancelled_AEF31BFB4F9F700D450DB3A243436FC5(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:Cancelled_AEF31BFB4F9F700D450DB3A243436FC5");

	FUGA_Constructor_KineticOverload_C_Cancelled_AEF31BFB4F9F700D450DB3A243436FC5_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:Targeted_AEF31BFB4F9F700D450DB3A243436FC5
void UGA_Constructor_KineticOverload_C::Targeted_AEF31BFB4F9F700D450DB3A243436FC5(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:Targeted_AEF31BFB4F9F700D450DB3A243436FC5");

	FUGA_Constructor_KineticOverload_C_Targeted_AEF31BFB4F9F700D450DB3A243436FC5_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:K2_ActivateAbilityFromEvent
void UGA_Constructor_KineticOverload_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:K2_ActivateAbilityFromEvent");

	FUGA_Constructor_KineticOverload_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:AbilityTimeout
void UGA_Constructor_KineticOverload_C::AbilityTimeout()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:AbilityTimeout");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:ExecuteUbergraph_GA_Constructor_KineticOverload
void UGA_Constructor_KineticOverload_C::ExecuteUbergraph_GA_Constructor_KineticOverload(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C:ExecuteUbergraph_GA_Constructor_KineticOverload");

	FUGA_Constructor_KineticOverload_C_ExecuteUbergraph_GA_Constructor_KineticOverload_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

