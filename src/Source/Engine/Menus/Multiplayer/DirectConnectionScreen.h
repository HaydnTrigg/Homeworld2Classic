#if 0
#ifndef __DIRECTCONNECTIONSCREEN_H__
#define __DIRECTCONNECTIONSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::DirectConnectionScreen :
    public UI::NewUIScreen
{
public:
    DirectConnectionScreen(UI::DirectConnectionScreen const &); /* compiler_generated() */
    DirectConnectionScreen(char const *);
    virtual ~DirectConnectionScreen() override;
protected:
    virtual void OnPreLoadFile(LuaConfig &) override;
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void Update(unsigned __int32) override;
private:
    void DoJoinGame(wchar_t const *);
    void DoConnect();
    static void OnHost(UI::InterfaceElement *sender);
    static void OnIPAccept(UI::InterfaceElement *sender);
    static void OnCreateGameClicked_Host(UI::InterfaceElement *sender);
    static void OnCreateGameClicked_Join(UI::InterfaceElement *sender);
    class Data;
    UI::DirectConnectionScreen::Data *m_pimpl; // 0x19C
public:
    UI::DirectConnectionScreen &operator=(UI::DirectConnectionScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::DirectConnectionScreen) == 416, "Invalid UI::DirectConnectionScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DIRECTCONNECTIONSCREEN_H__
#endif
