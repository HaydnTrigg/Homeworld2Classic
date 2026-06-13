#if 0
#ifndef __GAMEINFOSCREEN_H__
#define __GAMEINFOSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::GameInfoScreen :
    public UI::NewUIScreen
{
public:
    GameInfoScreen(UI::GameInfoScreen const &); /* compiler_generated() */
    GameInfoScreen(char const *);
    virtual ~GameInfoScreen() override;
    void SetData(LobbySessionDesc const &);
protected:
    virtual void OnPreLoadFile(LuaConfig &) override;
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    void AddInfo(wchar_t const *, wchar_t const *);
    static void OnBackClicked(UI::InterfaceElement *sender);
    class Data;
    UI::GameInfoScreen::Data *m_pimpl; // 0x19C
public:
    UI::GameInfoScreen &operator=(UI::GameInfoScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::GameInfoScreen) == 416, "Invalid UI::GameInfoScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GAMEINFOSCREEN_H__
#endif
