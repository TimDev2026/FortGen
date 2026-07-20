#include "pch.h"

#include "FN_GE_HuskAOE4RemovePoison_classes.h"

UClass* UGE_HuskAOE4RemovePoison_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/NPC/Husk/Base/GE_HuskAOE4RemovePoison.GE_HuskAOE4RemovePoison_C");

	return Class;
}

