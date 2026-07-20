#include "pch.h"

#include "FN_Trap_Floor_Health_Balm_classes.h"

UClass* ATrap_Floor_Health_Balm_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Building/ActorBlueprints/Trap/Blueprints/Trap_Floor_Health_Balm.Trap_Floor_Health_Balm_C");

	return Class;
}

