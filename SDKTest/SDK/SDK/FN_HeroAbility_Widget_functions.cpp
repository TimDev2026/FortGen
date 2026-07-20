#include "pch.h"

#include "FN_HeroAbility_Widget_classes.h"

UClass* UHeroAbility_Widget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C");

	return Class;
}

// Function /Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:On Ability Selected
void UHeroAbility_Widget_C::On_Ability_Selected(class UFortBaseButton* Ability_Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:On Ability Selected");

	FUHeroAbility_Widget_C_On_Ability_Selected_Params Parms;

	Parms.Ability_Button = Ability_Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:Update
void UHeroAbility_Widget_C::Update(class UFortAbilityKit* Ability_Kit, int32_t Cost, bool Is_Active)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:Update");

	FUHeroAbility_Widget_C_Update_Params Parms;

	Parms.Ability_Kit = Ability_Kit;
	Parms.Cost = Cost;
	Parms.Is_Active = Is_Active;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:Get Ability Kit Tooltip
class UWidget* UHeroAbility_Widget_C::Get_Ability_Kit_Tooltip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:Get Ability Kit Tooltip");

	FUHeroAbility_Widget_C_Get_Ability_Kit_Tooltip_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:Construct
void UHeroAbility_Widget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:ExecuteUbergraph_HeroAbility_Widget
void UHeroAbility_Widget_C::ExecuteUbergraph_HeroAbility_Widget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:ExecuteUbergraph_HeroAbility_Widget");

	FUHeroAbility_Widget_C_ExecuteUbergraph_HeroAbility_Widget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:OnAbilitySelected__DelegateSignature
void UHeroAbility_Widget_C::OnAbilitySelected__DelegateSignature(int32_t INDEX, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroAbility_Widget.HeroAbility_Widget_C:OnAbilitySelected__DelegateSignature");

	FUHeroAbility_Widget_C_OnAbilitySelected__DelegateSignature_Params Parms;

	Parms.INDEX = INDEX;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

