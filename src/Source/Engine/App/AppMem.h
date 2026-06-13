#if 0
#ifndef __APPMEM_H__
#define __APPMEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AppMem
{
public:
    static bool Startup();
    static bool Shutdown();
    static void StatsReset();
    static void StatsStartRecording();
    static void StatsStopRecording();
    static void StatsLogAllocs(unsigned __int32 maxstackdepth, char const *filename);
    static void StatsLogActiveAllocs(unsigned __int32 maxstackdepth, char const *filename);
    static void StatsLogTempAllocs(unsigned __int32 maxstackdepth, char const *filename);
    static void Analysis(unsigned __int32 maxstackdepth, char const *filename);
    static void OnScreenMemTracker();
};
static_assert(sizeof(AppMem) == 1, "Invalid AppMem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __APPMEM_H__
#endif
