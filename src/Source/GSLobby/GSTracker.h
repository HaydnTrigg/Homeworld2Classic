#if 0
#ifndef __GSTRACKER_H__
#define __GSTRACKER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GSTracker
{
public:
    static void TrackUsage(__int32 productID, char const *versionUniqueID, __int32 distributionID);
private:
    static unsigned __int32 s_usagesTracked;
};
static_assert(sizeof(GSTracker) == 1, "Invalid GSTracker size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSTRACKER_H__
#endif
