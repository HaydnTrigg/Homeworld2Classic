#if 0
#ifndef __UIDIALOG_H__
#define __UIDIALOG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::UIDialog :
    public UI::NewUIScreen
{
public:
    typedef UI::NewUIScreen SuperClass;
    UIDialog(UI::UIDialog const &); /* compiler_generated() */
    UIDialog(char const *);
    virtual ~UIDialog() override;
    void Accept();
    void Cancel();
    void DisconnectSlots();
    _inline void ConnectOnAccept(void (*)(UI::InterfaceElement *));
    _inline void ConnectOnCancel(void (*)(UI::InterfaceElement *));
    _inline void SetLuaOnAccept(char const *);
    _inline void SetLuaOnCancel(char const *);
protected:
    virtual void OnLoad(LuaConfig &) override;
    virtual void OnPostLoad() override;
    virtual void OnActivate(bool) override;
    virtual _inline void OnAccept();
    virtual _inline void OnCancel();
private:
    UI::UISignal m_onAccept; // 0x19C
    UI::UISignal m_onCancel; // 0x1A8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnAccept; // 0x1B4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnCancel; // 0x1CC
public:
    UI::UIDialog &operator=(UI::UIDialog const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UIDialog) == 484, "Invalid UI::UIDialog size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void UI::UIDialog::ConnectOnAccept(void (*)(UI::InterfaceElement *)) // 0x44FD7B
{
    mangled_assert("?ConnectOnAccept@UIDialog@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

_inline void UI::UIDialog::ConnectOnCancel(void (*)(UI::InterfaceElement *)) // 0x44FD97
{
    mangled_assert("?ConnectOnCancel@UIDialog@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

_inline void UI::UIDialog::SetLuaOnAccept(char const *) // 0x58D976
{
    mangled_assert("?SetLuaOnAccept@UIDialog@UI@@QAEXPBD@Z");
    todo("implement");
}

_inline void UI::UIDialog::SetLuaOnCancel(char const *) // 0x58FEE0
{
    mangled_assert("?SetLuaOnCancel@UIDialog@UI@@QAEXPBD@Z");
    todo("implement");
}

_inline void UI::UIDialog::OnAccept() // 0x670DDD
{
    mangled_assert("?OnAccept@UIDialog@UI@@MAEXXZ");
    todo("implement");
}

_inline void UI::UIDialog::OnCancel() // 0x670DE1
{
    mangled_assert("?OnCancel@UIDialog@UI@@MAEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __UIDIALOG_H__
#endif
