#if 0
#ifndef __ISTEAMMATCHMAKING_H__
#define __ISTEAMMATCHMAKING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ELobbyType
{
    k_ELobbyTypePrivate = 0,
    k_ELobbyTypeFriendsOnly,
    k_ELobbyTypePublic,
    k_ELobbyTypeInvisible,
};

enum ELobbyComparison
{
    k_ELobbyComparisonEqualToOrLessThan = -2,
    k_ELobbyComparisonLessThan = -1,
    k_ELobbyComparisonEqual = 0,
    k_ELobbyComparisonGreaterThan,
    k_ELobbyComparisonEqualToOrGreaterThan,
    k_ELobbyComparisonNotEqual,
};

enum ELobbyDistanceFilter
{
    k_ELobbyDistanceFilterClose = 0,
    k_ELobbyDistanceFilterDefault,
    k_ELobbyDistanceFilterFar,
    k_ELobbyDistanceFilterWorldwide,
};

/* ---------- definitions */

class ISteamMatchmaking
{
public:
    virtual __int32 GetFavoriteGameCount() = 0;
    virtual bool GetFavoriteGame(__int32, unsigned __int32 *, unsigned __int32 *, unsigned short *, unsigned short *, unsigned __int32 *, unsigned __int32 *) = 0;
    virtual __int32 AddFavoriteGame(unsigned __int32, unsigned __int32, unsigned short, unsigned short, unsigned __int32, unsigned __int32) = 0;
    virtual bool RemoveFavoriteGame(unsigned __int32, unsigned __int32, unsigned short, unsigned short, unsigned __int32) = 0;
    virtual unsigned long long RequestLobbyList() = 0;
    virtual void AddRequestLobbyListStringFilter(char const *, char const *, ELobbyComparison) = 0;
    virtual void AddRequestLobbyListNumericalFilter(char const *, __int32, ELobbyComparison) = 0;
    virtual void AddRequestLobbyListNearValueFilter(char const *, __int32) = 0;
    virtual void AddRequestLobbyListFilterSlotsAvailable(__int32) = 0;
    virtual void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter) = 0;
    virtual void AddRequestLobbyListResultCountFilter(__int32) = 0;
    virtual void AddRequestLobbyListCompatibleMembersFilter(CSteamID) = 0;
    virtual CSteamID GetLobbyByIndex(__int32) = 0;
    virtual unsigned long long CreateLobby(ELobbyType, __int32) = 0;
    virtual unsigned long long JoinLobby(CSteamID) = 0;
    virtual void LeaveLobby(CSteamID) = 0;
    virtual bool InviteUserToLobby(CSteamID, CSteamID) = 0;
    virtual __int32 GetNumLobbyMembers(CSteamID) = 0;
    virtual CSteamID GetLobbyMemberByIndex(CSteamID, __int32) = 0;
    virtual char const *GetLobbyData(CSteamID, char const *) = 0;
    virtual bool SetLobbyData(CSteamID, char const *, char const *) = 0;
    virtual __int32 GetLobbyDataCount(CSteamID) = 0;
    virtual bool GetLobbyDataByIndex(CSteamID, __int32, char *, __int32, char *, __int32) = 0;
    virtual bool DeleteLobbyData(CSteamID, char const *) = 0;
    virtual char const *GetLobbyMemberData(CSteamID, CSteamID, char const *) = 0;
    virtual void SetLobbyMemberData(CSteamID, char const *, char const *) = 0;
    virtual bool SendLobbyChatMsg(CSteamID, void const *, __int32) = 0;
    virtual __int32 GetLobbyChatEntry(CSteamID, __int32, CSteamID *, void *, __int32, EChatEntryType *) = 0;
    virtual bool RequestLobbyData(CSteamID) = 0;
    virtual void SetLobbyGameServer(CSteamID, unsigned __int32, unsigned short, CSteamID) = 0;
    virtual bool GetLobbyGameServer(CSteamID, unsigned __int32 *, unsigned short *, CSteamID *) = 0;
    virtual bool SetLobbyMemberLimit(CSteamID, __int32) = 0;
    virtual __int32 GetLobbyMemberLimit(CSteamID) = 0;
    virtual bool SetLobbyType(CSteamID, ELobbyType) = 0;
    virtual bool SetLobbyJoinable(CSteamID, bool) = 0;
    virtual CSteamID GetLobbyOwner(CSteamID) = 0;
    virtual bool SetLobbyOwner(CSteamID, CSteamID) = 0;
    virtual bool SetLinkedLobby(CSteamID, CSteamID) = 0;
    ISteamMatchmaking(ISteamMatchmaking const &); /* compiler_generated() */
    ISteamMatchmaking(); /* compiler_generated() */
    ISteamMatchmaking &operator=(ISteamMatchmaking const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamMatchmaking) == 4, "Invalid ISteamMatchmaking size");

