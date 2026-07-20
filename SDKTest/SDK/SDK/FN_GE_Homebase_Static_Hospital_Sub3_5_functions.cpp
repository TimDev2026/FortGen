#include "pch.h"

#include "FN_GE_Homebase_Static_Hospital_Sub3_5_classes.h"

UClass* UGE_Homebase_Static_Hospital_Sub3_5_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/Hospital/GE_Homebase_Static_Hospital_Sub3_5.GE_Homebase_Static_Hospital_Sub3_5_C");

	return Class;
}

