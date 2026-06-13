#if 0
/* ---------- headers */

#include "decomp.h"
#include <Platform\pch.h>
#include <util\types.h>
#include <Platform\Timer.h>
#include <Platform\platformexports.h>

/* ---------- constants */

/* ---------- definitions */

struct timerOverheadTester
{
    _inline timerOverheadTester();
};
static_assert(sizeof(timerOverheadTester) == 1, "Invalid timerOverheadTester size");

typedef long long timerVal;

/* ---------- prototypes */

/* ---------- globals */

extern long long Timer::s_overheadTicks; // 0x10010ED8
extern timerOverheadTester autoOverheadTester; // 0x10010EE0

/* ---------- private variables */

/* ---------- public code */

_extern _sub_10008850(timerOverheadTester *const);
_inline timerOverheadTester::timerOverheadTester() // 0x10008850
{
    mangled_assert("??0timerOverheadTester@@QAE@XZ");
    todo("implement");
    _sub_10008850(this);
}

_extern Timer &_sub_10008908(Timer *const, Timer const &);
_inline Timer &Timer::operator=(Timer const &) // 0x10008908
{
    mangled_assert("??4Timer@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    Timer & __result = _sub_10008908(this, arg);
    return __result;
}

_extern _sub_10008822(Timer *const, Timer::timerResolution);
Timer::Timer(Timer::timerResolution) // 0x10008822
{
    mangled_assert("??0Timer@@QAE@W4timerResolution@0@@Z");
    todo("implement");
    _sub_10008822(this, arg);
}

_extern void _sub_10008AD4(Timer *const, Timer::timerResolution);
void Timer::setResolution(Timer::timerResolution) // 0x10008AD4
{
    mangled_assert("?setResolution@Timer@@QAEXW4timerResolution@1@@Z");
    todo("implement");
    _sub_10008AD4(this, arg);
}

_extern float _sub_10008945(Timer const *const);
float Timer::getElapsedTimeReal() const // 0x10008945
{
    mangled_assert("?getElapsedTimeReal@Timer@@QBEMXZ");
    todo("implement");
    float __result = _sub_10008945(this);
    return __result;
}

_extern long long _sub_10008924();
long long Timer::getCurrentTime() // 0x10008924
{
    mangled_assert("?getCurrentTime@Timer@@SG_JXZ");
    todo("implement");
    long long __result = _sub_10008924();
    return __result;
}

_extern long long _sub_10008A6C();
long long Timer::getWindowsTimerFrequency() // 0x10008A6C
{
    mangled_assert("?getWindowsTimerFrequency@Timer@@SG_JXZ");
    todo("implement");
    long long __result = _sub_10008A6C();
    return __result;
}

/* ---------- private code */
#endif
