#include "pch.h"

#include "FN_GCN_Commando_IncendiaryRoundsActive_classes.h"

UClass* AGCN_Commando_IncendiaryRoundsActive_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Commando/Gadgets/IncendiaryRounds/GCN_Commando_IncendiaryRoundsActive.GCN_Commando_IncendiaryRoundsActive_C");

	return Class;
}

