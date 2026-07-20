#include "pch.h"

#include "FN_GAT_NinjaActiveAbility_classes.h"

UClass* UGAT_NinjaActiveAbility_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Parents/GAT_NinjaActiveAbility.GAT_NinjaActiveAbility_C");

	return Class;
}

// Function /Game/Abilities/Player/Parents/GAT_NinjaActiveAbility.GAT_NinjaActiveAbility_C:K2_ActivateAbility
void UGAT_NinjaActiveAbility_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_NinjaActiveAbility.GAT_NinjaActiveAbility_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Parents/GAT_NinjaActiveAbility.GAT_NinjaActiveAbility_C:ExecuteUbergraph_GAT_NinjaActiveAbility
void UGAT_NinjaActiveAbility_C::ExecuteUbergraph_GAT_NinjaActiveAbility(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Parents/GAT_NinjaActiveAbility.GAT_NinjaActiveAbility_C:ExecuteUbergraph_GAT_NinjaActiveAbility");

	FUGAT_NinjaActiveAbility_C_ExecuteUbergraph_GAT_NinjaActiveAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

