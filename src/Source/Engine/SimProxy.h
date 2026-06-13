#if 0
#ifndef __SIMPROXY_H__
#define __SIMPROXY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SimProxy :
    public GameEventSys::Listener
{
private:
    SimProxy(SimProxy const &);
public:
    SimProxy(Player *);
    ~SimProxy();
    virtual void OnEvent(GameEventSys::Event const &) override;
    Fixed<10> const &GetRUFixedPoint() const;
    __int32 GetRU() const;
    __int32 GetRUInResearch() const;
    __int32 GetRUInResearchLeft() const;
    __int32 GetRUInBuildQueue() const;
    __int32 GetRUInBuildQueueLeft() const;
    __int32 GetUCLeftForShip(unsigned __int32) const;
    bool IsResearchBusy() const;
    bool IsResearchDone(unsigned __int32) const;
    bool IsResearchAvailable(unsigned __int32) const;
    bool CanResearch(unsigned __int32) const;
    unsigned __int32 NumSquadrons(unsigned __int32) const;
    unsigned __int32 NumSquadronsQ(unsigned __int32) const;
    unsigned __int32 NumSquadronsFamily(__int32) const;
    unsigned __int32 NumSquadronsFamilyQ(__int32) const;
    unsigned __int32 NumSubSystems(unsigned __int32) const;
    unsigned __int32 NumSubSystemsQ(unsigned __int32) const;
    void SendOrder(std::auto_ptr<Order>);
    void OrderReceived(Order const *);
    void OnOrder(Order const *, bool);
    class Data;
private:
    boost::scoped_ptr<SimProxy::Data> m_pimpl; // 0x4
    Player const *m_player; // 0x8
    __int32 NumSquadronsProxy(unsigned __int32) const;
    SimProxy &operator=(SimProxy const &);
};
static_assert(sizeof(SimProxy) == 12, "Invalid SimProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SIMPROXY_H__
#endif
