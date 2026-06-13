#if 0
#ifndef __ISTEAMAPPLIST_H__
#define __ISTEAMAPPLIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct SteamAppInstalled_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 3901, // 0x0F3D
    };
    static SteamAppInstalled_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 m_nAppID; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    SteamAppInstalled_t(); /* compiler_generated() */
};
static_assert(sizeof(SteamAppInstalled_t) == 4, "Invalid SteamAppInstalled_t size");

struct SteamAppUninstalled_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 3902, // 0x0F3E
    };
    static SteamAppUninstalled_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    unsigned __int32 m_nAppID; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    SteamAppUninstalled_t(); /* compiler_generated() */
};
static_assert(sizeof(SteamAppUninstalled_t) == 4, "Invalid SteamAppUninstalled_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMAPPLIST_H__
#endif
