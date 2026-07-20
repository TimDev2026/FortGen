#include "pch.h"

#include "FN_DayPhaseLightingAndFog_classes.h"

UClass* ADayPhaseLightingAndFog_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C");

	return Class;
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:UserConstructionScript
void ADayPhaseLightingAndFog_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:New Storm Timeline__FinishedFunc
void ADayPhaseLightingAndFog_C::New_Storm_Timeline__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:New Storm Timeline__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:New Storm Timeline__UpdateFunc
void ADayPhaseLightingAndFog_C::New_Storm_Timeline__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:New Storm Timeline__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:New Storm Timeline__FireOffRain__EventFunc
void ADayPhaseLightingAndFog_C::New_Storm_Timeline__FireOffRain__EventFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:New Storm Timeline__FireOffRain__EventFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:FlashLightning__FinishedFunc
void ADayPhaseLightingAndFog_C::FlashLightning__FinishedFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:FlashLightning__FinishedFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:FlashLightning__UpdateFunc
void ADayPhaseLightingAndFog_C::FlashLightning__UpdateFunc()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:FlashLightning__UpdateFunc");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:DisableLightAndFog
void ADayPhaseLightingAndFog_C::DisableLightAndFog(bool Enable)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:DisableLightAndFog");

	FADayPhaseLightingAndFog_C_DisableLightAndFog_Params Parms;

	Parms.Enable = Enable;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:StartStorm
void ADayPhaseLightingAndFog_C::StartStorm()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:StartStorm");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:OnStormStart
void ADayPhaseLightingAndFog_C::OnStormStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:OnStormStart");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:OnStormEnd
void ADayPhaseLightingAndFog_C::OnStormEnd()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:OnStormEnd");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:LightningStrike
void ADayPhaseLightingAndFog_C::LightningStrike()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:LightningStrike");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:ExecuteUbergraph_DayPhaseLightingAndFog
void ADayPhaseLightingAndFog_C::ExecuteUbergraph_DayPhaseLightingAndFog(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/DayPhaseLightingAndFog.DayPhaseLightingAndFog_C:ExecuteUbergraph_DayPhaseLightingAndFog");

	FADayPhaseLightingAndFog_C_ExecuteUbergraph_DayPhaseLightingAndFog_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

