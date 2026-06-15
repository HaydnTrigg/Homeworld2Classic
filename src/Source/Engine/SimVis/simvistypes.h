#if 0
#ifndef __SIMVISTYPES_H__
#define __SIMVISTYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SimVisDisplayData
{
public:
    _inline SimVisDisplayData(Universe const &, Player const *, Camera const &, Frustum const &, float);
    Universe const &m_universe; // 0x0
    Player const *m_pPlayer; // 0x4
    Camera const &m_camera; // 0x8
    Frustum const &m_frustum; // 0xC
    float m_timeElapsed; // 0x10
};
static_assert(sizeof(SimVisDisplayData) == 20, "Invalid SimVisDisplayData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SimVisDisplayData::SimVisDisplayData(Universe const &, Player const *, Camera const &, Frustum const &, float) // 0x523A39
{
    mangled_assert("??0SimVisDisplayData@@QAE@ABVUniverse@@PBVPlayer@@ABVCamera@@ABVFrustum@@M@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SIMVISTYPES_H__
#endif
