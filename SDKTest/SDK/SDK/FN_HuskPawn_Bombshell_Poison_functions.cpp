#include "pch.h"

#include "FN_HuskPawn_Bombshell_Poison_classes.h"

UClass* AHuskPawn_Bombshell_Poison_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C");

	return Class;
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C:UserConstructionScript
void AHuskPawn_Bombshell_Poison_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C:ReceiveBeginPlay
void AHuskPawn_Bombshell_Poison_C::ReceiveBeginPlay()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C:ReceiveBeginPlay");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C:OnDeathPlayEffects
void AHuskPawn_Bombshell_Poison_C::OnDeathPlayEffects(float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C:OnDeathPlayEffects");

	FAHuskPawn_Bombshell_Poison_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	ProcessEvent(FN, &Parms);
}

// Function /Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C:ExecuteUbergraph_HuskPawn_Bombshell_Poison
void AHuskPawn_Bombshell_Poison_C::ExecuteUbergraph_HuskPawn_Bombshell_Poison(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Characters/Enemies/Husk/Blueprints/HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C:ExecuteUbergraph_HuskPawn_Bombshell_Poison");

	FAHuskPawn_Bombshell_Poison_C_ExecuteUbergraph_HuskPawn_Bombshell_Poison_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

