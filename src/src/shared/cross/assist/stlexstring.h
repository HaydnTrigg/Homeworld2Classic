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

_inline __int32 relicstring_trait<char>::compareI(char const *l, char const *r) // 0x1000331A
{
    mangled_assert("?compareI@?$relicstring_trait@D@@SGHPBD0@Z");
    todo("implement");
}

_inline bool std::basicstring_less_insensitive<char>::operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x100020B4
{
    mangled_assert("??R?$basicstring_less_insensitive@D@std@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@0@Z");
    todo("implement");
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

_inline void relicstring_trait<char>::copyN(char *dst, char const *src, unsigned __int32 maxlen) // 0x1000407D
{
    mangled_assert("?copyN@?$relicstring_trait@D@@SGXPADPBDI@Z");
    todo("implement");
}

_inline __int32 relicstring_trait<char>::compare(char const *l, char const *r) // 0x1000DEFB
{
    mangled_assert("?compare@?$relicstring_trait@D@@SGHPBD0@Z");
    todo("implement");
}

_inline bool std::basicstring_less<char>::operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, char const *) const // 0x1000C8AA
{
    mangled_assert("??R?$basicstring_less@D@std@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PBD@Z");
    todo("implement");
}

_inline bool std::basicstring_less<char>::operator()(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x1000C8CC
{
    mangled_assert("??R?$basicstring_less@D@std@@QBE_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
}

_inline bool std::basicstring_less<char>::operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x1000C87F
{
    mangled_assert("??R?$basicstring_less@D@std@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@0@Z");
    todo("implement");
}

_inline void relicstring_copyN<char>(char *dst, char const *src, unsigned __int32 maxlen) // 0x100017D1
{
    mangled_assert("??$relicstring_copyN@D@@YGXPADPBDI@Z");
    todo("implement");
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

_inline void std::string_tolower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s) // 0x10002E36
{
    mangled_assert("?string_tolower@std@@YGXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
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

_inline unsigned __int32 relicstring_trait<char>::length(char const *str) // 0x70F898
{
    mangled_assert("?length@?$relicstring_trait@D@@SGIPBD@Z");
    todo("implement");
}

_inline void relicstring_trait<char>::copyN(char *dst, char const *src, unsigned __int32 maxlen) // 0x469D0A
{
    mangled_assert("?copyN@?$relicstring_trait@D@@SGXPADPBDI@Z");
    todo("implement");
}

_inline __int32 relicstring_trait<char>::compareN(char const *l, char const *r, unsigned __int32 maxlen) // 0x70F818
{
    mangled_assert("?compareN@?$relicstring_trait@D@@SGHPBD0I@Z");
    todo("implement");
}

_inline void relicstring_trait<wchar_t>::copyN(wchar_t *dst, wchar_t const *src, unsigned __int32 maxlen) // 0x46A389
{
    mangled_assert("?copyN@?$relicstring_trait@_W@@SGXPA_WPB_WI@Z");
    todo("implement");
}

_inline void std::string_tolower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s) // 0x6E12EE
{
    mangled_assert("?string_tolower@std@@YGXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
}

_inline void std::string_toupper(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s) // 0x4F2E64
{
    mangled_assert("?string_toupper@std@@YGXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
}

_inline void relicstring_copyN<char>(char *dst, char const *src, unsigned __int32 maxlen) // 0x602483
{
    mangled_assert("??$relicstring_copyN@D@@YGXPADPBDI@Z");
    todo("implement");
}

_inline void relicstring_copyN<wchar_t>(wchar_t *dst, wchar_t const *src, unsigned __int32 maxlen) // 0x469EA5
{
    mangled_assert("??$relicstring_copyN@_W@@YGXPA_WPB_WI@Z");
    todo("implement");
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

_inline void relicstring_trait<char>::copyN(char *dst, char const *src, unsigned __int32 maxlen) // 0x10003E2E
{
    mangled_assert("?copyN@?$relicstring_trait@D@@SGXPADPBDI@Z");
    todo("implement");
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

_inline void std::string_tolower(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &s) // 0x10078640
{
    mangled_assert("?string_tolower@std@@YGXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z");
    todo("implement");
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

_inline void relicstring_trait<char>::copyN(char *dst, char const *src, unsigned __int32 maxlen) // 0x10002A46
{
    mangled_assert("?copyN@?$relicstring_trait@D@@SGXPADPBDI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __STLEXSTRING_H__
#endif
