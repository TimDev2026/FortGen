#include "pch.h"

#include "FN_HeroTrait_Widget_classes.h"

UClass* UHeroTrait_Widget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C");

	return Class;
}

// Function /Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:Refresh
void UHeroTrait_Widget_C::Refresh()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:Refresh");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:On Ability Selected
void UHeroTrait_Widget_C::On_Ability_Selected(int32_t INDEX, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:On Ability Selected");

	FUHeroTrait_Widget_C_On_Ability_Selected_Params Parms;

	Parms.INDEX = INDEX;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:Get Primary Trait Tooltip
class UWidget* UHeroTrait_Widget_C::Get_Primary_Trait_Tooltip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:Get Primary Trait Tooltip");

	FUHeroTrait_Widget_C_Get_Primary_Trait_Tooltip_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:Update
void UHeroTrait_Widget_C::Update(class UFortTrait* Trait, int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:Update");

	FUHeroTrait_Widget_C_Update_Params Parms;

	Parms.Trait = Trait;
	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:Construct
void UHeroTrait_Widget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:ExecuteUbergraph_HeroTrait_Widget
void UHeroTrait_Widget_C::ExecuteUbergraph_HeroTrait_Widget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:ExecuteUbergraph_HeroTrait_Widget");

	FUHeroTrait_Widget_C_ExecuteUbergraph_HeroTrait_Widget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:OnRequestSetTraitDepth__DelegateSignature
void UHeroTrait_Widget_C::OnRequestSetTraitDepth__DelegateSignature()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroTrait_Widget.HeroTrait_Widget_C:OnRequestSetTraitDepth__DelegateSignature");

	ProcessEvent(FN, nullptr);
}

