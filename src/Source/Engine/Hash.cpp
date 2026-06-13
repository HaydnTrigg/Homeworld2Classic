#if 0
/* ---------- headers */

#include "decomp.h"
#include <xiosbase>
#include <xlocale>
#include <stdexcept>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <crtdefs.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xlocinfo>
#include <xutility>
#include <xatomic0.h>
#include <iosfwd>
#include <fileio\fileioexports.h>
#include <xfacet>
#include <iomanip>
#include <xlocmon>
#include <xloctime>
#include <ctime>
#include <time.h>
#include <time.inl>
#include <system_error>
#include <Hash.h>
#include <fileio\md5.h>
#include <wchar.h>
#include <ostream>
#include <ios>
#include <xlocnum>
#include <streambuf>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5F8871(MD5Hash *const);
MD5Hash::MD5Hash() // 0x5F8871
{
    mangled_assert("??0MD5Hash@@QAE@XZ");
    todo("implement");
    _sub_5F8871(this);
}

_extern _sub_5F8844(MD5Hash *const, unsigned char const *);
MD5Hash::MD5Hash(unsigned char const *) // 0x5F8844
{
    mangled_assert("??0MD5Hash@@QAE@QBE@Z");
    todo("implement");
    _sub_5F8844(this, arg);
}

_extern void _sub_5F8922(MD5Hash *const, void const *, unsigned __int32);
void MD5Hash::Update(void const *, unsigned __int32) // 0x5F8922
{
    mangled_assert("?Update@MD5Hash@@QAEXPBXI@Z");
    todo("implement");
    _sub_5F8922(this, arg, arg);
}

_extern void _sub_5F889C(MD5Hash *const);
void MD5Hash::Finish() // 0x5F889C
{
    mangled_assert("?Finish@MD5Hash@@QAEXXZ");
    todo("implement");
    _sub_5F889C(this);
}

_extern void _sub_5F88B1(MD5Hash const *const, unsigned char *);
void MD5Hash::GetValue(unsigned char *) const // 0x5F88B1
{
    mangled_assert("?GetValue@MD5Hash@@QBEXQAE@Z");
    todo("implement");
    _sub_5F88B1(this, arg);
}

_extern void _sub_5F88CB(MD5Hash const *const, std::basic_ostream<char,std::char_traits<char> > &);
void MD5Hash::Print(std::basic_ostream<char,std::char_traits<char> > &) const // 0x5F88CB
{
    mangled_assert("?Print@MD5Hash@@QBEXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z");
    todo("implement");
    _sub_5F88CB(this, arg);
}

/* ---------- private code */
#endif
