#if 0
#ifndef __DPLAY8_H__
#define __DPLAY8_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct _DPN_APPLICATION_DESC
{
    unsigned long dwSize; // 0x0
    unsigned long dwFlags; // 0x4
    _GUID guidInstance; // 0x8
    _GUID guidApplication; // 0x18
    unsigned long dwMaxPlayers; // 0x28
    unsigned long dwCurrentPlayers; // 0x2C
    wchar_t *pwszSessionName; // 0x30
    wchar_t *pwszPassword; // 0x34
    void *pvReservedData; // 0x38
    unsigned long dwReservedDataSize; // 0x3C
    void *pvApplicationReservedData; // 0x40
    unsigned long dwApplicationReservedDataSize; // 0x44
};
static_assert(sizeof(_DPN_APPLICATION_DESC) == 72, "Invalid _DPN_APPLICATION_DESC size");

struct _BUFFERDESC
{
    unsigned long dwBufferSize; // 0x0
    unsigned char *pBufferData; // 0x4
};
static_assert(sizeof(_BUFFERDESC) == 8, "Invalid _BUFFERDESC size");

struct _DPN_CAPS
{
    unsigned long dwSize; // 0x0
    unsigned long dwFlags; // 0x4
    unsigned long dwConnectTimeout; // 0x8
    unsigned long dwConnectRetries; // 0xC
    unsigned long dwTimeoutUntilKeepAlive; // 0x10
};
static_assert(sizeof(_DPN_CAPS) == 20, "Invalid _DPN_CAPS size");

struct _DPN_CAPS_EX
{
    unsigned long dwSize; // 0x0
    unsigned long dwFlags; // 0x4
    unsigned long dwConnectTimeout; // 0x8
    unsigned long dwConnectRetries; // 0xC
    unsigned long dwTimeoutUntilKeepAlive; // 0x10
    unsigned long dwMaxRecvMsgSize; // 0x14
    unsigned long dwNumSendRetries; // 0x18
    unsigned long dwMaxSendRetryInterval; // 0x1C
    unsigned long dwDropThresholdRate; // 0x20
    unsigned long dwThrottleRate; // 0x24
    unsigned long dwNumHardDisconnectSends; // 0x28
    unsigned long dwMaxHardDisconnectPeriod; // 0x2C
};
static_assert(sizeof(_DPN_CAPS_EX) == 48, "Invalid _DPN_CAPS_EX size");

struct _DPN_CONNECTION_INFO
{
    unsigned long dwSize; // 0x0
    unsigned long dwRoundTripLatencyMS; // 0x4
    unsigned long dwThroughputBPS; // 0x8
    unsigned long dwPeakThroughputBPS; // 0xC
    unsigned long dwBytesSentGuaranteed; // 0x10
    unsigned long dwPacketsSentGuaranteed; // 0x14
    unsigned long dwBytesSentNonGuaranteed; // 0x18
    unsigned long dwPacketsSentNonGuaranteed; // 0x1C
    unsigned long dwBytesRetried; // 0x20
    unsigned long dwPacketsRetried; // 0x24
    unsigned long dwBytesDropped; // 0x28
    unsigned long dwPacketsDropped; // 0x2C
    unsigned long dwMessagesTransmittedHighPriority; // 0x30
    unsigned long dwMessagesTimedOutHighPriority; // 0x34
    unsigned long dwMessagesTransmittedNormalPriority; // 0x38
    unsigned long dwMessagesTimedOutNormalPriority; // 0x3C
    unsigned long dwMessagesTransmittedLowPriority; // 0x40
    unsigned long dwMessagesTimedOutLowPriority; // 0x44
    unsigned long dwBytesReceivedGuaranteed; // 0x48
    unsigned long dwPacketsReceivedGuaranteed; // 0x4C
    unsigned long dwBytesReceivedNonGuaranteed; // 0x50
    unsigned long dwPacketsReceivedNonGuaranteed; // 0x54
    unsigned long dwMessagesReceived; // 0x58
};
static_assert(sizeof(_DPN_CONNECTION_INFO) == 92, "Invalid _DPN_CONNECTION_INFO size");

