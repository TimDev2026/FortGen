#include "pch.h"

#include "FN_UdpMessaging_classes.h"

UClass* UUdpMessagingSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/UdpMessaging.UdpMessagingSettings");

	return Class;
}

UScriptStruct* FUdpMockMessage::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/UdpMessaging.UdpMockMessage");

	return Struct;
}

