#include "pch.h"

#include "FN_BP_Hex_Outpost_classes.h"

UClass* ABP_Hex_Outpost_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/World/ZoneThemes/Outposts/BP_Hex_Outpost.BP_Hex_Outpost_C");

	return Class;
}

// Function /Game/World/ZoneThemes/Outposts/BP_Hex_Outpost.BP_Hex_Outpost_C:UserConstructionScript
void ABP_Hex_Outpost_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/ZoneThemes/Outposts/BP_Hex_Outpost.BP_Hex_Outpost_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/ZoneThemes/Outposts/BP_Hex_Outpost.BP_Hex_Outpost_C:ActivateOutpost
void ABP_Hex_Outpost_C::ActivateOutpost()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/ZoneThemes/Outposts/BP_Hex_Outpost.BP_Hex_Outpost_C:ActivateOutpost");

	ProcessEvent(FN, nullptr);
}

// Function /Game/World/ZoneThemes/Outposts/BP_Hex_Outpost.BP_Hex_Outpost_C:ExecuteUbergraph_BP_Hex_Outpost
void ABP_Hex_Outpost_C::ExecuteUbergraph_BP_Hex_Outpost(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/World/ZoneThemes/Outposts/BP_Hex_Outpost.BP_Hex_Outpost_C:ExecuteUbergraph_BP_Hex_Outpost");

	FABP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

