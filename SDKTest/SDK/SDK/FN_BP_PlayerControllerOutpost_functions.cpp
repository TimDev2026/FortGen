#include "pch.h"

#include "FN_BP_PlayerControllerOutpost_classes.h"

UClass* ABP_PlayerControllerOutpost_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/TheOutpost/Blueprints/BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C");

	return Class;
}

// Function /Game/TheOutpost/Blueprints/BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C:UserConstructionScript
void ABP_PlayerControllerOutpost_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/TheOutpost/Blueprints/BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

