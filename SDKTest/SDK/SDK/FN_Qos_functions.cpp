#include "pch.h"

#include "FN_Qos_classes.h"

UClass* AQosBeaconClient::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Qos.QosBeaconClient");

	return Class;
}

// Function /Script/Qos.QosBeaconClient:ServerQosRequest
void AQosBeaconClient::ServerQosRequest(FString InSessionId)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Qos.QosBeaconClient:ServerQosRequest");

	FAQosBeaconClient_ServerQosRequest_Params Parms;

	Parms.InSessionId = InSessionId;

	ProcessEvent(FN, &Parms);
}

// Function /Script/Qos.QosBeaconClient:ClientQosResponse
void AQosBeaconClient::ClientQosResponse(EQosResponseType Response)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Qos.QosBeaconClient:ClientQosResponse");

	FAQosBeaconClient_ClientQosResponse_Params Parms;

	Parms.Response = Response;

	ProcessEvent(FN, &Parms);
}

UClass* AQosBeaconHost::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Qos.QosBeaconHost");

	return Class;
}

UClass* UQosEvaluator::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Qos.QosEvaluator");

	return Class;
}

UScriptStruct* FQosSearchPass::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Qos.QosSearchPass");

	return Struct;
}

UScriptStruct* FQosSearchState::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Qos.QosSearchState");

	return Struct;
}