struct _DPN_GROUP_INFO
{
    unsigned long dwSize; // 0x0
    unsigned long dwInfoFlags; // 0x4
    wchar_t *pwszName; // 0x8
    void *pvData; // 0xC
    unsigned long dwDataSize; // 0x10
    unsigned long dwGroupFlags; // 0x14
};
static_assert(sizeof(_DPN_GROUP_INFO) == 24, "Invalid _DPN_GROUP_INFO size");

struct _DPN_PLAYER_INFO
{
    unsigned long dwSize; // 0x0
    unsigned long dwInfoFlags; // 0x4
    wchar_t *pwszName; // 0x8
    void *pvData; // 0xC
    unsigned long dwDataSize; // 0x10
    unsigned long dwPlayerFlags; // 0x14
};
static_assert(sizeof(_DPN_PLAYER_INFO) == 24, "Invalid _DPN_PLAYER_INFO size");

struct _DPN_SERVICE_PROVIDER_INFO
{
    unsigned long dwFlags; // 0x0
    _GUID guid; // 0x4
    wchar_t *pwszName; // 0x14
    void *pvReserved; // 0x18
    unsigned long dwReserved; // 0x1C
};
static_assert(sizeof(_DPN_SERVICE_PROVIDER_INFO) == 32, "Invalid _DPN_SERVICE_PROVIDER_INFO size");

struct _DPN_SP_CAPS
{
    unsigned long dwSize; // 0x0
    unsigned long dwFlags; // 0x4
    unsigned long dwNumThreads; // 0x8
    unsigned long dwDefaultEnumCount; // 0xC
    unsigned long dwDefaultEnumRetryInterval; // 0x10
    unsigned long dwDefaultEnumTimeout; // 0x14
    unsigned long dwMaxEnumPayloadSize; // 0x18
    unsigned long dwBuffersPerThread; // 0x1C
    unsigned long dwSystemBufferSize; // 0x20
};
static_assert(sizeof(_DPN_SP_CAPS) == 36, "Invalid _DPN_SP_CAPS size");

struct _DPNMSG_CONNECT_COMPLETE
{
    unsigned long dwSize; // 0x0
    unsigned long hAsyncOp; // 0x4
    void *pvUserContext; // 0x8
    HRESULT hResultCode; // 0xC
    void *pvApplicationReplyData; // 0x10
    unsigned long dwApplicationReplyDataSize; // 0x14
    unsigned long dpnidLocal; // 0x18
};
static_assert(sizeof(_DPNMSG_CONNECT_COMPLETE) == 28, "Invalid _DPNMSG_CONNECT_COMPLETE size");

struct _DPNMSG_CREATE_PLAYER
{
    unsigned long dwSize; // 0x0
    unsigned long dpnidPlayer; // 0x4
    void *pvPlayerContext; // 0x8
};
static_assert(sizeof(_DPNMSG_CREATE_PLAYER) == 12, "Invalid _DPNMSG_CREATE_PLAYER size");

struct _DPNMSG_DESTROY_PLAYER
{
    unsigned long dwSize; // 0x0
    unsigned long dpnidPlayer; // 0x4
    void *pvPlayerContext; // 0x8
    unsigned long dwReason; // 0xC
};
static_assert(sizeof(_DPNMSG_DESTROY_PLAYER) == 16, "Invalid _DPNMSG_DESTROY_PLAYER size");

