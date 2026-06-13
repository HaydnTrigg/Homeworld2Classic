#if 0
#ifndef __PATHPOINTS_H__
#define __PATHPOINTS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct FlightPathPoint
{
    vector3 point; // 0x0
    __int32 waypointIndex; // 0xC
    _inline FlightPathPoint(); /* compiler_generated() */
};
static_assert(sizeof(FlightPathPoint) == 16, "Invalid FlightPathPoint size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PATHPOINTS_H__
#endif
