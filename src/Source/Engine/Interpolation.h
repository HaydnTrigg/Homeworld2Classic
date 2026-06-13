#if 0
#ifndef __INTERPOLATION_H__
#define __INTERPOLATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Interpolator
{
public:
    Interpolator(SaveGameData *);
    Interpolator();
    ~Interpolator();
    static void reset();
    static _inline float getTotalTime();
    static _inline float getTimeElapsed();
    static _inline float getSimFraction();
    static _inline float getInterpolTime();
    static _inline float getRealInterpolTime();
    static _inline float getRenderTime();
    static _inline float getTimeDistortion();
    static _inline float getRealTimeDistortion();
    static bool isPaused();
    static _inline void pause(bool bPause);
    static _inline void setTimeDistortion(float distortion);
    static _inline void setRealTimeDistortion(float distortion);
    static void nextSimulateFrame(float deltaTime);
    static void nextRenderFrame(float deltaTime);
    bool save(SaveGameData *, SaveType);
    bool restore(SaveGameData *);
    char const *saveToken();
    _inline bool isDeterministic();
    void postRestore();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
protected:
    static float m_totalTime;
    static float m_deltaTime;
    static float m_renderTime;
    static float m_oldTime;
    static float m_simulationFraction;
    static float m_timeDistortion;
    static float m_realTimeDistortion;
    static float m_lastTime;
    static float m_realRenderTime;
    static __int32 m_nRenderedFrames;
    static bool m_bPaused;
};
static_assert(sizeof(Interpolator) == 1, "Invalid Interpolator size");

