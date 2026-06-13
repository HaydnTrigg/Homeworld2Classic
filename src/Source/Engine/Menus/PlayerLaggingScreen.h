#if 0
#ifndef __PLAYERLAGGINGSCREEN_H__
#define __PLAYERLAGGINGSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::PlayerLaggingScreen :
    public UI::NewUIScreen
{
public:
    PlayerLaggingScreen(UI::PlayerLaggingScreen const &); /* compiler_generated() */
    PlayerLaggingScreen(char const *);
    virtual ~PlayerLaggingScreen() override;
    virtual void Update(unsigned __int32) override;
    void ShowPlayerLagging(Player *, unsigned __int32);
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    static void OnKickPlayer(UI::InterfaceElement *sender);
    static void OnNoMore(UI::InterfaceElement *sender);
private:
    Player *m_player; // 0x19C
    unsigned __int32 m_networkID; // 0x1A0
    bool m_noMore; // 0x1A4
    unsigned __int32 m_lastTime; // 0x1A8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fstringMessage; // 0x1AC
public:
    UI::PlayerLaggingScreen &operator=(UI::PlayerLaggingScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::PlayerLaggingScreen) == 452, "Invalid UI::PlayerLaggingScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PLAYERLAGGINGSCREEN_H__
#endif
