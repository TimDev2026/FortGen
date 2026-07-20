#include "pch.h"

#include "FN_GE_Constructor_PlasmaOverdrive_classes.h"

UClass* UGE_Constructor_PlasmaOverdrive_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Constructor/Traits/AppliedForce/GE_Constructor_PlasmaOverdrive.GE_Constructor_PlasmaOverdrive_C");

	return Class;
}

