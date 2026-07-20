#include "pch.h"

#include "FN_NearestPlayerContext_classes.h"

UClass* UNearestPlayerContext_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/AI/EQS/Contexts/NearestPlayerContext.NearestPlayerContext_C");

	return Class;
}

// Function /Game/AI/EQS/Contexts/NearestPlayerContext.NearestPlayerContext_C:ProvideSingleLocation
void UNearestPlayerContext_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector ResultingLocation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/AI/EQS/Contexts/NearestPlayerContext.NearestPlayerContext_C:ProvideSingleLocation");

	FUNearestPlayerContext_C_ProvideSingleLocation_Params Parms;

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.ResultingLocation = ResultingLocation;

	ProcessEvent(FN, &Parms);
}

