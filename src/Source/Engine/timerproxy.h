#if 0
#ifndef __TIMERPROXY_H__
#define __TIMERPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TimerProxy
{
public:
    TimerProxy(TimerProxy const &); /* compiler_generated() */
    _inline TimerProxy();
    virtual _inline ~TimerProxy();
    virtual float GetDelta() const = 0;
    TimerProxy &operator=(TimerProxy const &); /* compiler_generated() */
};
static_assert(sizeof(TimerProxy) == 4, "Invalid TimerProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline TimerProxy::TimerProxy() // 0x467B85
{
    mangled_assert("??0TimerProxy@@QAE@XZ");
    todo("implement");
}

_inline TimerProxy::~TimerProxy() // 0x467CAD
{
    mangled_assert("??1TimerProxy@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __TIMERPROXY_H__
#endif
