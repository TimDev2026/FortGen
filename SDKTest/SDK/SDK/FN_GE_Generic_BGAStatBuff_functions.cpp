#include "pch.h"

#include "FN_GE_Generic_BGAStatBuff_classes.h"

UClass* UGE_Generic_BGAStatBuff_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Items/GE_Generic_BGAStatBuff.GE_Generic_BGAStatBuff_C");

	return Class;
}

