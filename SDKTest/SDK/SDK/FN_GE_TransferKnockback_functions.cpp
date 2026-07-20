#include "pch.h"

#include "FN_GE_TransferKnockback_classes.h"

UClass* UGE_TransferKnockback_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_TransferKnockback.GE_TransferKnockback_C");

	return Class;
}

