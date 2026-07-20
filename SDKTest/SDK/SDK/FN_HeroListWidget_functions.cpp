#include "pch.h"

#include "FN_HeroListWidget_classes.h"

UClass* UHeroListWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/HeroListWidget.HeroListWidget_C");

	return Class;
}

// Function /Game/UI/Heroes/HeroListWidget.HeroListWidget_C:On Hero Deleted
void UHeroListWidget_C::On_Hero_Deleted(bool Success)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListWidget.HeroListWidget_C:On Hero Deleted");

	FUHeroListWidget_C_On_Hero_Deleted_Params Parms;

	Parms.Success = Success;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListWidget.HeroListWidget_C:On Hero Created
void UHeroListWidget_C::On_Hero_Created(bool Success)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListWidget.HeroListWidget_C:On Hero Created");

	FUHeroListWidget_C_On_Hero_Created_Params Parms;

	Parms.Success = Success;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListWidget.HeroListWidget_C:Set Tab Group Name
void UHeroListWidget_C::Set_Tab_Group_Name()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListWidget.HeroListWidget_C:Set Tab Group Name");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListWidget.HeroListWidget_C:Refresh Hero List
void UHeroListWidget_C::Refresh_Hero_List()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListWidget.HeroListWidget_C:Refresh Hero List");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListWidget.HeroListWidget_C:Update Hero List
void UHeroListWidget_C::Update_Hero_List()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListWidget.HeroListWidget_C:Update Hero List");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListWidget.HeroListWidget_C:On Hero Selected
void UHeroListWidget_C::On_Hero_Selected(class UFortBaseButton* Hero_List_Item, bool SELECTED)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListWidget.HeroListWidget_C:On Hero Selected");

	FUHeroListWidget_C_On_Hero_Selected_Params Parms;

	Parms.Hero_List_Item = Hero_List_Item;
	Parms.SELECTED = SELECTED;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroListWidget.HeroListWidget_C:Construct
void UHeroListWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListWidget.HeroListWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroListWidget.HeroListWidget_C:ExecuteUbergraph_HeroListWidget
void UHeroListWidget_C::ExecuteUbergraph_HeroListWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroListWidget.HeroListWidget_C:ExecuteUbergraph_HeroListWidget");

	FUHeroListWidget_C_ExecuteUbergraph_HeroListWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