struct _DPNMSG_ENUM_HOSTS_QUERY
{
    unsigned long dwSize; // 0x0
    IDirectPlay8Address *pAddressSender; // 0x4
    IDirectPlay8Address *pAddressDevice; // 0x8
    void *pvReceivedData; // 0xC
    unsigned long dwReceivedDataSize; // 0x10
    unsigned long dwMaxResponseDataSize; // 0x14
    void *pvResponseData; // 0x18
    unsigned long dwResponseDataSize; // 0x1C
    void *pvResponseContext; // 0x20
};
static_assert(sizeof(_DPNMSG_ENUM_HOSTS_QUERY) == 36, "Invalid _DPNMSG_ENUM_HOSTS_QUERY size");

struct _DPNMSG_ENUM_HOSTS_RESPONSE
{
    unsigned long dwSize; // 0x0
    IDirectPlay8Address *pAddressSender; // 0x4
    IDirectPlay8Address *pAddressDevice; // 0x8
    _DPN_APPLICATION_DESC const *pApplicationDescription; // 0xC
    void *pvResponseData; // 0x10
    unsigned long dwResponseDataSize; // 0x14
    void *pvUserContext; // 0x18
    unsigned long dwRoundTripLatencyMS; // 0x1C
};
static_assert(sizeof(_DPNMSG_ENUM_HOSTS_RESPONSE) == 32, "Invalid _DPNMSG_ENUM_HOSTS_RESPONSE size");

struct _DPNMSG_HOST_MIGRATE
{
    unsigned long dwSize; // 0x0
    unsigned long dpnidNewHost; // 0x4
    void *pvPlayerContext; // 0x8
};
static_assert(sizeof(_DPNMSG_HOST_MIGRATE) == 12, "Invalid _DPNMSG_HOST_MIGRATE size");

struct _DPNMSG_INDICATE_CONNECT
{
    unsigned long dwSize; // 0x0
    void *pvUserConnectData; // 0x4
    unsigned long dwUserConnectDataSize; // 0x8
    void *pvReplyData; // 0xC
    unsigned long dwReplyDataSize; // 0x10
    void *pvReplyContext; // 0x14
    void *pvPlayerContext; // 0x18
    IDirectPlay8Address *pAddressPlayer; // 0x1C
    IDirectPlay8Address *pAddressDevice; // 0x20
};
static_assert(sizeof(_DPNMSG_INDICATE_CONNECT) == 36, "Invalid _DPNMSG_INDICATE_CONNECT size");

struct _DPNMSG_PEER_INFO
{
    unsigned long dwSize; // 0x0
    unsigned long dpnidPeer; // 0x4
    void *pvPlayerContext; // 0x8
};
static_assert(sizeof(_DPNMSG_PEER_INFO) == 12, "Invalid _DPNMSG_PEER_INFO size");

struct _DPNMSG_RECEIVE
{
    unsigned long dwSize; // 0x0
    unsigned long dpnidSender; // 0x4
    void *pvPlayerContext; // 0x8
    unsigned char *pReceiveData; // 0xC
    unsigned long dwReceiveDataSize; // 0x10
    unsigned long hBufferHandle; // 0x14
    unsigned long dwReceiveFlags; // 0x18
};
static_assert(sizeof(_DPNMSG_RECEIVE) == 28, "Invalid _DPNMSG_RECEIVE size");

struct _DPNMSG_RETURN_BUFFER
{
    unsigned long dwSize; // 0x0
    HRESULT hResultCode; // 0x4
    void *pvBuffer; // 0x8
    void *pvUserContext; // 0xC
};
static_assert(sizeof(_DPNMSG_RETURN_BUFFER) == 16, "Invalid _DPNMSG_RETURN_BUFFER size");

