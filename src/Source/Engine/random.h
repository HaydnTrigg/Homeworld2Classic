#if 0
#ifndef __RANDOM_H__
#define __RANDOM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RandomStream
{
private:
    virtual unsigned __int32 hashRandom();
    unsigned __int32 m_x; // 0x4
    unsigned __int32 m_y; // 0x8
    unsigned __int32 m_z; // 0xC
    unsigned __int32 m_c; // 0x10
    unsigned __int32 m_n; // 0x14
    bool m_deterministic; // 0x18
public:
    RandomStream(RandomStream const &); /* compiler_generated() */
    RandomStream(bool);
    virtual void parametersSet(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32);
    virtual void parametersGet(unsigned __int32 *, unsigned __int32 *, unsigned __int32 *, unsigned __int32 *, unsigned __int32 *);
    virtual void parametersReset();
    virtual void seedSet(unsigned __int32);
    bool GetDeterministic();
    void SetDeterministic(bool);
    _inline unsigned __int32 rand();
    _inline float GetUnitInclusive();
    _inline float GetUnitExclusive();
    _inline float GetRealRange(float, float);
    unsigned __int32 GetBits(unsigned __int32);
    _inline unsigned __int32 GetMax(unsigned __int32);
    _inline unsigned __int32 GetRange(unsigned __int32, unsigned __int32);
    RandomStream &operator=(RandomStream const &); /* compiler_generated() */
};
static_assert(sizeof(RandomStream) == 28, "Invalid RandomStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_49B880(RandomStream *const);
_inline unsigned __int32 RandomStream::rand() // 0x49B880
{
    mangled_assert("?rand@RandomStream@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_49B880(this);
    return __result;
}

_extern float _sub_442C7C(RandomStream *const);
_inline float RandomStream::GetUnitInclusive() // 0x442C7C
{
    mangled_assert("?GetUnitInclusive@RandomStream@@QAEMXZ");
    todo("implement");
    float __result = _sub_442C7C(this);
    return __result;
}

_extern float _sub_520D3C(RandomStream *const);
_inline float RandomStream::GetUnitExclusive() // 0x520D3C
{
    mangled_assert("?GetUnitExclusive@RandomStream@@QAEMXZ");
    todo("implement");
    float __result = _sub_520D3C(this);
    return __result;
}

_extern float _sub_440221(RandomStream *const, float, float);
_inline float RandomStream::GetRealRange(float, float) // 0x440221
{
    mangled_assert("?GetRealRange@RandomStream@@QAEMMM@Z");
    todo("implement");
    float __result = _sub_440221(this, arg, arg);
    return __result;
}

_extern unsigned __int32 _sub_4871BF(RandomStream *const, unsigned __int32);
_inline unsigned __int32 RandomStream::GetMax(unsigned __int32) // 0x4871BF
{
    mangled_assert("?GetMax@RandomStream@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4871BF(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_4871CE(RandomStream *const, unsigned __int32, unsigned __int32);
_inline unsigned __int32 RandomStream::GetRange(unsigned __int32, unsigned __int32) // 0x4871CE
{
    mangled_assert("?GetRange@RandomStream@@QAEIII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_4871CE(this, arg, arg);
    return __result;
}

/* ---------- private code */

#endif // __RANDOM_H__
#endif
