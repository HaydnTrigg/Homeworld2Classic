#if 0
#ifndef __STEAMTRACKER_H__
#define __STEAMTRACKER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SteamTracker
{
public:
    static void TrackUsage(__int32, char const *, __int32);
private:
    static unsigned __int32 s_usagesTracked;
};
static_assert(sizeof(SteamTracker) == 1, "Invalid SteamTracker size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STEAMTRACKER_H__
/* combined */
#ifndef __STEAMTRACKER_H__
#define __STEAMTRACKER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SteamTracker
{
public:
    static void TrackUsage(__int32 productID, char const *versionUniqueID, __int32 distributionID);
private:
    static unsigned __int32 s_usagesTracked;
};
static_assert(sizeof(SteamTracker) == 1, "Invalid SteamTracker size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STEAMTRACKER_H__
#endif
