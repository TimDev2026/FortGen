#include "pch.h"

#include "FN_HeroInfoWidget_classes.h"

UClass* UHeroInfoWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C");

	return Class;
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:OnHeroStatsChanged
void UHeroInfoWidget_C::OnHeroStatsChanged()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:OnHeroStatsChanged");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Hero ID
void UHeroInfoWidget_C::Refresh_Hero_ID()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Hero ID");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Set As Current Hero
void UHeroInfoWidget_C::Set_As_Current_Hero(bool IsSelected)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Set As Current Hero");

	FUHeroInfoWidget_C_Set_As_Current_Hero_Params Parms;

	Parms.IsSelected = IsSelected;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:On Player Data Updated
void UHeroInfoWidget_C::On_Player_Data_Updated()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:On Player Data Updated");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Get XP Progress Tooltip
class UWidget* UHeroInfoWidget_C::Get_XP_Progress_Tooltip()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Get XP Progress Tooltip");

	FUHeroInfoWidget_C_Get_XP_Progress_Tooltip_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Format
void UHeroInfoWidget_C::Refresh_Format()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Format");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Bind Delegates
void UHeroInfoWidget_C::Bind_Delegates()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Bind Delegates");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Hero Info
void UHeroInfoWidget_C::Refresh_Hero_Info()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Hero Info");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Hero XP
void UHeroInfoWidget_C::Refresh_Hero_XP()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Hero XP");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Hero Stats
void UHeroInfoWidget_C::Refresh_Hero_Stats()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Refresh Hero Stats");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Update
void UHeroInfoWidget_C::Update()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Update");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Construct
void UHeroInfoWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:PreConstruct
void UHeroInfoWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:PreConstruct");

	FUHeroInfoWidget_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:ExecuteUbergraph_HeroInfoWidget
void UHeroInfoWidget_C::ExecuteUbergraph_HeroInfoWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:ExecuteUbergraph_HeroInfoWidget");

	FUHeroInfoWidget_C_ExecuteUbergraph_HeroInfoWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:OnHeroSelected__DelegateSignature
void UHeroInfoWidget_C::OnHeroSelected__DelegateSignature(FString Hero_ID)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoWidget.HeroInfoWidget_C:OnHeroSelected__DelegateSignature");

	FUHeroInfoWidget_C_OnHeroSelected__DelegateSignature_Params Parms;

	Parms.Hero_ID = Hero_ID;

	ProcessEvent(FN, &Parms);
}

