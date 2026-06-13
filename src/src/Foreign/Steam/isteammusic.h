#if 0
#ifndef __ISTEAMMUSIC_H__
#define __ISTEAMMUSIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct PlaybackStatusHasChanged_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4001, // 0x0FA1
    };
    static PlaybackStatusHasChanged_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    PlaybackStatusHasChanged_t(); /* compiler_generated() */
};
static_assert(sizeof(PlaybackStatusHasChanged_t) == 1, "Invalid PlaybackStatusHasChanged_t size");

struct VolumeHasChanged_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4002, // 0x0FA2
    };
    static VolumeHasChanged_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    float m_flNewVolume; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    VolumeHasChanged_t(); /* compiler_generated() */
};
static_assert(sizeof(VolumeHasChanged_t) == 4, "Invalid VolumeHasChanged_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMMUSIC_H__
#endif
