#include "pch.h"

UScriptStruct* FPortalRpcServer::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/PortalRpc.PortalRpcServer");

	return Struct;
}

UScriptStruct* FPortalRpcLocateServer::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/PortalRpc.PortalRpcLocateServer");

	return Struct;
}

