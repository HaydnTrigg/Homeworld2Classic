#if 0
#ifndef __STLEXSTRING_H__
#define __STLEXSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class relicstring_trait<char>
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    static unsigned __int32 length(char const *);
    static void copyN(char *, char const *, unsigned __int32);
    static __int32 compareN(char const *, char const *, unsigned __int32);
    static _inline __int32 compareI(char const *l, char const *r);
    static __int32 compare(char const *, char const *);
};
static_assert(sizeof(relicstring_trait<char>) == 1, "Invalid relicstring_trait<char> size");

class relicstring_trait<wchar_t>
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    static unsigned __int32 length(wchar_t const *);
    static void copyN(wchar_t *, wchar_t const *, unsigned __int32);
    static __int32 compareN(wchar_t const *, wchar_t const *, unsigned __int32);
    static __int32 compareI(wchar_t const *, wchar_t const *);
    static __int32 compare(wchar_t const *, wchar_t const *);
};
static_assert(sizeof(relicstring_trait<wchar_t>) == 1, "Invalid relicstring_trait<wchar_t> size");

class std::basicstring_less_insensitive<char>
{
public:
    typedef relicstring_trait<char> trait;
    bool operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    bool operator()(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    bool operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, char const *) const;
    bool operator()(char const *, char const *) const;
};
static_assert(sizeof(std::basicstring_less_insensitive<char>) == 1, "Invalid std::basicstring_less_insensitive<char> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern __int32 _sub_1000331A(char const *, char const *);
_inline __int32 relicstring_trait<char>::compareI(char const *l, char const *r) // 0x1000331A
{
    mangled_assert("?compareI@?$relicstring_trait@D@@SGHPBD0@Z");
    todo("implement");
    __int32 __result = _sub_1000331A(l, r);
    return __result;
}

_extern bool _sub_100020B4(std::basicstring_less_insensitive<char> const *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_inline bool std::basicstring_less_insensitive<char>::operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x100020B4
{
    mangled_assert("??R?$basicstring_less_insensitive@D@std@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@0@Z");
    todo("implement");
    bool __result = _sub_100020B4(this, arg, arg);
    return __result;
}

/* ---------- private code */

#endif // __STLEXSTRING_H__
/* combined */
#ifndef __STLEXSTRING_H__
#define __STLEXSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class relicstring_trait<char>
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    static unsigned __int32 length(char const *);
    static _inline void copyN(char *dst, char const *src, unsigned __int32 maxlen);
    static __int32 compareN(char const *, char const *, unsigned __int32);
    static __int32 compareI(char const *, char const *);
    static _inline __int32 compare(char const *l, char const *r);
};
static_assert(sizeof(relicstring_trait<char>) == 1, "Invalid relicstring_trait<char> size");

class relicstring_trait<wchar_t>
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    static unsigned __int32 length(wchar_t const *);
    static void copyN(wchar_t *, wchar_t const *, unsigned __int32);
    static __int32 compareN(wchar_t const *, wchar_t const *, unsigned __int32);
    static __int32 compareI(wchar_t const *, wchar_t const *);
    static __int32 compare(wchar_t const *, wchar_t const *);
};
static_assert(sizeof(relicstring_trait<wchar_t>) == 1, "Invalid relicstring_trait<wchar_t> size");

class std::basicstring_less<char>
{
public:
    typedef relicstring_trait<char> trait;
    bool operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    bool operator()(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    bool operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, char const *) const;
    bool operator()(char const *, char const *) const;
};
static_assert(sizeof(std::basicstring_less<char>) == 1, "Invalid std::basicstring_less<char> size");

/* ---------- prototypes */

extern _inline void relicstring_copyN<char>(char *dst, char const *src, unsigned __int32 maxlen);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_1000407D(char *, char const *, unsigned __int32);
_inline void relicstring_trait<char>::copyN(char *dst, char const *src, unsigned __int32 maxlen) // 0x1000407D
{
    mangled_assert("?copyN@?$relicstring_trait@D@@SGXPADPBDI@Z");
    todo("implement");
    _sub_1000407D(dst, src, maxlen);
}

_extern __int32 _sub_1000DEFB(char const *, char const *);
_inline __int32 relicstring_trait<char>::compare(char const *l, char const *r) // 0x1000DEFB
{
    mangled_assert("?compare@?$relicstring_trait@D@@SGHPBD0@Z");
    todo("implement");
    __int32 __result = _sub_1000DEFB(l, r);
    return __result;
}

