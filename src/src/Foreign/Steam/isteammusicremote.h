#if 0
#ifndef __ISTEAMMUSICREMOTE_H__
#define __ISTEAMMUSICREMOTE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct MusicPlayerRemoteWillActivate_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4101, // 0x1005
    };
    static MusicPlayerRemoteWillActivate_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerRemoteWillActivate_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerRemoteWillActivate_t) == 1, "Invalid MusicPlayerRemoteWillActivate_t size");

struct MusicPlayerRemoteWillDeactivate_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4102, // 0x1006
    };
    static MusicPlayerRemoteWillDeactivate_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerRemoteWillDeactivate_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerRemoteWillDeactivate_t) == 1, "Invalid MusicPlayerRemoteWillDeactivate_t size");

struct MusicPlayerRemoteToFront_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4103, // 0x1007
    };
    static MusicPlayerRemoteToFront_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerRemoteToFront_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerRemoteToFront_t) == 1, "Invalid MusicPlayerRemoteToFront_t size");

struct MusicPlayerWillQuit_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4104, // 0x1008
    };
    static MusicPlayerWillQuit_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerWillQuit_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerWillQuit_t) == 1, "Invalid MusicPlayerWillQuit_t size");

struct MusicPlayerWantsPlay_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4105, // 0x1009
    };
    static MusicPlayerWantsPlay_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerWantsPlay_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerWantsPlay_t) == 1, "Invalid MusicPlayerWantsPlay_t size");

struct MusicPlayerWantsPause_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4106, // 0x100A
    };
    static MusicPlayerWantsPause_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerWantsPause_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerWantsPause_t) == 1, "Invalid MusicPlayerWantsPause_t size");

struct MusicPlayerWantsPlayPrevious_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4107, // 0x100B
    };
    static MusicPlayerWantsPlayPrevious_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerWantsPlayPrevious_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerWantsPlayPrevious_t) == 1, "Invalid MusicPlayerWantsPlayPrevious_t size");

struct MusicPlayerWantsPlayNext_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4108, // 0x100C
    };
    static MusicPlayerWantsPlayNext_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerWantsPlayNext_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerWantsPlayNext_t) == 1, "Invalid MusicPlayerWantsPlayNext_t size");

struct MusicPlayerWantsShuffled_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4109, // 0x100D
    };
    static MusicPlayerWantsShuffled_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    bool m_bShuffled; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerWantsShuffled_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerWantsShuffled_t) == 1, "Invalid MusicPlayerWantsShuffled_t size");

struct MusicPlayerWantsLooped_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4110, // 0x100E
    };
    static MusicPlayerWantsLooped_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    bool m_bLooped; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerWantsLooped_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerWantsLooped_t) == 1, "Invalid MusicPlayerWantsLooped_t size");

struct MusicPlayerWantsVolume_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4011, // 0x0FAB
    };
    static MusicPlayerWantsVolume_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    float m_flNewVolume; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerWantsVolume_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerWantsVolume_t) == 4, "Invalid MusicPlayerWantsVolume_t size");

struct MusicPlayerSelectsQueueEntry_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4012, // 0x0FAC
    };
    static MusicPlayerSelectsQueueEntry_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    __int32 nID; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerSelectsQueueEntry_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerSelectsQueueEntry_t) == 4, "Invalid MusicPlayerSelectsQueueEntry_t size");

struct MusicPlayerSelectsPlaylistEntry_t :
    public SteamCallback_t
{
    enum
    {
        k_iCallback = 4013, // 0x0FAD
    };
    static MusicPlayerSelectsPlaylistEntry_t *GetNullPointer();
    static char const *GetCallbackName();
    static unsigned __int32 GetCallbackID();
    __int32 nID; // 0x0
    static void GetMemberVar_0(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    static unsigned __int32 GetNumMemberVariables();
    static bool GetMemberVariable(unsigned __int32, unsigned __int32 &, unsigned __int32 &, unsigned __int32 &, char const **, char const **);
    MusicPlayerSelectsPlaylistEntry_t(); /* compiler_generated() */
};
static_assert(sizeof(MusicPlayerSelectsPlaylistEntry_t) == 4, "Invalid MusicPlayerSelectsPlaylistEntry_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMMUSICREMOTE_H__
#endif
