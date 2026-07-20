#include "pch.h"

#include "FN_HeroInfoLibrary_classes.h"

UClass* UHeroInfoLibrary_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Heroes/HeroInfoLibrary.HeroInfoLibrary_C");

	return Class;
}

// Function /Game/UI/Heroes/HeroInfoLibrary.HeroInfoLibrary_C:Get Core Stat By Hero ID
void UHeroInfoLibrary_C::Get_Core_Stat_By_Hero_ID(FString Hero_ID, FGameplayAttribute Attribute, FHeroCoreStatSet UI_Data, class UObject* __WorldContext, FHeroCoreStat Stat, float Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoLibrary.HeroInfoLibrary_C:Get Core Stat By Hero ID");

	FUHeroInfoLibrary_C_Get_Core_Stat_By_Hero_ID_Params Parms;

	Parms.Hero_ID = Hero_ID;
	Parms.Attribute = Attribute;
	Parms.UI_Data = UI_Data;
	Parms.__WorldContext = __WorldContext;
	Parms.Stat = Stat;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroInfoLibrary.HeroInfoLibrary_C:Get Current Hero Core Stats
void UHeroInfoLibrary_C::Get_Current_Hero_Core_Stats(class UObject* __WorldContext, TArray<FHeroCoreStat> Data, TArray<float> Values)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoLibrary.HeroInfoLibrary_C:Get Current Hero Core Stats");

	FUHeroInfoLibrary_C_Get_Current_Hero_Core_Stats_Params Parms;

	Parms.__WorldContext = __WorldContext;
	Parms.Data = Data;
	Parms.Values = Values;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Heroes/HeroInfoLibrary.HeroInfoLibrary_C:Get Core Stats By Hero ID
void UHeroInfoLibrary_C::Get_Core_Stats_By_Hero_ID(FString Hero_ID, FHeroCoreStatSet UI_Data, class UObject* __WorldContext, TArray<FHeroCoreStat> Data, TArray<float> Values)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Heroes/HeroInfoLibrary.HeroInfoLibrary_C:Get Core Stats By Hero ID");

	FUHeroInfoLibrary_C_Get_Core_Stats_By_Hero_ID_Params Parms;

	Parms.Hero_ID = Hero_ID;
	Parms.UI_Data = UI_Data;
	Parms.__WorldContext = __WorldContext;
	Parms.Data = Data;
	Parms.Values = Values;

	StaticClass()->ProcessEvent(FN, &Parms);
}

