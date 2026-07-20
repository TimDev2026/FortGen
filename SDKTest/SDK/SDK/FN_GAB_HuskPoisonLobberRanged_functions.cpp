#include "pch.h"

#include "FN_GAB_HuskPoisonLobberRanged_classes.h"

UClass* UGAB_HuskPoisonLobberRanged_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/PoisonLobber/GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C");

	return Class;
}

// Function /Game/Abilities/NPC/Husk/PoisonLobber/GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C:K2_TriggerFromAnimation
void UGAB_HuskPoisonLobberRanged_C::K2_TriggerFromAnimation(FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/PoisonLobber/GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C:K2_TriggerFromAnimation");

	FUGAB_HuskPoisonLobberRanged_C_K2_TriggerFromAnimation_Params Parms;

	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/NPC/Husk/PoisonLobber/GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C:ExecuteUbergraph_GAB_HuskPoisonLobberRanged
void UGAB_HuskPoisonLobberRanged_C::ExecuteUbergraph_GAB_HuskPoisonLobberRanged(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/PoisonLobber/GAB_HuskPoisonLobberRanged.GAB_HuskPoisonLobberRanged_C:ExecuteUbergraph_GAB_HuskPoisonLobberRanged");

	FUGAB_HuskPoisonLobberRanged_C_ExecuteUbergraph_GAB_HuskPoisonLobberRanged_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

