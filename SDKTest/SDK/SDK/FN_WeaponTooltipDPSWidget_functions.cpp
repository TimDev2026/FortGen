#include "pch.h"

#include "FN_WeaponTooltipDPSWidget_classes.h"

UClass* UWeaponTooltipDPSWidget_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Items/WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C");

	return Class;
}

// Function /Game/UI/Items/WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C:Construct
void UWeaponTooltipDPSWidget_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Items/WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C:ExecuteUbergraph_WeaponTooltipDPSWidget
void UWeaponTooltipDPSWidget_C::ExecuteUbergraph_WeaponTooltipDPSWidget(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Items/WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C:ExecuteUbergraph_WeaponTooltipDPSWidget");

	FUWeaponTooltipDPSWidget_C_ExecuteUbergraph_WeaponTooltipDPSWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

