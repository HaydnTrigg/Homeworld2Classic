#if 0
#ifndef __ANIMCURVE_H__
#define __ANIMCURVE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum CurveChannel
{
    CA_None = 0,
    CA_TranslateX,
    CA_TranslateY,
    CA_TranslateZ,
    CA_RotateX,
    CA_RotateY,
    CA_RotateZ,
    CA_NumberChannels,
};

enum EtInfinityType
{
    kInfinityConstant = 0,
    kInfinityLinear,
    kInfinityCycle,
    kInfinityCycleRelative,
    kInfinityOscillate,
};

/* ---------- definitions */

struct AnimKey
{
    float time; // 0x0
    float value; // 0x4
    float inTanX; // 0x8
    float inTanY; // 0xC
    float outTanX; // 0x10
    float outTanY; // 0x14
};
static_assert(sizeof(AnimKey) == 24, "Invalid AnimKey size");

class AnimCurve
{
public:
    static CurveChannel mapNameToChannel(char const *name);
    AnimCurve(AnimCurve const &); /* compiler_generated() */
    AnimCurve();
    ~AnimCurve();
    void setPreInfinity(EtInfinityType);
    void setPostInfinity(EtInfinityType);
    CurveChannel setChannelByName(char const *);
    _inline void setName(char *);
    void addKey(float, float, float, float, float, float);
    _inline unsigned __int32 getNumKeys();
    float getKeyTime(unsigned __int32);
    float getKeyValue(unsigned __int32);
    void startEvaluation();
    float evaluate(float);
    _inline float getMinValue() const;
    _inline float getMaxValue() const;
    _inline float getMinTime() const;
    _inline float getMaxTime() const;
    char *getName() const;
    _inline CurveChannel getChannel() const;
    void adjustLastKey(float);
    void visualize(float, float, float, float, float, float, float, float, unsigned __int32, float, vector4 const &);
private:
    bool find(float, __int32 *);
    float evaluateInfinities(float, bool);
    void bezierCreate(float *, float *);
    void hermiteCreate(float *, float *);
    float bezierEvaluate(float);
    float hermiteEvaluate(float);
    CurveChannel m_channel; // 0x0
    char *m_name; // 0x4
    __int32 m_numKeys; // 0x8
    bool m_bIsWeighted; // 0xC
    bool m_bIsStatic; // 0xD
    EtInfinityType m_preInfinity; // 0x10
    EtInfinityType m_postInfinity; // 0x14
    float m_minValue; // 0x18
    float m_maxValue; // 0x1C
    float m_minTime; // 0x20
    float m_maxTime; // 0x24
    AnimKey *m_pLastKey; // 0x28
    __int32 m_lastIndex; // 0x2C
    __int32 m_lastInterval; // 0x30
    bool m_bIsStep; // 0x34
    bool m_bIsLinear; // 0x35
    float m_fX1; // 0x38
    float m_fX4; // 0x3C
    float m_fCoeff[4]; // 0x40
    float m_fPolyY[4]; // 0x50
    std::vector<AnimKey,std::allocator<AnimKey> > m_keyList; // 0x60
public:
    AnimCurve &operator=(AnimCurve const &); /* compiler_generated() */
};
static_assert(sizeof(AnimCurve) == 108, "Invalid AnimCurve size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void AnimCurve::setName(char *) // 0x6086EB
{
    mangled_assert("?setName@AnimCurve@@QAEXPAD@Z");
    todo("implement");
}

_inline unsigned __int32 AnimCurve::getNumKeys() // 0x54B95B
{
    mangled_assert("?getNumKeys@AnimCurve@@QAEIXZ");
    todo("implement");
}

_inline float AnimCurve::getMinValue() const // 0x54D354
{
    mangled_assert("?getMinValue@AnimCurve@@QBEMXZ");
    todo("implement");
}

_inline float AnimCurve::getMaxValue() const // 0x54D34C
{
    mangled_assert("?getMaxValue@AnimCurve@@QBEMXZ");
    todo("implement");
}

_inline float AnimCurve::getMinTime() const // 0x54D350
{
    mangled_assert("?getMinTime@AnimCurve@@QBEMXZ");
    todo("implement");
}

_inline float AnimCurve::getMaxTime() const // 0x54D348
{
    mangled_assert("?getMaxTime@AnimCurve@@QBEMXZ");
    todo("implement");
}

_inline CurveChannel AnimCurve::getChannel() const // 0x607DCA
{
    mangled_assert("?getChannel@AnimCurve@@QBE?AW4CurveChannel@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ANIMCURVE_H__
#endif
