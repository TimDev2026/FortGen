#include "pch.h"

#include "FN_Survive_Notification_Health_classes.h"

UClass* ASurvive_Notification_Health_C::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Game/Blueprints/Adventures/SurviveTheStorm/Notifications/Survive_Notification_Health.Survive_Notification_Health_C");

	return Class;
}

// Function /Game/Blueprints/Adventures/SurviveTheStorm/Notifications/Survive_Notification_Health.Survive_Notification_Health_C:UserConstructionScript
void ASurvive_Notification_Health_C::UserConstructionScript()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/SurviveTheStorm/Notifications/Survive_Notification_Health.Survive_Notification_Health_C:UserConstructionScript");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/Adventures/SurviveTheStorm/Notifications/Survive_Notification_Health.Survive_Notification_Health_C:OnNotificationStart
void ASurvive_Notification_Health_C::OnNotificationStart()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/SurviveTheStorm/Notifications/Survive_Notification_Health.Survive_Notification_Health_C:OnNotificationStart");

	ProcessEvent(FN, nullptr);
}

// Function /Game/Blueprints/Adventures/SurviveTheStorm/Notifications/Survive_Notification_Health.Survive_Notification_Health_C:ExecuteUbergraph_Survive_Notification_Health
void ASurvive_Notification_Health_C::ExecuteUbergraph_Survive_Notification_Health(int32_t EntryPoint)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Game/Blueprints/Adventures/SurviveTheStorm/Notifications/Survive_Notification_Health.Survive_Notification_Health_C:ExecuteUbergraph_Survive_Notification_Health");

	FASurvive_Notification_Health_C_ExecuteUbergraph_Survive_Notification_Health_Params Parms;

	Parms.EntryPoint = EntryPoint;

	ProcessEvent(FN, &Parms);
}

