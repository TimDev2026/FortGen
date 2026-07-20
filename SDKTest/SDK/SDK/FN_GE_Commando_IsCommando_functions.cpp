#include "pch.h"

#include "FN_GE_Commando_IsCommando_classes.h"

UClass* UGE_Commando_IsCommando_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Default/GE_Commando_IsCommando.GE_Commando_IsCommando_C");

	return Class;
}

