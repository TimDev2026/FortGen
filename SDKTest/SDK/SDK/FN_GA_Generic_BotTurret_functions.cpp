#include "pch.h"

#include "FN_GA_Generic_BotTurret_classes.h"

UClass* UGA_Generic_BotTurret_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:ApplyStatScaling
void UGA_Generic_BotTurret_C::ApplyStatScaling(class AB_BGA_BotTurret_C* BotReference)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:ApplyStatScaling");

	FUGA_Generic_BotTurret_C_ApplyStatScaling_Params Parms;

	Parms.BotReference = BotReference;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:SetLevelUpgrades
void UGA_Generic_BotTurret_C::SetLevelUpgrades()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:SetLevelUpgrades");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:SetUpBot
void UGA_Generic_BotTurret_C::SetUpBot(class AFortPlayerPawn* PlayerPawn, FVector SpawnLocation, FRotator SpawnRotation, class UClass* BGATurret)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:SetUpBot");

	FUGA_Generic_BotTurret_C_SetUpBot_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnRotation = SpawnRotation;
	Parms.BGATurret = BGATurret;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:Completed_3A74E5BE4F4D85991B8887A89A2350CB
void UGA_Generic_BotTurret_C::Completed_3A74E5BE4F4D85991B8887A89A2350CB(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:Completed_3A74E5BE4F4D85991B8887A89A2350CB");

	FUGA_Generic_BotTurret_C_Completed_3A74E5BE4F4D85991B8887A89A2350CB_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:Cancelled_3A74E5BE4F4D85991B8887A89A2350CB
void UGA_Generic_BotTurret_C::Cancelled_3A74E5BE4F4D85991B8887A89A2350CB(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:Cancelled_3A74E5BE4F4D85991B8887A89A2350CB");

	FUGA_Generic_BotTurret_C_Cancelled_3A74E5BE4F4D85991B8887A89A2350CB_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:Triggered_3A74E5BE4F4D85991B8887A89A2350CB
void UGA_Generic_BotTurret_C::Triggered_3A74E5BE4F4D85991B8887A89A2350CB(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:Triggered_3A74E5BE4F4D85991B8887A89A2350CB");

	FUGA_Generic_BotTurret_C_Triggered_3A74E5BE4F4D85991B8887A89A2350CB_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:K2_ActivateAbility
void UGA_Generic_BotTurret_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:ExecuteUbergraph_GA_Generic_BotTurret
void UGA_Generic_BotTurret_C::ExecuteUbergraph_GA_Generic_BotTurret(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurret.GA_Generic_BotTurret_C:ExecuteUbergraph_GA_Generic_BotTurret");

	FUGA_Generic_BotTurret_C_ExecuteUbergraph_GA_Generic_BotTurret_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

