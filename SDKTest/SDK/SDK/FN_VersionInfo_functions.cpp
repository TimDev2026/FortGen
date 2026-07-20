#include "pch.h"

#include "FN_VersionInfo_classes.h"

UClass* UVersionInfo_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Global_Elements/VersionInfo.VersionInfo_C");

	return Class;
}

// Function /Game/UI/Global_Elements/VersionInfo.VersionInfo_C:Update
void UVersionInfo_C::Update(FFortBackendVersion In_Data)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/VersionInfo.VersionInfo_C:Update");

	FUVersionInfo_C_Update_Params Parms;

	Parms.In_Data = In_Data;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Global_Elements/VersionInfo.VersionInfo_C:Construct
void UVersionInfo_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/VersionInfo.VersionInfo_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Global_Elements/VersionInfo.VersionInfo_C:ExecuteUbergraph_VersionInfo
void UVersionInfo_C::ExecuteUbergraph_VersionInfo(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Global_Elements/VersionInfo.VersionInfo_C:ExecuteUbergraph_VersionInfo");

	FUVersionInfo_C_ExecuteUbergraph_VersionInfo_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

