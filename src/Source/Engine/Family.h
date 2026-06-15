#if 0
#ifndef __FAMILY_H__
#define __FAMILY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Family
{
public:
    _inline Family(Family const &); /* compiler_generated() */
    Family(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline wchar_t const *GetDisplayName() const;
    _inline char const *GetName() const;
    _inline void SetDisplayName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    _inline unsigned __int32 GetPriority() const;
    _inline void SetPriority(unsigned __int32);
    typedef std::set<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > ShipList;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    unsigned __int32 m_priority; // 0x18
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_displayName; // 0x1C
public:
    _inline ~Family(); /* compiler_generated() */
    Family &operator=(Family const &); /* compiler_generated() */
};
static_assert(sizeof(Family) == 52, "Invalid Family size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline wchar_t const *Family::GetDisplayName() const // 0x57F996
{
    mangled_assert("?GetDisplayName@Family@@QBEPB_WXZ");
    todo("implement");
}

_inline char const *Family::GetName() const // 0x4F2BA7
{
    mangled_assert("?GetName@Family@@QBEPBDXZ");
    todo("implement");
}

_inline void Family::SetDisplayName(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x4F33BA
{
    mangled_assert("?SetDisplayName@Family@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

_inline unsigned __int32 Family::GetPriority() const // 0x48A6A3
{
    mangled_assert("?GetPriority@Family@@QBEIXZ");
    todo("implement");
}

_inline void Family::SetPriority(unsigned __int32) // 0x4F33C2
{
    mangled_assert("?SetPriority@Family@@QAEXI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __FAMILY_H__
#endif
