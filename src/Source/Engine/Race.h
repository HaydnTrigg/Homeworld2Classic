#if 0
#ifndef __RACE_H__
#define __RACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    Race_Invalid = 0,
    Race_Hiigaran,
    Race_Vaygr,
};

/* ---------- definitions */

class Race::Info
{
public:
    _inline char const *GetName();
    _inline wchar_t const *GetDisplayName();
    _inline char const *GetHyperspaceEffectName() const;
    _inline char const *GetHyperspaceSoundName() const;
    _inline float GetHyperspaceEffectTime() const;
    _inline bool IsPlayable() const;
    _inline unsigned __int32 const GetRaceHash();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    wchar_t m_DisplayName[260]; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_hyperspaceName; // 0x220
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_hyperspaceSoundName; // 0x238
    float m_hyperspaceEffectTime; // 0x250
    bool m_bIsPlayable; // 0x254
    unsigned __int32 m_raceHash; // 0x258
    Info(Race::Info const &); /* compiler_generated() */
    _inline Info(); /* compiler_generated() */
    _inline ~Info(); /* compiler_generated() */
    Race::Info &operator=(Race::Info const &); /* compiler_generated() */
};
static_assert(sizeof(Race::Info) == 604, "Invalid Race::Info size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_4F9080(Race::Info *const);
_inline char const *Race::Info::GetName() // 0x4F9080
{
    mangled_assert("?GetName@Info@Race@@QAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4F9080(this);
    return __result;
}

_extern wchar_t const *_sub_5A215C(Race::Info *const);
_inline wchar_t const *Race::Info::GetDisplayName() // 0x5A215C
{
    mangled_assert("?GetDisplayName@Info@Race@@QAEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_5A215C(this);
    return __result;
}

_extern char const *_sub_5F9652(Race::Info const *const);
_inline char const *Race::Info::GetHyperspaceEffectName() const // 0x5F9652
{
    mangled_assert("?GetHyperspaceEffectName@Info@Race@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_5F9652(this);
    return __result;
}

_extern char const *_sub_5F9661(Race::Info const *const);
_inline char const *Race::Info::GetHyperspaceSoundName() const // 0x5F9661
{
    mangled_assert("?GetHyperspaceSoundName@Info@Race@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_5F9661(this);
    return __result;
}

_extern float _sub_4B82EE(Race::Info const *const);
_inline float Race::Info::GetHyperspaceEffectTime() const // 0x4B82EE
{
    mangled_assert("?GetHyperspaceEffectTime@Info@Race@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B82EE(this);
    return __result;
}

_extern bool _sub_5A2D29(Race::Info const *const);
_inline bool Race::Info::IsPlayable() const // 0x5A2D29
{
    mangled_assert("?IsPlayable@Info@Race@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5A2D29(this);
    return __result;
}

_extern unsigned __int32 const _sub_57FA1D(Race::Info *const);
_inline unsigned __int32 const Race::Info::GetRaceHash() // 0x57FA1D
{
    mangled_assert("?GetRaceHash@Info@Race@@QAE?BIXZ");
    todo("implement");
    unsigned __int32 const __result = _sub_57FA1D(this);
    return __result;
}

/* ---------- private code */

#endif // __RACE_H__
#endif
