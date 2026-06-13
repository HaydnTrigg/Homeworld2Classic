#if 0
#ifndef __EVENTSSCREEN_H__
#define __EVENTSSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::EventsScreen :
    public UI::NewUIScreen,
    public GameEventSys::Listener
{
public:
    EventsScreen(UI::EventsScreen const &); /* compiler_generated() */
    EventsScreen(char const *);
    virtual ~EventsScreen() override;
    static void Toggle();
    void ShowObjective(wchar_t const *, __int32);
    void ShowEvent(char const *);
    void ShowEventPos(char const *, bool, vector3 const &);
    void Clear();
    void FocusOnLastEvent();
    static _inline UI::EventsScreen *GetScreen();
    virtual void OnEvent(GameEventSys::Event const &) override;
protected:
    virtual void OnResize(UI::Size const &) override;
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    boost::scoped_ptr<UI::EventsScreenData> m_pimpl; // 0x1A0
    static UI::EventsScreen *ms_screen;
    void AddEvent(wchar_t const *, bool, vector3 const &);
public:
    static void OnItemClicked(UI::InterfaceElement *e);
    UI::EventsScreen &operator=(UI::EventsScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::EventsScreen) == 420, "Invalid UI::EventsScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::EventsScreen *_sub_58D35A();
_inline UI::EventsScreen *UI::EventsScreen::GetScreen() // 0x58D35A
{
    mangled_assert("?GetScreen@EventsScreen@UI@@SGPAV12@XZ");
    todo("implement");
    UI::EventsScreen * __result = _sub_58D35A();
    return __result;
}

/* ---------- private code */

#endif // __EVENTSSCREEN_H__
#endif
