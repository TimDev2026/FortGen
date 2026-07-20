#include "pch.h"

#include "FN_GE_Homebase_Rating_Dojo_classes.h"

UClass* UGE_Homebase_Rating_Dojo_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Rating/GE_Homebase_Rating_Dojo.GE_Homebase_Rating_Dojo_C");

	return Class;
}

