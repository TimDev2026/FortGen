#include "pch.h"

#include "FN_FortniteEntry_classes.h"

UClass* PLACEHOLDER_CLASS__HBOnboardingFlow_C_129::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Maps/FortniteEntry.PLACEHOLDER-CLASS__HBOnboardingFlow_C_129");

	return Class;
}

UClass* AFortniteEntry_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Maps/FortniteEntry.FortniteEntry_C");

	return Class;
}

// Function /Game/Maps/FortniteEntry.FortniteEntry_C:OnMatchStarted
void AFortniteEntry_C::OnMatchStarted()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Maps/FortniteEntry.FortniteEntry_C:OnMatchStarted");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Maps/FortniteEntry.FortniteEntry_C:EnableTutorial
void AFortniteEntry_C::EnableTutorial()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Maps/FortniteEntry.FortniteEntry_C:EnableTutorial");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Maps/FortniteEntry.FortniteEntry_C:ReceiveBeginPlay
void AFortniteEntry_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Maps/FortniteEntry.FortniteEntry_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Maps/FortniteEntry.FortniteEntry_C:ExecuteUbergraph_FortniteEntry
void AFortniteEntry_C::ExecuteUbergraph_FortniteEntry(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Maps/FortniteEntry.FortniteEntry_C:ExecuteUbergraph_FortniteEntry");

	FAFortniteEntry_C_ExecuteUbergraph_FortniteEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

