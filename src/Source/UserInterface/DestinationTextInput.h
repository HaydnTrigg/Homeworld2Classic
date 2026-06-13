#if 0
#ifndef __DESTINATIONTEXTINPUT_H__
#define __DESTINATIONTEXTINPUT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::DestinationTextInput :
    public UI::NewTextInput
{
public:
    DestinationTextInput(UI::NewTextInput const &);
    DestinationTextInput(LuaConfig &);
    DestinationTextInput(UI::DestinationTextInput const &);
    virtual ~DestinationTextInput() override;
    void ClearNames();
    void PushName(wchar_t const *);
    _inline void SetPrefix(wchar_t const *);
    _inline void SetFancyFormat(wchar_t const *);
    _inline void SetSuffix(wchar_t const *);
    virtual _inline void ConnectOnAccept(void (*)(UI::InterfaceElement *)) override;
    virtual _inline void ConnectOnType(void (*)(UI::InterfaceElement *)) override;
    virtual _inline void ConnectOnKeypress(void (*)(UI::InterfaceElement *));
    _inline __int32 GetDestination() const;
    _inline wchar_t const *GetName(unsigned __int32);
private:
    void OnAccept();
    static void OnAccept(UI::InterfaceElement *sender);
    void OnType();
    static void OnType(UI::InterfaceElement *sender);
    void OnKeypress();
    static void OnKeypress(UI::InterfaceElement *sender);
    void DefaultSettings();
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_nameString; // 0x580
    std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > m_nameStrings; // 0x598
    __int32 m_destination; // 0x5A4
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_prefix; // 0x5A8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_fancyFormat; // 0x5C0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_suffix; // 0x5D8
    UI::UISignal m_onAccept; // 0x5F0
    UI::UISignal m_onType; // 0x5FC
    UI::UISignal m_onKeypress; // 0x608
public:
    UI::DestinationTextInput &operator=(UI::DestinationTextInput const &); /* compiler_generated() */
};
static_assert(sizeof(UI::DestinationTextInput) == 1560, "Invalid UI::DestinationTextInput size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_5712E0(UI::DestinationTextInput *const, wchar_t const *);
_inline void UI::DestinationTextInput::SetPrefix(wchar_t const *) // 0x5712E0
{
    mangled_assert("?SetPrefix@DestinationTextInput@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_5712E0(this, arg);
}

_extern void _sub_5712B2(UI::DestinationTextInput *const, wchar_t const *);
_inline void UI::DestinationTextInput::SetFancyFormat(wchar_t const *) // 0x5712B2
{
    mangled_assert("?SetFancyFormat@DestinationTextInput@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_5712B2(this, arg);
}

_extern void _sub_571301(UI::DestinationTextInput *const, wchar_t const *);
_inline void UI::DestinationTextInput::SetSuffix(wchar_t const *) // 0x571301
{
    mangled_assert("?SetSuffix@DestinationTextInput@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_571301(this, arg);
}

_extern void _sub_67F120(UI::DestinationTextInput *const, void (*)(UI::InterfaceElement *));
_inline void UI::DestinationTextInput::ConnectOnAccept(void (*)(UI::InterfaceElement *)) // 0x67F120
{
    mangled_assert("?ConnectOnAccept@DestinationTextInput@UI@@UAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
    _sub_67F120(this, arg);
}

_extern void _sub_67F1C8(UI::DestinationTextInput *const, void (*)(UI::InterfaceElement *));
_inline void UI::DestinationTextInput::ConnectOnType(void (*)(UI::InterfaceElement *)) // 0x67F1C8
{
    mangled_assert("?ConnectOnType@DestinationTextInput@UI@@UAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
    _sub_67F1C8(this, arg);
}

_extern void _sub_67F190(UI::DestinationTextInput *const, void (*)(UI::InterfaceElement *));
_inline void UI::DestinationTextInput::ConnectOnKeypress(void (*)(UI::InterfaceElement *)) // 0x67F190
{
    mangled_assert("?ConnectOnKeypress@DestinationTextInput@UI@@UAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
    _sub_67F190(this, arg);
}

_extern __int32 _sub_570BA3(UI::DestinationTextInput const *const);
_inline __int32 UI::DestinationTextInput::GetDestination() const // 0x570BA3
{
    mangled_assert("?GetDestination@DestinationTextInput@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_570BA3(this);
    return __result;
}

_extern wchar_t const *_sub_570BB5(UI::DestinationTextInput *const, unsigned __int32);
_inline wchar_t const *UI::DestinationTextInput::GetName(unsigned __int32) // 0x570BB5
{
    mangled_assert("?GetName@DestinationTextInput@UI@@QAEPB_WI@Z");
    todo("implement");
    wchar_t const * __result = _sub_570BB5(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __DESTINATIONTEXTINPUT_H__
#endif
