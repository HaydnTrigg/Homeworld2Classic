#if 0
#ifndef __PEERMAIN_H__
#define __PEERMAIN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct piConnection
{
    void *chat; // 0x0
    char nick[64]; // 0x4
    PEERBool connecting; // 0x44
    PEERBool connected; // 0x48
    void (*nickErrorCallback)(void *, __int32, char const *, void *); // 0x4C
    unsigned long lastChatPing; // 0x50
    unsigned __int32 IP; // 0x54
    __int32 profileID; // 0x58
    char title[32]; // 0x5C
    char gamename[32]; // 0x7C
    char rooms[3][257]; // 0x9C
    PEERBool enteringRoom[3]; // 0x3A0
    PEERBool inRoom[3]; // 0x3AC
    char names[3][512]; // 0x3B8
    PEERBool cancelJoinRoom[3]; // 0x9B8
    PEERBool cancelJoinRoomError[3]; // 0x9C4
    __int32 oldFlags[3]; // 0x9D0
    __int32 groupID; // 0x9DC
    char titleRoomChannel[257]; // 0x9E0
    PEERBool stayInTitleRoom; // 0xAE4
    HashImplementation *players; // 0xAE8
    __int32 numPlayers[3]; // 0xAEC
    PEERBool doPings; // 0xAF8
    __int32 lastPingTimeMod; // 0xAFC
    PEERBool pingRoom[3]; // 0xB00
    PEERBool xpingRoom[3]; // 0xB0C
    HashImplementation *xpings; // 0xB18
    unsigned __int32 lastXpingSend; // 0xB1C
    qr2_implementation_s *queryReporting; // 0xB20
    char qrSecretKey[64]; // 0xB24
    PEERBool natNegotiate; // 0xB64
    PEERBool hosting; // 0xB68
    PEERBool reporting; // 0xB6C
    __int32 reportingOptions; // 0xB70
    PEERBool playing; // 0xB74
    __int32 maxPlayers; // 0xB78
    char password[24]; // 0xB7C
    __int32 reportingGroupID; // 0xB94
    unsigned __int32 serverIP; // 0xB98
    PEERBool ready; // 0xB9C
    char sbName[32]; // 0xBA0
    char sbSecretKey[32]; // 0xBC0
    __int32 sbGameVersion; // 0xBE0
    __int32 sbMaxUpdates; // 0xBE4
    PEERBool sbInitialized; // 0xBE8
    _SBServerList gameList; // 0xBEC
    _SBServerList groupList; // 0x11AC
    _SBQueryEngine gameEngine; // 0x176C
    void (*gameListCallback)(void *, PEERBool, char const *, _SBServer *, PEERBool, __int32, __int32, void *); // 0x17B4
    void *gameListParam; // 0x17B8
    PEERBool initialGameList; // 0x17BC
    piOperation *listingGroupsOperation; // 0x17C0
    __int32 nextID; // 0x17C4
    DArrayImplementation *operationList; // 0x17C8
    __int32 operationsStarted; // 0x17CC
    __int32 operationsFinished; // 0x17D0
    PEERCallbacks callbacks; // 0x17D4
    DArrayImplementation *callbackList; // 0x1844
    __int32 callbacksQueued; // 0x1848
    __int32 callbacksCalled; // 0x184C
    __int32 callbackDepth; // 0x1850
    PEERBool away; // 0x1854
    char awayReason[128]; // 0x1858
    HashImplementation *globalWatchKeys[3]; // 0x18D8
    HashImplementation *roomWatchKeys[3]; // 0x18E4
    HashImplementation *globalWatchCache; // 0x18F0
    HashImplementation *roomWatchCache[3]; // 0x18F4
    PEERBool disconnect; // 0x1900
    PEERBool shutdown; // 0x1904
};
static_assert(sizeof(piConnection) == 6408, "Invalid piConnection size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PEERMAIN_H__
#endif
