#if 0
#ifndef __FOGOFWARVIS_H__
#define __FOGOFWARVIS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FogOfWarVis
{
public:
    static bool Startup();
    static bool Shutdown();
    static FogOfWarVis *Instance();
    _inline bool IsEnabled() const;
    _inline void Enable(bool);
private:
    _inline FogOfWarVis();
    _inline ~FogOfWarVis();
    bool m_bEnable; // 0x0
};
static_assert(sizeof(FogOfWarVis) == 1, "Invalid FogOfWarVis size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool FogOfWarVis::IsEnabled() const // 0x522B1D
{
    mangled_assert("?IsEnabled@FogOfWarVis@@QBE_NXZ");
    todo("implement");
}

_inline void FogOfWarVis::Enable(bool) // 0x551D26
{
    mangled_assert("?Enable@FogOfWarVis@@QAEX_N@Z");
    todo("implement");
}

_inline FogOfWarVis::FogOfWarVis() // 0x51CA06
{
    mangled_assert("??0FogOfWarVis@@AAE@XZ");
    todo("implement");
}

_inline FogOfWarVis::~FogOfWarVis() // 0x51CA0C
{
    mangled_assert("??1FogOfWarVis@@AAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FOGOFWARVIS_H__
#endif
