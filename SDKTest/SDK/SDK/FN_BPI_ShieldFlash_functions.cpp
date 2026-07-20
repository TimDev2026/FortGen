#include "pch.h"

#include "FN_BPI_ShieldFlash_classes.h"

UClass* UBPI_ShieldFlash_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/CharClasses/Technician/Gadgets/Shield/Effects/BPI_ShieldFlash.BPI_ShieldFlash_C");

	return Class;
}

// Function /Game/CharClasses/Technician/Gadgets/Shield/Effects/BPI_ShieldFlash.BPI_ShieldFlash_C:FlashShield
void UBPI_ShieldFlash_C::FlashShield()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/CharClasses/Technician/Gadgets/Shield/Effects/BPI_ShieldFlash.BPI_ShieldFlash_C:FlashShield");

	ProcessEvent(FN, nullptr);
}

