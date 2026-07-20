#include "pch.h"

#include "FN_GAB_HuskTurnTransition_classes.h"

UClass* UGAB_HuskTurnTransition_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C");

	return Class;
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:OnCancelled_B51702764205E90DF617B6BDB1285CFF
void UGAB_HuskTurnTransition_C::OnCancelled_B51702764205E90DF617B6BDB1285CFF()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:OnCancelled_B51702764205E90DF617B6BDB1285CFF");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:OnInterrupted_B51702764205E90DF617B6BDB1285CFF
void UGAB_HuskTurnTransition_C::OnInterrupted_B51702764205E90DF617B6BDB1285CFF()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:OnInterrupted_B51702764205E90DF617B6BDB1285CFF");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:OnComplete_B51702764205E90DF617B6BDB1285CFF
void UGAB_HuskTurnTransition_C::OnComplete_B51702764205E90DF617B6BDB1285CFF()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:OnComplete_B51702764205E90DF617B6BDB1285CFF");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:K2_ActivateAbility
void UGAB_HuskTurnTransition_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:ExecuteUbergraph_GAB_HuskTurnTransition
void UGAB_HuskTurnTransition_C::ExecuteUbergraph_GAB_HuskTurnTransition(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C:ExecuteUbergraph_GAB_HuskTurnTransition");

	FUGAB_HuskTurnTransition_C_ExecuteUbergraph_GAB_HuskTurnTransition_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

