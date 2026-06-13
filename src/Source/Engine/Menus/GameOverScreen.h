#if 0
#ifndef __GAMEOVERSCREEN_H__
#define __GAMEOVERSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::GameOverScreen :
    public UI::NewUIScreen
{
public:
    enum GameOverScreenType
    {
        GOST_Victory = 0,
        GOST_Defeat,
        GOST_Exit,
    };
    GameOverScreen(UI::GameOverScreen const &); /* compiler_generated() */
    GameOverScreen(char const *);
    virtual ~GameOverScreen() override;
    static void Show(UI::GameOverScreen::GameOverScreenType type);
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    boost::scoped_ptr<UI::GameOverScreenData> m_pimpl; // 0x19C
    static UI::GameOverScreen *ms_screen;
public:
    UI::GameOverScreen &operator=(UI::GameOverScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::GameOverScreen) == 416, "Invalid UI::GameOverScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GAMEOVERSCREEN_H__
#endif
