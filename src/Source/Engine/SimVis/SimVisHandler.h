#if 0
#ifndef __SIMVISHANDLER_H__
#define __SIMVISHANDLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SimVisHandler
{
public:
    SimVisHandler(SimVisHandler const &); /* compiler_generated() */
    SimVisHandler(char const *, float);
    virtual _inline void update(SimVisDisplayData const &);
    virtual _inline void display(SimVisDisplayData const &);
    void enable(bool);
    bool isEnabled() const;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    float m_priority; // 0x1C
    bool m_bEnabled; // 0x20
public:
    ~SimVisHandler(); /* compiler_generated() */
    SimVisHandler &operator=(SimVisHandler const &); /* compiler_generated() */
};
static_assert(sizeof(SimVisHandler) == 36, "Invalid SimVisHandler size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void SimVisHandler::update(SimVisDisplayData const &) // 0x523F5C
{
    mangled_assert("?update@SimVisHandler@@UAEXABVSimVisDisplayData@@@Z");
    todo("implement");
}

_inline void SimVisHandler::display(SimVisDisplayData const &) // 0x523F59
{
    mangled_assert("?display@SimVisHandler@@UAEXABVSimVisDisplayData@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SIMVISHANDLER_H__
#endif
