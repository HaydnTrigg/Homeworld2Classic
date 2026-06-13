#if 0
#ifndef __PROFILING_H__
#define __PROFILING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Collision::Stopwatch
{
public:
    Stopwatch();
    _inline void Reset();
    void Start();
    void Stop();
    _inline float GetTime() const;
private:
    long long m_startTime; // 0x0
    long long m_totalTime; // 0x8
    double m_period; // 0x10
};
static_assert(sizeof(Collision::Stopwatch) == 24, "Invalid Collision::Stopwatch size");

struct Collision::BVHStatistics
{
    unsigned __int32 nbNode; // 0x0
    unsigned __int32 nbEmptyNode; // 0x4
    unsigned __int32 nbObject; // 0x8
    unsigned __int32 nbCollision; // 0xC
    unsigned __int32 nbNodeTest; // 0x10
    unsigned __int32 nbObjectTest; // 0x14
    unsigned __int32 nbRay; // 0x18
    unsigned __int32 nbRayTest; // 0x1C
    unsigned __int32 nbRayHit; // 0x20
    Collision::Stopwatch timerCollision; // 0x28
    Collision::Stopwatch timerUpdate; // 0x40
    Collision::Stopwatch timerGC; // 0x58
    Collision::Stopwatch timerRays; // 0x70
private:
    float m_totalTime; // 0x88
public:
    BVHStatistics();
    void GetStrings(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const;
    float GetTotalTime() const;
    void Reset();
};
static_assert(sizeof(Collision::BVHStatistics) == 144, "Invalid Collision::BVHStatistics size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_66460E(Collision::Stopwatch *const);
_inline void Collision::Stopwatch::Reset() // 0x66460E
{
    mangled_assert("?Reset@Stopwatch@Collision@@QAEXXZ");
    todo("implement");
    _sub_66460E(this);
}

_extern float _sub_664597(Collision::Stopwatch const *const);
_inline float Collision::Stopwatch::GetTime() const // 0x664597
{
    mangled_assert("?GetTime@Stopwatch@Collision@@QBEMXZ");
    todo("implement");
    float __result = _sub_664597(this);
    return __result;
}

/* ---------- private code */

#endif // __PROFILING_H__
#endif