class InterpolSobData :
    public Saveable
{
public:
    InterpolSobData(InterpolSobData const &); /* compiler_generated() */
    InterpolSobData(Sob *);
    virtual ~InterpolSobData() override;
    void reset();
    void setParent(Sob *);
    void resetTransform(vector3 const &, matrix3 const &);
    void update(bool, float);
    _inline vector3 const &getPositionPtr() const;
    _inline vector3 const &getGeometricPosPtr() const;
    _inline bool getBrandNew() const;
    float getGeometricRadius() const;
    _inline matrix3 const &getCoordSys() const;
    _inline bool isInterpolated() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
protected:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    vector3 m_oldPosition; // 0x4
    vector3 m_newPosition; // 0x10
    vector3 m_interpolPosition; // 0x1C
    vector3 m_oldGeometricPosition; // 0x28
    vector3 m_newGeometricPosition; // 0x34
    vector3 m_interpolGeometricPosition; // 0x40
    float m_geometricRadius; // 0x4C
    quat m_oldCoordSys; // 0x50
    quat m_newCoordSys; // 0x60
    matrix3 m_interpolCoordSys; // 0x70
    Sob *m_parent; // 0x94
    float m_oldSimulationTime; // 0x98
    bool m_bCloseEnough; // 0x9C
    bool m_brandNew; // 0x9D
public:
    InterpolSobData &operator=(InterpolSobData const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(InterpolSobData) == 160, "Invalid InterpolSobData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_5F0FE3();
_inline float Interpolator::getTotalTime() // 0x5F0FE3
{
    mangled_assert("?getTotalTime@Interpolator@@SGMXZ");
    todo("implement");
    float __result = _sub_5F0FE3();
    return __result;
}

_extern float _sub_607DD5();
_inline float Interpolator::getTimeElapsed() // 0x607DD5
{
    mangled_assert("?getTimeElapsed@Interpolator@@SGMXZ");
    todo("implement");
    float __result = _sub_607DD5();
    return __result;
}

_extern float _sub_5F0FDC();
_inline float Interpolator::getSimFraction() // 0x5F0FDC
{
    mangled_assert("?getSimFraction@Interpolator@@SGMXZ");
    todo("implement");
    float __result = _sub_5F0FDC();
    return __result;
}

_extern float _sub_441BB2();
_inline float Interpolator::getInterpolTime() // 0x441BB2
{
    mangled_assert("?getInterpolTime@Interpolator@@SGMXZ");
    todo("implement");
    float __result = _sub_441BB2();
    return __result;
}

_extern float _sub_61BF7F();
_inline float Interpolator::getRealInterpolTime() // 0x61BF7F
{
    mangled_assert("?getRealInterpolTime@Interpolator@@SGMXZ");
    todo("implement");
    float __result = _sub_61BF7F();
    return __result;
}

_extern float _sub_54B968();
_inline float Interpolator::getRenderTime() // 0x54B968
{
    mangled_assert("?getRenderTime@Interpolator@@SGMXZ");
    todo("implement");
    float __result = _sub_54B968();
    return __result;
}

_extern float _sub_45A8B9();
_inline float Interpolator::getTimeDistortion() // 0x45A8B9
{
    mangled_assert("?getTimeDistortion@Interpolator@@SGMXZ");
    todo("implement");
    float __result = _sub_45A8B9();
    return __result;
}

_extern float _sub_48CA1F();
_inline float Interpolator::getRealTimeDistortion() // 0x48CA1F
{
    mangled_assert("?getRealTimeDistortion@Interpolator@@SGMXZ");
    todo("implement");
    float __result = _sub_48CA1F();
    return __result;
}

_extern void _sub_64FF6A(bool);
_inline void Interpolator::pause(bool bPause) // 0x64FF6A
{
    mangled_assert("?pause@Interpolator@@SGX_N@Z");
    todo("implement");
    _sub_64FF6A(bPause);
}

_extern void _sub_65095F(float);
_inline void Interpolator::setTimeDistortion(float distortion) // 0x65095F
{
    mangled_assert("?setTimeDistortion@Interpolator@@SGXM@Z");
    todo("implement");
    _sub_65095F(distortion);
}

_extern void _sub_6508E6(float);
_inline void Interpolator::setRealTimeDistortion(float distortion) // 0x6508E6
{
    mangled_assert("?setRealTimeDistortion@Interpolator@@SGXM@Z");
    todo("implement");
    _sub_6508E6(distortion);
}

_extern bool _sub_5FB3D0(Interpolator *const);
_inline bool Interpolator::isDeterministic() // 0x5FB3D0
{
    mangled_assert("?isDeterministic@Interpolator@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_5FB3D0(this);
    return __result;
}

_extern vector3 const &_sub_441C81(InterpolSobData const *const);
_inline vector3 const &InterpolSobData::getPositionPtr() const // 0x441C81
{
    mangled_assert("?getPositionPtr@InterpolSobData@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_441C81(this);
    return __result;
}

_extern vector3 const &_sub_478944(InterpolSobData const *const);
_inline vector3 const &InterpolSobData::getGeometricPosPtr() const // 0x478944
{
    mangled_assert("?getGeometricPosPtr@InterpolSobData@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_478944(this);
    return __result;
}

_extern bool _sub_4DF029(InterpolSobData const *const);
_inline bool InterpolSobData::getBrandNew() const // 0x4DF029
{
    mangled_assert("?getBrandNew@InterpolSobData@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4DF029(this);
    return __result;
}

_extern matrix3 const &_sub_441B8B(InterpolSobData const *const);
_inline matrix3 const &InterpolSobData::getCoordSys() const // 0x441B8B
{
    mangled_assert("?getCoordSys@InterpolSobData@@QBEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_441B8B(this);
    return __result;
}

_extern bool _sub_51A638(InterpolSobData const *const);
_inline bool InterpolSobData::isInterpolated() const // 0x51A638
{
    mangled_assert("?isInterpolated@InterpolSobData@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_51A638(this);
    return __result;
}

_extern char const *_sub_5FB6EB(InterpolSobData *const);
_inline char const *InterpolSobData::saveToken() // 0x5FB6EB
{
    mangled_assert("?saveToken@InterpolSobData@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_5FB6EB(this);
    return __result;
}

_extern bool _sub_5FB3CD(InterpolSobData *const);
_inline bool InterpolSobData::isDeterministic() // 0x5FB3CD
{
    mangled_assert("?isDeterministic@InterpolSobData@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5FB3CD(this);
    return __result;
}

/* ---------- private code */

#endif // __INTERPOLATION_H__
#endif
