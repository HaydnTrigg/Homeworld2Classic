#if 0
#ifndef __RADIOITEM_H__
#define __RADIOITEM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::RadioItem
{
public:
    _inline RadioItem(UI::RadioItem const &); /* compiler_generated() */
    RadioItem(UI::InterfaceElement *, bool);
    ~RadioItem();
    virtual void SetSelected(bool);
    void Toggle();
    _inline void SetRadioParent(UI::InterfaceElement *);
    bool IsSelected() const;
private:
    bool m_selected; // 0x4
    UI::InterfaceElement *m_parent; // 0x8
public:
    _inline UI::RadioItem &operator=(UI::RadioItem const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::RadioItem) == 12, "Invalid UI::RadioItem size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_66D3AD(UI::RadioItem *const, UI::InterfaceElement *);
_inline void UI::RadioItem::SetRadioParent(UI::InterfaceElement *) // 0x66D3AD
{
    mangled_assert("?SetRadioParent@RadioItem@UI@@QAEXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_66D3AD(this, arg);
}

/* ---------- private code */

#endif // __RADIOITEM_H__
#endif
