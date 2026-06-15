#if 0
#ifndef __NEWUISCREEN_H__
#define __NEWUISCREEN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewUIScreen
{
public:
    NewUIScreen(UI::NewUIScreen const &); /* compiler_generated() */
    NewUIScreen(char const *);
    virtual ~NewUIScreen();
    virtual void Draw();
    virtual void Update(unsigned __int32);
    _inline void Resize(__int32, __int32);
    void Resize(UI::Size const &);
    _inline void Move(__int32, __int32);
    void Move(Vector_2i const &);
    UI::InterfaceElement *AddElement(UI::InterfaceElement *);
    UI::InterfaceElement *RemoveElement(UI::InterfaceElement *);
    UI::InterfaceElement *FindNamedElement(char const *);
    UI::InterfaceElement *FindElement(unsigned __int32);
    void NextScreen(UI::ScreenTransitionType);
    void PreviousScreen(UI::ScreenTransitionType);
    void Load(char const *, char const *, bool);
    bool RegionsContainPoint(Vector_2i const &);
    static void OnElementDestruction(UI::InterfaceElement *e);
    static Vector_2i GetCurrentMousePosition();
    static void DrawChildren(UI::InterfaceElement *element);
    _inline void SetEnabled(bool);
    void SetName(char const *);
    _inline void SetType(char const *);
    _inline void SetNextScreen(char const *);
    _inline void SetPreviousScreen(char const *);
    void SetActive(bool);
    void SetCaptureInput(bool);
    _inline void SetCallUpdateWhenInactive(bool);
    void SetCanMouseClickThrough(bool);
    _inline bool GetEnabled() const;
    _inline Vector_2i GetPosition() const;
    _inline Vector_2i GetSize() const;
    _inline Rect_i GetDimensions() const;
    _inline char const *GetName() const;
    char const *GetFilename() const;
    char const *GetType() const;
    char const *GetNextScreen() const;
    _inline char const *GetPreviousScreen() const;
    _inline bool GetActive() const;
    _inline unsigned __int32 GetID() const;
    UI::UIScreenInfo GetUIScreenInfo() const;
    _inline UI::NewFrame *GetRootElement();
    region *GetRegion(unsigned __int32) const;
    _inline bool GetCallUpdateWhenInactive() const;
    _inline bool GetCanMouseClickThrough() const;
    virtual _inline void OnFocus(bool);
protected:
    void Init();
    virtual _inline void OnResize(UI::Size const &);
    virtual _inline void OnActivate(bool);
    virtual _inline void OnPostActivate(bool);
    virtual _inline void OnPreLoadFile(LuaConfig &);
    virtual _inline void OnPreLoad(LuaConfig &);
    virtual _inline void OnLoad(LuaConfig &);
    virtual _inline void OnPostLoad();
    virtual _inline void OnKeyPressed(unsigned char, UI::KeyModifier const &);
    virtual _inline void OnKeyReleased(unsigned char, UI::KeyModifier const &);
    virtual _inline void OnKeyRepeat(unsigned char, UI::KeyModifier const &);
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filename; // 0x4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x1C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_type; // 0x34
    bool m_active; // 0x4C
    Rect_i m_size; // 0x50
    UI::NewFrame *m_rootElement; // 0x60
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_stylesheet; // 0x64
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_nextScreen; // 0x7C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_prevScreen; // 0x94
    KeyBindingList m_bindings; // 0xAC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnUpdate; // 0xB4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnShow; // 0xCC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnHide; // 0xE4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnDraw; // 0xFC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnResize; // 0x114
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_luaOnLoad; // 0x12C
    unsigned __int32 m_halign; // 0x144
    unsigned __int32 m_valign; // 0x148
    std::vector<region *,std::allocator<region *> > m_regions; // 0x14C
    bool m_claimMousePress; // 0x158
    std::vector<Rect_i,std::allocator<Rect_i> > m_regionList; // 0x15C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnShow; // 0x168
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_soundOnHide; // 0x180
    bool m_callUpdateWhenInactive; // 0x198
    bool m_canMouseClickThrough; // 0x199
    void UpdateChildren(UI::InterfaceElement *, unsigned __int32);
    void RebuildRegions();
    void DeleteRegions();
public:
    UI::NewUIScreen &operator=(UI::NewUIScreen const &); /* compiler_generated() */
};
static_assert(sizeof(UI::NewUIScreen) == 412, "Invalid UI::NewUIScreen size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void UI::NewUIScreen::Resize(__int32, __int32) // 0x581C35
{
    mangled_assert("?Resize@NewUIScreen@UI@@QAEXHH@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::Move(__int32, __int32) // 0x5776B3
{
    mangled_assert("?Move@NewUIScreen@UI@@QAEXHH@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::SetEnabled(bool) // 0x45012C
{
    mangled_assert("?SetEnabled@NewUIScreen@UI@@QAEX_N@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::SetType(char const *) // 0x6731AC
{
    mangled_assert("?SetType@NewUIScreen@UI@@QAEXPBD@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::SetNextScreen(char const *) // 0x45E057
{
    mangled_assert("?SetNextScreen@NewUIScreen@UI@@QAEXPBD@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::SetPreviousScreen(char const *) // 0x5A7C52
{
    mangled_assert("?SetPreviousScreen@NewUIScreen@UI@@QAEXPBD@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::SetCallUpdateWhenInactive(bool) // 0x571298
{
    mangled_assert("?SetCallUpdateWhenInactive@NewUIScreen@UI@@QAEX_N@Z");
    todo("implement");
}

_inline bool UI::NewUIScreen::GetEnabled() const // 0x672251
{
    mangled_assert("?GetEnabled@NewUIScreen@UI@@QBE_NXZ");
    todo("implement");
}

_inline Vector_2i UI::NewUIScreen::GetPosition() const // 0x57767A
{
    mangled_assert("?GetPosition@NewUIScreen@UI@@QBE?AUVector_2i@@XZ");
    todo("implement");
}

_inline Vector_2i UI::NewUIScreen::GetSize() const // 0x577692
{
    mangled_assert("?GetSize@NewUIScreen@UI@@QBE?AUVector_2i@@XZ");
    todo("implement");
}

_inline Rect_i UI::NewUIScreen::GetDimensions() const // 0x57F982
{
    mangled_assert("?GetDimensions@NewUIScreen@UI@@QBE?AURect_i@@XZ");
    todo("implement");
}

_inline char const *UI::NewUIScreen::GetName() const // 0x452AD8
{
    mangled_assert("?GetName@NewUIScreen@UI@@QBEPBDXZ");
    todo("implement");
}

_inline char const *UI::NewUIScreen::GetPreviousScreen() const // 0x5783A1
{
    mangled_assert("?GetPreviousScreen@NewUIScreen@UI@@QBEPBDXZ");
    todo("implement");
}

_inline bool UI::NewUIScreen::GetActive() const // 0x44FE08
{
    mangled_assert("?GetActive@NewUIScreen@UI@@QBE_NXZ");
    todo("implement");
}

_inline unsigned __int32 UI::NewUIScreen::GetID() const // 0x5727DE
{
    mangled_assert("?GetID@NewUIScreen@UI@@QBEIXZ");
    todo("implement");
}

_inline UI::NewFrame *UI::NewUIScreen::GetRootElement() // 0x572834
{
    mangled_assert("?GetRootElement@NewUIScreen@UI@@QAEPAVNewFrame@2@XZ");
    todo("implement");
}

_inline bool UI::NewUIScreen::GetCallUpdateWhenInactive() const // 0x67223F
{
    mangled_assert("?GetCallUpdateWhenInactive@NewUIScreen@UI@@QBE_NXZ");
    todo("implement");
}

_inline bool UI::NewUIScreen::GetCanMouseClickThrough() const // 0x672246
{
    mangled_assert("?GetCanMouseClickThrough@NewUIScreen@UI@@QBE_NXZ");
    todo("implement");
}

_inline void UI::NewUIScreen::OnFocus(bool) // 0x56FE4A
{
    mangled_assert("?OnFocus@NewUIScreen@UI@@UAEX_N@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::OnResize(UI::Size const &) // 0x5700A2
{
    mangled_assert("?OnResize@NewUIScreen@UI@@MAEXABVSize@2@@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::OnActivate(bool) // 0x578AB7
{
    mangled_assert("?OnActivate@NewUIScreen@UI@@MAEX_N@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::OnPostActivate(bool) // 0x570034
{
    mangled_assert("?OnPostActivate@NewUIScreen@UI@@MAEX_N@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::OnPreLoadFile(LuaConfig &) // 0x57009F
{
    mangled_assert("?OnPreLoadFile@NewUIScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::OnPreLoad(LuaConfig &) // 0x57009C
{
    mangled_assert("?OnPreLoad@NewUIScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::OnLoad(LuaConfig &) // 0x574234
{
    mangled_assert("?OnLoad@NewUIScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::OnPostLoad() // 0x597E36
{
    mangled_assert("?OnPostLoad@NewUIScreen@UI@@MAEXXZ");
    todo("implement");
}

_inline void UI::NewUIScreen::OnKeyPressed(unsigned char, UI::KeyModifier const &) // 0x56FE4D
{
    mangled_assert("?OnKeyPressed@NewUIScreen@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::OnKeyReleased(unsigned char, UI::KeyModifier const &) // 0x56FE50
{
    mangled_assert("?OnKeyReleased@NewUIScreen@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

_inline void UI::NewUIScreen::OnKeyRepeat(unsigned char, UI::KeyModifier const &) // 0x56FE53
{
    mangled_assert("?OnKeyRepeat@NewUIScreen@UI@@MAEXEABVKeyModifier@2@@Z");
    todo("implement");
}

_inline UI::Table *UI::NewUIScreen::FindScriptedElement<UI::Table>(char const *, bool) // 0x5B46F6
{
    mangled_assert("??$FindScriptedElement@VTable@UI@@@NewUIScreen@UI@@QAEPAVTable@1@PBD_N@Z");
    todo("implement");
}

_inline UI::NewTextInput *UI::NewUIScreen::FindScriptedElement<UI::NewTextInput>(char const *, bool) // 0x595341
{
    mangled_assert("??$FindScriptedElement@VNewTextInput@UI@@@NewUIScreen@UI@@QAEPAVNewTextInput@1@PBD_N@Z");
    todo("implement");
}

_inline UI::DestinationTextInput *UI::NewUIScreen::FindScriptedElement<UI::DestinationTextInput>(char const *, bool) // 0x586216
{
    mangled_assert("??$FindScriptedElement@VDestinationTextInput@UI@@@NewUIScreen@UI@@QAEPAVDestinationTextInput@1@PBD_N@Z");
    todo("implement");
}

_inline UI::TextButton *UI::NewUIScreen::FindScriptedElement<UI::TextButton>(char const *, bool) // 0x586222
{
    mangled_assert("??$FindScriptedElement@VTextButton@UI@@@NewUIScreen@UI@@QAEPAVTextButton@1@PBD_N@Z");
    todo("implement");
}

_inline UI::ListBoxItem *UI::NewUIScreen::FindScriptedElement<UI::ListBoxItem>(char const *, bool) // 0x579F60
{
    mangled_assert("??$FindScriptedElement@VListBoxItem@UI@@@NewUIScreen@UI@@QAEPAVListBoxItem@1@PBD_N@Z");
    todo("implement");
}

_inline UI::NewListBox *UI::NewUIScreen::FindScriptedElement<UI::NewListBox>(char const *, bool) // 0x579F6C
{
    mangled_assert("??$FindScriptedElement@VNewListBox@UI@@@NewUIScreen@UI@@QAEPAVNewListBox@1@PBD_N@Z");
    todo("implement");
}

_inline UI::ProgressBar *UI::NewUIScreen::FindScriptedElement<UI::ProgressBar>(char const *, bool) // 0x579F78
{
    mangled_assert("??$FindScriptedElement@VProgressBar@UI@@@NewUIScreen@UI@@QAEPAVProgressBar@1@PBD_N@Z");
    todo("implement");
}

_inline UI::NewDropDownListBox *UI::NewUIScreen::FindScriptedElement<UI::NewDropDownListBox>(char const *, bool) // 0x577C8A
{
    mangled_assert("??$FindScriptedElement@VNewDropDownListBox@UI@@@NewUIScreen@UI@@QAEPAVNewDropDownListBox@1@PBD_N@Z");
    todo("implement");
}

_inline UI::NewScrollBar *UI::NewUIScreen::FindScriptedElement<UI::NewScrollBar>(char const *, bool) // 0x577C96
{
    mangled_assert("??$FindScriptedElement@VNewScrollBar@UI@@@NewUIScreen@UI@@QAEPAVNewScrollBar@1@PBD_N@Z");
    todo("implement");
}

_inline UI::RadioButton *UI::NewUIScreen::FindScriptedElement<UI::RadioButton>(char const *, bool) // 0x577CA2
{
    mangled_assert("??$FindScriptedElement@VRadioButton@UI@@@NewUIScreen@UI@@QAEPAVRadioButton@1@PBD_N@Z");
    todo("implement");
}

_inline UI::TextListBoxItem *UI::NewUIScreen::FindScriptedElement<UI::TextListBoxItem>(char const *, bool) // 0x577CAE
{
    mangled_assert("??$FindScriptedElement@VTextListBoxItem@UI@@@NewUIScreen@UI@@QAEPAVTextListBoxItem@1@PBD_N@Z");
    todo("implement");
}

_inline UI::NewButton *UI::NewUIScreen::FindScriptedElement<UI::NewButton>(char const *, bool) // 0x575A86
{
    mangled_assert("??$FindScriptedElement@VNewButton@UI@@@NewUIScreen@UI@@QAEPAVNewButton@1@PBD_N@Z");
    todo("implement");
}

_inline UI::NewFrame *UI::NewUIScreen::FindScriptedElement<UI::NewFrame>(char const *, bool) // 0x575A92
{
    mangled_assert("??$FindScriptedElement@VNewFrame@UI@@@NewUIScreen@UI@@QAEPAVNewFrame@1@PBD_N@Z");
    todo("implement");
}

_inline UI::NewTextLabel *UI::NewUIScreen::FindScriptedElement<UI::NewTextLabel>(char const *, bool) // 0x44F401
{
    mangled_assert("??$FindScriptedElement@VNewTextLabel@UI@@@NewUIScreen@UI@@QAEPAVNewTextLabel@1@PBD_N@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __NEWUISCREEN_H__
#endif
