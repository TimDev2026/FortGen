#include "pch.h"

UScriptStruct* FModalQueueEntry::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/UI/Global_Elements/ModalQueueEntry.ModalQueueEntry");

	return Struct;
}

