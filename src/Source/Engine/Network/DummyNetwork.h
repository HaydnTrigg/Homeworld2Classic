#if 0
#ifndef __DUMMYNETWORK_H__
#define __DUMMYNETWORK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DummyNetwork :
    public INetwork
{
public:
    DummyNetwork(DummyNetwork const &); /* compiler_generated() */
    DummyNetwork();
    virtual ~DummyNetwork() override;
    virtual bool Execute() override;
    virtual __int32 GetSimLoopCount() override;
    virtual FrameOrders const *PeekNextFrameOrders() const override;
    virtual void SendOrder(std::auto_ptr<Order>) override;
private:
    Recorder *m_recorder; // 0x4
    FrameOrders m_orders; // 0x8
public:
    DummyNetwork &operator=(DummyNetwork const &); /* compiler_generated() */
};
static_assert(sizeof(DummyNetwork) == 24, "Invalid DummyNetwork size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DUMMYNETWORK_H__
#endif
