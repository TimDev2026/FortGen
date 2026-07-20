#include "pch.h"

#include "FN_GE_Homebase_Static_KeepMedical_2_classes.h"

UClass* UGE_Homebase_Static_KeepMedical_2_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Static/Keep/GE_Homebase_Static_KeepMedical_2.GE_Homebase_Static_KeepMedical_2_C");

	return Class;
}

