#include "pch.h"

#include "FN_GameplayTags_classes.h"

UClass* UEditableGameplayTagQuery::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQuery");

	return Class;
}

UClass* UEditableGameplayTagQueryExpression::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression");

	return Class;
}

UClass* UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");

	return Class;
}

UClass* UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");

	return Class;
}

UClass* UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");

	return Class;
}

UClass* UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");

	return Class;
}

UClass* UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");

	return Class;
}

UClass* UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");

	return Class;
}

UClass* UGameplayTagAssetInterface::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.GameplayTagAssetInterface");

	return Class;
}

// Function /Script/GameplayTags.GameplayTagAssetInterface:HasMatchingGameplayTag
bool UGameplayTagAssetInterface::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.GameplayTagAssetInterface:HasMatchingGameplayTag");

	FUGameplayTagAssetInterface_HasMatchingGameplayTag_Params Parms;

	Parms.TagToCheck = TagToCheck;

	ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.GameplayTagAssetInterface:HasAnyMatchingGameplayTags
bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(FGameplayTagContainer TagContainer, bool bCountEmptyAsMatch) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.GameplayTagAssetInterface:HasAnyMatchingGameplayTags");

	FUGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params Parms;

	Parms.TagContainer = TagContainer;
	Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;

	ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.GameplayTagAssetInterface:HasAllMatchingGameplayTags
bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(FGameplayTagContainer TagContainer, bool bCountEmptyAsMatch) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.GameplayTagAssetInterface:HasAllMatchingGameplayTags");

	FUGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params Parms;

	Parms.TagContainer = TagContainer;
	Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;

	ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.GameplayTagAssetInterface:GetOwnedGameplayTags
void UGameplayTagAssetInterface::GetOwnedGameplayTags(FGameplayTagContainer TagContainer) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.GameplayTagAssetInterface:GetOwnedGameplayTags");

	FUGameplayTagAssetInterface_GetOwnedGameplayTags_Params Parms;

	Parms.TagContainer = TagContainer;

	ProcessEvent(FN, &Parms);
}

UClass* UBlueprintGameplayTagLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.BlueprintGameplayTagLibrary");

	return Class;
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:NotEqual_TagTag
bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(FGameplayTag A, FString B)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:NotEqual_TagTag");

	FUBlueprintGameplayTagLibrary_NotEqual_TagTag_Params Parms;

	Parms.A = A;
	Parms.B = B;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:NotEqual_TagContainerTagContainer
bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:NotEqual_TagContainerTagContainer");

	FUBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params Parms;

	Parms.A = A;
	Parms.B = B;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:MakeLiteralGameplayTag
FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(FGameplayTag Value)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:MakeLiteralGameplayTag");

	FUBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params Parms;

	Parms.Value = Value;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:MakeGameplayTagQuery
FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(FGameplayTagQuery TagQuery)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:MakeGameplayTagQuery");

	FUBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params Parms;

	Parms.TagQuery = TagQuery;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:HasAllMatchingGameplayTags
bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface, FGameplayTagContainer OtherContainer, bool bCountEmptyAsMatch)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:HasAllMatchingGameplayTags");

	FUBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params Parms;

	Parms.TagContainerInterface = TagContainerInterface;
	Parms.OtherContainer = OtherContainer;
	Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:GetNumGameplayTagsInContainer
