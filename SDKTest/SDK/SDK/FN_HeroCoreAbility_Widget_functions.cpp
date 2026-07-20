#include "pch.h"

#include "FN_HeroCoreAbility_Widget_classes.h"

UClass* UHeroCoreAbility_Widget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C");

	return Class;
}

// Function /Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:Invalid Data
void UHeroCoreAbility_Widget_C::Invalid_Data()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:Invalid Data");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:Update
void UHeroCoreAbility_Widget_C::Update(class UFortAbilityKit* Ability_Kit, bool Is_Unlocked)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:Update");

	FUHeroCoreAbility_Widget_C_Update_Params Parms;

	Parms.Ability_Kit = Ability_Kit;
	Parms.Is_Unlocked = Is_Unlocked;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:Get Ability Kit Tooltip
class UWidget* UHeroCoreAbility_Widget_C::Get_Ability_Kit_Tooltip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:Get Ability Kit Tooltip");

	FUHeroCoreAbility_Widget_C_Get_Ability_Kit_Tooltip_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:Construct
void UHeroCoreAbility_Widget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:ExecuteUbergraph_HeroCoreAbility_Widget
void UHeroCoreAbility_Widget_C::ExecuteUbergraph_HeroCoreAbility_Widget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroCoreAbility_Widget.HeroCoreAbility_Widget_C:ExecuteUbergraph_HeroCoreAbility_Widget");

	FUHeroCoreAbility_Widget_C_ExecuteUbergraph_HeroCoreAbility_Widget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