class ISteamMatchmakingServerListResponse
{
public:
    virtual void ServerResponded(void *, __int32) = 0;
    virtual void ServerFailedToRespond(void *, __int32) = 0;
    virtual void RefreshComplete(void *, EMatchMakingServerResponse) = 0;
    _inline ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse const &); /* compiler_generated() */
    ISteamMatchmakingServerListResponse(); /* compiler_generated() */
    _inline ISteamMatchmakingServerListResponse &operator=(ISteamMatchmakingServerListResponse const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamMatchmakingServerListResponse) == 4, "Invalid ISteamMatchmakingServerListResponse size");

struct LobbyEnter_t
{
    enum
    {
        k_iCallback = 504, // 0x01F8
    };
    unsigned long long m_ulSteamIDLobby; // 0x0
    unsigned __int32 m_rgfChatPermissions; // 0x8
    bool m_bLocked; // 0xC
    unsigned __int32 m_EChatRoomEnterResponse; // 0x10
};
static_assert(sizeof(LobbyEnter_t) == 24, "Invalid LobbyEnter_t size");

struct LobbyDataUpdate_t
{
    enum
    {
        k_iCallback = 505, // 0x01F9
    };
    unsigned long long m_ulSteamIDLobby; // 0x0
    unsigned long long m_ulSteamIDMember; // 0x8
    unsigned char m_bSuccess; // 0x10
};
static_assert(sizeof(LobbyDataUpdate_t) == 24, "Invalid LobbyDataUpdate_t size");

struct LobbyChatMsg_t
{
    enum
    {
        k_iCallback = 507, // 0x01FB
    };
    unsigned long long m_ulSteamIDLobby; // 0x0
    unsigned long long m_ulSteamIDUser; // 0x8
    unsigned char m_eChatEntryType; // 0x10
    unsigned __int32 m_iChatID; // 0x14
};
static_assert(sizeof(LobbyChatMsg_t) == 24, "Invalid LobbyChatMsg_t size");

