#if 0
#ifndef __ORBITPARAMETERS_H__
#define __ORBITPARAMETERS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class OrbitParameters
{
public:
    enum
    {
        ORBIT = 0,
        DECLINATION,
        ROLL,
    };
    _inline OrbitParameters();
    _inline OrbitParameters &operator=(OrbitParameters const &);
    _inline void setOrientation(vector3 const &);
    _inline void setOrbit(float const);
    _inline void setDeclination(float const);
    _inline void setRoll(float const);
    _inline void setDistance(float const);
    _inline void setTarget(vector3 const &);
    _inline void setAutomatedFocus(bool);
    _inline void setInterruptFocus(bool);
    bool setDistanceAngleDeclination(vector3 const &, vector3 const &);
    _inline vector3 const &getOrientation() const;
    _inline float getOrbit() const;
    _inline float getDeclination() const;
    _inline float getRoll() const;
    _inline float getDistance() const;
    _inline vector3 const &getTarget() const;
    vector3 getEye() const;
    _inline bool getAutomatedFocus() const;
    _inline bool getInterruptFocus() const;
private:
    vector3 m_targetPos; // 0x0
    vector3 m_orientation; // 0xC
    float m_eyeDist; // 0x18
    bool m_automatedFocus; // 0x1C
    bool m_interruptFocus; // 0x1D
};
static_assert(sizeof(OrbitParameters) == 32, "Invalid OrbitParameters size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern OrbitParameters &_sub_551A80(OrbitParameters *const, OrbitParameters const &);
_inline OrbitParameters &OrbitParameters::operator=(OrbitParameters const &) // 0x551A80
{
    mangled_assert("??4OrbitParameters@@QAEAAV0@ABV0@@Z");
    todo("implement");
    OrbitParameters & __result = _sub_551A80(this, arg);
    return __result;
}

_extern void _sub_4DF80B(OrbitParameters *const, bool);
_inline void OrbitParameters::setAutomatedFocus(bool) // 0x4DF80B
{
    mangled_assert("?setAutomatedFocus@OrbitParameters@@QAEX_N@Z");
    todo("implement");
    _sub_4DF80B(this, arg);
}

_extern void _sub_4DFB85(OrbitParameters *const, bool);
_inline void OrbitParameters::setInterruptFocus(bool) // 0x4DFB85
{
    mangled_assert("?setInterruptFocus@OrbitParameters@@QAEX_N@Z");
    todo("implement");
    _sub_4DFB85(this, arg);
}

_extern bool _sub_4DF025(OrbitParameters const *const);
_inline bool OrbitParameters::getAutomatedFocus() const // 0x4DF025
{
    mangled_assert("?getAutomatedFocus@OrbitParameters@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4DF025(this);
    return __result;
}

_extern bool _sub_4DF32F(OrbitParameters const *const);
_inline bool OrbitParameters::getInterruptFocus() const // 0x4DF32F
{
    mangled_assert("?getInterruptFocus@OrbitParameters@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4DF32F(this);
    return __result;
}

_extern _sub_4E1733(OrbitParameters *const);
_inline OrbitParameters::OrbitParameters() // 0x4E1733
{
    mangled_assert("??0OrbitParameters@@QAE@XZ");
    todo("implement");
    _sub_4E1733(this);
}

_extern void _sub_667955(OrbitParameters *const, vector3 const &);
_inline void OrbitParameters::setOrientation(vector3 const &) // 0x667955
{
    mangled_assert("?setOrientation@OrbitParameters@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_667955(this, arg);
}

_extern void _sub_4DFB8F(OrbitParameters *const, float const);
_inline void OrbitParameters::setOrbit(float const) // 0x4DFB8F
{
    mangled_assert("?setOrbit@OrbitParameters@@QAEXM@Z");
    todo("implement");
    _sub_4DFB8F(this, arg);
}

_extern void _sub_4DF815(OrbitParameters *const, float const);
_inline void OrbitParameters::setDeclination(float const) // 0x4DF815
{
    mangled_assert("?setDeclination@OrbitParameters@@QAEXM@Z");
    todo("implement");
    _sub_4DF815(this, arg);
}

_extern void _sub_553265(OrbitParameters *const, float const);
_inline void OrbitParameters::setRoll(float const) // 0x553265
{
    mangled_assert("?setRoll@OrbitParameters@@QAEXM@Z");
    todo("implement");
    _sub_553265(this, arg);
}

_extern void _sub_4DF823(OrbitParameters *const, float const);
_inline void OrbitParameters::setDistance(float const) // 0x4DF823
{
    mangled_assert("?setDistance@OrbitParameters@@QAEXM@Z");
    todo("implement");
    _sub_4DF823(this, arg);
}

_extern void _sub_4E18A4(OrbitParameters *const, vector3 const &);
_inline void OrbitParameters::setTarget(vector3 const &) // 0x4E18A4
{
    mangled_assert("?setTarget@OrbitParameters@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_4E18A4(this, arg);
}

_extern vector3 const &_sub_66778F(OrbitParameters const *const);
_inline vector3 const &OrbitParameters::getOrientation() const // 0x66778F
{
    mangled_assert("?getOrientation@OrbitParameters@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_66778F(this);
    return __result;
}

_extern float _sub_4DF349(OrbitParameters const *const);
_inline float OrbitParameters::getOrbit() const // 0x4DF349
{
    mangled_assert("?getOrbit@OrbitParameters@@QBEMXZ");
    todo("implement");
    float __result = _sub_4DF349(this);
    return __result;
}

_extern float _sub_4DF2E6(OrbitParameters const *const);
_inline float OrbitParameters::getDeclination() const // 0x4DF2E6
{
    mangled_assert("?getDeclination@OrbitParameters@@QBEMXZ");
    todo("implement");
    float __result = _sub_4DF2E6(this);
    return __result;
}

_extern float _sub_552987(OrbitParameters const *const);
_inline float OrbitParameters::getRoll() const // 0x552987
{
    mangled_assert("?getRoll@OrbitParameters@@QBEMXZ");
    todo("implement");
    float __result = _sub_552987(this);
    return __result;
}

_extern float _sub_4DF2EA(OrbitParameters const *const);
_inline float OrbitParameters::getDistance() const // 0x4DF2EA
{
    mangled_assert("?getDistance@OrbitParameters@@QBEMXZ");
    todo("implement");
    float __result = _sub_4DF2EA(this);
    return __result;
}

_extern vector3 const &_sub_4DF351(OrbitParameters const *const);
_inline vector3 const &OrbitParameters::getTarget() const // 0x4DF351
{
    mangled_assert("?getTarget@OrbitParameters@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4DF351(this);
    return __result;
}

/* ---------- private code */

#endif // __ORBITPARAMETERS_H__
#endif
