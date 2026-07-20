#include "pch.h"

#include "FN_GE_Homebase_Static_SparringGuild_Sub5_4_classes.h"

UClass* UGE_Homebase_Static_SparringGuild_Sub5_4_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/SparringGuild/GE_Homebase_Static_SparringGuild_Sub5_4.GE_Homebase_Static_SparringGuild_Sub5_4_C");

	return Class;
}

