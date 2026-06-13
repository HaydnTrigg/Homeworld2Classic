#if 0
#ifndef __ENGINETRAILSYSTEM_H__
#define __ENGINETRAILSYSTEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EngineTrailShape
{
public:
    EngineTrailShape(EngineTrailShape const &); /* compiler_generated() */
    EngineTrailShape(unsigned __int32);
    EngineTrailShape();
    ~EngineTrailShape();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x0
    unsigned __int32 numPoints; // 0x18
    vector2 *points; // 0x1C
    float diameter; // 0x20
    float minDimension; // 0x24
    float maxDimension; // 0x28
    float xsize; // 0x2C
    float ysize; // 0x30
    EngineTrailShape &operator=(EngineTrailShape const &); /* compiler_generated() */
};
static_assert(sizeof(EngineTrailShape) == 52, "Invalid EngineTrailShape size");

class EngineTrailStatic
{
public:
    class Tweaks
    {
    public:
        Tweaks(EngineTrailStatic::Tweaks const &); /* compiler_generated() */
        Tweaks();
        ~Tweaks();
        float m_lingerTime; // 0x0
        float m_bulgeFrequency; // 0x4
        float m_uscrollFactor; // 0x8
        float m_ufactor; // 0xC
        float m_diameterFactor; // 0x10
        Texture *m_pTexture; // 0x14
        EngineTrailShape m_shape; // 0x18
        EngineTrailStatic::Tweaks &operator=(EngineTrailStatic::Tweaks const &); /* compiler_generated() */
    };
    static_assert(sizeof(Tweaks) == 76, "Invalid Tweaks size");
    EngineTrailStatic(EngineTrailStatic const &); /* compiler_generated() */
    EngineTrailStatic();
    ~EngineTrailStatic();
    void calculateDiameter();
    void setNumNozzles(unsigned __int32);
    _inline unsigned __int32 getNumNozzles() const;
    EngineTrailShape const *getShape(unsigned __int32) const;
    EngineTrailShape *getShape(unsigned __int32);
    void setLingerTime(unsigned __int32, float);
    _inline float getLingerTime(unsigned __int32) const;
    void setTexture(unsigned __int32, Texture *);
    _inline Texture const *getTexture(unsigned __int32) const;
    _inline void setUpdatePeriod(float);
    _inline float getUpdatePeriod() const;
    _inline EngineGlowStatic const *getGlowStatic() const;
    _inline EngineGlowStatic *getGlowStatic();
    _inline EngineBurnStatic const *getBurnStatic() const;
    _inline EngineBurnStatic *getBurnStatic();
    _inline EngineTrailStatic::Tweaks *getTweaks(unsigned __int32);
    _inline EngineTrailStatic::Tweaks const *getTweaks(unsigned __int32) const;
    typedef std::vector<EngineTrailStatic::Tweaks *,std::allocator<EngineTrailStatic::Tweaks *> > TweakCont;
private:
    std::vector<EngineTrailStatic::Tweaks *,std::allocator<EngineTrailStatic::Tweaks *> > m_tweaks; // 0x0
    unsigned __int32 m_numEngineNozzles; // 0xC
    float m_engineTrailUpdatePeriod; // 0x10
    EngineGlowStatic *m_pEngineGlowStatic; // 0x14
    EngineBurnStatic *m_pEngineBurnStatic; // 0x18
public:
    EngineTrailStatic &operator=(EngineTrailStatic const &); /* compiler_generated() */
};
static_assert(sizeof(EngineTrailStatic) == 28, "Invalid EngineTrailStatic size");

