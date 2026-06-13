#if 0
#ifndef __MATCHMAKINGTYPES_H__
#define __MATCHMAKINGTYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum EMatchMakingServerResponse
{
    eServerResponded = 0,
    eServerFailedToRespond,
    eNoServersListedOnMasterServer,
};

/* ---------- definitions */

struct MatchMakingKeyValuePair_t
{
    MatchMakingKeyValuePair_t(char const *, char const *);
    MatchMakingKeyValuePair_t();
    char m_szKey[256]; // 0x0
    char m_szValue[256]; // 0x100
};
static_assert(sizeof(MatchMakingKeyValuePair_t) == 512, "Invalid MatchMakingKeyValuePair_t size");

class servernetadr_t
{
public:
    void Init(unsigned __int32, unsigned short, unsigned short);
    unsigned short GetQueryPort() const;
    void SetQueryPort(unsigned short);
    unsigned short GetConnectionPort() const;
    void SetConnectionPort(unsigned short);
    unsigned __int32 GetIP() const;
    void SetIP(unsigned __int32);
    char const *GetConnectionAddressString() const;
    char const *GetQueryAddressString() const;
    bool operator<(servernetadr_t const &) const;
    void operator=(servernetadr_t const &);
private:
    char const *ToString(unsigned __int32, unsigned short) const;
    unsigned short m_usConnectionPort; // 0x0
    unsigned short m_usQueryPort; // 0x2
    unsigned __int32 m_unIP; // 0x4
};
static_assert(sizeof(servernetadr_t) == 8, "Invalid servernetadr_t size");

