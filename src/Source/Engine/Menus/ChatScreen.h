#if 0
#ifndef __CHATSCREEN_H__
#define __CHATSCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::ChatScreen :
    public UI::NewUIScreen
{
public:
    ChatScreen(UI::ChatScreen const &); /* compiler_generated() */
    ChatScreen(char const *);
    virtual ~ChatScreen() override;
    virtual void Update(unsigned __int32) override;
    static void Toggle();
    void SetChatDest(__int32);
    void SendChatMsg(wchar_t const *, __int32);
    _inline void SetHideWhenMessageSent(bool);
    _inline bool GetHideWhenMessageSent() const;
    void ActivateChat();
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual void OnKeyPressed(unsigned char, UI::KeyModifier const &) override;
    virtual void UpdateChatDestinations();
    static void OnChatAccept(UI::InterfaceElement *sender);
    static void OnChatCancel(UI::InterfaceElement *sender);
    static void OnChooseDest(UI::InterfaceElement *sender);
private:
    void NextDest();
    UI::NewListBox *m_listBox; // 0x19C
    UI::ListBoxItem *m_listBoxItem; // 0x1A0
    __int32 m_dest; // 0x1A4
    bool m_hideWhenMessageSent; // 0x1A8
    bool m_isAlive; // 0x1A9
    __int32 m_sayFormatID; // 0x1AC
    __int32 m_whisperFormatID; // 0x1B0
    __int32 m_whisperEchoFormatID; // 0x1B4
    __int32 m_whisperTeamEchoFormatID; // 0x1B8
public:
    UI::ChatScreen &operator=(UI::ChatScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ChatScreen) == 444, "Invalid UI::ChatScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void UI::ChatScreen::SetHideWhenMessageSent(bool) // 0x5712D3
{
    mangled_assert("?SetHideWhenMessageSent@ChatScreen@UI@@QAEX_N@Z");
    todo("implement");
}

_inline bool UI::ChatScreen::GetHideWhenMessageSent() const // 0x570BAE
{
    mangled_assert("?GetHideWhenMessageSent@ChatScreen@UI@@QBE_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CHATSCREEN_H__
#endif
