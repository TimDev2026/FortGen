#include "pch.h"

UScriptStruct* FEngineServiceNotification::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/EngineMessages.EngineServiceNotification");

	return Struct;
}

UScriptStruct* FEngineServiceTerminate::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/EngineMessages.EngineServiceTerminate");

	return Struct;
}

UScriptStruct* FEngineServiceExecuteCommand::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/EngineMessages.EngineServiceExecuteCommand");

	return Struct;
}

UScriptStruct* FEngineServiceAuthGrant::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/EngineMessages.EngineServiceAuthGrant");

	return Struct;
}

UScriptStruct* FEngineServiceAuthDeny::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/EngineMessages.EngineServiceAuthDeny");

	return Struct;
}

UScriptStruct* FEngineServicePong::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/EngineMessages.EngineServicePong");

	return Struct;
}

UScriptStruct* FEngineServicePing::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/EngineMessages.EngineServicePing");

	return Struct;
}

