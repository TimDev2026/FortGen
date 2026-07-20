#include "pch.h"

#include "FN_GA_Explorer_Fragment_classes.h"

UClass* UGA_Explorer_Fragment_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C");

	return Class;
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:ApplyStatScaling
void UGA_Explorer_Fragment_C::ApplyStatScaling(class AB_BGA_Explorer_OutlanderFragmentBear_C* BearReference)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:ApplyStatScaling");

	FUGA_Explorer_Fragment_C_ApplyStatScaling_Params Parms;

	Parms.BearReference = BearReference;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:DarkHackyMath
void UGA_Explorer_Fragment_C::DarkHackyMath(class AFortPlayerPawn* HitTarget, float SetByCallerValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:DarkHackyMath");

	FUGA_Explorer_Fragment_C_DarkHackyMath_Params Parms;

	Parms.HitTarget = HitTarget;
	Parms.SetByCallerValue = SetByCallerValue;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:K2_ShouldUseDecoTool
bool UGA_Explorer_Fragment_C::K2_ShouldUseDecoTool(FGameplayAbilityActorInfo ActorInfo) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:K2_ShouldUseDecoTool");

	FUGA_Explorer_Fragment_C_K2_ShouldUseDecoTool_Params Parms;

	Parms.ActorInfo = ActorInfo;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:SetupIconOverride
bool UGA_Explorer_Fragment_C::SetupIconOverride()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:SetupIconOverride");

	FUGA_Explorer_Fragment_C_SetupIconOverride_Params Parms;


	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:K2_GetIconOverride
void UGA_Explorer_Fragment_C::K2_GetIconOverride()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:K2_GetIconOverride");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:K2_CanActivateAbility
bool UGA_Explorer_Fragment_C::K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer RelevantTags) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:K2_CanActivateAbility");

	FUGA_Explorer_Fragment_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.RelevantTags = RelevantTags;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:SpecialtyFragment
