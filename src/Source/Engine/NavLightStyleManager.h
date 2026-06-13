#if 0
#ifndef __NAVLIGHTSTYLEMANAGER_H__
#define __NAVLIGHTSTYLEMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NavLightStyle
{
public:
    NavLightStyle(NavLightStyle const &); /* compiler_generated() */
    NavLightStyle();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > styleName; // 0x0
    float climbTime; // 0x18
    float topWaitTime; // 0x1C
    float decayTime; // 0x20
    float bottomWaitTime; // 0x24
    _inline ~NavLightStyle(); /* compiler_generated() */
    NavLightStyle &operator=(NavLightStyle const &); /* compiler_generated() */
};
static_assert(sizeof(NavLightStyle) == 40, "Invalid NavLightStyle size");

class NavLightStyleManager
{
public:
    NavLightStyle *findStyle(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
private:
    NavLightStyleManager(LuaConfig *);
    ~NavLightStyleManager();
    NavLightStyle *loadStyle(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    class Data;
    NavLightStyleManager::Data *m_pimpl; // 0x0
};
static_assert(sizeof(NavLightStyleManager) == 4, "Invalid NavLightStyleManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NAVLIGHTSTYLEMANAGER_H__
#endif
