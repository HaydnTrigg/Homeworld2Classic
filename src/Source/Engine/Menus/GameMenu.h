#if 0
#ifndef __GAMEMENU_H__
#define __GAMEMENU_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::GameMenu :
    public UI::NewUIScreen
{
public:
    enum GameMenuType
    {
        eCampaign = 0,
        eCampaignFailed,
        ePlayerVsCpu,
        ePlayerVsCpuFailed,
        eMultiplayer,
        eMultiplayerFailed,
        eTutorial,
        eRecordedGame,
    };
    GameMenu(UI::GameMenu const &); /* compiler_generated() */
    GameMenu(char const *);
    virtual ~GameMenu() override;
    static _inline void SetGamePauseState(bool paused);
    static _inline bool IsGamePaused();
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    boost::scoped_ptr<UI::GameMenuData> m_pimpl; // 0x19C
    static bool ms_isGamePaused;
    void SetGameMenuType(UI::GameMenu::GameMenuType);
    void ValidateLoadButtons();
    static void OnSaveButtonClicked(UI::InterfaceElement *);
    static void OnLoadButtonClicked(UI::InterfaceElement *);
public:
    UI::GameMenu &operator=(UI::GameMenu const &); /* compiler_generated() */
};
static_assert(sizeof(UI::GameMenu) == 416, "Invalid UI::GameMenu size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void UI::GameMenu::SetGamePauseState(bool paused) // 0x450134
{
    mangled_assert("?SetGamePauseState@GameMenu@UI@@SGX_N@Z");
    todo("implement");
}

_inline bool UI::GameMenu::IsGamePaused() // 0x44FF60
{
    mangled_assert("?IsGamePaused@GameMenu@UI@@SG_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __GAMEMENU_H__
#endif
