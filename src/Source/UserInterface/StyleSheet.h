#if 0
#ifndef __STYLESHEET_H__
#define __STYLESHEET_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::StyleSheet
{
public:
    static UI::StyleSheet *i();
    static bool Create();
    static bool Destroy();
    ~StyleSheet();
    void Load(char const *, char const *);
    _inline UI::InterfaceElement *GetDefaultElementStyle();
    _inline UI::NewText *GetDefaultTextStyle();
    _inline UI::ScrollView *GetDefaultScrollViewStyle();
    _inline UI::TextButton *GetDefaultButtonStyle();
    _inline UI::NewScrollBar *GetDefaultScrollBarStyle();
    _inline UI::NewListBox *GetDefaultListBoxStyle();
    _inline UI::NewDropDownListBox *GetDefaultDropDownListBoxStyle();
    _inline UI::NewTextInput *GetDefaultTextInputStyle();
    _inline UI::Table *GetDefaultTableStyle();
    char const *FindAttribute(char const *);
    UI::InterfaceElement *FindElementStyle(LuaConfig &, char const *);
    UI::InterfaceElement *FindElementStyle(char const *);
    UI::NewText *FindTextStyle(LuaConfig &, char const *);
    UI::NewText *FindTextStyle(char const *);
    UI::ScrollView *FindScrollViewStyle(LuaConfig &, char const *);
    UI::ScrollView *FindScrollViewStyle(char const *);
    UI::TextButton *FindButtonStyle(LuaConfig &, char const *);
    UI::TextButton *FindButtonStyle(char const *);
    UI::NewScrollBar *FindScrollBarStyle(LuaConfig &, char const *);
    UI::NewScrollBar *FindScrollBarStyle(char const *);
    UI::NewListBox *FindListBoxStyle(LuaConfig &, char const *);
    UI::NewListBox *FindListBoxStyle(char const *);
    UI::NewDropDownListBox *FindDropDownListBoxStyle(LuaConfig &, char const *);
    UI::NewDropDownListBox *FindDropDownListBoxStyle(char const *);
    UI::NewTextInput *FindTextInputStyle(LuaConfig &, char const *);
    UI::NewTextInput *FindTextInputStyle(char const *);
    UI::Table *FindTableStyle(LuaConfig &, char const *);
    UI::Table *FindTableStyle(char const *);
    char const *GetName() const;
    char const *GetFilename() const;
private:
    static UI::StyleSheet *ms_i;
public:
    StyleSheet(UI::StyleSheet const &); /* compiler_generated() */
private:
    StyleSheet();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filename; // 0x18
    bool m_usePixelUVCoords; // 0x30
    std::list<UI::InterfaceElement *,std::allocator<UI::InterfaceElement *> > m_listStyles; // 0x34
    std::list<UI::NewText *,std::allocator<UI::NewText *> > m_listTextStyles; // 0x3C
    std::list<UI::ScrollView *,std::allocator<UI::ScrollView *> > m_listScrollViewStyles; // 0x44
    std::list<UI::TextButton *,std::allocator<UI::TextButton *> > m_listButtonStyles; // 0x4C
    std::list<UI::NewScrollBar *,std::allocator<UI::NewScrollBar *> > m_listScrollBarStyles; // 0x54
    std::list<UI::NewListBox *,std::allocator<UI::NewListBox *> > m_listListBoxStyles; // 0x5C
    std::list<UI::NewDropDownListBox *,std::allocator<UI::NewDropDownListBox *> > m_listDropDownListBoxStyles; // 0x64
    std::list<UI::NewTextInput *,std::allocator<UI::NewTextInput *> > m_listTextInputStyles; // 0x6C
    std::list<UI::Table *,std::allocator<UI::Table *> > m_listTableStyles; // 0x74
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > m_mapAttributes; // 0x7C
    UI::InterfaceElement *m_defStyle; // 0x9C
    UI::NewText *m_defTextStyle; // 0xA0
    UI::ScrollView *m_defScrollViewStyle; // 0xA4
    UI::TextButton *m_defButtonStyle; // 0xA8
    UI::NewScrollBar *m_defScrollBarStyle; // 0xAC
    UI::NewListBox *m_defListBoxStyle; // 0xB0
    UI::NewDropDownListBox *m_defDropDownListBoxStyle; // 0xB4
    UI::NewTextInput *m_defTextInputStyle; // 0xB8
    UI::Table *m_defTableStyle; // 0xBC
    void LoadStyle(LuaConfig &, char const *, char const *);
public:
    UI::StyleSheet &operator=(UI::StyleSheet const &); /* compiler_generated() */
};
static_assert(sizeof(UI::StyleSheet) == 192, "Invalid UI::StyleSheet size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::InterfaceElement *_sub_66B6BD(UI::StyleSheet *const);
_inline UI::InterfaceElement *UI::StyleSheet::GetDefaultElementStyle() // 0x66B6BD
{
    mangled_assert("?GetDefaultElementStyle@StyleSheet@UI@@QAEPAVInterfaceElement@2@XZ");
    todo("implement");
    UI::InterfaceElement * __result = _sub_66B6BD(this);
    return __result;
}

_extern UI::NewText *_sub_67E878(UI::StyleSheet *const);
_inline UI::NewText *UI::StyleSheet::GetDefaultTextStyle() // 0x67E878
{
    mangled_assert("?GetDefaultTextStyle@StyleSheet@UI@@QAEPAVNewText@2@XZ");
    todo("implement");
    UI::NewText * __result = _sub_67E878(this);
    return __result;
}

_extern UI::ScrollView *_sub_68BF6C(UI::StyleSheet *const);
_inline UI::ScrollView *UI::StyleSheet::GetDefaultScrollViewStyle() // 0x68BF6C
{
    mangled_assert("?GetDefaultScrollViewStyle@StyleSheet@UI@@QAEPAVScrollView@2@XZ");
    todo("implement");
    UI::ScrollView * __result = _sub_68BF6C(this);
    return __result;
}

_extern UI::TextButton *_sub_67DCD1(UI::StyleSheet *const);
_inline UI::TextButton *UI::StyleSheet::GetDefaultButtonStyle() // 0x67DCD1
{
    mangled_assert("?GetDefaultButtonStyle@StyleSheet@UI@@QAEPAVTextButton@2@XZ");
    todo("implement");
    UI::TextButton * __result = _sub_67DCD1(this);
    return __result;
}

_extern UI::NewScrollBar *_sub_681778(UI::StyleSheet *const);
_inline UI::NewScrollBar *UI::StyleSheet::GetDefaultScrollBarStyle() // 0x681778
{
    mangled_assert("?GetDefaultScrollBarStyle@StyleSheet@UI@@QAEPAVNewScrollBar@2@XZ");
    todo("implement");
    UI::NewScrollBar * __result = _sub_681778(this);
    return __result;
}

_extern UI::NewListBox *_sub_67C6DE(UI::StyleSheet *const);
_inline UI::NewListBox *UI::StyleSheet::GetDefaultListBoxStyle() // 0x67C6DE
{
    mangled_assert("?GetDefaultListBoxStyle@StyleSheet@UI@@QAEPAVNewListBox@2@XZ");
    todo("implement");
    UI::NewListBox * __result = _sub_67C6DE(this);
    return __result;
}

_extern UI::NewDropDownListBox *_sub_683126(UI::StyleSheet *const);
_inline UI::NewDropDownListBox *UI::StyleSheet::GetDefaultDropDownListBoxStyle() // 0x683126
{
    mangled_assert("?GetDefaultDropDownListBoxStyle@StyleSheet@UI@@QAEPAVNewDropDownListBox@2@XZ");
    todo("implement");
    UI::NewDropDownListBox * __result = _sub_683126(this);
    return __result;
}

_extern UI::NewTextInput *_sub_68933B(UI::StyleSheet *const);
_inline UI::NewTextInput *UI::StyleSheet::GetDefaultTextInputStyle() // 0x68933B
{
    mangled_assert("?GetDefaultTextInputStyle@StyleSheet@UI@@QAEPAVNewTextInput@2@XZ");
    todo("implement");
    UI::NewTextInput * __result = _sub_68933B(this);
    return __result;
}

_extern UI::Table *_sub_685786(UI::StyleSheet *const);
_inline UI::Table *UI::StyleSheet::GetDefaultTableStyle() // 0x685786
{
    mangled_assert("?GetDefaultTableStyle@StyleSheet@UI@@QAEPAVTable@2@XZ");
    todo("implement");
    UI::Table * __result = _sub_685786(this);
    return __result;
}

/* ---------- private code */

#endif // __STYLESHEET_H__
#endif
