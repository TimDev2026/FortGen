#include "pch.h"

#include "FN_GE_TransferFullBodyHit_classes.h"

UClass* UGE_TransferFullBodyHit_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Generic/GE_TransferFullBodyHit.GE_TransferFullBodyHit_C");

	return Class;
}

