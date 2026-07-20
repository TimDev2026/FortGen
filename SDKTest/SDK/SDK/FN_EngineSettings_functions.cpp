#include "pch.h"

#include "FN_EngineSettings_classes.h"

UClass* UConsoleSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/EngineSettings.ConsoleSettings");

	return Class;
}

UClass* UGameMapsSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/EngineSettings.GameMapsSettings");

	return Class;
}

UClass* UGameNetworkManagerSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/EngineSettings.GameNetworkManagerSettings");

	return Class;
}

UClass* UGameSessionSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/EngineSettings.GameSessionSettings");

	return Class;
}

UClass* UGeneralEngineSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/EngineSettings.GeneralEngineSettings");

	return Class;
}

UClass* UGeneralProjectSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/EngineSettings.GeneralProjectSettings");

	return Class;
}

UClass* UHudSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/EngineSettings.HudSettings");

	return Class;
}

UScriptStruct* FAutoCompleteCommand::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/EngineSettings.AutoCompleteCommand");

	return Struct;
}