int32_t UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(FGameplayTagContainer TagContainer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:GetNumGameplayTagsInContainer");

	FUBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params Parms;

	Parms.TagContainer = TagContainer;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:GetDebugStringFromGameplayTagContainer
FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(FGameplayTagContainer TagContainer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:GetDebugStringFromGameplayTagContainer");

	FUBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params Parms;

	Parms.TagContainer = TagContainer;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:DoGameplayTagsMatch
bool UBlueprintGameplayTagLibrary::DoGameplayTagsMatch(FGameplayTag TagOne, FGameplayTag TagTwo, EGameplayTagMatchType TagOneMatchType, EGameplayTagMatchType TagTwoMatchType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:DoGameplayTagsMatch");

	FUBlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params Parms;

	Parms.TagOne = TagOne;
	Parms.TagTwo = TagTwo;
	Parms.TagOneMatchType = TagOneMatchType;
	Parms.TagTwoMatchType = TagTwoMatchType;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:DoesTagAssetInterfaceHaveTag
bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface, EGameplayTagMatchType ContainerTagsMatchType, FGameplayTag Tag, EGameplayTagMatchType TagMatchType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:DoesTagAssetInterfaceHaveTag");

	FUBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params Parms;

	Parms.TagContainerInterface = TagContainerInterface;
	Parms.ContainerTagsMatchType = ContainerTagsMatchType;
	Parms.Tag = Tag;
	Parms.TagMatchType = TagMatchType;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:DoesContainerMatchTagQuery
bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(FGameplayTagContainer TagContainer, FGameplayTagQuery TagQuery)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:DoesContainerMatchTagQuery");

	FUBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params Parms;

	Parms.TagContainer = TagContainer;
	Parms.TagQuery = TagQuery;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:DoesContainerMatchAnyTagsInContainer
bool UBlueprintGameplayTagLibrary::DoesContainerMatchAnyTagsInContainer(FGameplayTagContainer TagContainer, FGameplayTagContainer OtherContainer, bool bCountEmptyAsMatch)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:DoesContainerMatchAnyTagsInContainer");

	FUBlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params Parms;

	Parms.TagContainer = TagContainer;
	Parms.OtherContainer = OtherContainer;
	Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:DoesContainerMatchAllTagsInContainer
bool UBlueprintGameplayTagLibrary::DoesContainerMatchAllTagsInContainer(FGameplayTagContainer TagContainer, FGameplayTagContainer OtherContainer, bool bCountEmptyAsMatch)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:DoesContainerMatchAllTagsInContainer");

	FUBlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params Parms;

	Parms.TagContainer = TagContainer;
	Parms.OtherContainer = OtherContainer;
	Parms.bCountEmptyAsMatch = bCountEmptyAsMatch;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:DoesContainerHaveTag
bool UBlueprintGameplayTagLibrary::DoesContainerHaveTag(FGameplayTagContainer TagContainer, EGameplayTagMatchType ContainerTagsMatchType, FGameplayTag Tag, EGameplayTagMatchType TagMatchType)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:DoesContainerHaveTag");

	FUBlueprintGameplayTagLibrary_DoesContainerHaveTag_Params Parms;

	Parms.TagContainer = TagContainer;
	Parms.ContainerTagsMatchType = ContainerTagsMatchType;
	Parms.Tag = Tag;
	Parms.TagMatchType = TagMatchType;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/GameplayTags.BlueprintGameplayTagLibrary:AppendGameplayTagContainers
bool UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(FGameplayTagContainer InTagContainer, FGameplayTagContainer InOutTagContainer)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.BlueprintGameplayTagLibrary:AppendGameplayTagContainers");

	FUBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params Parms;

	Parms.InTagContainer = InTagContainer;
	Parms.InOutTagContainer = InOutTagContainer;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UGameplayTagsManager::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.GameplayTagsManager");

	return Class;
}

// Function /Script/GameplayTags.GameplayTagsManager:RequestGameplayTag
FGameplayTag UGameplayTagsManager::RequestGameplayTag(FName TagName, bool ErrorIfNotFound) const
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/GameplayTags.GameplayTagsManager:RequestGameplayTag");

	FUGameplayTagsManager_RequestGameplayTag_Params Parms;

	Parms.TagName = TagName;
	Parms.ErrorIfNotFound = ErrorIfNotFound;

	ProcessEvent(FN, &Parms);
}

UClass* UGameplayTagsSettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/GameplayTags.GameplayTagsSettings");

	return Class;
}

UScriptStruct* FGameplayTag::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameplayTags.GameplayTag");

	return Struct;
}

UScriptStruct* FGameplayTagContainer::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameplayTags.GameplayTagContainer");

	return Struct;
}

UScriptStruct* FGameplayTagQuery::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameplayTags.GameplayTagQuery");

	return Struct;
}

UScriptStruct* FGameplayTagNode::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameplayTags.GameplayTagNode");

	return Struct;
}

UScriptStruct* FGameplayTagTableRow::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/GameplayTags.GameplayTagTableRow");

	return Struct;
}

