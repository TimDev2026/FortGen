#include "pch.h"

#include "FN_BannerGATooltip_classes.h"

UClass* UBannerGATooltip_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Generic/Gadgets/Banner/BannerGATooltip.BannerGATooltip_C");

	return Class;
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/BannerGATooltip.BannerGATooltip_C:GetTextForTokenFromAbilitySpecInternal
bool UBannerGATooltip_C::GetTextForTokenFromAbilitySpecInternal(FGameplayAbilitySpec Spec, FGameplayTag Tag, class UFortTooltipContext* Context, FName Token, FText OutText) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/BannerGATooltip.BannerGATooltip_C:GetTextForTokenFromAbilitySpecInternal");

	FUBannerGATooltip_C_GetTextForTokenFromAbilitySpecInternal_Params Parms;

	Parms.Spec = Spec;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.OutText = OutText;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Generic/Gadgets/Banner/BannerGATooltip.BannerGATooltip_C:GetTextForTokenInternal
bool UBannerGATooltip_C::GetTextForTokenInternal(class UObject* ObjectToDescribe, FGameplayTag Tag, class UFortTooltipContext* Context, FName Token, FText OutText) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Generic/Gadgets/Banner/BannerGATooltip.BannerGATooltip_C:GetTextForTokenInternal");

	FUBannerGATooltip_C_GetTextForTokenInternal_Params Parms;

	Parms.ObjectToDescribe = ObjectToDescribe;
	Parms.Tag = Tag;
	Parms.Context = Context;
	Parms.Token = Token;
	Parms.OutText = OutText;

	ProcessEvent(FN, &Parms);
}

