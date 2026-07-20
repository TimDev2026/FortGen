#include "pch.h"

#include "FN_OnlineSubsystemUtils_classes.h"

UClass* UPartyBeaconState::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.PartyBeaconState");

	return Class;
}

UClass* AOnlineBeaconHostObject::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconHostObject");

	return Class;
}

UClass* AOnlineBeacon::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeacon");

	return Class;
}

UClass* AOnlineBeaconClient::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconClient");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient:ClientOnConnected
void AOnlineBeaconClient::ClientOnConnected()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.OnlineBeaconClient:ClientOnConnected");

	ProcessEvent(FN, nullptr);
}

UClass* UOnlineSessionClient::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineSessionClient");

	return Class;
}

UClass* APartyBeaconClient::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.PartyBeaconClient");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.PartyBeaconClient:ServerUpdateReservationRequest
void APartyBeaconClient::ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.PartyBeaconClient:ServerUpdateReservationRequest");

	FAPartyBeaconClient_ServerUpdateReservationRequest_Params Parms;

	Parms.SessionId = SessionId;
	Parms.ReservationUpdate = ReservationUpdate;

	ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.PartyBeaconClient:ServerReservationRequest
void APartyBeaconClient::ServerReservationRequest(FString SessionId, FPartyReservation Reservation)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.PartyBeaconClient:ServerReservationRequest");

	FAPartyBeaconClient_ServerReservationRequest_Params Parms;

	Parms.SessionId = SessionId;
	Parms.Reservation = Reservation;

	ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.PartyBeaconClient:ServerCancelReservationRequest
void APartyBeaconClient::ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.PartyBeaconClient:ServerCancelReservationRequest");

	FAPartyBeaconClient_ServerCancelReservationRequest_Params Parms;

	Parms.PartyLeader = PartyLeader;

	ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.PartyBeaconClient:ClientSendReservationUpdates
void APartyBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.PartyBeaconClient:ClientSendReservationUpdates");

	FAPartyBeaconClient_ClientSendReservationUpdates_Params Parms;

	Parms.NumRemainingReservations = NumRemainingReservations;

	ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.PartyBeaconClient:ClientSendReservationFull
void APartyBeaconClient::ClientSendReservationFull()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.PartyBeaconClient:ClientSendReservationFull");

	ProcessEvent(FN, nullptr);
}

// Function /Script/OnlineSubsystemUtils.PartyBeaconClient:ClientReservationResponse
void APartyBeaconClient::ClientReservationResponse(EPartyReservationResult ReservationResponse)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.PartyBeaconClient:ClientReservationResponse");

	FAPartyBeaconClient_ClientReservationResponse_Params Parms;

	Parms.ReservationResponse = ReservationResponse;

	ProcessEvent(FN, &Parms);
}

UClass* APartyBeaconHost::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.PartyBeaconHost");

	return Class;
}

UClass* UAchievementBlueprintLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.AchievementBlueprintLibrary");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary:GetCachedAchievementProgress
void UAchievementBlueprintLibrary::GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool bFoundID, float Progress)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.AchievementBlueprintLibrary:GetCachedAchievementProgress");

	FUAchievementBlueprintLibrary_GetCachedAchievementProgress_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementID = AchievementID;
	Parms.bFoundID = bFoundID;
	Parms.Progress = Progress;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary:GetCachedAchievementDescription
void UAchievementBlueprintLibrary::GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool bFoundID, FText Title, FText LockedDescription, FText UnlockedDescription, bool bHidden)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.AchievementBlueprintLibrary:GetCachedAchievementDescription");

	FUAchievementBlueprintLibrary_GetCachedAchievementDescription_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementID = AchievementID;
	Parms.bFoundID = bFoundID;
	Parms.Title = Title;
	Parms.LockedDescription = LockedDescription;
	Parms.UnlockedDescription = UnlockedDescription;
	Parms.bHidden = bHidden;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UInAppPurchaseCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy:CreateProxyObjectForInAppPurchase
class UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest ProductRequest)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy:CreateProxyObjectForInAppPurchase");

	FUInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.ProductRequest = ProductRequest;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UInAppPurchaseQueryCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy:CreateProxyObjectForInAppPurchaseQuery
class UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString> ProductIdentifiers)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy:CreateProxyObjectForInAppPurchaseQuery");

	FUInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.ProductIdentifiers = ProductIdentifiers;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UInAppPurchaseRestoreCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy:CreateProxyObjectForInAppPurchaseRestore
class UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(class APlayerController* PlayerController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy:CreateProxyObjectForInAppPurchaseRestore");

	FUInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params Parms;

	Parms.PlayerController = PlayerController;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UIpConnection::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.IpConnection");

	return Class;
}

UClass* UIpNetDriver::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.IpNetDriver");

	return Class;
}

UClass* ULeaderboardBlueprintLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary:WriteLeaderboardInteger
bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32_t StatValue)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary:WriteLeaderboardInteger");

	FULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* ULeaderboardFlushCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy:CreateProxyObjectForFlush
class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy:CreateProxyObjectForFlush");

	FULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.SessionName = SessionName;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* ULeaderboardQueryCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy:CreateProxyObjectForIntQuery
class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy:CreateProxyObjectForIntQuery");

	FULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.StatName = StatName;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* ULogoutCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.LogoutCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy:Logout
class ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.LogoutCallbackProxy:Logout");

	FULogoutCallbackProxy_Logout_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* ATestBeaconClient::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.TestBeaconClient");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.TestBeaconClient:ServerPong
void ATestBeaconClient::ServerPong()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.TestBeaconClient:ServerPong");

	ProcessEvent(FN, nullptr);
}

// Function /Script/OnlineSubsystemUtils.TestBeaconClient:ClientPing
void ATestBeaconClient::ClientPing()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.TestBeaconClient:ClientPing");

	ProcessEvent(FN, nullptr);
}

UClass* AOnlineBeaconHost::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBeaconHost");

	return Class;
}

UClass* ATestBeaconHost::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.TestBeaconHost");

	return Class;
}

UClass* UOnlineBlueprintCallProxyBase::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlineBlueprintCallProxyBase");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.OnlineBlueprintCallProxyBase:Activate
void UOnlineBlueprintCallProxyBase::Activate()
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.OnlineBlueprintCallProxyBase:Activate");

	ProcessEvent(FN, nullptr);
}

UClass* UAchievementQueryCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy:CacheAchievements
class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy:CacheAchievements");

	FUAchievementQueryCallbackProxy_CacheAchievements_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy:CacheAchievementDescriptions
class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy:CacheAchievementDescriptions");

	FUAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UAchievementWriteCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy:WriteAchievementProgress
class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy:WriteAchievementProgress");

	FUAchievementWriteCallbackProxy_WriteAchievementProgress_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementName = AchievementName;
	Parms.Progress = Progress;
	Parms.UserTag = UserTag;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UConnectionCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.ConnectionCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy:ConnectToService
class UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.ConnectionCallbackProxy:ConnectToService");

	FUConnectionCallbackProxy_ConnectToService_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UCreateSessionCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.CreateSessionCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy:CreateSession
class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.CreateSessionCallbackProxy:CreateSession");

	FUCreateSessionCallbackProxy_CreateSession_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.PublicConnections = PublicConnections;
	Parms.bUseLAN = bUseLAN;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UDestroySessionCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.DestroySessionCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy:DestroySession
class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.DestroySessionCallbackProxy:DestroySession");

	FUDestroySessionCallbackProxy_DestroySession_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UEndMatchCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.EndMatchCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy:EndMatch
class UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class UTurnBasedMatchInterface> MatchActor, FString MatchID, EMPMatchOutcome LocalPlayerOutcome, EMPMatchOutcome OtherPlayersOutcome)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.EndMatchCallbackProxy:EndMatch");

	FUEndMatchCallbackProxy_EndMatch_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchActor = MatchActor;
	Parms.MatchID = MatchID;
	Parms.LocalPlayerOutcome = LocalPlayerOutcome;
	Parms.OtherPlayersOutcome = OtherPlayersOutcome;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UEndTurnCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.EndTurnCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy:EndTurn
class UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.EndTurnCallbackProxy:EndTurn");

	FUEndTurnCallbackProxy_EndTurn_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.TurnBasedMatchInterface = TurnBasedMatchInterface;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UFindSessionsCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.FindSessionsCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:GetServerName
FString UFindSessionsCallbackProxy::GetServerName(FBlueprintSessionResult Result)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:GetServerName");

	FUFindSessionsCallbackProxy_GetServerName_Params Parms;

	Parms.Result = Result;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:GetPingInMs