void UGA_Explorer_Fragment_C::SpecialtyFragment(E_ExplorerClassList ClassType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:SpecialtyFragment");

	FUGA_Explorer_Fragment_C_SpecialtyFragment_Params Parms;

	Parms.ClassType = ClassType;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:DefensiveFragment
void UGA_Explorer_Fragment_C::DefensiveFragment(E_ExplorerClassList ClassType, FGameplayAbilityTargetDataHandle Target_Data, FGameplayTag Application_Tag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:DefensiveFragment");

	FUGA_Explorer_Fragment_C_DefensiveFragment_Params Parms;

	Parms.ClassType = ClassType;
	Parms.Target_Data = Target_Data;
	Parms.Application_Tag = Application_Tag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:ClassSelection
void UGA_Explorer_Fragment_C::ClassSelection(class AFortPlayerPawn* PlayerPawn, class AFortPlayerPawn* ClassPawn, E_ExplorerClassList SelectedClass, bool EndAbility)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:ClassSelection");

	FUGA_Explorer_Fragment_C_ClassSelection_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.ClassPawn = ClassPawn;
	Parms.SelectedClass = SelectedClass;
	Parms.EndAbility = EndAbility;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:ActivateFragment
void UGA_Explorer_Fragment_C::ActivateFragment(E_ExplorerFragmentTypes FragmentType, E_ExplorerClassList ClassType, FGameplayTag ActivateEvent, bool EndAbility)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:ActivateFragment");

	FUGA_Explorer_Fragment_C_ActivateFragment_Params Parms;

	Parms.FragmentType = FragmentType;
	Parms.ClassType = ClassType;
	Parms.ActivateEvent = ActivateEvent;
	Parms.EndAbility = EndAbility;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:OffensiveFragment
void UGA_Explorer_Fragment_C::OffensiveFragment(E_ExplorerClassList ClassType, FGameplayAbilityTargetDataHandle TargetData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:OffensiveFragment");

	FUGA_Explorer_Fragment_C_OffensiveFragment_Params Parms;

	Parms.ClassType = ClassType;
	Parms.TargetData = TargetData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Cancelled_AB9C57344D21682887FAA6B895FA1C6D
void UGA_Explorer_Fragment_C::Cancelled_AB9C57344D21682887FAA6B895FA1C6D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Cancelled_AB9C57344D21682887FAA6B895FA1C6D");

	FUGA_Explorer_Fragment_C_Cancelled_AB9C57344D21682887FAA6B895FA1C6D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Targeted_AB9C57344D21682887FAA6B895FA1C6D
void UGA_Explorer_Fragment_C::Targeted_AB9C57344D21682887FAA6B895FA1C6D(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Targeted_AB9C57344D21682887FAA6B895FA1C6D");

	FUGA_Explorer_Fragment_C_Targeted_AB9C57344D21682887FAA6B895FA1C6D_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB
void UGA_Explorer_Fragment_C::Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB");

	FUGA_Explorer_Fragment_C_Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB
void UGA_Explorer_Fragment_C::Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB");

	FUGA_Explorer_Fragment_C_Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Cancelled_D9A99A8E430AA4101B325597D2C21C37
void UGA_Explorer_Fragment_C::Cancelled_D9A99A8E430AA4101B325597D2C21C37(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Cancelled_D9A99A8E430AA4101B325597D2C21C37");

	FUGA_Explorer_Fragment_C_Cancelled_D9A99A8E430AA4101B325597D2C21C37_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Targeted_D9A99A8E430AA4101B325597D2C21C37
void UGA_Explorer_Fragment_C::Targeted_D9A99A8E430AA4101B325597D2C21C37(FGameplayAbilityTargetDataHandle TargetData, FGameplayTag ApplicationTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Targeted_D9A99A8E430AA4101B325597D2C21C37");

	FUGA_Explorer_Fragment_C_Targeted_D9A99A8E430AA4101B325597D2C21C37_Params Parms;

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254
void UGA_Explorer_Fragment_C::OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254
void UGA_Explorer_Fragment_C::OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254
void UGA_Explorer_Fragment_C::OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928
void UGA_Explorer_Fragment_C::Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928");

	FUGA_Explorer_Fragment_C_Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Exploded_56D0E8B74E6D3560ABB4BF82A5A31928
void UGA_Explorer_Fragment_C::Exploded_56D0E8B74E6D3560ABB4BF82A5A31928(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Exploded_56D0E8B74E6D3560ABB4BF82A5A31928");

	FUGA_Explorer_Fragment_C_Exploded_56D0E8B74E6D3560ABB4BF82A5A31928_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Stopped_56D0E8B74E6D3560ABB4BF82A5A31928
void UGA_Explorer_Fragment_C::Stopped_56D0E8B74E6D3560ABB4BF82A5A31928(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Stopped_56D0E8B74E6D3560ABB4BF82A5A31928");

	FUGA_Explorer_Fragment_C_Stopped_56D0E8B74E6D3560ABB4BF82A5A31928_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Bounced_56D0E8B74E6D3560ABB4BF82A5A31928
void UGA_Explorer_Fragment_C::Bounced_56D0E8B74E6D3560ABB4BF82A5A31928(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Bounced_56D0E8B74E6D3560ABB4BF82A5A31928");

	FUGA_Explorer_Fragment_C_Bounced_56D0E8B74E6D3560ABB4BF82A5A31928_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Touched_56D0E8B74E6D3560ABB4BF82A5A31928
void UGA_Explorer_Fragment_C::Touched_56D0E8B74E6D3560ABB4BF82A5A31928(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Touched_56D0E8B74E6D3560ABB4BF82A5A31928");

	FUGA_Explorer_Fragment_C_Touched_56D0E8B74E6D3560ABB4BF82A5A31928_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Created_56D0E8B74E6D3560ABB4BF82A5A31928
void UGA_Explorer_Fragment_C::Created_56D0E8B74E6D3560ABB4BF82A5A31928(FProjectileEventData ProjectileData)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:Created_56D0E8B74E6D3560ABB4BF82A5A31928");

	FUGA_Explorer_Fragment_C_Created_56D0E8B74E6D3560ABB4BF82A5A31928_Params Parms;

	Parms.ProjectileData = ProjectileData;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:K2_ActivateAbility
void UGA_Explorer_Fragment_C::K2_ActivateAbility()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:K2_ActivateAbility");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:ExecuteUbergraph_GA_Explorer_Fragment
void UGA_Explorer_Fragment_C::ExecuteUbergraph_GA_Explorer_Fragment(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Abilities/Player/Outlander/Gadgets/Fragment/GA_Explorer_Fragment.GA_Explorer_Fragment_C:ExecuteUbergraph_GA_Explorer_Fragment");

	FUGA_Explorer_Fragment_C_ExecuteUbergraph_GA_Explorer_Fragment_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

