#include "pch.h"

#include "FN_GA_Ninja_Assassination_classes.h"

UClass* UGA_Ninja_Assassination_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_Assassination.GA_Ninja_Assassination_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_Assassination.GA_Ninja_Assassination_C:ApplyStack
void UGA_Ninja_Assassination_C::ApplyStack(class APlayerPawn_Ninja_C* NinjaPawn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_Assassination.GA_Ninja_Assassination_C:ApplyStack");

	FUGA_Ninja_Assassination_C_ApplyStack_Params Parms;

	Parms.NinjaPawn = NinjaPawn;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_Assassination.GA_Ninja_Assassination_C:K2_ShouldAbilityRespondToEvent
bool UGA_Ninja_Assassination_C::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_Assassination.GA_Ninja_Assassination_C:K2_ShouldAbilityRespondToEvent");

	FUGA_Ninja_Assassination_C_K2_ShouldAbilityRespondToEvent_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_Assassination.GA_Ninja_Assassination_C:K2_ActivateAbility
void UGA_Ninja_Assassination_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_Assassination.GA_Ninja_Assassination_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_Assassination.GA_Ninja_Assassination_C:ExecuteUbergraph_GA_Ninja_Assassination
void UGA_Ninja_Assassination_C::ExecuteUbergraph_GA_Ninja_Assassination(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Traits/Shinobi/GA_Ninja_Assassination.GA_Ninja_Assassination_C:ExecuteUbergraph_GA_Ninja_Assassination");

	FUGA_Ninja_Assassination_C_ExecuteUbergraph_GA_Ninja_Assassination_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