struct LobbyCreated_t
{
    enum
    {
        k_iCallback = 513, // 0x0201
    };
    EResult m_eResult; // 0x0
    unsigned long long m_ulSteamIDLobby; // 0x8
};
static_assert(sizeof(LobbyCreated_t) == 16, "Invalid LobbyCreated_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMMATCHMAKING_H__
/* combined */
#ifndef __ISTEAMMATCHMAKING_H__
#define __ISTEAMMATCHMAKING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMMATCHMAKING_H__
/* combined */
#ifndef __ISTEAMMATCHMAKING_H__
#define __ISTEAMMATCHMAKING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ELobbyType
{
    k_ELobbyTypePrivate = 0,
    k_ELobbyTypeFriendsOnly,
    k_ELobbyTypePublic,
    k_ELobbyTypeInvisible,
};

enum ELobbyComparison
{
    k_ELobbyComparisonEqualToOrLessThan = -2,
    k_ELobbyComparisonLessThan = -1,
    k_ELobbyComparisonEqual = 0,
    k_ELobbyComparisonGreaterThan,
    k_ELobbyComparisonEqualToOrGreaterThan,
    k_ELobbyComparisonNotEqual,
};

enum ELobbyDistanceFilter
{
    k_ELobbyDistanceFilterClose = 0,
    k_ELobbyDistanceFilterDefault,
    k_ELobbyDistanceFilterFar,
    k_ELobbyDistanceFilterWorldwide,
};

/* ---------- definitions */

class ISteamMatchmaking
{
public:
    virtual __int32 GetFavoriteGameCount() = 0;
    virtual bool GetFavoriteGame(__int32, unsigned __int32 *, unsigned __int32 *, unsigned short *, unsigned short *, unsigned __int32 *, unsigned __int32 *) = 0;
    virtual __int32 AddFavoriteGame(unsigned __int32, unsigned __int32, unsigned short, unsigned short, unsigned __int32, unsigned __int32) = 0;
    virtual bool RemoveFavoriteGame(unsigned __int32, unsigned __int32, unsigned short, unsigned short, unsigned __int32) = 0;
    virtual unsigned long long RequestLobbyList() = 0;
    virtual void AddRequestLobbyListStringFilter(char const *, char const *, ELobbyComparison) = 0;
    virtual void AddRequestLobbyListNumericalFilter(char const *, __int32, ELobbyComparison) = 0;
    virtual void AddRequestLobbyListNearValueFilter(char const *, __int32) = 0;
    virtual void AddRequestLobbyListFilterSlotsAvailable(__int32) = 0;
    virtual void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter) = 0;
    virtual void AddRequestLobbyListResultCountFilter(__int32) = 0;
    virtual void AddRequestLobbyListCompatibleMembersFilter(CSteamID) = 0;
    virtual CSteamID GetLobbyByIndex(__int32) = 0;
    virtual unsigned long long CreateLobby(ELobbyType, __int32) = 0;
    virtual unsigned long long JoinLobby(CSteamID) = 0;
    virtual void LeaveLobby(CSteamID) = 0;
    virtual bool InviteUserToLobby(CSteamID, CSteamID) = 0;
    virtual __int32 GetNumLobbyMembers(CSteamID) = 0;
    virtual CSteamID GetLobbyMemberByIndex(CSteamID, __int32) = 0;
    virtual char const *GetLobbyData(CSteamID, char const *) = 0;
    virtual bool SetLobbyData(CSteamID, char const *, char const *) = 0;
    virtual __int32 GetLobbyDataCount(CSteamID) = 0;
    virtual bool GetLobbyDataByIndex(CSteamID, __int32, char *, __int32, char *, __int32) = 0;
    virtual bool DeleteLobbyData(CSteamID, char const *) = 0;
    virtual char const *GetLobbyMemberData(CSteamID, CSteamID, char const *) = 0;
    virtual void SetLobbyMemberData(CSteamID, char const *, char const *) = 0;
    virtual bool SendLobbyChatMsg(CSteamID, void const *, __int32) = 0;
    virtual __int32 GetLobbyChatEntry(CSteamID, __int32, CSteamID *, void *, __int32, EChatEntryType *) = 0;
    virtual bool RequestLobbyData(CSteamID) = 0;
    virtual void SetLobbyGameServer(CSteamID, unsigned __int32, unsigned short, CSteamID) = 0;
    virtual bool GetLobbyGameServer(CSteamID, unsigned __int32 *, unsigned short *, CSteamID *) = 0;
    virtual bool SetLobbyMemberLimit(CSteamID, __int32) = 0;
    virtual __int32 GetLobbyMemberLimit(CSteamID) = 0;
    virtual bool SetLobbyType(CSteamID, ELobbyType) = 0;
    virtual bool SetLobbyJoinable(CSteamID, bool) = 0;
    virtual CSteamID GetLobbyOwner(CSteamID) = 0;
    virtual bool SetLobbyOwner(CSteamID, CSteamID) = 0;
    virtual bool SetLinkedLobby(CSteamID, CSteamID) = 0;
    ISteamMatchmaking(ISteamMatchmaking const &); /* compiler_generated() */
    ISteamMatchmaking(); /* compiler_generated() */
    ISteamMatchmaking &operator=(ISteamMatchmaking const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamMatchmaking) == 4, "Invalid ISteamMatchmaking size");

class ISteamMatchmakingServerListResponse
{
public:
    virtual void ServerResponded(void *, __int32) = 0;
    virtual void ServerFailedToRespond(void *, __int32) = 0;
    virtual void RefreshComplete(void *, EMatchMakingServerResponse) = 0;
    ISteamMatchmakingServerListResponse(ISteamMatchmakingServerListResponse const &); /* compiler_generated() */
    ISteamMatchmakingServerListResponse(); /* compiler_generated() */
    ISteamMatchmakingServerListResponse &operator=(ISteamMatchmakingServerListResponse const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamMatchmakingServerListResponse) == 4, "Invalid ISteamMatchmakingServerListResponse size");

class ISteamMatchmakingPingResponse
{
public:
    virtual void ServerResponded(gameserveritem_t &) = 0;
    virtual void ServerFailedToRespond() = 0;
    ISteamMatchmakingPingResponse(ISteamMatchmakingPingResponse const &); /* compiler_generated() */
    ISteamMatchmakingPingResponse(); /* compiler_generated() */
    ISteamMatchmakingPingResponse &operator=(ISteamMatchmakingPingResponse const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamMatchmakingPingResponse) == 4, "Invalid ISteamMatchmakingPingResponse size");

class ISteamMatchmakingPlayersResponse
{
public:
    virtual void AddPlayerToList(char const *, __int32, float) = 0;
    virtual void PlayersFailedToRespond() = 0;
    virtual void PlayersRefreshComplete() = 0;
    ISteamMatchmakingPlayersResponse(ISteamMatchmakingPlayersResponse const &); /* compiler_generated() */
    ISteamMatchmakingPlayersResponse(); /* compiler_generated() */
    ISteamMatchmakingPlayersResponse &operator=(ISteamMatchmakingPlayersResponse const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamMatchmakingPlayersResponse) == 4, "Invalid ISteamMatchmakingPlayersResponse size");

