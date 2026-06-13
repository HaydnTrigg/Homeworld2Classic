#if 0
#ifndef __NEWFRAME_H__
#define __NEWFRAME_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::NewFrame :
    public UI::InterfaceElement
{
public:
    _inline NewFrame(UI::NewFrame const &); /* compiler_generated() */
    NewFrame(LuaConfig &);
    NewFrame(UI::InterfaceElement *, char const *);
    virtual ~NewFrame() override;
    virtual _inline UI::InterfaceElement *clone() override;
    virtual void Draw2(Vector_2i const &, Rect_i const &) override;
    _inline UI::NewFrame &operator=(UI::NewFrame const &); /* compiler_generated() */
};
static_assert(sizeof(UI::NewFrame) == 1024, "Invalid UI::NewFrame size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::InterfaceElement *_sub_573B85(UI::NewFrame *const);
_inline UI::InterfaceElement *UI::NewFrame::clone() // 0x573B85
{
    mangled_assert("?clone@NewFrame@UI@@UAEPAVInterfaceElement@2@XZ");
    todo("implement");
    UI::InterfaceElement * __result = _sub_573B85(this);
    return __result;
}

/* ---------- private code */

#endif // __NEWFRAME_H__
#endif
