#if 0
#ifndef __NEWTEXTLABEL_H__
#define __NEWTEXTLABEL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewTextLabel :
    public UI::InterfaceElement
{
public:
    _inline NewTextLabel(UI::NewTextLabel const &); /* compiler_generated() */
    NewTextLabel(LuaConfig &);
    NewTextLabel(UI::InterfaceElement *, char const *);
    virtual ~NewTextLabel() override;
    virtual _inline UI::InterfaceElement *clone() override;
    virtual _inline void Draw(Vector_2i, float, Rect_i);
    virtual _inline void Update(Vector_2i, float, Rect_i);
    virtual _inline void Activate(bool);
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    virtual void SetText(wchar_t const *, bool);
    _inline wchar_t const *GetText() const;
    _inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &GetTextString();
    void SetVAlign(unsigned __int32);
    void SetFont(char const *);
    _inline void SetColor(Color_4b const &);
    _inline void SetDropShadow(bool);
    virtual void Resize(__int32, __int32) override;
    void SetWrapping(bool);
    bool GetWrapping() const;
    _inline UI::NewText &GetNewText();
protected:
    void Load(LuaConfig &);
    virtual void CalcAutoSize() override;
private:
    UI::NewText m_text; // 0x400
    bool m_wrapping; // 0x4A4
public:
    _inline UI::NewTextLabel &operator=(UI::NewTextLabel const &); /* compiler_generated() */
};
static_assert(sizeof(UI::NewTextLabel) == 1192, "Invalid UI::NewTextLabel size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::InterfaceElement *_sub_68A758(UI::NewTextLabel *const);
_inline UI::InterfaceElement *UI::NewTextLabel::clone() // 0x68A758
{
    mangled_assert("?clone@NewTextLabel@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
    UI::InterfaceElement * __result = _sub_68A758(this);
    return __result;
}

_extern void _sub_67F253(UI::NewTextLabel *const, Vector_2i, float, Rect_i);
_inline void UI::NewTextLabel::Draw(Vector_2i, float, Rect_i) // 0x67F253
{
    mangled_assert("?Draw@NewTextLabel@UI@@UAEXUVector_2i@@MURect_i@@@Z");
    todo("implement");
    _sub_67F253(this, arg, arg, arg);
}

_extern void _sub_67F80F(UI::NewTextLabel *const, Vector_2i, float, Rect_i);
_inline void UI::NewTextLabel::Update(Vector_2i, float, Rect_i) // 0x67F80F
{
    mangled_assert("?Update@NewTextLabel@UI@@UAEXUVector_2i@@MURect_i@@@Z");
    todo("implement");
    _sub_67F80F(this, arg, arg, arg);
}

_extern void _sub_67F112(UI::NewTextLabel *const, bool);
_inline void UI::NewTextLabel::Activate(bool) // 0x67F112
{
    mangled_assert("?Activate@NewTextLabel@UI@@UAEX_N@Z");
    todo("implement");
    _sub_67F112(this, arg);
}

_extern wchar_t const *_sub_576271(UI::NewTextLabel const *const);
_inline wchar_t const *UI::NewTextLabel::GetText() const // 0x576271
{
    mangled_assert("?GetText@NewTextLabel@UI@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_576271(this);
    return __result;
}

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &_sub_68934B(UI::NewTextLabel *const);
_inline std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &UI::NewTextLabel::GetTextString() // 0x68934B
{
    mangled_assert("?GetTextString@NewTextLabel@UI@@QAEAAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > & __result = _sub_68934B(this);
    return __result;
}

_extern void _sub_581F70(UI::NewTextLabel *const, Color_4b const &);
_inline void UI::NewTextLabel::SetColor(Color_4b const &) // 0x581F70
{
    mangled_assert("?SetColor@NewTextLabel@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
    _sub_581F70(this, arg);
}

_extern void _sub_68A6BF(UI::NewTextLabel *const, bool);
_inline void UI::NewTextLabel::SetDropShadow(bool) // 0x68A6BF
{
    mangled_assert("?SetDropShadow@NewTextLabel@UI@@QAEX_N@Z");
    todo("implement");
    _sub_68A6BF(this, arg);
}

_extern UI::NewText &_sub_57F9E2(UI::NewTextLabel *const);
_inline UI::NewText &UI::NewTextLabel::GetNewText() // 0x57F9E2
{
    mangled_assert("?GetNewText@NewTextLabel@UI@@QAEAAVNewText@2@XZ");
    todo("implement");
    UI::NewText & __result = _sub_57F9E2(this);
    return __result;
}

/* ---------- private code */

#endif // __NEWTEXTLABEL_H__
#endif