class ISteamMatchmakingRulesResponse
{
public:
    virtual void RulesResponded(char const *, char const *) = 0;
    virtual void RulesFailedToRespond() = 0;
    virtual void RulesRefreshComplete() = 0;
    ISteamMatchmakingRulesResponse(ISteamMatchmakingRulesResponse const &); /* compiler_generated() */
    ISteamMatchmakingRulesResponse(); /* compiler_generated() */
    ISteamMatchmakingRulesResponse &operator=(ISteamMatchmakingRulesResponse const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamMatchmakingRulesResponse) == 4, "Invalid ISteamMatchmakingRulesResponse size");

class ISteamMatchmakingServers
{
public:
    virtual void *RequestInternetServerList(unsigned __int32, MatchMakingKeyValuePair_t **, unsigned __int32, ISteamMatchmakingServerListResponse *) = 0;
    virtual void *RequestLANServerList(unsigned __int32, ISteamMatchmakingServerListResponse *) = 0;
    virtual void *RequestFriendsServerList(unsigned __int32, MatchMakingKeyValuePair_t **, unsigned __int32, ISteamMatchmakingServerListResponse *) = 0;
    virtual void *RequestFavoritesServerList(unsigned __int32, MatchMakingKeyValuePair_t **, unsigned __int32, ISteamMatchmakingServerListResponse *) = 0;
    virtual void *RequestHistoryServerList(unsigned __int32, MatchMakingKeyValuePair_t **, unsigned __int32, ISteamMatchmakingServerListResponse *) = 0;
    virtual void *RequestSpectatorServerList(unsigned __int32, MatchMakingKeyValuePair_t **, unsigned __int32, ISteamMatchmakingServerListResponse *) = 0;
    virtual void ReleaseRequest(void *) = 0;
    virtual gameserveritem_t *GetServerDetails(void *, __int32) = 0;
    virtual void CancelQuery(void *) = 0;
    virtual void RefreshQuery(void *) = 0;
    virtual bool IsRefreshing(void *) = 0;
    virtual __int32 GetServerCount(void *) = 0;
    virtual void RefreshServer(void *, __int32) = 0;
    virtual __int32 PingServer(unsigned __int32, unsigned short, ISteamMatchmakingPingResponse *) = 0;
    virtual __int32 PlayerDetails(unsigned __int32, unsigned short, ISteamMatchmakingPlayersResponse *) = 0;
    virtual __int32 ServerRules(unsigned __int32, unsigned short, ISteamMatchmakingRulesResponse *) = 0;
    virtual void CancelServerQuery(__int32) = 0;
    ISteamMatchmakingServers(ISteamMatchmakingServers const &); /* compiler_generated() */
    ISteamMatchmakingServers(); /* compiler_generated() */
    ISteamMatchmakingServers &operator=(ISteamMatchmakingServers const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamMatchmakingServers) == 4, "Invalid ISteamMatchmakingServers size");

struct LobbyEnter_t
{
    enum
    {
        k_iCallback = 504, // 0x01F8
    };
    unsigned long long m_ulSteamIDLobby; // 0x0
    unsigned __int32 m_rgfChatPermissions; // 0x8
    bool m_bLocked; // 0xC
    unsigned __int32 m_EChatRoomEnterResponse; // 0x10
};
static_assert(sizeof(LobbyEnter_t) == 24, "Invalid LobbyEnter_t size");

struct LobbyDataUpdate_t
{
    enum
    {
        k_iCallback = 505, // 0x01F9
    };
    unsigned long long m_ulSteamIDLobby; // 0x0
    unsigned long long m_ulSteamIDMember; // 0x8
    unsigned char m_bSuccess; // 0x10
};
static_assert(sizeof(LobbyDataUpdate_t) == 24, "Invalid LobbyDataUpdate_t size");

struct LobbyChatMsg_t
{
    enum
    {
        k_iCallback = 507, // 0x01FB
    };
    unsigned long long m_ulSteamIDLobby; // 0x0
    unsigned long long m_ulSteamIDUser; // 0x8
    unsigned char m_eChatEntryType; // 0x10
    unsigned __int32 m_iChatID; // 0x14
};
static_assert(sizeof(LobbyChatMsg_t) == 24, "Invalid LobbyChatMsg_t size");

struct LobbyMatchList_t
{
    enum
    {
        k_iCallback = 510, // 0x01FE
    };
    unsigned __int32 m_nLobbiesMatching; // 0x0
};
static_assert(sizeof(LobbyMatchList_t) == 4, "Invalid LobbyMatchList_t size");

struct LobbyCreated_t
{
    enum
    {
        k_iCallback = 513, // 0x0201
    };
    EResult m_eResult; // 0x0
    unsigned long long m_ulSteamIDLobby; // 0x8
};
static_assert(sizeof(LobbyCreated_t) == 16, "Invalid LobbyCreated_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMMATCHMAKING_H__
#endif
