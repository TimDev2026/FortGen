#include "pch.h"

#include "FN_GAT_ActiveAbility_classes.h"

UClass* UGAT_ActiveAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C:K2_ActivateAbility
void UGAT_ActiveAbility_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C:ExecuteUbergraph_GAT_ActiveAbility
void UGAT_ActiveAbility_C::ExecuteUbergraph_GAT_ActiveAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C:ExecuteUbergraph_GAT_ActiveAbility");

	FUGAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

