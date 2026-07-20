#include "pch.h"

#include "FN_FortnitePartyBackdrop_classes.h"

UClass* AFortnitePartyBackdrop_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Maps/FrontEnd/FortnitePartyBackdrop.FortnitePartyBackdrop_C");

	return Class;
}

// Function /Game/Maps/FrontEnd/FortnitePartyBackdrop.FortnitePartyBackdrop_C:Timeline_0__FinishedFunc
void AFortnitePartyBackdrop_C::Timeline_0__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Maps/FrontEnd/FortnitePartyBackdrop.FortnitePartyBackdrop_C:Timeline_0__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Maps/FrontEnd/FortnitePartyBackdrop.FortnitePartyBackdrop_C:Timeline_0__UpdateFunc
void AFortnitePartyBackdrop_C::Timeline_0__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Maps/FrontEnd/FortnitePartyBackdrop.FortnitePartyBackdrop_C:Timeline_0__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Maps/FrontEnd/FortnitePartyBackdrop.FortnitePartyBackdrop_C:ExecuteUbergraph_FortnitePartyBackdrop
void AFortnitePartyBackdrop_C::ExecuteUbergraph_FortnitePartyBackdrop(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Maps/FrontEnd/FortnitePartyBackdrop.FortnitePartyBackdrop_C:ExecuteUbergraph_FortnitePartyBackdrop");

	FAFortnitePartyBackdrop_C_ExecuteUbergraph_FortnitePartyBackdrop_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

