#include "pch.h"

#include "FN_HuskPawn_Bombshell_classes.h"

UClass* AHuskPawn_Bombshell_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C");

	return Class;
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:UserConstructionScript
void AHuskPawn_Bombshell_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:PawnUniqueIDSet
void AHuskPawn_Bombshell_C::PawnUniqueIDSet()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:PawnUniqueIDSet");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:OnDeathPlayEffects
void AHuskPawn_Bombshell_C::OnDeathPlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:OnDeathPlayEffects");

	FAHuskPawn_Bombshell_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:ReceiveBeginPlay
void AHuskPawn_Bombshell_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:ExecuteUbergraph_HuskPawn_Bombshell
void AHuskPawn_Bombshell_C::ExecuteUbergraph_HuskPawn_Bombshell(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell.HuskPawn_Bombshell_C:ExecuteUbergraph_HuskPawn_Bombshell");

	FAHuskPawn_Bombshell_C_ExecuteUbergraph_HuskPawn_Bombshell_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