struct IDirectPlay8Peer :
    public IUnknown
{
    virtual HRESULT QueryInterface(_GUID const &, void **) = 0;
    virtual unsigned long AddRef() = 0;
    virtual unsigned long Release() = 0;
    virtual HRESULT Initialize(void *const, HRESULT (*const)(void *, unsigned long, void *), unsigned long const) = 0;
    virtual HRESULT EnumServiceProviders(_GUID const *const, _GUID const *const, _DPN_SERVICE_PROVIDER_INFO *const, unsigned long *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT CancelAsyncOperation(unsigned long const, unsigned long const) = 0;
    virtual HRESULT Connect(_DPN_APPLICATION_DESC const *const, IDirectPlay8Address *const, IDirectPlay8Address *const, _DPN_SECURITY_DESC const *const, _DPN_SECURITY_CREDENTIALS const *const, void const *const, unsigned long const, void *const, void *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT SendTo(unsigned long const, _BUFFERDESC const *const, unsigned long const, unsigned long const, void *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT GetSendQueueInfo(unsigned long const, unsigned long *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT Host(_DPN_APPLICATION_DESC const *const, IDirectPlay8Address **const, unsigned long const, _DPN_SECURITY_DESC const *const, _DPN_SECURITY_CREDENTIALS const *const, void *const, unsigned long const) = 0;
    virtual HRESULT GetApplicationDesc(_DPN_APPLICATION_DESC *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT SetApplicationDesc(_DPN_APPLICATION_DESC const *const, unsigned long const) = 0;
    virtual HRESULT CreateGroup(_DPN_GROUP_INFO const *const, void *const, void *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT DestroyGroup(unsigned long const, void *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT AddPlayerToGroup(unsigned long const, unsigned long const, void *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT RemovePlayerFromGroup(unsigned long const, unsigned long const, void *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT SetGroupInfo(unsigned long const, _DPN_GROUP_INFO *const, void *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT GetGroupInfo(unsigned long const, _DPN_GROUP_INFO *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT EnumPlayersAndGroups(unsigned long *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT EnumGroupMembers(unsigned long const, unsigned long *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT SetPeerInfo(_DPN_PLAYER_INFO const *const, void *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT GetPeerInfo(unsigned long const, _DPN_PLAYER_INFO *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT GetPeerAddress(unsigned long const, IDirectPlay8Address **const, unsigned long const) = 0;
    virtual HRESULT GetLocalHostAddresses(IDirectPlay8Address **const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT Close(unsigned long const) = 0;
    virtual HRESULT EnumHosts(_DPN_APPLICATION_DESC *const, IDirectPlay8Address *const, IDirectPlay8Address *const, void *const, unsigned long const, unsigned long const, unsigned long const, unsigned long const, void *const, unsigned long *const, unsigned long const) = 0;
    virtual HRESULT DestroyPeer(unsigned long const, void const *const, unsigned long const, unsigned long const) = 0;
    virtual HRESULT ReturnBuffer(unsigned long const, unsigned long const) = 0;
    virtual HRESULT GetPlayerContext(unsigned long const, void **const, unsigned long const) = 0;
    virtual HRESULT GetGroupContext(unsigned long const, void **const, unsigned long const) = 0;
    virtual HRESULT GetCaps(_DPN_CAPS *const, unsigned long const) = 0;
    virtual HRESULT SetCaps(_DPN_CAPS const *const, unsigned long const) = 0;
    virtual HRESULT SetSPCaps(_GUID const *const, _DPN_SP_CAPS const *const, unsigned long const) = 0;
    virtual HRESULT GetSPCaps(_GUID const *const, _DPN_SP_CAPS *const, unsigned long const) = 0;
    virtual HRESULT GetConnectionInfo(unsigned long const, _DPN_CONNECTION_INFO *const, unsigned long const) = 0;
    virtual HRESULT RegisterLobby(unsigned long const, IDirectPlay8LobbiedApplication *const, unsigned long const) = 0;
    virtual HRESULT TerminateSession(void *const, unsigned long const, unsigned long const) = 0;
    IDirectPlay8Peer(IDirectPlay8Peer const &); /* compiler_generated() */
    IDirectPlay8Peer(); /* compiler_generated() */
    IDirectPlay8Peer &operator=(IDirectPlay8Peer const &); /* compiler_generated() */
};
static_assert(sizeof(IDirectPlay8Peer) == 4, "Invalid IDirectPlay8Peer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DPLAY8_H__
#endif
