#include "pch.h"

#include "FN_TheaterTooltip_classes.h"

UClass* UTheaterTooltip_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C");

	return Class;
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Get Theater Info
FText UTheaterTooltip_C::Get_Theater_Info()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Get Theater Info");

	FUTheaterTooltip_C_Get_Theater_Info_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:SetPassengetInfoVisible
void UTheaterTooltip_C::SetPassengetInfoVisible(bool INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:SetPassengetInfoVisible");

	FUTheaterTooltip_C_SetPassengetInfoVisible_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Get Region Count
FText UTheaterTooltip_C::Get_Region_Count()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Get Region Count");

	FUTheaterTooltip_C_Get_Region_Count_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Get Theater Difficulty
FText UTheaterTooltip_C::Get_Theater_Difficulty()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Get Theater Difficulty");

	FUTheaterTooltip_C_Get_Theater_Difficulty_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Get Theater Name
FText UTheaterTooltip_C::Get_Theater_Name()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Get Theater Name");

	FUTheaterTooltip_C_Get_Theater_Name_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Set Visibile
void UTheaterTooltip_C::Set_Visibile(bool Visibile, FText InfoText)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Set Visibile");

	FUTheaterTooltip_C_Set_Visibile_Params Parms;

	Parms.Visibile = Visibile;
	Parms.InfoText = InfoText;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Set Theater Index
void UTheaterTooltip_C::Set_Theater_Index(int32_t INDEX)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Set Theater Index");

	FUTheaterTooltip_C_Set_Theater_Index_Params Parms;

	Parms.INDEX = INDEX;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Construct
void UTheaterTooltip_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:HandleLocalPlayerStateChange
void UTheaterTooltip_C::HandleLocalPlayerStateChange(FFortTeamMemberInfo PlayerInfo)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:HandleLocalPlayerStateChange");

	FUTheaterTooltip_C_HandleLocalPlayerStateChange_Params Parms;

	Parms.PlayerInfo = PlayerInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:ExecuteUbergraph_TheaterTooltip
void UTheaterTooltip_C::ExecuteUbergraph_TheaterTooltip(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/WorldMap/TheaterTooltip.TheaterTooltip_C:ExecuteUbergraph_TheaterTooltip");

	FUTheaterTooltip_C_ExecuteUbergraph_TheaterTooltip_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

