#include "pch.h"

#include "FN_GE_Homebase_Rating_CommandCenter_classes.h"

UClass* UGE_Homebase_Rating_CommandCenter_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Homebase/Rating/GE_Homebase_Rating_CommandCenter.GE_Homebase_Rating_CommandCenter_C");

	return Class;
}

