#include "pch.h"

#include "FN_Delete_classes.h"

UClass* UDelete_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/VisualThreatManager/StormVisuals/Debug/Delete.Delete_C");

	return Class;
}

