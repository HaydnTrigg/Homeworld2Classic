#if 0
#ifndef __GAMEFILTER_H__
#define __GAMEFILTER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::GameFilter
{
public:
    GameFilter(UI::GameFilter const &); /* compiler_generated() */
    GameFilter();
    void Clear();
    _inline wchar_t const *GetNameFilter() const;
    _inline wchar_t const *GetMapFilter() const;
    _inline wchar_t const *GetModeFilter() const;
    _inline __int32 GetPingFilter() const;
    _inline __int32 GetMaxPlayersFilter() const;
    void SetNameFilter(wchar_t const *);
    void SetMapFilter(wchar_t const *);
    void SetModeFilter(wchar_t const *);
    void SetPingFilter(__int32);
    void SetMaxPlayersFilter(__int32);
    bool Test(LobbySessionDesc const &);
private:
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_nameFilter; // 0x0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_mapFilter; // 0x18
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_modeFilter; // 0x30
    __int32 m_maxPlayersFilter; // 0x48
    __int32 m_pingFilter; // 0x4C
public:
    _inline ~GameFilter(); /* compiler_generated() */
    _inline UI::GameFilter &operator=(UI::GameFilter const &); /* compiler_generated() */
};
static_assert(sizeof(UI::GameFilter) == 80, "Invalid UI::GameFilter size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern wchar_t const *_sub_5B3F09(UI::GameFilter const *const);
_inline wchar_t const *UI::GameFilter::GetNameFilter() const // 0x5B3F09
{
    mangled_assert("?GetNameFilter@GameFilter@UI@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_5B3F09(this);
    return __result;
}

_extern wchar_t const *_sub_5B3EED(UI::GameFilter const *const);
_inline wchar_t const *UI::GameFilter::GetMapFilter() const // 0x5B3EED
{
    mangled_assert("?GetMapFilter@GameFilter@UI@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_5B3EED(this);
    return __result;
}

_extern wchar_t const *_sub_5B3EFD(UI::GameFilter const *const);
_inline wchar_t const *UI::GameFilter::GetModeFilter() const // 0x5B3EFD
{
    mangled_assert("?GetModeFilter@GameFilter@UI@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_5B3EFD(this);
    return __result;
}

_extern __int32 _sub_5B3F14(UI::GameFilter const *const);
_inline __int32 UI::GameFilter::GetPingFilter() const // 0x5B3F14
{
    mangled_assert("?GetPingFilter@GameFilter@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5B3F14(this);
    return __result;
}

_extern __int32 _sub_5B3EF9(UI::GameFilter const *const);
_inline __int32 UI::GameFilter::GetMaxPlayersFilter() const // 0x5B3EF9
{
    mangled_assert("?GetMaxPlayersFilter@GameFilter@UI@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5B3EF9(this);
    return __result;
}

/* ---------- private code */

#endif // __GAMEFILTER_H__
#endif
