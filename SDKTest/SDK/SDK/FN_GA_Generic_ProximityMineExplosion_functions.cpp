#include "pch.h"

#include "FN_GA_Generic_ProximityMineExplosion_classes.h"

UClass* UGA_Generic_ProximityMineExplosion_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C:Cancelled_8BEAB59F4207CD7783898D81D6492C18
void UGA_Generic_ProximityMineExplosion_C::Cancelled_8BEAB59F4207CD7783898D81D6492C18(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C:Cancelled_8BEAB59F4207CD7783898D81D6492C18");

	FUGA_Generic_ProximityMineExplosion_C_Cancelled_8BEAB59F4207CD7783898D81D6492C18_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C:Targeted_8BEAB59F4207CD7783898D81D6492C18
void UGA_Generic_ProximityMineExplosion_C::Targeted_8BEAB59F4207CD7783898D81D6492C18(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C:Targeted_8BEAB59F4207CD7783898D81D6492C18");

	FUGA_Generic_ProximityMineExplosion_C_Targeted_8BEAB59F4207CD7783898D81D6492C18_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C:K2_ActivateAbilityFromEvent
void UGA_Generic_ProximityMineExplosion_C::K2_ActivateAbilityFromEvent(FGameplayEventData EventData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C:K2_ActivateAbilityFromEvent");

	FUGA_Generic_ProximityMineExplosion_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C:ExecuteUbergraph_GA_Generic_ProximityMineExplosion
void UGA_Generic_ProximityMineExplosion_C::ExecuteUbergraph_GA_Generic_ProximityMineExplosion(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C:ExecuteUbergraph_GA_Generic_ProximityMineExplosion");

	FUGA_Generic_ProximityMineExplosion_C_ExecuteUbergraph_GA_Generic_ProximityMineExplosion_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