_extern bool _sub_1000C8AA(std::basicstring_less<char> const *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, char const *);
_inline bool std::basicstring_less<char>::operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, char const *) const // 0x1000C8AA
{
    mangled_assert("??R?$basicstring_less@D@std@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PBD@Z");
    todo("implement");
    bool __result = _sub_1000C8AA(this, arg, arg);
    return __result;
}

_extern bool _sub_1000C8CC(std::basicstring_less<char> const *const, char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_inline bool std::basicstring_less<char>::operator()(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x1000C8CC
{
    mangled_assert("??R?$basicstring_less@D@std@@QBE_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
    bool __result = _sub_1000C8CC(this, arg, arg);
    return __result;
}

_extern bool _sub_1000C87F(std::basicstring_less<char> const *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_inline bool std::basicstring_less<char>::operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x1000C87F
{
    mangled_assert("??R?$basicstring_less@D@std@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@0@Z");
    todo("implement");
    bool __result = _sub_1000C87F(this, arg, arg);
    return __result;
}

_extern void _sub_100017D1(char *, char const *, unsigned __int32);
_inline void relicstring_copyN<char>(char *dst, char const *src, unsigned __int32 maxlen) // 0x100017D1
{
    mangled_assert("??$relicstring_copyN@D@@YGXPADPBDI@Z");
    todo("implement");
    _sub_100017D1(dst, src, maxlen);
}

/* ---------- private code */

#endif // __STLEXSTRING_H__
/* combined */
#ifndef __STLEXSTRING_H__
#define __STLEXSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class relicstring_trait<char>
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    static unsigned __int32 length(char const *);
    static void copyN(char *, char const *, unsigned __int32);
    static __int32 compareN(char const *, char const *, unsigned __int32);
    static __int32 compareI(char const *, char const *);
    static __int32 compare(char const *, char const *);
};
static_assert(sizeof(relicstring_trait<char>) == 1, "Invalid relicstring_trait<char> size");

class relicstring_trait<wchar_t>
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    static unsigned __int32 length(wchar_t const *);
    static void copyN(wchar_t *, wchar_t const *, unsigned __int32);
    static __int32 compareN(wchar_t const *, wchar_t const *, unsigned __int32);
    static __int32 compareI(wchar_t const *, wchar_t const *);
    static __int32 compare(wchar_t const *, wchar_t const *);
};
static_assert(sizeof(relicstring_trait<wchar_t>) == 1, "Invalid relicstring_trait<wchar_t> size");

/* ---------- prototypes */

extern _inline void std::string_tolower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10002E36(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
_inline void std::string_tolower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s) // 0x10002E36
{
    mangled_assert("?string_tolower@std@@YGXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
    _sub_10002E36(s);
}

/* ---------- private code */

#endif // __STLEXSTRING_H__
/* combined */
#ifndef __STLEXSTRING_H__
#define __STLEXSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class relicstring_trait<char>
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    static _inline unsigned __int32 length(char const *str);
    static _inline void copyN(char *dst, char const *src, unsigned __int32 maxlen);
    static _inline __int32 compareN(char const *l, char const *r, unsigned __int32 maxlen);
    static __int32 compareI(char const *, char const *);
    static __int32 compare(char const *, char const *);
};
static_assert(sizeof(relicstring_trait<char>) == 1, "Invalid relicstring_trait<char> size");

class relicstring_trait<wchar_t>
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    static unsigned __int32 length(wchar_t const *);
    static _inline void copyN(wchar_t *dst, wchar_t const *src, unsigned __int32 maxlen);
    static __int32 compareN(wchar_t const *, wchar_t const *, unsigned __int32);
    static __int32 compareI(wchar_t const *, wchar_t const *);
    static __int32 compare(wchar_t const *, wchar_t const *);
};
static_assert(sizeof(relicstring_trait<wchar_t>) == 1, "Invalid relicstring_trait<wchar_t> size");

/* ---------- prototypes */

extern _inline void std::string_tolower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s);
extern _inline void std::string_toupper(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s);
extern _inline void relicstring_copyN<char>(char *dst, char const *src, unsigned __int32 maxlen);
extern _inline void relicstring_copyN<wchar_t>(wchar_t *dst, wchar_t const *src, unsigned __int32 maxlen);

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_70F898(char const *);
_inline unsigned __int32 relicstring_trait<char>::length(char const *str) // 0x70F898
{
    mangled_assert("?length@?$relicstring_trait@D@@SGIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_70F898(str);
    return __result;
}

_extern void _sub_469D0A(char *, char const *, unsigned __int32);
_inline void relicstring_trait<char>::copyN(char *dst, char const *src, unsigned __int32 maxlen) // 0x469D0A
{
    mangled_assert("?copyN@?$relicstring_trait@D@@SGXPADPBDI@Z");
    todo("implement");
    _sub_469D0A(dst, src, maxlen);
}

_extern __int32 _sub_70F818(char const *, char const *, unsigned __int32);
_inline __int32 relicstring_trait<char>::compareN(char const *l, char const *r, unsigned __int32 maxlen) // 0x70F818
{
    mangled_assert("?compareN@?$relicstring_trait@D@@SGHPBD0I@Z");
    todo("implement");
    __int32 __result = _sub_70F818(l, r, maxlen);
    return __result;
}

_extern void _sub_46A389(wchar_t *, wchar_t const *, unsigned __int32);
_inline void relicstring_trait<wchar_t>::copyN(wchar_t *dst, wchar_t const *src, unsigned __int32 maxlen) // 0x46A389
{
    mangled_assert("?copyN@?$relicstring_trait@_W@@SGXPA_WPB_WI@Z");
    todo("implement");
    _sub_46A389(dst, src, maxlen);
}

_extern void _sub_6E12EE(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
_inline void std::string_tolower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s) // 0x6E12EE
{
    mangled_assert("?string_tolower@std@@YGXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
    _sub_6E12EE(s);
}

_extern void _sub_4F2E64(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
_inline void std::string_toupper(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s) // 0x4F2E64
{
    mangled_assert("?string_toupper@std@@YGXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
    _sub_4F2E64(s);
}

_extern void _sub_602483(char *, char const *, unsigned __int32);
_inline void relicstring_copyN<char>(char *dst, char const *src, unsigned __int32 maxlen) // 0x602483
{
    mangled_assert("??$relicstring_copyN@D@@YGXPADPBDI@Z");
    todo("implement");
    _sub_602483(dst, src, maxlen);
}

_extern void _sub_469EA5(wchar_t *, wchar_t const *, unsigned __int32);
_inline void relicstring_copyN<wchar_t>(wchar_t *dst, wchar_t const *src, unsigned __int32 maxlen) // 0x469EA5
{
    mangled_assert("??$relicstring_copyN@_W@@YGXPA_WPB_WI@Z");
    todo("implement");
    _sub_469EA5(dst, src, maxlen);
}

/* ---------- private code */

#endif // __STLEXSTRING_H__
/* combined */
#ifndef __STLEXSTRING_H__
#define __STLEXSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class relicstring_trait<char>
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    static unsigned __int32 length(char const *);
    static void copyN(char *, char const *, unsigned __int32);
    static __int32 compareN(char const *, char const *, unsigned __int32);
    static __int32 compareI(char const *, char const *);
    static __int32 compare(char const *, char const *);
};
static_assert(sizeof(relicstring_trait<char>) == 1, "Invalid relicstring_trait<char> size");

class relicstring_trait<wchar_t>
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    static unsigned __int32 length(wchar_t const *);
    static void copyN(wchar_t *, wchar_t const *, unsigned __int32);
    static __int32 compareN(wchar_t const *, wchar_t const *, unsigned __int32);
    static __int32 compareI(wchar_t const *, wchar_t const *);
    static __int32 compare(wchar_t const *, wchar_t const *);
};
static_assert(sizeof(relicstring_trait<wchar_t>) == 1, "Invalid relicstring_trait<wchar_t> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STLEXSTRING_H__
/* combined */
#ifndef __STLEXSTRING_H__
#define __STLEXSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class relicstring_trait<char>
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    static unsigned __int32 length(char const *);
    static _inline void copyN(char *dst, char const *src, unsigned __int32 maxlen);
    static __int32 compareN(char const *, char const *, unsigned __int32);
    static __int32 compareI(char const *, char const *);
    static __int32 compare(char const *, char const *);
};
static_assert(sizeof(relicstring_trait<char>) == 1, "Invalid relicstring_trait<char> size");

class relicstring_trait<wchar_t>
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    static unsigned __int32 length(wchar_t const *);
    static void copyN(wchar_t *, wchar_t const *, unsigned __int32);
    static __int32 compareN(wchar_t const *, wchar_t const *, unsigned __int32);
    static __int32 compareI(wchar_t const *, wchar_t const *);
    static __int32 compare(wchar_t const *, wchar_t const *);
};
static_assert(sizeof(relicstring_trait<wchar_t>) == 1, "Invalid relicstring_trait<wchar_t> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10003E2E(char *, char const *, unsigned __int32);
_inline void relicstring_trait<char>::copyN(char *dst, char const *src, unsigned __int32 maxlen) // 0x10003E2E
{
    mangled_assert("?copyN@?$relicstring_trait@D@@SGXPADPBDI@Z");
    todo("implement");
    _sub_10003E2E(dst, src, maxlen);
}

/* ---------- private code */

#endif // __STLEXSTRING_H__
/* combined */
#ifndef __STLEXSTRING_H__
#define __STLEXSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class relicstring_trait<char>
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    static unsigned __int32 length(char const *);
    static void copyN(char *, char const *, unsigned __int32);
    static __int32 compareN(char const *, char const *, unsigned __int32);
    static __int32 compareI(char const *, char const *);
    static __int32 compare(char const *, char const *);
};
static_assert(sizeof(relicstring_trait<char>) == 1, "Invalid relicstring_trait<char> size");

class relicstring_trait<wchar_t>
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    static unsigned __int32 length(wchar_t const *);
    static void copyN(wchar_t *, wchar_t const *, unsigned __int32);
    static __int32 compareN(wchar_t const *, wchar_t const *, unsigned __int32);
    static __int32 compareI(wchar_t const *, wchar_t const *);
    static __int32 compare(wchar_t const *, wchar_t const *);
};
static_assert(sizeof(relicstring_trait<wchar_t>) == 1, "Invalid relicstring_trait<wchar_t> size");

