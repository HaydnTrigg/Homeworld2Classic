#if 0
#ifndef __INETWORK_H__
#define __INETWORK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class INetwork
{
public:
    virtual _inline ~INetwork() = 0;
    virtual bool Execute() = 0;
    virtual __int32 GetSimLoopCount() = 0;
    virtual FrameOrders const *PeekNextFrameOrders() const = 0;
    virtual void SendOrder(std::auto_ptr<Order>) = 0;
    virtual _inline bool IsPlayerLagging(unsigned __int32);
    INetwork(INetwork const &); /* compiler_generated() */
    _inline INetwork(); /* compiler_generated() */
    INetwork &operator=(INetwork const &); /* compiler_generated() */
};
static_assert(sizeof(INetwork) == 4, "Invalid INetwork size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_460BE6(INetwork *const);
_inline INetwork::~INetwork() // 0x460BE6
{
    mangled_assert("??1INetwork@@UAE@XZ");
    todo("implement");
    _sub_460BE6(this);
}

_extern bool _sub_4618E0(INetwork *const, unsigned __int32);
_inline bool INetwork::IsPlayerLagging(unsigned __int32) // 0x4618E0
{
    mangled_assert("?IsPlayerLagging@INetwork@@UAE_NI@Z");
    todo("implement");
    bool __result = _sub_4618E0(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __INETWORK_H__
#endif
