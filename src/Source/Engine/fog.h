#if 0
#ifndef __FOG_H__
#define __FOG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum FogInterpParam
{
    Fog_Start = 0,
    Fog_End,
    Fog_Density,
    Fog_R,
    Fog_G,
    Fog_B,
    Fog_A,
};

/* ---------- definitions */

class FogManager
{
private:
    bool m_active; // 0x0
    bool m_canActivate; // 0x1
    FogParam m_fogParam; // 0x4
    std::list<FogInterpolator *,std::allocator<FogInterpolator *> > m_interpList; // 0x24
    static FogManager *m_instance;
public:
    FogManager(FogManager const &); /* compiler_generated() */
    FogManager();
    ~FogManager();
    static FogManager *i();
    static FogManager *instance();
    bool release();
    bool setFogCanActivate(bool);
    bool setFogActive(bool);
    void setFogType(FogType);
    void setFogDensity(float);
    void setFogStart(float);
    void setFogEnd(float);
    void setFogColour(vector4 &);
    void evalFog(vector4 &, float);
    void applyFog(rndTable *);
    void updateFog(float);
    void addInterpolator(FogInterpParam, float, float);
    float getFogAlpha(float const);
    FogManager &operator=(FogManager const &); /* compiler_generated() */
};
static_assert(sizeof(FogManager) == 44, "Invalid FogManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FOG_H__
#endif