class EngineTrailSystem
{
public:
    enum TrailState
    {
        TS_Invalid = 0,
        TS_ExplicitlyOn,
        TS_ExplicitlyOff,
        TS_Procedural,
    };
    EngineTrailSystem(EngineTrailSystem const &); /* compiler_generated() */
    EngineTrailSystem(SobWithMesh *);
    ~EngineTrailSystem();
    void simUpdate();
    void update(float, float);
    bool draw(Camera const *, float);
    void setDiameterScale(float);
    void enableThrustUpdate(bool);
    void setVelocity(vector3 const &);
    void setThrustStrength(float);
    void setTrailState(EngineTrailSystem::TrailState);
    void setZero();
    void offset(vector3 const &);
    bool getBoundingAABB(vector3 &, vector3 &) const;
    EngineBurn *getBurn(unsigned __int32);
    _inline float getThrustStrength() const;
    bool isSpeedBurstPending() const;
    void setSpeedBurstPending(bool);
    _inline bool isStarted() const;
    EngineTrailSystem::TrailState getTrailState() const;
    typedef std::vector<EngineTrail *,std::allocator<EngineTrail *> > EngineTrailCont;
    typedef std::vector<JointAnimStack const *,std::allocator<JointAnimStack const *> > NozzleCont;
private:
    void initializeNozzles();
    _inline JointAnimStack const *getNozzle(unsigned __int32) const;
    _inline EngineTrail *getTrail(unsigned __int32);
    void setTrail(unsigned __int32, EngineTrail *);
    void startTrail();
    void stopTrail();
    std::vector<JointAnimStack const *,std::allocator<JointAnimStack const *> > m_nozzles; // 0x0
    std::vector<EngineTrail *,std::allocator<EngineTrail *> > m_trails; // 0xC
    EngineBurn *m_burns; // 0x18
    vector3 m_velocity; // 0x1C
    float m_lastUpdate; // 0x28
    float m_thrustStrength; // 0x2C
    float m_wantedThrustStrength; // 0x30
    float m_thrustDelta; // 0x34
    float m_diameterScale; // 0x38
    float m_pendingStopTime; // 0x3C
    bool m_bUpdateThrust; // 0x40
    bool m_bTrailStarted; // 0x41
    EngineTrailSystem::TrailState m_trailState; // 0x44
    EngineTrailStatic const *m_pStatic; // 0x48
    SobWithMesh *m_pOwner; // 0x4C
public:
    EngineTrailSystem &operator=(EngineTrailSystem const &); /* compiler_generated() */
};
static_assert(sizeof(EngineTrailSystem) == 80, "Invalid EngineTrailSystem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_449776(EngineTrailStatic const *const);
_inline unsigned __int32 EngineTrailStatic::getNumNozzles() const // 0x449776
{
    mangled_assert("?getNumNozzles@EngineTrailStatic@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_449776(this);
    return __result;
}

_extern void _sub_449F15(EngineTrailStatic *const, float);
_inline void EngineTrailStatic::setUpdatePeriod(float) // 0x449F15
{
    mangled_assert("?setUpdatePeriod@EngineTrailStatic@@QAEXM@Z");
    todo("implement");
    _sub_449F15(this, arg);
}

_extern float _sub_449809(EngineTrailStatic const *const);
_inline float EngineTrailStatic::getUpdatePeriod() const // 0x449809
{
    mangled_assert("?getUpdatePeriod@EngineTrailStatic@@QBEMXZ");
    todo("implement");
    float __result = _sub_449809(this);
    return __result;
}

_extern EngineGlowStatic *_sub_443599(EngineTrailStatic *const);
_inline EngineGlowStatic *EngineTrailStatic::getGlowStatic() // 0x443599
{
    mangled_assert("?getGlowStatic@EngineTrailStatic@@QAEPAVEngineGlowStatic@@XZ");
    todo("implement");
    EngineGlowStatic * __result = _sub_443599(this);
    return __result;
}

_extern EngineGlowStatic const *_sub_44359D(EngineTrailStatic const *const);
_inline EngineGlowStatic const *EngineTrailStatic::getGlowStatic() const // 0x44359D
{
    mangled_assert("?getGlowStatic@EngineTrailStatic@@QBEPBVEngineGlowStatic@@XZ");
    todo("implement");
    EngineGlowStatic const * __result = _sub_44359D(this);
    return __result;
}

_extern EngineBurnStatic *_sub_441B83(EngineTrailStatic *const);
_inline EngineBurnStatic *EngineTrailStatic::getBurnStatic() // 0x441B83
{
    mangled_assert("?getBurnStatic@EngineTrailStatic@@QAEPAVEngineBurnStatic@@XZ");
    todo("implement");
    EngineBurnStatic * __result = _sub_441B83(this);
    return __result;
}

_extern EngineBurnStatic const *_sub_441B87(EngineTrailStatic const *const);
_inline EngineBurnStatic const *EngineTrailStatic::getBurnStatic() const // 0x441B87
{
    mangled_assert("?getBurnStatic@EngineTrailStatic@@QBEPBVEngineBurnStatic@@XZ");
    todo("implement");
    EngineBurnStatic const * __result = _sub_441B87(this);
    return __result;
}

_extern float _sub_446090(EngineTrailStatic const *const, unsigned __int32);
_inline float EngineTrailStatic::getLingerTime(unsigned __int32) const // 0x446090
{
    mangled_assert("?getLingerTime@EngineTrailStatic@@QBEMI@Z");
    todo("implement");
    float __result = _sub_446090(this, arg);
    return __result;
}

_extern Texture const *_sub_4460CC(EngineTrailStatic const *const, unsigned __int32);
_inline Texture const *EngineTrailStatic::getTexture(unsigned __int32) const // 0x4460CC
{
    mangled_assert("?getTexture@EngineTrailStatic@@QBEPBVTexture@@I@Z");
    todo("implement");
    Texture const * __result = _sub_4460CC(this, arg);
    return __result;
}

_extern EngineTrailStatic::Tweaks const *_sub_4460FF(EngineTrailStatic const *const, unsigned __int32);
_inline EngineTrailStatic::Tweaks const *EngineTrailStatic::getTweaks(unsigned __int32) const // 0x4460FF
{
    mangled_assert("?getTweaks@EngineTrailStatic@@QBEPBVTweaks@1@I@Z");
    todo("implement");
    EngineTrailStatic::Tweaks const * __result = _sub_4460FF(this, arg);
    return __result;
}

_extern EngineTrailStatic::Tweaks *_sub_4497D9(EngineTrailStatic *const, unsigned __int32);
_inline EngineTrailStatic::Tweaks *EngineTrailStatic::getTweaks(unsigned __int32) // 0x4497D9
{
    mangled_assert("?getTweaks@EngineTrailStatic@@QAEPAVTweaks@1@I@Z");
    todo("implement");
    EngineTrailStatic::Tweaks * __result = _sub_4497D9(this, arg);
    return __result;
}

_extern float _sub_441CAD(EngineTrailSystem const *const);
_inline float EngineTrailSystem::getThrustStrength() const // 0x441CAD
{
    mangled_assert("?getThrustStrength@EngineTrailSystem@@QBEMXZ");
    todo("implement");
    float __result = _sub_441CAD(this);
    return __result;
}

_extern JointAnimStack const *_sub_449756(EngineTrailSystem const *const, unsigned __int32);
_inline JointAnimStack const *EngineTrailSystem::getNozzle(unsigned __int32) const // 0x449756
{
    mangled_assert("?getNozzle@EngineTrailSystem@@ABEPBVJointAnimStack@@I@Z");
    todo("implement");
    JointAnimStack const * __result = _sub_449756(this, arg);
    return __result;
}

_extern EngineTrail *_sub_4497BC(EngineTrailSystem *const, unsigned __int32);
_inline EngineTrail *EngineTrailSystem::getTrail(unsigned __int32) // 0x4497BC
{
    mangled_assert("?getTrail@EngineTrailSystem@@AAEPAVEngineTrail@@I@Z");
    todo("implement");
    EngineTrail * __result = _sub_4497BC(this, arg);
    return __result;
}

_extern bool _sub_441E5F(EngineTrailSystem const *const);
_inline bool EngineTrailSystem::isStarted() const // 0x441E5F
{
    mangled_assert("?isStarted@EngineTrailSystem@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_441E5F(this);
    return __result;
}

/* ---------- private code */

#endif // __ENGINETRAILSYSTEM_H__
#endif
