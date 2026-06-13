#if 0
#ifndef __STAGINGAREA_H__
#define __STAGINGAREA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SlotStatus
{
    PS_Open = 0,
    PS_HumanPlayer,
    PS_CPUPlayer,
    PS_Closed,
    PS_Empty,
};

/* ---------- definitions */

class StagingArea
{
public:
    struct PlayerSettings
    {
        unsigned short m_slotID : 3; // 0x0
        unsigned short m_difficulty : 2; // 0x0
        unsigned short m_race : 3; // 0x0
        unsigned short m_team : 3; // 0x0
        unsigned short m_ready : 1; // 0x0
        unsigned char m_baseColor[3]; // 0x2
        unsigned char m_stripeColor[3]; // 0x5
        Badge m_badge; // 0x8
        unsigned __int32 m_networkID; // 0x29
        PlayerSettings(__int32);
        void __dflt_ctor_closure(); /* compiler_generated() */
    };
    static_assert(sizeof(PlayerSettings) == 45, "Invalid PlayerSettings size");
    struct HostSettings
    {
        unsigned char m_status[6]; // 0x0
        unsigned char m_positions[6]; // 0x6
        unsigned char m_options[32]; // 0xC
        unsigned char m_level[16]; // 0x2C
        unsigned char m_gameRules[16]; // 0x3C
        unsigned short m_randomSeed; // 0x4C
        unsigned char m_maxPlayers; // 0x4E
        HostSettings();
    };
    static_assert(sizeof(HostSettings) == 79, "Invalid HostSettings size");
    struct ICallbacks
    {
        virtual void OnNetCreateHost(StagingArea::HostSettings &) = 0;
        virtual bool OnNetCreatePlayer(StagingArea::PlayerSettings &) = 0;
        virtual void OnNetDestroyPlayer(__int32) = 0;
        virtual void OnNetPlayerSettings(StagingArea::PlayerSettings const &, wchar_t const *, bool, bool) = 0;
        virtual void OnNetHostSettings(StagingArea::HostSettings const &) = 0;
        virtual void OnNetStartGame() = 0;
        virtual void OnNetChat(__int32, wchar_t const *) = 0;
        virtual void OnNetHostMigration() = 0;
        ICallbacks(StagingArea::ICallbacks const &); /* compiler_generated() */
        _inline ICallbacks(); /* compiler_generated() */
        StagingArea::ICallbacks &operator=(StagingArea::ICallbacks const &); /* compiler_generated() */
    };
    static_assert(sizeof(ICallbacks) == 4, "Invalid ICallbacks size");
    StagingArea(StagingArea &); /* compiler_generated() */
    StagingArea(std::auto_ptr<Net::Session>, StagingArea::ICallbacks *, unsigned long long);
    ~StagingArea();
    __int32 GetPing(__int32) const;
    void DropPlayer(unsigned __int32);
    _inline bool IsGameStarted() const;
    __int32 GetNumberPlayer() const;
    void SendChatMessage(wchar_t const *, unsigned __int32) const;
    void StartGame();
    void UpdatePlayerSettings(StagingArea::PlayerSettings const &);
    void UpdateHostSettings(StagingArea::HostSettings const &);
    void Update(float);
    _inline Net::Session *GetSession();
private:
    __int32 FindSlotID(unsigned __int32) const;
    void OnCreatePlayer(unsigned __int32);
    void OnDestroyPlayer(unsigned __int32);
    void OnMessage(Net::Message const &);
    void OnPlayerSettings(StagingArea::PlayerSettings const &);
    void OnHostSettings(StagingArea::HostSettings const &);
    void OnStartGame(StagingArea::HostSettings const &, StagingArea::PlayerSettings const *);
    void OnHostMigration();
    void SendPlayerSettings(__int32, unsigned __int32) const;
    void SendHostSettings(unsigned __int32) const;
    std::auto_ptr<Net::Session> m_session; // 0x0
    StagingArea::ICallbacks *m_callbacks; // 0x4
    StagingArea::HostSettings m_hostSettings; // 0x8
    StagingArea::PlayerSettings m_players[6]; // 0x57
    float m_pingTimer; // 0x168
    std::set<unsigned int,std::less<unsigned int>,std::allocator<unsigned int> > m_droppedPlayers; // 0x16C
    bool m_bGameStarted; // 0x174
    CSteamID m_steamIDLobby; // 0x175
public:
    StagingArea &operator=(StagingArea &); /* compiler_generated() */
};
static_assert(sizeof(StagingArea) == 384, "Invalid StagingArea size");

/* ---------- prototypes */

extern _inline bool operator==(StagingArea::PlayerSettings const &x, StagingArea::PlayerSettings const &y);
extern _inline bool operator!=(StagingArea::PlayerSettings const &x, StagingArea::PlayerSettings const &y);
extern _inline bool operator==(StagingArea::HostSettings const &x, StagingArea::HostSettings const &y);
extern _inline bool operator!=(StagingArea::HostSettings const &x, StagingArea::HostSettings const &y);

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_588563(StagingArea const *const);
_inline bool StagingArea::IsGameStarted() const // 0x588563
{
    mangled_assert("?IsGameStarted@StagingArea@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_588563(this);
    return __result;
}

_extern Net::Session *_sub_587D14(StagingArea *const);
_inline Net::Session *StagingArea::GetSession() // 0x587D14
{
    mangled_assert("?GetSession@StagingArea@@QAEPAVSession@Net@@XZ");
    todo("implement");
    Net::Session * __result = _sub_587D14(this);
    return __result;
}

_extern bool _sub_5A1E21(StagingArea::PlayerSettings const &, StagingArea::PlayerSettings const &);
_inline bool operator==(StagingArea::PlayerSettings const &x, StagingArea::PlayerSettings const &y) // 0x5A1E21
{
    mangled_assert("??8@YG_NABUPlayerSettings@StagingArea@@0@Z");
    todo("implement");
    bool __result = _sub_5A1E21(x, y);
    return __result;
}

_extern bool _sub_5A1E4B(StagingArea::PlayerSettings const &, StagingArea::PlayerSettings const &);
_inline bool operator!=(StagingArea::PlayerSettings const &x, StagingArea::PlayerSettings const &y) // 0x5A1E4B
{
    mangled_assert("??9@YG_NABUPlayerSettings@StagingArea@@0@Z");
    todo("implement");
    bool __result = _sub_5A1E4B(x, y);
    return __result;
}

_extern bool _sub_586F63(StagingArea::HostSettings const &, StagingArea::HostSettings const &);
_inline bool operator==(StagingArea::HostSettings const &x, StagingArea::HostSettings const &y) // 0x586F63
{
    mangled_assert("??8@YG_NABUHostSettings@StagingArea@@0@Z");
    todo("implement");
    bool __result = _sub_586F63(x, y);
    return __result;
}

_extern bool _sub_586FAD(StagingArea::HostSettings const &, StagingArea::HostSettings const &);
_inline bool operator!=(StagingArea::HostSettings const &x, StagingArea::HostSettings const &y) // 0x586FAD
{
    mangled_assert("??9@YG_NABUHostSettings@StagingArea@@0@Z");
    todo("implement");
    bool __result = _sub_586FAD(x, y);
    return __result;
}

/* ---------- private code */

#endif // __STAGINGAREA_H__
#endif
