#if 0
#ifndef __TEXTBUTTON_H__
#define __TEXTBUTTON_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::TextButton :
    public UI::NewButton
{
public:
    _inline TextButton(UI::TextButton const &); /* compiler_generated() */
    TextButton(LuaConfig &);
    TextButton(UI::InterfaceElement *, char const *, bool);
    virtual ~TextButton() override;
    virtual _inline UI::InterfaceElement *clone() override;
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    _inline void SetText(wchar_t const *);
    _inline wchar_t const *GetText() const;
protected:
    void Load(LuaConfig &);
    UI::NewText m_text; // 0x4A8
private:
    Color_4b m_overTextColor; // 0x54C
    Color_4b m_clickedTextColor; // 0x550
    Color_4b m_pressedTextColor; // 0x554
    Color_4b m_flashTextColor; // 0x558
    Color_4b m_disabledTextColor; // 0x55C
public:
    _inline UI::TextButton &operator=(UI::TextButton const &); /* compiler_generated() */
};
static_assert(sizeof(UI::TextButton) == 1376, "Invalid UI::TextButton size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UI::InterfaceElement *UI::TextButton::clone() // 0x68A2E7
{
    mangled_assert("?clone@TextButton@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

_inline void UI::TextButton::SetText(wchar_t const *) // 0x571322
{
    mangled_assert("?SetText@TextButton@UI@@QAEXPB_W@Z");
    todo("implement");
}

_inline wchar_t const *UI::TextButton::GetText() const // 0x5783C2
{
    mangled_assert("?GetText@TextButton@UI@@QBEPB_WXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __TEXTBUTTON_H__
#endif
