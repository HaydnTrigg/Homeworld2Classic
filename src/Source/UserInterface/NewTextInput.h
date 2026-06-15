#if 0
#ifndef __NEWTEXTINPUT_H__
#define __NEWTEXTINPUT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewTextInput :
    public UI::NewTextLabel
{
public:
    NewTextInput(LuaConfig &);
    NewTextInput(UI::NewTextInput const &);
    NewTextInput(UI::InterfaceElement *, char const *);
    virtual ~NewTextInput() override;
    UI::NewTextInput const &operator=(UI::NewTextInput const &);
    virtual _inline UI::InterfaceElement *clone() override;
    virtual _inline void ConnectOnAccept(void (*)(UI::InterfaceElement *));
    virtual _inline void ConnectOnCancel(void (*)(UI::InterfaceElement *));
    _inline void ConnectOnKeypress(void (*)(UI::InterfaceElement *));
    virtual _inline void ConnectOnType(void (*)(UI::InterfaceElement *));
    virtual _inline void ConnectOnEdit(void (*)(UI::InterfaceElement *));
    virtual void SetText(wchar_t const *, bool) override;
    _inline wchar_t const *GetText() const;
    _inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &GetTextString();
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    void SetReadOnly(bool);
    void SetCursorPosition(unsigned __int32);
    void SetCursorPositionToEnd();
    _inline unsigned __int32 GetCursorPosition();
    void ClearInput();
protected:
    virtual void OnUpdate(unsigned __int32) override;
    virtual void OnKeyPressed(unsigned char, UI::KeyModifier const &) override;
    virtual void OnKeyReleased(unsigned char, UI::KeyModifier const &) override;
    virtual void OnKeyRepeat(unsigned char, UI::KeyModifier const &) override;
    virtual void OnFocus(bool) override;
    virtual void OnMousePressed(Vector_2i const &, UI::MouseButton const &) override;
    void Load(LuaConfig &);
private:
    virtual void HandleKeyPressed(unsigned char, UI::KeyModifier const &);
    unsigned __int32 m_cursorPos; // 0x4A8
    unsigned __int32 m_cursorDelay; // 0x4AC
    Color_4b m_cursorColor; // 0x4B0
    unsigned __int32 m_cursorWidth; // 0x4B4
    __int32 m_maxStringLen; // 0x4B8
    unsigned __int32 m_cursorFlash; // 0x4BC
    bool m_password; // 0x4C0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_entryText; // 0x4C4
    bool m_readOnly; // 0x4DC
    UI::UISignal m_onAccept; // 0x4E0
    UI::UISignal m_onCancel; // 0x4EC
    UI::UISignal m_onKeypress; // 0x4F8
    UI::UISignal m_onType; // 0x504
    UI::UISignal m_onEdit; // 0x510
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnAccept; // 0x51C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnCancel; // 0x534
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnAccept; // 0x54C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnCancel; // 0x564
    void SetTextInternal(wchar_t const *, bool);
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::NewTextInput) == 1408, "Invalid UI::NewTextInput size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UI::InterfaceElement *UI::NewTextInput::clone() // 0x67F812
{
    mangled_assert("?clone@NewTextInput@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline void UI::NewTextInput::ConnectOnAccept(void (*)(UI::InterfaceElement *)) // 0x67F13C
{
    mangled_assert("?ConnectOnAccept@NewTextInput@UI@@UAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

_inline void UI::NewTextInput::ConnectOnCancel(void (*)(UI::InterfaceElement *)) // 0x67F158
{
    mangled_assert("?ConnectOnCancel@NewTextInput@UI@@UAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

_inline void UI::NewTextInput::ConnectOnKeypress(void (*)(UI::InterfaceElement *)) // 0x67F1AC
{
    mangled_assert("?ConnectOnKeypress@NewTextInput@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

_inline void UI::NewTextInput::ConnectOnType(void (*)(UI::InterfaceElement *)) // 0x67F1E4
{
    mangled_assert("?ConnectOnType@NewTextInput@UI@@UAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

_inline void UI::NewTextInput::ConnectOnEdit(void (*)(UI::InterfaceElement *)) // 0x67F174
{
    mangled_assert("?ConnectOnEdit@NewTextInput@UI@@UAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
}

_inline wchar_t const *UI::NewTextInput::GetText() const // 0x570BF0
{
    mangled_assert("?GetText@NewTextInput@UI@@QBEPB_WXZ");
    todo("implement");
}

_inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &UI::NewTextInput::GetTextString() // 0x5B2BBC
{
    mangled_assert("?GetTextString@NewTextInput@UI@@QAEAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ");
    todo("implement");
}

_inline unsigned __int32 UI::NewTextInput::GetCursorPosition() // 0x67F256
{
    mangled_assert("?GetCursorPosition@NewTextInput@UI@@QAEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __NEWTEXTINPUT_H__
#endif
