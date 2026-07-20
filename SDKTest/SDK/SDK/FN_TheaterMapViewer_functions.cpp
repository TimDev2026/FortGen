#include "pch.h"

#include "FN_TheaterMapViewer_classes.h"

UClass* ATheaterMapViewer_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/World/TheaterMapViewer.TheaterMapViewer_C");

	return Class;
}

// Function /Game/World/TheaterMapViewer.TheaterMapViewer_C:UserConstructionScript
void ATheaterMapViewer_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/TheaterMapViewer.TheaterMapViewer_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