/* ---------- prototypes */

extern _inline void std::string_tolower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10078640(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
_inline void std::string_tolower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s) // 0x10078640
{
    mangled_assert("?string_tolower@std@@YGXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
    _sub_10078640(s);
}

/* ---------- private code */

#endif // __STLEXSTRING_H__
/* combined */
#ifndef __STLEXSTRING_H__
#define __STLEXSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class relicstring_trait<char>
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    static unsigned __int32 length(char const *);
    static void copyN(char *, char const *, unsigned __int32);
    static __int32 compareN(char const *, char const *, unsigned __int32);
    static __int32 compareI(char const *, char const *);
    static __int32 compare(char const *, char const *);
};
static_assert(sizeof(relicstring_trait<char>) == 1, "Invalid relicstring_trait<char> size");

class relicstring_trait<wchar_t>
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    static unsigned __int32 length(wchar_t const *);
    static void copyN(wchar_t *, wchar_t const *, unsigned __int32);
    static __int32 compareN(wchar_t const *, wchar_t const *, unsigned __int32);
    static __int32 compareI(wchar_t const *, wchar_t const *);
    static __int32 compare(wchar_t const *, wchar_t const *);
};
static_assert(sizeof(relicstring_trait<wchar_t>) == 1, "Invalid relicstring_trait<wchar_t> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STLEXSTRING_H__
/* combined */
#ifndef __STLEXSTRING_H__
#define __STLEXSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class relicstring_trait<char>
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    static unsigned __int32 length(char const *);
    static _inline void copyN(char *dst, char const *src, unsigned __int32 maxlen);
    static __int32 compareN(char const *, char const *, unsigned __int32);
    static __int32 compareI(char const *, char const *);
    static __int32 compare(char const *, char const *);
};
static_assert(sizeof(relicstring_trait<char>) == 1, "Invalid relicstring_trait<char> size");

class relicstring_trait<wchar_t>
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    static unsigned __int32 length(wchar_t const *);
    static void copyN(wchar_t *, wchar_t const *, unsigned __int32);
    static __int32 compareN(wchar_t const *, wchar_t const *, unsigned __int32);
    static __int32 compareI(wchar_t const *, wchar_t const *);
    static __int32 compare(wchar_t const *, wchar_t const *);
};
static_assert(sizeof(relicstring_trait<wchar_t>) == 1, "Invalid relicstring_trait<wchar_t> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10002A46(char *, char const *, unsigned __int32);
_inline void relicstring_trait<char>::copyN(char *dst, char const *src, unsigned __int32 maxlen) // 0x10002A46
{
    mangled_assert("?copyN@?$relicstring_trait@D@@SGXPADPBDI@Z");
    todo("implement");
    _sub_10002A46(dst, src, maxlen);
}

/* ---------- private code */

#endif // __STLEXSTRING_H__
#endif
