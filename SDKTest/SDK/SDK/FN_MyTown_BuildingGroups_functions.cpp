#include "pch.h"

UScriptStruct* FMyTown_BuildingGroups::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/Environments/Homebase/Structs/MyTown_BuildingGroups.MyTown_BuildingGroups");

	return Struct;
}