class gameserveritem_t
{
public:
    gameserveritem_t();
    char const *GetName() const;
    void SetName(char const *);
    servernetadr_t m_NetAdr; // 0x0
    __int32 m_nPing; // 0x8
    bool m_bHadSuccessfulResponse; // 0xC
    bool m_bDoNotRefresh; // 0xD
    char m_szGameDir[32]; // 0xE
    char m_szMap[32]; // 0x2E
    char m_szGameDescription[64]; // 0x4E
    unsigned __int32 m_nAppID; // 0x90
    __int32 m_nPlayers; // 0x94
    __int32 m_nMaxPlayers; // 0x98
    __int32 m_nBotPlayers; // 0x9C
    bool m_bPassword; // 0xA0
    bool m_bSecure; // 0xA1
    unsigned __int32 m_ulTimeLastPlayed; // 0xA4
    __int32 m_nServerVersion; // 0xA8
private:
    char m_szServerName[64]; // 0xAC
public:
    char m_szGameTags[128]; // 0xEC
    CSteamID m_steamID; // 0x16C
    gameserveritem_t &operator=(gameserveritem_t const &); /* compiler_generated() */
};
static_assert(sizeof(gameserveritem_t) == 372, "Invalid gameserveritem_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MATCHMAKINGTYPES_H__
/* combined */
#ifndef __MATCHMAKINGTYPES_H__
#define __MATCHMAKINGTYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct MatchMakingKeyValuePair_t
{
    MatchMakingKeyValuePair_t(char const *, char const *);
    MatchMakingKeyValuePair_t();
    char m_szKey[256]; // 0x0
    char m_szValue[256]; // 0x100
};
static_assert(sizeof(MatchMakingKeyValuePair_t) == 512, "Invalid MatchMakingKeyValuePair_t size");

class servernetadr_t
{
public:
    void Init(unsigned __int32, unsigned short, unsigned short);
    unsigned short GetQueryPort() const;
    void SetQueryPort(unsigned short);
    unsigned short GetConnectionPort() const;
    void SetConnectionPort(unsigned short);
    unsigned __int32 GetIP() const;
    void SetIP(unsigned __int32);
    char const *GetConnectionAddressString() const;
    char const *GetQueryAddressString() const;
    bool operator<(servernetadr_t const &) const;
    void operator=(servernetadr_t const &);
private:
    char const *ToString(unsigned __int32, unsigned short) const;
    unsigned short m_usConnectionPort; // 0x0
    unsigned short m_usQueryPort; // 0x2
    unsigned __int32 m_unIP; // 0x4
};
static_assert(sizeof(servernetadr_t) == 8, "Invalid servernetadr_t size");

class gameserveritem_t
{
public:
    gameserveritem_t();
    char const *GetName() const;
    void SetName(char const *);
    servernetadr_t m_NetAdr; // 0x0
    __int32 m_nPing; // 0x8
    bool m_bHadSuccessfulResponse; // 0xC
    bool m_bDoNotRefresh; // 0xD
    char m_szGameDir[32]; // 0xE
    char m_szMap[32]; // 0x2E
    char m_szGameDescription[64]; // 0x4E
    unsigned __int32 m_nAppID; // 0x90
    __int32 m_nPlayers; // 0x94
    __int32 m_nMaxPlayers; // 0x98
    __int32 m_nBotPlayers; // 0x9C
    bool m_bPassword; // 0xA0
    bool m_bSecure; // 0xA1
    unsigned __int32 m_ulTimeLastPlayed; // 0xA4
    __int32 m_nServerVersion; // 0xA8
private:
    char m_szServerName[64]; // 0xAC
public:
    char m_szGameTags[128]; // 0xEC
    CSteamID m_steamID; // 0x16C
    gameserveritem_t &operator=(gameserveritem_t const &); /* compiler_generated() */
};
static_assert(sizeof(gameserveritem_t) == 372, "Invalid gameserveritem_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MATCHMAKINGTYPES_H__
/* combined */
#ifndef __MATCHMAKINGTYPES_H__
#define __MATCHMAKINGTYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum EMatchMakingServerResponse
{
    eServerResponded = 0,
    eServerFailedToRespond,
    eNoServersListedOnMasterServer,
};

/* ---------- definitions */

struct MatchMakingKeyValuePair_t
{
    MatchMakingKeyValuePair_t(char const *, char const *);
    MatchMakingKeyValuePair_t();
    char m_szKey[256]; // 0x0
    char m_szValue[256]; // 0x100
};
static_assert(sizeof(MatchMakingKeyValuePair_t) == 512, "Invalid MatchMakingKeyValuePair_t size");

class servernetadr_t
{
public:
    void Init(unsigned __int32, unsigned short, unsigned short);
    unsigned short GetQueryPort() const;
    void SetQueryPort(unsigned short);
    unsigned short GetConnectionPort() const;
    void SetConnectionPort(unsigned short);
    unsigned __int32 GetIP() const;
    void SetIP(unsigned __int32);
    char const *GetConnectionAddressString() const;
    char const *GetQueryAddressString() const;
    bool operator<(servernetadr_t const &) const;
    void operator=(servernetadr_t const &);
private:
    char const *ToString(unsigned __int32, unsigned short) const;
    unsigned short m_usConnectionPort; // 0x0
    unsigned short m_usQueryPort; // 0x2
    unsigned __int32 m_unIP; // 0x4
};
static_assert(sizeof(servernetadr_t) == 8, "Invalid servernetadr_t size");

class gameserveritem_t
{
public:
    gameserveritem_t();
    char const *GetName() const;
    void SetName(char const *);
    servernetadr_t m_NetAdr; // 0x0
    __int32 m_nPing; // 0x8
    bool m_bHadSuccessfulResponse; // 0xC
    bool m_bDoNotRefresh; // 0xD
    char m_szGameDir[32]; // 0xE
    char m_szMap[32]; // 0x2E
    char m_szGameDescription[64]; // 0x4E
    unsigned __int32 m_nAppID; // 0x90
    __int32 m_nPlayers; // 0x94
    __int32 m_nMaxPlayers; // 0x98
    __int32 m_nBotPlayers; // 0x9C
    bool m_bPassword; // 0xA0
    bool m_bSecure; // 0xA1
    unsigned __int32 m_ulTimeLastPlayed; // 0xA4
    __int32 m_nServerVersion; // 0xA8
private:
    char m_szServerName[64]; // 0xAC
public:
    char m_szGameTags[128]; // 0xEC
    CSteamID m_steamID; // 0x16C
    gameserveritem_t &operator=(gameserveritem_t const &); /* compiler_generated() */
};
static_assert(sizeof(gameserveritem_t) == 372, "Invalid gameserveritem_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MATCHMAKINGTYPES_H__
#endif
