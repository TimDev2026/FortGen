#include "pch.h"

#include "FN_GA_Generic_ProximityMines_classes.h"

UClass* UGA_Generic_ProximityMines_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:Set_Level_Upgrades
void UGA_Generic_ProximityMines_C::Set_Level_Upgrades()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:Set_Level_Upgrades");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:OnCancelled_3526FD6A4CBC2AA7699541A0CD0D006C
void UGA_Generic_ProximityMines_C::OnCancelled_3526FD6A4CBC2AA7699541A0CD0D006C()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:OnCancelled_3526FD6A4CBC2AA7699541A0CD0D006C");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:OnInterrupted_3526FD6A4CBC2AA7699541A0CD0D006C
void UGA_Generic_ProximityMines_C::OnInterrupted_3526FD6A4CBC2AA7699541A0CD0D006C()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:OnInterrupted_3526FD6A4CBC2AA7699541A0CD0D006C");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:OnComplete_3526FD6A4CBC2AA7699541A0CD0D006C
void UGA_Generic_ProximityMines_C::OnComplete_3526FD6A4CBC2AA7699541A0CD0D006C()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:OnComplete_3526FD6A4CBC2AA7699541A0CD0D006C");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:K2_ActivateAbility
void UGA_Generic_ProximityMines_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:ExecuteUbergraph_GA_Generic_ProximityMines
void UGA_Generic_ProximityMines_C::ExecuteUbergraph_GA_Generic_ProximityMines(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Proximity_Mines/GA_Generic_ProximityMines.GA_Generic_ProximityMines_C:ExecuteUbergraph_GA_Generic_ProximityMines");

	FUGA_Generic_ProximityMines_C_ExecuteUbergraph_GA_Generic_ProximityMines_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

