#if 0
#ifndef __NEWTEXT_H__
#define __NEWTEXT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewText
{
public:
    NewText(LuaConfig &);
    NewText(UI::NewText const &);
    NewText(wchar_t const *);
    ~NewText();
    UI::NewText const &operator=(UI::NewText const &);
    void SetText(wchar_t const *, bool);
    _inline wchar_t const *GetText() const;
    wchar_t const *GetWrappedText() const;
    _inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &GetTextString();
    _inline char const *GetName() const;
    _inline char const *GetFont() const;
    _inline Color_4b GetColor() const;
    _inline unsigned __int32 GetVAlign() const;
    _inline unsigned __int32 GetHAlign() const;
    _inline Vector_2i GetOffset() const;
    _inline bool GetDropShadow() const;
    _inline void SetName(char const *);
    void SetFont(char const *);
    _inline void SetColor(Color_4b const &);
    void SetVAlign(unsigned __int32);
    void SetHAlign(unsigned __int32);
    _inline void SetOffset(Vector_2i const &);
    _inline void SetDropShadow(bool);
    void Draw(Rect_i const &, Rect_i const &);
    void Load(LuaConfig &);
    bool NeedsRecompile() const;
    void SetRecompiled();
    void SetWrapWidth(long);
    void ClearWrap();
    long GetWrapWidth() const;
    void GetSize(long &, long &);
    void GetStringSize(wchar_t const *, long &, long &);
    void GetTextCharOffset(Rect_i const &, long, long &, long &);
    void ConvertSubstringToNewline(wchar_t const *);
private:
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_text; // 0x0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_wrappedText; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x30
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_font; // 0x48
    Color_4b m_color; // 0x60
    Vector_2i m_offset; // 0x64
    unsigned __int32 m_typeFace; // 0x6C
    unsigned __int32 m_hAlign; // 0x70
    unsigned __int32 m_vAlign; // 0x74
    bool m_bDirty; // 0x78
    bool m_bFancy; // 0x79
    bool m_bShadow; // 0x7A
    unsigned __int32 m_labelHandle; // 0x7C
    Rect_i m_lastDrawRect; // 0x80
    Rect_i m_lastClipRect; // 0x90
    long m_wrapWidth; // 0xA0
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::NewText) == 164, "Invalid UI::NewText size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline wchar_t const *UI::NewText::GetText() const // 0x576266
{
    mangled_assert("?GetText@NewText@UI@@QBEPB_WXZ");
    todo("implement");
}

_inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &UI::NewText::GetTextString() // 0x689348
{
    mangled_assert("?GetTextString@NewText@UI@@QAEAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ");
    todo("implement");
}

_inline char const *UI::NewText::GetName() const // 0x677C9A
{
    mangled_assert("?GetName@NewText@UI@@QBEPBDXZ");
    todo("implement");
}

_inline char const *UI::NewText::GetFont() const // 0x68B0AC
{
    mangled_assert("?GetFont@NewText@UI@@QBEPBDXZ");
    todo("implement");
}

_inline Color_4b UI::NewText::GetColor() const // 0x57F96B
{
    mangled_assert("?GetColor@NewText@UI@@QBE?AUColor_4b@@XZ");
    todo("implement");
}

_inline unsigned __int32 UI::NewText::GetVAlign() const // 0x68D16B
{
    mangled_assert("?GetVAlign@NewText@UI@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 UI::NewText::GetHAlign() const // 0x68CD0F
{
    mangled_assert("?GetHAlign@NewText@UI@@QBEIXZ");
    todo("implement");
}

_inline Vector_2i UI::NewText::GetOffset() const // 0x5AD50E
{
    mangled_assert("?GetOffset@NewText@UI@@QBE?AUVector_2i@@XZ");
    todo("implement");
}

_inline bool UI::NewText::GetDropShadow() const // 0x68B0A8
{
    mangled_assert("?GetDropShadow@NewText@UI@@QBE_NXZ");
    todo("implement");
}

_inline void UI::NewText::SetName(char const *) // 0x6783BA
{
    mangled_assert("?SetName@NewText@UI@@QAEXPBD@Z");
    todo("implement");
}

_inline void UI::NewText::SetColor(Color_4b const &) // 0x581F60
{
    mangled_assert("?SetColor@NewText@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
}

_inline void UI::NewText::SetOffset(Vector_2i const &) // 0x5AD60D
{
    mangled_assert("?SetOffset@NewText@UI@@QAEXABUVector_2i@@@Z");
    todo("implement");
}

_inline void UI::NewText::SetDropShadow(bool) // 0x68A6B5
{
    mangled_assert("?SetDropShadow@NewText@UI@@QAEX_N@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __NEWTEXT_H__
#endif
