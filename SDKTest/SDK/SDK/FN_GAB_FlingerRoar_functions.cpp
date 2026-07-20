#include "pch.h"

#include "FN_GAB_FlingerRoar_classes.h"

UClass* UGAB_FlingerRoar_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C");

	return Class;
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:OnCancelled_AD410E224F398036F9E428A39B02B87C
void UGAB_FlingerRoar_C::OnCancelled_AD410E224F398036F9E428A39B02B87C()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:OnCancelled_AD410E224F398036F9E428A39B02B87C");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:OnInterrupted_AD410E224F398036F9E428A39B02B87C
void UGAB_FlingerRoar_C::OnInterrupted_AD410E224F398036F9E428A39B02B87C()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:OnInterrupted_AD410E224F398036F9E428A39B02B87C");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:OnComplete_AD410E224F398036F9E428A39B02B87C
void UGAB_FlingerRoar_C::OnComplete_AD410E224F398036F9E428A39B02B87C()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:OnComplete_AD410E224F398036F9E428A39B02B87C");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:K2_ActivateAbility
void UGAB_FlingerRoar_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:ExecuteUbergraph_GAB_FlingerRoar
void UGAB_FlingerRoar_C::ExecuteUbergraph_GAB_FlingerRoar(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C:ExecuteUbergraph_GAB_FlingerRoar");

	FUGAB_FlingerRoar_C_ExecuteUbergraph_GAB_FlingerRoar_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

