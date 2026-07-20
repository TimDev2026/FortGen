#include "pch.h"

#include "FN_OnlineSubsystem_classes.h"

UClass* UNamedInterfaces::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystem.NamedInterfaces");

	return Class;
}

UClass* UTurnBasedMatchInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystem.TurnBasedMatchInterface");

	return Class;
}

// Function /Script/OnlineSubsystem.TurnBasedMatchInterface:OnMatchReceivedTurn
void UTurnBasedMatchInterface::OnMatchReceivedTurn(FString Match, bool bDidBecomeActive)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystem.TurnBasedMatchInterface:OnMatchReceivedTurn");

	FUTurnBasedMatchInterface_OnMatchReceivedTurn_Params Parms;

	Parms.Match = Match;
	Parms.bDidBecomeActive = bDidBecomeActive;

	ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystem.TurnBasedMatchInterface:OnMatchEnded
void UTurnBasedMatchInterface::OnMatchEnded(FString Match)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystem.TurnBasedMatchInterface:OnMatchEnded");

	FUTurnBasedMatchInterface_OnMatchEnded_Params Parms;

	Parms.Match = Match;

	ProcessEvent(FN, &Parms);
}

UScriptStruct* FInAppPurchaseProductInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystem.InAppPurchaseProductInfo");

	return Struct;
}

UScriptStruct* FInAppPurchaseRestoreInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystem.InAppPurchaseRestoreInfo");

	return Struct;
}

UScriptStruct* FNamedInterfaceDef::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystem.NamedInterfaceDef");

	return Struct;
}

UScriptStruct* FNamedInterface::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystem.NamedInterface");

	return Struct;
}

UScriptStruct* FInAppPurchaseProductRequest::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystem.InAppPurchaseProductRequest");

	return Struct;
}

UScriptStruct* FJoinabilitySettings::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystem.JoinabilitySettings");

	return Struct;
}

