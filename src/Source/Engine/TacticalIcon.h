#if 0
#ifndef __TACTICALICON_H__
#define __TACTICALICON_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TacticalIcon
{
public:
    TacticalIcon(TacticalIcon const &); /* compiler_generated() */
    TacticalIcon();
    ~TacticalIcon();
    static __int32 parseTacticalIcon(LuaConfig &lc);
    char const *getName();
    bool initialize(char const *, char const *);
    _inline UIGraphicMesh2D *getGraphic(bool);
    void render(vector4 const *, PrimRectangle const *, float, bool);
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_iconName; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_displayName; // 0x18
    UIGraphicMesh2D *m_graphic; // 0x30
    UIGraphicMesh2D *m_mouseOverGraphic; // 0x34
public:
    TacticalIcon &operator=(TacticalIcon const &); /* compiler_generated() */
};
static_assert(sizeof(TacticalIcon) == 56, "Invalid TacticalIcon size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UIGraphicMesh2D *TacticalIcon::getGraphic(bool) // 0x5E466E
{
    mangled_assert("?getGraphic@TacticalIcon@@QAEPAVUIGraphicMesh2D@@_N@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __TACTICALICON_H__
#endif
