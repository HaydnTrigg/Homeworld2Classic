#if 0
#ifndef __ISTEAMSCREENSHOTS_H__
#define __ISTEAMSCREENSHOTS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ISteamScreenshots
{
public:
    virtual unsigned __int32 WriteScreenshot(void *, unsigned __int32, __int32, __int32) = 0;
    virtual unsigned __int32 AddScreenshotToLibrary(char const *, char const *, __int32, __int32) = 0;
    virtual void TriggerScreenshot() = 0;
    virtual void HookScreenshots(bool) = 0;
    virtual bool SetLocation(unsigned __int32, char const *) = 0;
    virtual bool TagUser(unsigned __int32, CSteamID) = 0;
    virtual bool TagPublishedFile(unsigned __int32, unsigned long long) = 0;
    ISteamScreenshots(ISteamScreenshots const &); /* compiler_generated() */
    ISteamScreenshots(); /* compiler_generated() */
    ISteamScreenshots &operator=(ISteamScreenshots const &); /* compiler_generated() */
};
static_assert(sizeof(ISteamScreenshots) == 4, "Invalid ISteamScreenshots size");

struct ScreenshotRequested_t
{
    enum
    {
        k_iCallback = 2302, // 0x08FE
    };
};
static_assert(sizeof(ScreenshotRequested_t) == 1, "Invalid ScreenshotRequested_t size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMSCREENSHOTS_H__
/* combined */
#ifndef __ISTEAMSCREENSHOTS_H__
#define __ISTEAMSCREENSHOTS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMSCREENSHOTS_H__
/* combined */
#ifndef __ISTEAMSCREENSHOTS_H__
#define __ISTEAMSCREENSHOTS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ISTEAMSCREENSHOTS_H__
#endif
