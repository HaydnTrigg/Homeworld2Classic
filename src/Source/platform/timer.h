#if 0
#ifndef __TIMER_H__
#define __TIMER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Timer
{
public:
    enum timerResolution
    {
        timerResolutionMicroseconds = 0,
        timerResolutionMilliseconds,
        timerResolutionSeconds,
        timerResolutionTicks,
    };
    Timer(Timer::timerResolution);
    void setResolution(Timer::timerResolution);
    Timer::timerResolution getResolution() const;
    void start();
    void stop();
    void reset();
    void restart();
    long long getElapsedTime() const;
    static long long getCurrentTime();
    float getElapsedTimeReal() const;
    static long long getOverheadTicks();
    static void setOverheadTicks(long long);
    bool isTimerRunning() const;
    static long long getWindowsTimerFrequency();
private:
    Timer::timerResolution m_resolution; // 0x0
    long long m_startTime; // 0x8
    long long m_frequency; // 0x10
    long long m_totalElapsedTime; // 0x18
    static long long s_overheadTicks;
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Timer) == 32, "Invalid Timer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TIMER_H__
/* combined */
#ifndef __TIMER_H__
#define __TIMER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Timer
{
public:
    enum timerResolution
    {
        timerResolutionMicroseconds = 0,
        timerResolutionMilliseconds,
        timerResolutionSeconds,
        timerResolutionTicks,
    };
    Timer(Timer::timerResolution);
    void setResolution(Timer::timerResolution);
    _inline Timer::timerResolution getResolution() const;
    _inline void start();
    _inline void stop();
    _inline void reset();
    _inline void restart();
    _inline long long getElapsedTime() const;
    static long long getCurrentTime();
    float getElapsedTimeReal() const;
    static _inline long long getOverheadTicks();
    static _inline void setOverheadTicks(long long overhead);
    _inline bool isTimerRunning() const;
    static long long getWindowsTimerFrequency();
private:
    Timer::timerResolution m_resolution; // 0x0
    long long m_startTime; // 0x8
    long long m_frequency; // 0x10
    long long m_totalElapsedTime; // 0x18
    static long long s_overheadTicks;
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Timer) == 32, "Invalid Timer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Timer::timerResolution Timer::getResolution() const // 0x10008A69
{
    mangled_assert("?getResolution@Timer@@QBE?AW4timerResolution@1@XZ");
    todo("implement");
}

_inline void Timer::start() // 0x10008AEF
{
    mangled_assert("?start@Timer@@QAEXXZ");
    todo("implement");
}

_inline void Timer::stop() // 0x10008AFF
{
    mangled_assert("?stop@Timer@@QAEXXZ");
    todo("implement");
}

_inline void Timer::reset() // 0x10008A92
{
    mangled_assert("?reset@Timer@@QAEXXZ");
    todo("implement");
}

_inline void Timer::restart() // 0x10008AA1
{
    mangled_assert("?restart@Timer@@QAEXXZ");
    todo("implement");
}

_inline long long Timer::getElapsedTime() const // 0x1000893B
{
    mangled_assert("?getElapsedTime@Timer@@QBE_JXZ");
    todo("implement");
}

_inline long long Timer::getOverheadTicks() // 0x10008A5D
{
    mangled_assert("?getOverheadTicks@Timer@@SG_JXZ");
    todo("implement");
}

_inline void Timer::setOverheadTicks(long long overhead) // 0x10008ABF
{
    mangled_assert("?setOverheadTicks@Timer@@SGX_J@Z");
    todo("implement");
}

_inline bool Timer::isTimerRunning() const // 0x10008A83
{
    mangled_assert("?isTimerRunning@Timer@@QBE_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __TIMER_H__
/* combined */
#ifndef __TIMER_H__
#define __TIMER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Timer
{
public:
    enum timerResolution
    {
        timerResolutionMicroseconds = 0,
        timerResolutionMilliseconds,
        timerResolutionSeconds,
        timerResolutionTicks,
    };
    Timer(Timer::timerResolution);
    void setResolution(Timer::timerResolution);
    Timer::timerResolution getResolution() const;
    void start();
    void stop();
    void reset();
    void restart();
    long long getElapsedTime() const;
    static long long getCurrentTime();
    float getElapsedTimeReal() const;
    static long long getOverheadTicks();
    static void setOverheadTicks(long long);
    bool isTimerRunning() const;
    static long long getWindowsTimerFrequency();
private:
    Timer::timerResolution m_resolution; // 0x0
    long long m_startTime; // 0x8
    long long m_frequency; // 0x10
    long long m_totalElapsedTime; // 0x18
    static long long s_overheadTicks;
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Timer) == 32, "Invalid Timer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TIMER_H__
/* combined */
#ifndef __TIMER_H__
#define __TIMER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Timer
{
public:
    enum timerResolution
    {
        timerResolutionMicroseconds = 0,
        timerResolutionMilliseconds,
        timerResolutionSeconds,
        timerResolutionTicks,
    };
    Timer(Timer::timerResolution);
    void setResolution(Timer::timerResolution);
    Timer::timerResolution getResolution() const;
    void start();
    void stop();
    void reset();
    void restart();
    long long getElapsedTime() const;
    static long long getCurrentTime();
    float getElapsedTimeReal() const;
    static long long getOverheadTicks();
    static void setOverheadTicks(long long);
    bool isTimerRunning() const;
    static long long getWindowsTimerFrequency();
private:
    Timer::timerResolution m_resolution; // 0x0
    long long m_startTime; // 0x8
    long long m_frequency; // 0x10
    long long m_totalElapsedTime; // 0x18
    static long long s_overheadTicks;
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Timer) == 32, "Invalid Timer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TIMER_H__
#endif
