#include "pch.h"

#include "FN_HeroListItemWidget_classes.h"

UClass* UHeroListItemWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C");

	return Class;
}

// Function /Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:Set Selected
void UHeroListItemWidget_C::Set_Selected(bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:Set Selected");

	FUHeroListItemWidget_C_Set_Selected_Params Parms;

	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:Init Selected
void UHeroListItemWidget_C::Init_Selected()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:Init Selected");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:Construct
void UHeroListItemWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:On Hero Selected
void UHeroListItemWidget_C::On_Hero_Selected(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:On Hero Selected");

	FUHeroListItemWidget_C_On_Hero_Selected_Params Parms;

	Parms.Button = Button;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:ExecuteUbergraph_HeroListItemWidget
void UHeroListItemWidget_C::ExecuteUbergraph_HeroListItemWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:ExecuteUbergraph_HeroListItemWidget");

	FUHeroListItemWidget_C_ExecuteUbergraph_HeroListItemWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:HeroSelected__DelegateSignature
void UHeroListItemWidget_C::HeroSelected__DelegateSignature(FString Hero_ID)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListItemWidget.HeroListItemWidget_C:HeroSelected__DelegateSignature");

	FUHeroListItemWidget_C_HeroSelected__DelegateSignature_Params Parms;

	Parms.Hero_ID = Hero_ID;

	ProcessEvent(FN, &Parms);
}

