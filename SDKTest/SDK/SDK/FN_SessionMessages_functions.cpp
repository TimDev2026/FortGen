#include "pch.h"

UScriptStruct* FSessionServiceLogUnsubscribe::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SessionMessages.SessionServiceLogUnsubscribe");

	return Struct;
}

UScriptStruct* FSessionServiceLogSubscribe::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SessionMessages.SessionServiceLogSubscribe");

	return Struct;
}

UScriptStruct* FSessionServiceLog::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SessionMessages.SessionServiceLog");

	return Struct;
}

UScriptStruct* FSessionServicePong::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SessionMessages.SessionServicePong");

	return Struct;
}

UScriptStruct* FSessionServicePing::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/SessionMessages.SessionServicePing");

	return Struct;
}

