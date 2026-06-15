#if 0
#ifndef __STEAMP2PNETWORK_H__
#define __STEAMP2PNETWORK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SteamP2PNetwork :
    public INetwork,
    public Task
{
public:
    SteamP2PNetwork(SteamP2PNetwork const &); /* compiler_generated() */
    SteamP2PNetwork(Net::Session *);
    virtual ~SteamP2PNetwork() override;
    virtual bool Execute() override;
    virtual __int32 GetSimLoopCount() override;
    virtual FrameOrders const *PeekNextFrameOrders() const override;
    virtual void SendOrder(std::auto_ptr<Order>) override;
    virtual bool IsPlayerLagging(unsigned __int32) override;
    virtual __int32 taskFunction(float) override;
    __int32 GetNumberFramesQueued() const;
    typedef boost::shared_ptr<FrameOrders> FrameOrdersPtr;
    struct PacketInfo
    {
        unsigned char m_number; // 0x0
        unsigned char m_nbOrders; // 0x1
    };
    static_assert(sizeof(PacketInfo) == 2, "Invalid PacketInfo size");
    struct Packet
    {
        unsigned __int32 m_number; // 0x0
        unsigned __int32 m_nbOrders; // 0x4
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_payload; // 0x8
        _inline Packet(SteamP2PNetwork::Packet const &); /* compiler_generated() */
        Packet(unsigned __int32, unsigned __int32, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
        _inline Packet();
        _inline ~Packet(); /* compiler_generated() */
        _inline SteamP2PNetwork::Packet &operator=(SteamP2PNetwork::Packet const &); /* compiler_generated() */
    };
    static_assert(sizeof(Packet) == 32, "Invalid Packet size");
    struct ReceiveQueue
    {
        typedef std::list<SteamP2PNetwork::Packet,std::allocator<SteamP2PNetwork::Packet> > PacketList;
        unsigned __int32 m_recvCounter; // 0x0
        unsigned __int32 m_recvOrders; // 0x4
        std::list<SteamP2PNetwork::Packet,std::allocator<SteamP2PNetwork::Packet> > m_packets; // 0x8
        boost::shared_ptr<FrameOrders> m_frameOrders; // 0x10
        __int32 m_lagCounter; // 0x18
        void ConvertPackets();
        void OnReceive(std::string);
        _inline ReceiveQueue(SteamP2PNetwork::ReceiveQueue const &); /* compiler_generated() */
        ReceiveQueue();
    private:
        void ConvertPacket();
        void InsertPacket(SteamP2PNetwork::Packet const &);
    public:
        _inline ~ReceiveQueue(); /* compiler_generated() */
        SteamP2PNetwork::ReceiveQueue &operator=(SteamP2PNetwork::ReceiveQueue const &); /* compiler_generated() */
    };
    static_assert(sizeof(ReceiveQueue) == 28, "Invalid ReceiveQueue size");
    struct PacketSortPredicate;
private:
    void DropPlayer(unsigned __int32);
    __int32 GetHighestPing() const;
    bool PerformSyncChecking();
    void ProcessNetworkMessages();
    void OnGameMessage(Net::Message const &);
    void OnPlayerDestroyed(Net::Message const &);
    void OnHostMigration(Net::Message const &);
    void SendChatOrder(std::auto_ptr<ChatOrder>);
    typedef std::map<unsigned int,SteamP2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> > > PlayerMap;
    Net::Session *m_netSession; // 0x34
    Recorder *m_recorder; // 0x38
    boost::shared_ptr<FrameOrders> m_sendOrders; // 0x3C
    std::map<unsigned int,SteamP2PNetwork::ReceiveQueue,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SteamP2PNetwork::ReceiveQueue> > > m_players; // 0x44
    __int32 m_nbFramesAvailable; // 0x4C
    std::queue<unsigned int,std::deque<unsigned int,std::allocator<unsigned int> > > m_checksums; // 0x50
    SimSpeedController m_speedController; // 0x64
    unsigned __int32 m_sendCounter; // 0x74
    unsigned __int32 m_sendNbOrders; // 0x78
    bool m_bPausePending; // 0x7C
public:
    SteamP2PNetwork &operator=(SteamP2PNetwork const &); /* compiler_generated() */
};
static_assert(sizeof(SteamP2PNetwork) == 128, "Invalid SteamP2PNetwork size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SteamP2PNetwork::Packet::Packet() // 0x4606DD
{
    mangled_assert("??0Packet@SteamP2PNetwork@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STEAMP2PNETWORK_H__
#endif
