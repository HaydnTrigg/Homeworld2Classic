#if 0
#ifndef __GAMEEVENTSYS_H__
#define __GAMEEVENTSYS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GameEventSys
{
private:
    GameEventSys(GameEventSys const &);
    GameEventSys();
    ~GameEventSys();
public:
    static bool Initialize();
    static bool Shutdown();
    static GameEventSys *Instance();
    class Event
    {
    private:
        Player const *m_player; // 0x4
        __int32 m_type; // 0x8
    public:
        Event(GameEventSys::Event const &); /* compiler_generated() */
    protected:
        _inline Event(__int32, Player const *);
    public:
        _inline ~Event();
        _inline Player const *GetPlayer() const;
        _inline __int32 GetType() const;
        virtual _inline bool GetString(wchar_t *, unsigned __int32) const;
        GameEventSys::Event &operator=(GameEventSys::Event const &); /* compiler_generated() */
    };
    static_assert(sizeof(Event) == 12, "Invalid Event size");
    class Listener
    {
    public:
        virtual void OnEvent(GameEventSys::Event const &) = 0;
        Listener(GameEventSys::Listener const &); /* compiler_generated() */
        _inline Listener(); /* compiler_generated() */
        GameEventSys::Listener &operator=(GameEventSys::Listener const &); /* compiler_generated() */
    };
    static_assert(sizeof(Listener) == 4, "Invalid Listener size");
    void RegisterClient(GameEventSys::Listener *);
    void UnregisterClient(GameEventSys::Listener *);
    bool IsClientRegistered(GameEventSys::Listener *);
    void PublishEvent(GameEventSys::Event const &);
    class Data;
private:
    boost::scoped_ptr<GameEventSys::Data> m_pimpl; // 0x0
    GameEventSys &operator=(GameEventSys const &);
};
static_assert(sizeof(GameEventSys) == 4, "Invalid GameEventSys size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline GameEventSys::Event::Event(__int32, Player const *) // 0x451B3F
{
    mangled_assert("??0Event@GameEventSys@@IAE@HPBVPlayer@@@Z");
    todo("implement");
}

_inline GameEventSys::Event::~Event() // 0x451BEA
{
    mangled_assert("??1Event@GameEventSys@@QAE@XZ");
    todo("implement");
}

_inline Player const *GameEventSys::Event::GetPlayer() const // 0x50FC10
{
    mangled_assert("?GetPlayer@Event@GameEventSys@@QBEPBVPlayer@@XZ");
    todo("implement");
}

_inline __int32 GameEventSys::Event::GetType() const // 0x50FDC8
{
    mangled_assert("?GetType@Event@GameEventSys@@QBEHXZ");
    todo("implement");
}

_inline bool GameEventSys::Event::GetString(wchar_t *, unsigned __int32) const // 0x452AE4
{
    mangled_assert("?GetString@Event@GameEventSys@@UBE_NPA_WI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __GAMEEVENTSYS_H__
#endif
