#if 0
#ifndef __POINTER_H__
#define __POINTER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::Pointer :
    public UI::NewUIScreen
{
public:
    Pointer(UI::Pointer const &); /* compiler_generated() */
    Pointer(char const *);
    virtual ~Pointer() override;
    void SetPointerInfo(Vector_2i const &, unsigned __int32, vector4 const &, unsigned __int32, SobID const &);
    void SetPointerVisible(bool);
    virtual void Draw() override;
    static _inline UI::Pointer *GetScreen();
private:
    boost::scoped_ptr<UI::PointerData> m_pimpl; // 0x19C
    static UI::Pointer *ms_screen;
public:
    UI::Pointer &operator=(UI::Pointer const &); /* compiler_generated() */
};
static_assert(sizeof(UI::Pointer) == 416, "Invalid UI::Pointer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern UI::Pointer *_sub_57FA2A();
_inline UI::Pointer *UI::Pointer::GetScreen() // 0x57FA2A
{
    mangled_assert("?GetScreen@Pointer@UI@@SGPAV12@XZ");
    todo("implement");
    UI::Pointer * __result = _sub_57FA2A();
    return __result;
}

/* ---------- private code */

#endif // __POINTER_H__
#endif
