#include "pch.h"

#include "FN_Niagara_classes.h"

UClass* ANiagaraActor::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraActor");

	return Class;
}

UClass* UNiagaraComponent::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraComponent");

	return Class;
}

UClass* UNiagaraScript::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraScript");

	return Class;
}

UClass* UNiagaraEmitterProperties::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraEmitterProperties");

	return Class;
}

UClass* UNiagaraEffect::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraEffect");

	return Class;
}

UClass* UNiagaraEventReceiverEmitterAction::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraEventReceiverEmitterAction");

	return Class;
}

UClass* UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");

	return Class;
}

UClass* UNiagaraFunctionLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraFunctionLibrary");

	return Class;
}

// Function /Script/Niagara.NiagaraFunctionLibrary:SpawnEffectAttached
class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation LocationType, bool bAutoDestroy)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Niagara.NiagaraFunctionLibrary:SpawnEffectAttached");

	FUNiagaraFunctionLibrary_SpawnEffectAttached_Params Parms;

	Parms.EffectTemplate = EffectTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LocationType = LocationType;
	Parms.bAutoDestroy = bAutoDestroy;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/Niagara.NiagaraFunctionLibrary:SpawnEffectAtLocation
class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, FVector Location, FRotator Rotation, bool bAutoDestroy)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Niagara.NiagaraFunctionLibrary:SpawnEffectAtLocation");

	FUNiagaraFunctionLibrary_SpawnEffectAtLocation_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.EffectTemplate = EffectTemplate;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bAutoDestroy = bAutoDestroy;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/Niagara.NiagaraFunctionLibrary:SetUpdateScriptConstant
void UNiagaraFunctionLibrary::SetUpdateScriptConstant(class UNiagaraComponent* Component, FName EmitterName, FName ConstantName, FVector Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/Niagara.NiagaraFunctionLibrary:SetUpdateScriptConstant");

	FUNiagaraFunctionLibrary_SetUpdateScriptConstant_Params Parms;

	Parms.Component = Component;
	Parms.EmitterName = EmitterName;
	Parms.ConstantName = ConstantName;
	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UNiagaraScriptSourceBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraScriptSourceBase");

	return Class;
}

UClass* UNiagaraSequence::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/Niagara.NiagaraSequence");

	return Class;
}

UScriptStruct* FNiagaraDataSetID::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraDataSetID");

	return Struct;
}

UScriptStruct* FNiagaraVariableInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraVariableInfo");

	return Struct;
}

UScriptStruct* FNiagaraConstants::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraConstants");

	return Struct;
}

UScriptStruct* FNiagaraConstants_DataObject::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraConstants_DataObject");

	return Struct;
}

UScriptStruct* FNiagaraConstantBase::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraConstantBase");

	return Struct;
}

UScriptStruct* FNiagaraConstants_Matrix::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraConstants_Matrix");

	return Struct;
}

UScriptStruct* FNiagaraConstants_Vector::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraConstants_Vector");

	return Struct;
}

UScriptStruct* FNiagaraConstants_Float::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraConstants_Float");

	return Struct;
}

UScriptStruct* FDeprecatedNiagaraConstants::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.DeprecatedNiagaraConstants");

	return Struct;
}

UScriptStruct* FNiagaraConstantMap::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraConstantMap");

	return Struct;
}

UScriptStruct* FNiagaraScriptConstantData::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraScriptConstantData");

	return Struct;
}

UScriptStruct* FNiagaraScriptUsageInfo::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraScriptUsageInfo");

	return Struct;
}

UScriptStruct* FNiagaraDataSetProperties::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraDataSetProperties");

	return Struct;
}

UScriptStruct* FDeprecatedNiagaraEmitterProperties::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.DeprecatedNiagaraEmitterProperties");

	return Struct;
}

UScriptStruct* FNiagaraEmitterScriptProperties::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraEmitterScriptProperties");

	return Struct;
}

UScriptStruct* FNiagaraEventGeneratorProperties::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraEventGeneratorProperties");

	return Struct;
}

UScriptStruct* FNiagaraEventReceiverProperties::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/Niagara.NiagaraEventReceiverProperties");

	return Struct;
}

