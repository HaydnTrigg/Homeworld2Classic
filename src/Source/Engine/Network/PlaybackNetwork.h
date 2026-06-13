#if 0
#ifndef __PLAYBACKNETWORK_H__
#define __PLAYBACKNETWORK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PlaybackNetwork :
    public INetwork
{
public:
    PlaybackNetwork(PlaybackNetwork const &); /* compiler_generated() */
    PlaybackNetwork();
    virtual ~PlaybackNetwork() override;
    virtual bool Execute() override;
    virtual __int32 GetSimLoopCount() override;
    virtual FrameOrders const *PeekNextFrameOrders() const override;
    virtual void SendOrder(std::auto_ptr<Order>) override;
private:
    Recorder *m_recorder; // 0x4
    FrameOrders m_orders; // 0x8
public:
    PlaybackNetwork &operator=(PlaybackNetwork const &); /* compiler_generated() */
};
static_assert(sizeof(PlaybackNetwork) == 24, "Invalid PlaybackNetwork size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PLAYBACKNETWORK_H__
#endif
