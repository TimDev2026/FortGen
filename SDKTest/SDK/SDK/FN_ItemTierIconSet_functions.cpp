#include "pch.h"

UScriptStruct* FItemTierIconSet::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Game/UI/Items/ItemTierIconSet.ItemTierIconSet");

	return Struct;
}

