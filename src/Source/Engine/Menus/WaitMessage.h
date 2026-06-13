#if 0
#ifndef __WAITMESSAGE_H__
#define __WAITMESSAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::WaitMessage :
    public UI::NewUIScreen
{
public:
    WaitMessage(UI::WaitMessage const &); /* compiler_generated() */
    WaitMessage(char const *);
    virtual ~WaitMessage() override;
    static void Show(wchar_t const *message, bool bCancel);
    static void Hide();
    static void SetMessage(wchar_t const *message);
    static void DisconnectSlots();
    static void ConnectOnCancel(void (*f)(UI::InterfaceElement *));
protected:
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    static void OnCancelClicked(UI::InterfaceElement *sender);
private:
    UI::NewButton *m_btnCancel; // 0x19C
    UI::NewTextLabel *m_lblMessage; // 0x1A0
    UI::UISignal m_onCancel; // 0x1A4
public:
    UI::WaitMessage &operator=(UI::WaitMessage const &); /* compiler_generated() */
};
static_assert(sizeof(UI::WaitMessage) == 432, "Invalid UI::WaitMessage size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __WAITMESSAGE_H__
#endif
