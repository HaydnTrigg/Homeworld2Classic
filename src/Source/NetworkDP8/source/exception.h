#if 0
#ifndef __EXCEPTION_H__
#define __EXCEPTION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct Net::Exception
{
    _inline Exception(Net::Exception const &); /* compiler_generated() */
    _inline Exception(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    _inline wchar_t const *what() const;
private:
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_what; // 0x0
public:
    _inline ~Exception(); /* compiler_generated() */
    Net::Exception &operator=(Net::Exception const &); /* compiler_generated() */
};
static_assert(sizeof(Net::Exception) == 24, "Invalid Net::Exception size");

struct Net::EHostNotFound :
    public Net::Exception
{
    EHostNotFound(Net::EHostNotFound const &); /* compiler_generated() */
    EHostNotFound();
    _inline ~EHostNotFound(); /* compiler_generated() */
    Net::EHostNotFound &operator=(Net::EHostNotFound const &); /* compiler_generated() */
};
static_assert(sizeof(Net::EHostNotFound) == 24, "Invalid Net::EHostNotFound size");

struct Net::EInvalidAddress :
    public Net::Exception
{
    _inline EInvalidAddress(Net::EInvalidAddress const &); /* compiler_generated() */
    EInvalidAddress();
    _inline ~EInvalidAddress(); /* compiler_generated() */
    Net::EInvalidAddress &operator=(Net::EInvalidAddress const &); /* compiler_generated() */
};
static_assert(sizeof(Net::EInvalidAddress) == 24, "Invalid Net::EInvalidAddress size");

struct Net::EInvalidPassword :
    public Net::Exception
{
    EInvalidPassword(Net::EInvalidPassword const &); /* compiler_generated() */
    EInvalidPassword();
    _inline ~EInvalidPassword(); /* compiler_generated() */
    Net::EInvalidPassword &operator=(Net::EInvalidPassword const &); /* compiler_generated() */
};
static_assert(sizeof(Net::EInvalidPassword) == 24, "Invalid Net::EInvalidPassword size");

struct Net::ENoNetwork :
    public Net::Exception
{
    _inline ENoNetwork(Net::ENoNetwork const &); /* compiler_generated() */
    ENoNetwork();
    _inline ~ENoNetwork(); /* compiler_generated() */
    Net::ENoNetwork &operator=(Net::ENoNetwork const &); /* compiler_generated() */
};
static_assert(sizeof(Net::ENoNetwork) == 24, "Invalid Net::ENoNetwork size");

struct Net::ESessionFull :
    public Net::Exception
{
    ESessionFull(Net::ESessionFull const &); /* compiler_generated() */
    ESessionFull();
    _inline ~ESessionFull(); /* compiler_generated() */
    Net::ESessionFull &operator=(Net::ESessionFull const &); /* compiler_generated() */
};
static_assert(sizeof(Net::ESessionFull) == 24, "Invalid Net::ESessionFull size");

struct Net::EAuthenticationFailed :
    public Net::Exception
{
    EAuthenticationFailed(Net::EAuthenticationFailed const &); /* compiler_generated() */
    EAuthenticationFailed(unsigned char const *, unsigned __int32);
    _inline std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &GetServerMods() const;
private:
    std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > m_mods; // 0x18
public:
    _inline ~EAuthenticationFailed(); /* compiler_generated() */
    Net::EAuthenticationFailed &operator=(Net::EAuthenticationFailed const &); /* compiler_generated() */
};
static_assert(sizeof(Net::EAuthenticationFailed) == 36, "Invalid Net::EAuthenticationFailed size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6D53D6(Net::Exception *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
_inline Net::Exception::Exception(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x6D53D6
{
    mangled_assert("??0Exception@Net@@QAE@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    _sub_6D53D6(this, arg);
}

_extern wchar_t const *_sub_5B97BB(Net::Exception const *const);
_inline wchar_t const *Net::Exception::what() const // 0x5B97BB
{
    mangled_assert("?what@Exception@Net@@QBEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_5B97BB(this);
    return __result;
}

_extern std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &_sub_5B9235(Net::EAuthenticationFailed const *const);
_inline std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const &Net::EAuthenticationFailed::GetServerMods() const // 0x5B9235
{
    mangled_assert("?GetServerMods@EAuthenticationFailed@Net@@QBEABV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ");
    todo("implement");
    std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > const & __result = _sub_5B9235(this);
    return __result;
}

/* ---------- private code */

#endif // __EXCEPTION_H__
#endif
