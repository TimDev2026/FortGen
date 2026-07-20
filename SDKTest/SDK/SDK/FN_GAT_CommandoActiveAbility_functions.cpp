#include "pch.h"

#include "FN_GAT_CommandoActiveAbility_classes.h"

UClass* UGAT_CommandoActiveAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C:K2_ActivateAbility
void UGAT_CommandoActiveAbility_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C:ExecuteUbergraph_GAT_CommandoActiveAbility
void UGAT_CommandoActiveAbility_C::ExecuteUbergraph_GAT_CommandoActiveAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C:ExecuteUbergraph_GAT_CommandoActiveAbility");

	FUGAT_CommandoActiveAbility_C_ExecuteUbergraph_GAT_CommandoActiveAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

