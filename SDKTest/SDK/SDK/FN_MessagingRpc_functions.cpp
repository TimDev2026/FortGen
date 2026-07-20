#include "pch.h"

UScriptStruct* FMessageRpcUnhandled::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MessagingRpc.MessageRpcUnhandled");

	return Struct;
}

UScriptStruct* FMessageRpcProgress::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MessagingRpc.MessageRpcProgress");

	return Struct;
}

UScriptStruct* FMessageRpcCancel::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MessagingRpc.MessageRpcCancel");

	return Struct;
}

UScriptStruct* FRpcMessage::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/MessagingRpc.RpcMessage");

	return Struct;
}

