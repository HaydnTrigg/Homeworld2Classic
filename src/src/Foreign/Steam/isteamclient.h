#if 0
#ifndef __ISTEAMCLIENT_H__
#define __ISTEAMCLIENT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    k_iSteamUserCallbacks = 100, // 0x0064 'd'
};

enum
{
    k_iSteamFriendsCallbacks = 300, // 0x012C
};

enum
{
    k_iSteamMatchmakingCallbacks = 500, // 0x01F4
};

enum
{
    k_iSteamUtilsCallbacks = 700, // 0x02BC
};

enum
{
    k_iSteamAppsCallbacks = 1000, // 0x03E8
};

enum
{
    k_iSteamUserStatsCallbacks = 1100, // 0x044C
};

enum
{
    k_iSteamNetworkingCallbacks = 1200, // 0x04B0
};

enum
{
    k_iClientRemoteStorageCallbacks = 1300, // 0x0514
};

enum
{
    k_iClientHTTPCallbacks = 2100, // 0x0834
};

enum
{
    k_iSteamScreenshotsCallbacks = 2300, // 0x08FC
};

enum
{
    k_iClientUnifiedMessagesCallbacks = 2500, // 0x09C4
};

enum
{
    k_iClientUGCCallbacks = 3400, // 0x0D48
};

enum
{
    k_iSteamAppListCallbacks = 3900, // 0x0F3C
};

enum
{
    k_iSteamMusicCallbacks = 4000, // 0x0FA0
};

enum
{
    k_iSteamMusicRemoteCallbacks = 4100, // 0x1004
};

enum
{
    k_iSteamHTMLSurfaceCallbacks = 4500, // 0x1194
};

/* ---------- definitions */

struct SteamCallback_t
{
    SteamCallback_t();
};
static_assert(sizeof(SteamCallback_t) == 1, "Invalid SteamCallback_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMCLIENT_H__
#endif
