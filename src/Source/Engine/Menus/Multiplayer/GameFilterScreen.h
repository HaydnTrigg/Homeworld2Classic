#if 0
#ifndef __GAMEFILTERSCREEN_H__
#define __GAMEFILTERSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::GameFilterScreen :
    public UI::NewUIScreen
{
public:
    GameFilterScreen(UI::GameFilterScreen const &); /* compiler_generated() */
    GameFilterScreen(char const *);
    virtual ~GameFilterScreen() override;
    void SetGameFilter(UI::GameFilter const &);
    UI::GameFilter const &GetGameFilter() const;
    void DisconnectSlots();
    void ConnectOnAccept(void (*)(UI::InterfaceElement *));
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
private:
    static void OnClearClicked(UI::InterfaceElement *sender);
    static void OnAcceptClicked(UI::InterfaceElement *sender);
    class Data;
    UI::GameFilterScreen::Data *m_pimpl; // 0x19C
public:
    UI::GameFilterScreen &operator=(UI::GameFilterScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::GameFilterScreen) == 416, "Invalid UI::GameFilterScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GAMEFILTERSCREEN_H__
#endif
