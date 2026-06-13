#if 0
#ifndef __DESTINATIONFORMATION_H__
#define __DESTINATIONFORMATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum DestinationFormation::Spacing
{
    Center = 0,
    Front,
};

/* ---------- definitions */

struct DestinationFormation::SquadronPosition
{
    Squadron *m_squadron; // 0x0
    vector3 m_position; // 0x4
    _inline SquadronPosition(); /* compiler_generated() */
};
static_assert(sizeof(DestinationFormation::SquadronPosition) == 16, "Invalid DestinationFormation::SquadronPosition size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DESTINATIONFORMATION_H__
#endif
