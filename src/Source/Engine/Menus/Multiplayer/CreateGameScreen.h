#if 0
#ifndef __CREATEGAMESCREEN_H__
#define __CREATEGAMESCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::CreateGameScreen :
    public UI::NewUIScreen
{
public:
    CreateGameScreen(UI::CreateGameScreen const &); /* compiler_generated() */
    CreateGameScreen(char const *);
    virtual ~CreateGameScreen() override;
    void DisconnectSlots();
    void ConnectOnAccept(void (*)(UI::InterfaceElement *));
    void ShowCreate(wchar_t const *, void (*)(UI::InterfaceElement *), char const *);
    void ShowJoin(wchar_t const *, wchar_t const *, void (*)(UI::InterfaceElement *), char const *);
    void SetGameName(wchar_t const *);
    wchar_t const *GetGameName() const;
    wchar_t const *GetPassword() const;
    wchar_t const *GetGameRules() const;
    virtual void Update(unsigned __int32) override;
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    void AddGameRules(MD5Hash const &);
    void PopulateGameRules();
    void SetGameTypeVisible(bool);
    static void OnAcceptClicked(UI::InterfaceElement *sender);
    static void OnCancelClicked(UI::InterfaceElement *sender);
    static void OnGameTypeInfoClicked(UI::InterfaceElement *sender);
    class Data;
    UI::CreateGameScreen::Data *m_pimpl; // 0x19C
public:
    UI::CreateGameScreen &operator=(UI::CreateGameScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::CreateGameScreen) == 416, "Invalid UI::CreateGameScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CREATEGAMESCREEN_H__
#endif
