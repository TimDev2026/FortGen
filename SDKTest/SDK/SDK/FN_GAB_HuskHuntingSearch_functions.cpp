#include "pch.h"

#include "FN_GAB_HuskHuntingSearch_classes.h"

UClass* UGAB_HuskHuntingSearch_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C");

	return Class;
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:Completed_9925B44A484135CDB5C78BAF8BED9454
void UGAB_HuskHuntingSearch_C::Completed_9925B44A484135CDB5C78BAF8BED9454(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:Completed_9925B44A484135CDB5C78BAF8BED9454");

	FUGAB_HuskHuntingSearch_C_Completed_9925B44A484135CDB5C78BAF8BED9454_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:Cancelled_9925B44A484135CDB5C78BAF8BED9454
void UGAB_HuskHuntingSearch_C::Cancelled_9925B44A484135CDB5C78BAF8BED9454(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:Cancelled_9925B44A484135CDB5C78BAF8BED9454");

	FUGAB_HuskHuntingSearch_C_Cancelled_9925B44A484135CDB5C78BAF8BED9454_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:Triggered_9925B44A484135CDB5C78BAF8BED9454
void UGAB_HuskHuntingSearch_C::Triggered_9925B44A484135CDB5C78BAF8BED9454(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:Triggered_9925B44A484135CDB5C78BAF8BED9454");

	FUGAB_HuskHuntingSearch_C_Triggered_9925B44A484135CDB5C78BAF8BED9454_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:K2_ActivateAbility
void UGAB_HuskHuntingSearch_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:ExecuteUbergraph_GAB_HuskHuntingSearch
void UGAB_HuskHuntingSearch_C::ExecuteUbergraph_GAB_HuskHuntingSearch(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskHuntingSearch.GAB_HuskHuntingSearch_C:ExecuteUbergraph_GAB_HuskHuntingSearch");

	FUGAB_HuskHuntingSearch_C_ExecuteUbergraph_GAB_HuskHuntingSearch_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

