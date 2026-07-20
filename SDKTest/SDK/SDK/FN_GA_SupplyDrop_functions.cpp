#include "pch.h"

#include "FN_GA_SupplyDrop_classes.h"

UClass* UGA_SupplyDrop_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GA_SupplyDrop.GA_SupplyDrop_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GA_SupplyDrop.GA_SupplyDrop_C:GetAttributeValue
void UGA_SupplyDrop_C::GetAttributeValue()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GA_SupplyDrop.GA_SupplyDrop_C:GetAttributeValue");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GA_SupplyDrop.GA_SupplyDrop_C:K2_ActivateAbility
void UGA_SupplyDrop_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GA_SupplyDrop.GA_SupplyDrop_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GA_SupplyDrop.GA_SupplyDrop_C:ExecuteUbergraph_GA_SupplyDrop
void UGA_SupplyDrop_C::ExecuteUbergraph_GA_SupplyDrop(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GA_SupplyDrop.GA_SupplyDrop_C:ExecuteUbergraph_GA_SupplyDrop");

	FUGA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

