#include "pch.h"

#include "FN_VectorVM_classes.h"

UClass* UNiagaraDataObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/VectorVM.NiagaraDataObject");

	return Class;
}

UClass* UNiagaraCurveDataObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/VectorVM.NiagaraCurveDataObject");

	return Class;
}

UClass* UNiagaraSparseVolumeDataObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/VectorVM.NiagaraSparseVolumeDataObject");

	return Class;
}

