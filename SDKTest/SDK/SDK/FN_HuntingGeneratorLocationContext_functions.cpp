#include "pch.h"

#include "FN_HuntingGeneratorLocationContext_classes.h"

UClass* UHuntingGeneratorLocationContext_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/EQS/Contexts/HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C");

	return Class;
}

// Function /Game/AI/EQS/Contexts/HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C:ProvideSingleLocation
void UHuntingGeneratorLocationContext_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector ResultingLocation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/EQS/Contexts/HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C:ProvideSingleLocation");

	FUHuntingGeneratorLocationContext_C_ProvideSingleLocation_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.ResultingLocation = ResultingLocation;

	ProcessEvent(FN, &Parms);
}

