#if 0
#ifndef __DIPLOMACYSCREEN_H__
#define __DIPLOMACYSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::DiplomacyScreen :
    public UI::NewUIScreen,
    public GameEventSys::Listener
{
public:
    DiplomacyScreen(UI::DiplomacyScreen const &); /* compiler_generated() */
    DiplomacyScreen(char const *);
    virtual ~DiplomacyScreen() override;
    virtual void Update(unsigned __int32) override;
    void SelectPlayer(__int32);
    _inline __int32 GetSelectedPlayer() const;
    virtual void OnEvent(GameEventSys::Event const &) override;
    bool IsAllianceRequested();
    _inline void NeedUpdate();
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    enum
    {
        MAX_OPPONENTS = 5, // 0x0005
    };
private:
    UI::NewButton *m_playerButtons[5]; // 0x1A0
    UI::TextButton *m_requestAllianceButton; // 0x1B4
    UI::TextButton *m_breakAllianceButton; // 0x1B8
    UI::TextButton *m_ignoreAllianceButton; // 0x1BC
    UI::TextButton *m_transferShipsButton; // 0x1C0
    UI::TextButton *m_transfer500RUsButton; // 0x1C4
    UI::TextButton *m_transfer1000RUsButton; // 0x1C8
    UI::TextButton *m_transfer5000RUsButton; // 0x1CC
    UI::TextButton *m_transferAllRUsButton; // 0x1D0
    bool m_needUpdate; // 0x1D4
    __int32 m_playerID; // 0x1D8
    bool m_allyRequest[6]; // 0x1DC
    void HandleAllianceEvents();
    static void OnPlayerSelect(UI::InterfaceElement *sender);
    static void OnRequestAlliance(UI::InterfaceElement *sender);
    static void OnBreakAlliance(UI::InterfaceElement *sender);
    static void OnIgnoreAlliance(UI::InterfaceElement *sender);
    static void OnTransferShips(UI::InterfaceElement *sender);
    static void OnTransfer500RUs(UI::InterfaceElement *sender);
    static void OnTransfer1000RUs(UI::InterfaceElement *sender);
    static void OnTransfer5000RUs(UI::InterfaceElement *sender);
    static void OnTransferAllRUs(UI::InterfaceElement *sender);
public:
    UI::DiplomacyScreen &operator=(UI::DiplomacyScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::DiplomacyScreen) == 484, "Invalid UI::DiplomacyScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline __int32 UI::DiplomacyScreen::GetSelectedPlayer() const // 0x57404A
{
    mangled_assert("?GetSelectedPlayer@DiplomacyScreen@UI@@QBEHXZ");
    todo("implement");
}

_inline void UI::DiplomacyScreen::NeedUpdate() // 0x5740D1
{
    mangled_assert("?NeedUpdate@DiplomacyScreen@UI@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DIPLOMACYSCREEN_H__
#endif
