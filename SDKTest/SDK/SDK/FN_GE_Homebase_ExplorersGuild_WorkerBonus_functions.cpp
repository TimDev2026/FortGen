#include "pch.h"

#include "FN_GE_Homebase_ExplorersGuild_WorkerBonus_classes.h"

UClass* UGE_Homebase_ExplorersGuild_WorkerBonus_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/ExplorersGuild/GE_Homebase_ExplorersGuild_WorkerBonus.GE_Homebase_ExplorersGuild_WorkerBonus_C");

	return Class;
}

