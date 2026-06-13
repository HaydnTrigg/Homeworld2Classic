#if 0
#ifndef __LINEARINTERP_H__
#define __LINEARINTERP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LinearInterp
{
public:
    _inline LinearInterp();
    _inline void Set(float);
    _inline float Get() const;
    void SetTarget(float, float);
    float GetTarget() const;
    void Update(float);
private:
    float m_current; // 0x0
    float m_target; // 0x4
    float m_dValDt; // 0x8
};
static_assert(sizeof(LinearInterp) == 12, "Invalid LinearInterp size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_5226EA(LinearInterp *const);
_inline LinearInterp::LinearInterp() // 0x5226EA
{
    mangled_assert("??0LinearInterp@@QAE@XZ");
    todo("implement");
    _sub_5226EA(this);
}

_extern void _sub_522B20(LinearInterp *const, float);
_inline void LinearInterp::Set(float) // 0x522B20
{
    mangled_assert("?Set@LinearInterp@@QAEXM@Z");
    todo("implement");
    _sub_522B20(this, arg);
}

_extern float _sub_522B1A(LinearInterp const *const);
_inline float LinearInterp::Get() const // 0x522B1A
{
    mangled_assert("?Get@LinearInterp@@QBEMXZ");
    todo("implement");
    float __result = _sub_522B1A(this);
    return __result;
}

/* ---------- private code */

#endif // __LINEARINTERP_H__
#endif