int32_t UFindSessionsCallbackProxy::GetPingInMs(FBlueprintSessionResult Result)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:GetPingInMs");

	FUFindSessionsCallbackProxy_GetPingInMs_Params Parms;

	Parms.Result = Result;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:GetMaxPlayers
int32_t UFindSessionsCallbackProxy::GetMaxPlayers(FBlueprintSessionResult Result)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:GetMaxPlayers");

	FUFindSessionsCallbackProxy_GetMaxPlayers_Params Parms;

	Parms.Result = Result;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:GetCurrentPlayers
int32_t UFindSessionsCallbackProxy::GetCurrentPlayers(FBlueprintSessionResult Result)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:GetCurrentPlayers");

	FUFindSessionsCallbackProxy_GetCurrentPlayers_Params Parms;

	Parms.Result = Result;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:FindSessions
class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.FindSessionsCallbackProxy:FindSessions");

	FUFindSessionsCallbackProxy_FindSessions_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MaxResults = MaxResults;
	Parms.bUseLAN = bUseLAN;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UFindTurnBasedMatchCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy:FindTurnBasedMatch
class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class UTurnBasedMatchInterface> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy:FindTurnBasedMatch");

	FUFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchActor = MatchActor;
	Parms.MinPlayers = MinPlayers;
	Parms.MaxPlayers = MaxPlayers;
	Parms.PlayerGroup = PlayerGroup;
	Parms.ShowExistingMatches = ShowExistingMatches;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UJoinSessionCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.JoinSessionCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy:JoinSession
class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, FBlueprintSessionResult SearchResult)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.JoinSessionCallbackProxy:JoinSession");

	FUJoinSessionCallbackProxy_JoinSession_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.SearchResult = SearchResult;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UQuitMatchCallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.QuitMatchCallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy:QuitMatch
class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.QuitMatchCallbackProxy:QuitMatch");

	FUQuitMatchCallbackProxy_QuitMatch_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.Outcome = Outcome;
	Parms.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UOnlinePIESettings::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.OnlinePIESettings");

	return Class;
}

UClass* UShowLoginUICallbackProxy::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy:ShowExternalLoginUI
class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy:ShowExternalLoginUI");

	FUShowLoginUICallbackProxy_ShowExternalLoginUI_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.InPlayerController = InPlayerController;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UClass* UTurnBasedBlueprintLibrary::StaticClass()
{
	static UClass* Class = nullptr;
	if (!Class)
		Class = UObject::StaticFindObject<UClass>("/Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary");

	return Class;
}

// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary:RegisterTurnBasedMatchInterfaceObject
void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary:RegisterTurnBasedMatchInterfaceObject");

	FUTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.Object = Object;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary:GetPlayerDisplayName
void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString PlayerDisplayName)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary:GetPlayerDisplayName");

	FUTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.PlayerIndex = PlayerIndex;
	Parms.PlayerDisplayName = PlayerDisplayName;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary:GetMyPlayerIndex
void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary:GetMyPlayerIndex");

	FUTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.PlayerIndex = PlayerIndex;

	StaticClass()->ProcessEvent(FN, &Parms);
}

// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary:GetIsMyTurn
void UTurnBasedBlueprintLibrary::GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool bIsMyTurn)
{
	static UFunction* FN = nullptr;
	if (!FN)
		FN = UObject::StaticFindObject<UFunction>("/Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary:GetIsMyTurn");

	FUTurnBasedBlueprintLibrary_GetIsMyTurn_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.MatchID = MatchID;
	Parms.bIsMyTurn = bIsMyTurn;

	StaticClass()->ProcessEvent(FN, &Parms);
}

UScriptStruct* FBlueprintSessionResult::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystemUtils.BlueprintSessionResult");

	return Struct;
}

UScriptStruct* FPartyReservation::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystemUtils.PartyReservation");

	return Struct;
}

UScriptStruct* FPlayerReservation::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystemUtils.PlayerReservation");

	return Struct;
}

UScriptStruct* FPIELoginSettingsInternal::StaticStruct()
{
	static UScriptStruct* Struct = nullptr;
	if (!Struct)
		Struct = UObject::StaticFindObject<UScriptStruct>("/Script/OnlineSubsystemUtils.PIELoginSettingsInternal");

	return Struct;
}

