#include "pch.h"

#include "FN_GA_Bear_Fire_classes.h"

UClass* UGA_Bear_Fire_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Bear_Fire.GA_Bear_Fire_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Bear_Fire.GA_Bear_Fire_C:Cancelled_0B48E8B547027954C37AA1BF4D77BE31
void UGA_Bear_Fire_C::Cancelled_0B48E8B547027954C37AA1BF4D77BE31(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Bear_Fire.GA_Bear_Fire_C:Cancelled_0B48E8B547027954C37AA1BF4D77BE31");

	FUGA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Bear_Fire.GA_Bear_Fire_C:Targeted_0B48E8B547027954C37AA1BF4D77BE31
void UGA_Bear_Fire_C::Targeted_0B48E8B547027954C37AA1BF4D77BE31(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Bear_Fire.GA_Bear_Fire_C:Targeted_0B48E8B547027954C37AA1BF4D77BE31");

	FUGA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Bear_Fire.GA_Bear_Fire_C:K2_ActivateAbility
void UGA_Bear_Fire_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Bear_Fire.GA_Bear_Fire_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Bear_Fire.GA_Bear_Fire_C:ExecuteUbergraph_GA_Bear_Fire
void UGA_Bear_Fire_C::ExecuteUbergraph_GA_Bear_Fire(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Bear_Fire.GA_Bear_Fire_C:ExecuteUbergraph_GA_Bear_Fire");

	FUGA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

