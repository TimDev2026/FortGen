#include "pch.h"

#include "FN_GA_Ninja_ThrowingStars_classes.h"

UClass* UGA_Ninja_ThrowingStars_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C");

	return Class;
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:SetupVariables
void UGA_Ninja_ThrowingStars_C::SetupVariables()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:SetupVariables");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:ThrowCascade
void UGA_Ninja_ThrowingStars_C::ThrowCascade()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:ThrowCascade");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:ThrowAdditionalStars
void UGA_Ninja_ThrowingStars_C::ThrowAdditionalStars()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:ThrowAdditionalStars");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Throw Lv3 Stars
void UGA_Ninja_ThrowingStars_C::Throw_Lv3_Stars()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Throw Lv3 Stars");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Thow Lv2 Stars
void UGA_Ninja_ThrowingStars_C::Thow_Lv2_Stars()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Thow Lv2 Stars");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:ThrowBasicStars
void UGA_Ninja_ThrowingStars_C::ThrowBasicStars()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:ThrowBasicStars");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:SpawnThrowingStar
void UGA_Ninja_ThrowingStars_C::SpawnThrowingStar(FVector Transform_Offset, float Horizontal_Spread, class AActor* Homing_Target)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:SpawnThrowingStar");

	FUGA_Ninja_ThrowingStars_C_SpawnThrowingStar_Params Parms;

	Parms.Transform_Offset = Transform_Offset;
	Parms.Horizontal_Spread = Horizontal_Spread;
	Parms.Homing_Target = Homing_Target;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Cancelled_F7576E764ABBFFFBF1A6BE95A742E0A6
void UGA_Ninja_ThrowingStars_C::Cancelled_F7576E764ABBFFFBF1A6BE95A742E0A6(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Cancelled_F7576E764ABBFFFBF1A6BE95A742E0A6");

	FUGA_Ninja_ThrowingStars_C_Cancelled_F7576E764ABBFFFBF1A6BE95A742E0A6_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Targeted_F7576E764ABBFFFBF1A6BE95A742E0A6
void UGA_Ninja_ThrowingStars_C::Targeted_F7576E764ABBFFFBF1A6BE95A742E0A6(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Targeted_F7576E764ABBFFFBF1A6BE95A742E0A6");

	FUGA_Ninja_ThrowingStars_C_Targeted_F7576E764ABBFFFBF1A6BE95A742E0A6_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Completed_6FEC3EAA4C7675A1295702BBAE17678C
void UGA_Ninja_ThrowingStars_C::Completed_6FEC3EAA4C7675A1295702BBAE17678C(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Completed_6FEC3EAA4C7675A1295702BBAE17678C");

	FUGA_Ninja_ThrowingStars_C_Completed_6FEC3EAA4C7675A1295702BBAE17678C_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Cancelled_6FEC3EAA4C7675A1295702BBAE17678C
void UGA_Ninja_ThrowingStars_C::Cancelled_6FEC3EAA4C7675A1295702BBAE17678C(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Cancelled_6FEC3EAA4C7675A1295702BBAE17678C");

	FUGA_Ninja_ThrowingStars_C_Cancelled_6FEC3EAA4C7675A1295702BBAE17678C_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Triggered_6FEC3EAA4C7675A1295702BBAE17678C
void UGA_Ninja_ThrowingStars_C::Triggered_6FEC3EAA4C7675A1295702BBAE17678C(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:Triggered_6FEC3EAA4C7675A1295702BBAE17678C");

	FUGA_Ninja_ThrowingStars_C_Triggered_6FEC3EAA4C7675A1295702BBAE17678C_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:K2_ActivateAbility
void UGA_Ninja_ThrowingStars_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:ExecuteUbergraph_GA_Ninja_ThrowingStars
void UGA_Ninja_ThrowingStars_C::ExecuteUbergraph_GA_Ninja_ThrowingStars(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Ninja/Gadgets/ThrowingStars/GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C:ExecuteUbergraph_GA_Ninja_ThrowingStars");

	FUGA_Ninja_ThrowingStars_C_ExecuteUbergraph_GA_Ninja_ThrowingStars_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

