#include "pch.h"

#include "FN_GAT_OutlanderActiveAbility_classes.h"

UClass* UGAT_OutlanderActiveAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_OutlanderActiveAbility.GAT_OutlanderActiveAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_OutlanderActiveAbility.GAT_OutlanderActiveAbility_C:K2_ActivateAbility
void UGAT_OutlanderActiveAbility_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_OutlanderActiveAbility.GAT_OutlanderActiveAbility_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Parents/GAT_OutlanderActiveAbility.GAT_OutlanderActiveAbility_C:ExecuteUbergraph_GAT_OutlanderActiveAbility
void UGAT_OutlanderActiveAbility_C::ExecuteUbergraph_GAT_OutlanderActiveAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_OutlanderActiveAbility.GAT_OutlanderActiveAbility_C:ExecuteUbergraph_GAT_OutlanderActiveAbility");

	FUGAT_OutlanderActiveAbility_C_ExecuteUbergraph_GAT_OutlanderActiveAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

