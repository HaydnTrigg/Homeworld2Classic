#if 0
#ifndef __LODFX_H__
#define __LODFX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LodFX
{
public:
    static bool Startup();
    static bool Shutdown();
    static LodFX *Instance();
    void Precache(char const *);
    char const *GetFX(char const *, vector3 const &);
    void Flush();
    void ForceFull(bool);
protected:
    LodFX();
    ~LodFX();
private:
    EffectLod const *LoadLod(char const *);
    char const *CalcFX(EffectLod const &, float);
    EffectLod *AllocateLod();
    void DeallocateLod(EffectLod const *);
    class Data;
    LodFX::Data *m_pimpl; // 0x0
    static LodFX *s_instance;
};
static_assert(sizeof(LodFX) == 4, "Invalid LodFX size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LODFX_H__
#endif
