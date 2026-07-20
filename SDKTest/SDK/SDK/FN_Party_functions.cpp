#include "pch.h"

#include "FN_Party_classes.h"

UClass* UPartyGameState::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Party.PartyGameState");

	return Class;
}

UClass* UParty::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Party.Party");

	return Class;
}

UClass* UPartyMemberState::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Party.PartyMemberState");

	return Class;
}

UScriptStruct* FPartyState::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Party.PartyState");

	return Struct;
}

UScriptStruct* FPartyMemberRepState::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Party.PartyMemberRepState");

	return Struct;
}

