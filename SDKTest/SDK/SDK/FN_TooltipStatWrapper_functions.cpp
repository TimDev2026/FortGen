#include "pch.h"

#include "FN_TooltipStatWrapper_classes.h"

UClass* UTooltipStatWrapper_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/UI/Vault/TooltipStatWrapper.TooltipStatWrapper_C");

	return Class;
}

// Function /Game/UI/Vault/TooltipStatWrapper.TooltipStatWrapper_C:ShowUpgradeArrow
void UTooltipStatWrapper_C::ShowUpgradeArrow(ESlateVisibility InVisibility)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Vault/TooltipStatWrapper.TooltipStatWrapper_C:ShowUpgradeArrow");

	FUTooltipStatWrapper_C_ShowUpgradeArrow_Params Parms;

	Parms.InVisibility = InVisibility;

	ProcessEvent(FN, &Parms);
}

// Function /Game/UI/Vault/TooltipStatWrapper.TooltipStatWrapper_C:Construct
void UTooltipStatWrapper_C::Construct()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Vault/TooltipStatWrapper.TooltipStatWrapper_C:Construct");

	ProcessEvent(FN, nullptr);
}

// Function /Game/UI/Vault/TooltipStatWrapper.TooltipStatWrapper_C:ExecuteUbergraph_TooltipStatWrapper
void UTooltipStatWrapper_C::ExecuteUbergraph_TooltipStatWrapper(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/UI/Vault/TooltipStatWrapper.TooltipStatWrapper_C:ExecuteUbergraph_TooltipStatWrapper");

	FUTooltipStatWrapper_C_ExecuteUbergraph_TooltipStatWrapper_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

