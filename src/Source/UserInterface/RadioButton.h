#if 0
#ifndef __RADIOBUTTON_H__
#define __RADIOBUTTON_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::RadioButton :
    public UI::TextButton,
    public UI::RadioItem
{
public:
    _inline RadioButton(UI::RadioButton const &); /* compiler_generated() */
    RadioButton(LuaConfig &);
    RadioButton(UI::InterfaceElement *, char const *);
    virtual ~RadioButton() override;
    virtual _inline UI::InterfaceElement *clone() override;
    virtual void SetSelected(bool) override;
    void ConnectOnSelected(void (*)(UI::InterfaceElement *));
protected:
    void Load(LuaConfig &);
    virtual void OnMouseClicked(Vector_2i const &, UI::MouseButton const &) override;
private:
    UI::UISignal m_onSelected; // 0x56C
public:
    _inline UI::RadioButton &operator=(UI::RadioButton const &); /* compiler_generated() */
};
static_assert(sizeof(UI::RadioButton) == 1400, "Invalid UI::RadioButton size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UI::InterfaceElement *UI::RadioButton::clone() // 0x68AB1A
{
    mangled_assert("?clone@RadioButton@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __RADIOBUTTON_H__
#endif
