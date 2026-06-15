#if 0
#ifndef __FIXEDSTRING_H__
#define __FIXEDSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class fixedstring<260,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 260, // 0x0104
    };
private:
    char m_internal[261]; // 0x0
public:
    fixedstring<260,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline fixedstring<260,relicstring_trait<char> >(char const *);
    _inline fixedstring<260,relicstring_trait<char> >();
    _inline ~fixedstring<260,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    _inline char const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(char const *) const;
    static fixedstring<260,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<260,relicstring_trait<char> >) == 261, "Invalid fixedstring<260,relicstring_trait<char> > size");

class fstring<260> :
    public fixedstring<260,relicstring_trait<char> >
{
public:
    fstring<260>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline fstring<260>(char const *);
    _inline fstring<260>();
    _inline ~fstring<260>();
};
static_assert(sizeof(fstring<260>) == 261, "Invalid fstring<260> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline fixedstring<260,relicstring_trait<char> >::fixedstring<260,relicstring_trait<char> >() // 0x1000659A
{
    mangled_assert("??0?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<260,relicstring_trait<char> >::fixedstring<260,relicstring_trait<char> >(char const *) // 0x10001957
{
    mangled_assert("??0?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QAE@PBD@Z");
    todo("implement");
}

_inline fixedstring<260,relicstring_trait<char> > &fixedstring<260,relicstring_trait<char> >::operator=(char const *) // 0x10001EBC
{
    mangled_assert("??4?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QAEAAV0@PBD@Z");
    todo("implement");
}

_inline fixedstring<260,relicstring_trait<char> >::~fixedstring<260,relicstring_trait<char> >() // 0x10001D2D
{
    mangled_assert("??1?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QAE@XZ");
    todo("implement");
}

_inline char const *fixedstring<260,relicstring_trait<char> >::c_str() const // 0x10003FF1
{
    mangled_assert("?c_str@?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QBEPBDXZ");
    todo("implement");
}

_inline fstring<260>::fstring<260>() // 0x100065A0
{
    mangled_assert("??0?$fstring@$0BAE@@@QAE@XZ");
    todo("implement");
}

_inline fstring<260>::fstring<260>(char const *) // 0x10001969
{
    mangled_assert("??0?$fstring@$0BAE@@@QAE@PBD@Z");
    todo("implement");
}

_inline fstring<260> &fstring<260>::operator=(char const *) // 0x100065BE
{
    mangled_assert("??4?$fstring@$0BAE@@@QAEAAV0@PBD@Z");
    todo("implement");
}

_inline fstring<260>::~fstring<260>() // 0x10001D2E
{
    mangled_assert("??1?$fstring@$0BAE@@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FIXEDSTRING_H__
/* combined */
#ifndef __FIXEDSTRING_H__
#define __FIXEDSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class fixedstring<260,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 260, // 0x0104
    };
private:
    char m_internal[261]; // 0x0
public:
    fixedstring<260,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fixedstring<260,relicstring_trait<char> >(char const *);
    fixedstring<260,relicstring_trait<char> >();
    ~fixedstring<260,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    char const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(char const *) const;
    static fixedstring<260,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<260,relicstring_trait<char> >) == 261, "Invalid fixedstring<260,relicstring_trait<char> > size");

class fstring<260> :
    public fixedstring<260,relicstring_trait<char> >
{
public:
    fstring<260>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fstring<260>(char const *);
    fstring<260>();
    ~fstring<260>();
};
static_assert(sizeof(fstring<260>) == 261, "Invalid fstring<260> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FIXEDSTRING_H__
/* combined */
#ifndef __FIXEDSTRING_H__
#define __FIXEDSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class fixedstring<260,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 260, // 0x0104
    };
private:
    char m_internal[261]; // 0x0
public:
    fixedstring<260,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline fixedstring<260,relicstring_trait<char> >(char const *);
    _inline fixedstring<260,relicstring_trait<char> >();
    _inline ~fixedstring<260,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    _inline char const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(char const *) const;
    static fixedstring<260,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<260,relicstring_trait<char> >) == 261, "Invalid fixedstring<260,relicstring_trait<char> > size");

class fixedstring<16,relicstring_trait<wchar_t> >
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    typedef wchar_t const *const_iterator;
    enum
    {
        LEN = 16, // 0x0010
    };
private:
    wchar_t m_internal[17]; // 0x0
public:
    fixedstring<16,relicstring_trait<wchar_t> >(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    _inline fixedstring<16,relicstring_trait<wchar_t> >(wchar_t const *);
    _inline fixedstring<16,relicstring_trait<wchar_t> >();
    _inline ~fixedstring<16,relicstring_trait<wchar_t> >();
    wchar_t const *begin() const;
    wchar_t const *end() const;
    wchar_t at(unsigned __int32) const;
    wchar_t const &operator[](unsigned __int32) const;
    wchar_t &operator[](unsigned __int32);
    _inline wchar_t const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(wchar_t const *) const;
    static fixedstring<16,relicstring_trait<wchar_t> > const &fakestring(wchar_t const *);
};
static_assert(sizeof(fixedstring<16,relicstring_trait<wchar_t> >) == 34, "Invalid fixedstring<16,relicstring_trait<wchar_t> > size");

class fixedstring<64,relicstring_trait<wchar_t> >
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    typedef wchar_t const *const_iterator;
    enum
    {
        LEN = 64, // 0x0040 '@'
    };
private:
    wchar_t m_internal[65]; // 0x0
public:
    fixedstring<64,relicstring_trait<wchar_t> >(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    fixedstring<64,relicstring_trait<wchar_t> >(wchar_t const *);
    _inline fixedstring<64,relicstring_trait<wchar_t> >();
    _inline ~fixedstring<64,relicstring_trait<wchar_t> >();
    wchar_t const *begin() const;
    wchar_t const *end() const;
    wchar_t at(unsigned __int32) const;
    wchar_t const &operator[](unsigned __int32) const;
    wchar_t &operator[](unsigned __int32);
    _inline wchar_t const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(wchar_t const *) const;
    static fixedstring<64,relicstring_trait<wchar_t> > const &fakestring(wchar_t const *);
};
static_assert(sizeof(fixedstring<64,relicstring_trait<wchar_t> >) == 130, "Invalid fixedstring<64,relicstring_trait<wchar_t> > size");

class fixedstring<64,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 64, // 0x0040 '@'
    };
private:
    char m_internal[65]; // 0x0
public:
    fixedstring<64,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline fixedstring<64,relicstring_trait<char> >(char const *);
    fixedstring<64,relicstring_trait<char> >();
    _inline ~fixedstring<64,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    _inline char const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(char const *) const;
    static fixedstring<64,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<64,relicstring_trait<char> >) == 65, "Invalid fixedstring<64,relicstring_trait<char> > size");

class fixedstring<32,relicstring_trait<wchar_t> >
{
public:
    typedef wchar_t char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > stl_string;
    typedef wchar_t const *const_iterator;
    enum
    {
        LEN = 32, // 0x0020 ' '
    };
private:
    wchar_t m_internal[33]; // 0x0
public:
    fixedstring<32,relicstring_trait<wchar_t> >(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    fixedstring<32,relicstring_trait<wchar_t> >(wchar_t const *);
    _inline fixedstring<32,relicstring_trait<wchar_t> >();
    _inline ~fixedstring<32,relicstring_trait<wchar_t> >();
    wchar_t const *begin() const;
    wchar_t const *end() const;
    wchar_t at(unsigned __int32) const;
    wchar_t const &operator[](unsigned __int32) const;
    wchar_t &operator[](unsigned __int32);
    _inline wchar_t const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(wchar_t const *) const;
    static fixedstring<32,relicstring_trait<wchar_t> > const &fakestring(wchar_t const *);
};
static_assert(sizeof(fixedstring<32,relicstring_trait<wchar_t> >) == 66, "Invalid fixedstring<32,relicstring_trait<wchar_t> > size");

class fixedstring<256,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 256, // 0x0100
    };
private:
    char m_internal[257]; // 0x0
public:
    fixedstring<256,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fixedstring<256,relicstring_trait<char> >(char const *);
    _inline fixedstring<256,relicstring_trait<char> >();
    _inline ~fixedstring<256,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    _inline char const *c_str() const;
    _inline unsigned __int32 length() const;
    _inline unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    _inline __int32 compare(char const *) const;
    static fixedstring<256,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<256,relicstring_trait<char> >) == 257, "Invalid fixedstring<256,relicstring_trait<char> > size");

class fixedstring<0,relicstring_trait<char> >
{
};
static_assert(sizeof(fixedstring<0,relicstring_trait<char> >) == 1, "Invalid fixedstring<0,relicstring_trait<char> > size");

class fixedstring<1,relicstring_trait<char> >
{
};
static_assert(sizeof(fixedstring<1,relicstring_trait<char> >) == 1, "Invalid fixedstring<1,relicstring_trait<char> > size");

class fixedstring<0,relicstring_trait<wchar_t> >
{
};
static_assert(sizeof(fixedstring<0,relicstring_trait<wchar_t> >) == 1, "Invalid fixedstring<0,relicstring_trait<wchar_t> > size");

class fixedstring<1,relicstring_trait<wchar_t> >
{
};
static_assert(sizeof(fixedstring<1,relicstring_trait<wchar_t> >) == 1, "Invalid fixedstring<1,relicstring_trait<wchar_t> > size");

class fstring<260> :
    public fixedstring<260,relicstring_trait<char> >
{
public:
    fstring<260>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline fstring<260>(char const *);
    _inline fstring<260>();
    _inline ~fstring<260>();
};
static_assert(sizeof(fstring<260>) == 261, "Invalid fstring<260> size");

class fstring<64> :
    public fixedstring<64,relicstring_trait<char> >
{
public:
    fstring<64>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline fstring<64>(char const *);
    fstring<64>();
    _inline ~fstring<64>();
};
static_assert(sizeof(fstring<64>) == 65, "Invalid fstring<64> size");

class fstring<256> :
    public fixedstring<256,relicstring_trait<char> >
{
public:
    fstring<256>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fstring<256>(char const *);
    _inline fstring<256>();
    _inline ~fstring<256>();
};
static_assert(sizeof(fstring<256>) == 257, "Invalid fstring<256> size");

class fwstring<16> :
    public fixedstring<16,relicstring_trait<wchar_t> >
{
public:
    fwstring<16>(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    _inline fwstring<16>(wchar_t const *);
    _inline fwstring<16>();
    _inline ~fwstring<16>();
};
static_assert(sizeof(fwstring<16>) == 34, "Invalid fwstring<16> size");

class fwstring<64> :
    public fixedstring<64,relicstring_trait<wchar_t> >
{
public:
    fwstring<64>(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    fwstring<64>(wchar_t const *);
    _inline fwstring<64>();
    _inline ~fwstring<64>();
};
static_assert(sizeof(fwstring<64>) == 130, "Invalid fwstring<64> size");

class fwstring<32> :
    public fixedstring<32,relicstring_trait<wchar_t> >
{
public:
    fwstring<32>(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    fwstring<32>(wchar_t const *);
    _inline fwstring<32>();
    _inline ~fwstring<32>();
};
static_assert(sizeof(fwstring<32>) == 66, "Invalid fwstring<32> size");

/* ---------- prototypes */

extern _inline bool operator==<256,relicstring_trait<char> >(fixedstring<256,relicstring_trait<char> > const &l, char const *r);

/* ---------- globals */

/* ---------- public code */

_inline bool operator==<256,relicstring_trait<char> >(fixedstring<256,relicstring_trait<char> > const &l, char const *r) // 0x70E94C
{
    mangled_assert("??$?8$0BAA@V?$relicstring_trait@D@@@@YG_NABV?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@PBD@Z");
    todo("implement");
}

_inline fixedstring<256,relicstring_trait<char> >::fixedstring<256,relicstring_trait<char> >() // 0x50D76C
{
    mangled_assert("??0?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<32,relicstring_trait<wchar_t> >::fixedstring<32,relicstring_trait<wchar_t> >() // 0x50D772
{
    mangled_assert("??0?$fixedstring@$0CA@V?$relicstring_trait@_W@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<16,relicstring_trait<wchar_t> >::fixedstring<16,relicstring_trait<wchar_t> >() // 0x504508
{
    mangled_assert("??0?$fixedstring@$0BA@V?$relicstring_trait@_W@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<260,relicstring_trait<char> >::fixedstring<260,relicstring_trait<char> >() // 0x4F746C
{
    mangled_assert("??0?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<64,relicstring_trait<wchar_t> >::fixedstring<64,relicstring_trait<wchar_t> >() // 0x4F7472
{
    mangled_assert("??0?$fixedstring@$0EA@V?$relicstring_trait@_W@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<64,relicstring_trait<char> >::fixedstring<64,relicstring_trait<char> >(char const *) // 0x504510
{
    mangled_assert("??0?$fixedstring@$0EA@V?$relicstring_trait@D@@@@QAE@PBD@Z");
    todo("implement");
}

_inline fixedstring<16,relicstring_trait<wchar_t> >::fixedstring<16,relicstring_trait<wchar_t> >(wchar_t const *) // 0x50101E
{
    mangled_assert("??0?$fixedstring@$0BA@V?$relicstring_trait@_W@@@@QAE@PB_W@Z");
    todo("implement");
}

_inline fixedstring<260,relicstring_trait<char> >::fixedstring<260,relicstring_trait<char> >(char const *) // 0x4699CF
{
    mangled_assert("??0?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QAE@PBD@Z");
    todo("implement");
}

_inline fixedstring<256,relicstring_trait<char> > &fixedstring<256,relicstring_trait<char> >::operator=(char const *) // 0x50F8E8
{
    mangled_assert("??4?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@QAEAAV0@PBD@Z");
    todo("implement");
}

_inline fixedstring<64,relicstring_trait<wchar_t> > &fixedstring<64,relicstring_trait<wchar_t> >::operator=(wchar_t const *) // 0x50F906
{
    mangled_assert("??4?$fixedstring@$0EA@V?$relicstring_trait@_W@@@@QAEAAV0@PB_W@Z");
    todo("implement");
}

_inline fixedstring<32,relicstring_trait<wchar_t> > &fixedstring<32,relicstring_trait<wchar_t> >::operator=(wchar_t const *) // 0x50DBBD
{
    mangled_assert("??4?$fixedstring@$0CA@V?$relicstring_trait@_W@@@@QAEAAV0@PB_W@Z");
    todo("implement");
}

_inline fixedstring<64,relicstring_trait<char> > &fixedstring<64,relicstring_trait<char> >::operator=(char const *) // 0x5046E4
{
    mangled_assert("??4?$fixedstring@$0EA@V?$relicstring_trait@D@@@@QAEAAV0@PBD@Z");
    todo("implement");
}

_inline fixedstring<16,relicstring_trait<wchar_t> > &fixedstring<16,relicstring_trait<wchar_t> >::operator=(wchar_t const *) // 0x501136
{
    mangled_assert("??4?$fixedstring@$0BA@V?$relicstring_trait@_W@@@@QAEAAV0@PB_W@Z");
    todo("implement");
}

_inline fixedstring<260,relicstring_trait<char> > &fixedstring<260,relicstring_trait<char> >::operator=(char const *) // 0x469A02
{
    mangled_assert("??4?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QAEAAV0@PBD@Z");
    todo("implement");
}

_inline fixedstring<16,relicstring_trait<wchar_t> > &fixedstring<16,relicstring_trait<wchar_t> >::operator=(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x5046BA
{
    mangled_assert("??4?$fixedstring@$0BA@V?$relicstring_trait@_W@@@@QAEAAV0@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

_inline fixedstring<260,relicstring_trait<char> > &fixedstring<260,relicstring_trait<char> >::operator=(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x5046CF
{
    mangled_assert("??4?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QAEAAV0@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline fixedstring<256,relicstring_trait<char> > &fixedstring<256,relicstring_trait<char> >::operator=(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x70EFD5
{
    mangled_assert("??4?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@QAEAAV0@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline fixedstring<256,relicstring_trait<char> >::~fixedstring<256,relicstring_trait<char> >() // 0x50DB4A
{
    mangled_assert("??1?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<32,relicstring_trait<wchar_t> >::~fixedstring<32,relicstring_trait<wchar_t> >() // 0x50DB4B
{
    mangled_assert("??1?$fixedstring@$0CA@V?$relicstring_trait@_W@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<64,relicstring_trait<char> >::~fixedstring<64,relicstring_trait<char> >() // 0x504632
{
    mangled_assert("??1?$fixedstring@$0EA@V?$relicstring_trait@D@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<16,relicstring_trait<wchar_t> >::~fixedstring<16,relicstring_trait<wchar_t> >() // 0x5010D9
{
    mangled_assert("??1?$fixedstring@$0BA@V?$relicstring_trait@_W@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<64,relicstring_trait<wchar_t> >::~fixedstring<64,relicstring_trait<wchar_t> >() // 0x4F74B3
{
    mangled_assert("??1?$fixedstring@$0EA@V?$relicstring_trait@_W@@@@QAE@XZ");
    todo("implement");
}

_inline fixedstring<260,relicstring_trait<char> >::~fixedstring<260,relicstring_trait<char> >() // 0x469A00
{
    mangled_assert("??1?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QAE@XZ");
    todo("implement");
}

_inline char const *fixedstring<256,relicstring_trait<char> >::c_str() const // 0x50EEE8
{
    mangled_assert("?c_str@?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@QBEPBDXZ");
    todo("implement");
}

_inline wchar_t const *fixedstring<32,relicstring_trait<wchar_t> >::c_str() const // 0x50EEEB
{
    mangled_assert("?c_str@?$fixedstring@$0CA@V?$relicstring_trait@_W@@@@QBEPB_WXZ");
    todo("implement");
}

_inline wchar_t const *fixedstring<64,relicstring_trait<wchar_t> >::c_str() const // 0x50EEEE
{
    mangled_assert("?c_str@?$fixedstring@$0EA@V?$relicstring_trait@_W@@@@QBEPB_WXZ");
    todo("implement");
}

_inline char const *fixedstring<64,relicstring_trait<char> >::c_str() const // 0x505E3D
{
    mangled_assert("?c_str@?$fixedstring@$0EA@V?$relicstring_trait@D@@@@QBEPBDXZ");
    todo("implement");
}

_inline wchar_t const *fixedstring<16,relicstring_trait<wchar_t> >::c_str() const // 0x502EBA
{
    mangled_assert("?c_str@?$fixedstring@$0BA@V?$relicstring_trait@_W@@@@QBEPB_WXZ");
    todo("implement");
}

_inline char const *fixedstring<260,relicstring_trait<char> >::c_str() const // 0x4F7842
{
    mangled_assert("?c_str@?$fixedstring@$0BAE@V?$relicstring_trait@D@@@@QBEPBDXZ");
    todo("implement");
}

_inline unsigned __int32 fixedstring<256,relicstring_trait<char> >::length() const // 0x70F890
{
    mangled_assert("?length@?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 fixedstring<256,relicstring_trait<char> >::size() const // 0x70F947
{
    mangled_assert("?size@?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@QBEIXZ");
    todo("implement");
}

_inline __int32 fixedstring<256,relicstring_trait<char> >::compare(char const *) const // 0x70F802
{
    mangled_assert("?compare@?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@QBEHPBD@Z");
    todo("implement");
}

_inline fstring<256>::fstring<256>() // 0x50D77A
{
    mangled_assert("??0?$fstring@$0BAA@@@QAE@XZ");
    todo("implement");
}

_inline fstring<260>::fstring<260>() // 0x4F747A
{
    mangled_assert("??0?$fstring@$0BAE@@@QAE@XZ");
    todo("implement");
}

_inline fstring<64>::fstring<64>(char const *) // 0x504522
{
    mangled_assert("??0?$fstring@$0EA@@@QAE@PBD@Z");
    todo("implement");
}

_inline fstring<260>::fstring<260>(char const *) // 0x4699E1
{
    mangled_assert("??0?$fstring@$0BAE@@@QAE@PBD@Z");
    todo("implement");
}

_inline fstring<256> &fstring<256>::operator=(char const *) // 0x50F921
{
    mangled_assert("??4?$fstring@$0BAA@@@QAEAAV0@PBD@Z");
    todo("implement");
}

_inline fstring<260> &fstring<260>::operator=(char const *) // 0x4F74C3
{
    mangled_assert("??4?$fstring@$0BAE@@@QAEAAV0@PBD@Z");
    todo("implement");
}

_inline fstring<260> &fstring<260>::operator=(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x5046FF
{
    mangled_assert("??4?$fstring@$0BAE@@@QAEAAV0@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline fstring<256> &fstring<256>::operator=(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x70EFEA
{
    mangled_assert("??4?$fstring@$0BAA@@@QAEAAV0@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline fstring<256>::~fstring<256>() // 0x50DB4C
{
    mangled_assert("??1?$fstring@$0BAA@@@QAE@XZ");
    todo("implement");
}

_inline fstring<64>::~fstring<64>() // 0x504633
{
    mangled_assert("??1?$fstring@$0EA@@@QAE@XZ");
    todo("implement");
}

_inline fstring<260>::~fstring<260>() // 0x469A01
{
    mangled_assert("??1?$fstring@$0BAE@@@QAE@XZ");
    todo("implement");
}

_inline fwstring<32>::fwstring<32>() // 0x50D780
{
    mangled_assert("??0?$fwstring@$0CA@@@QAE@XZ");
    todo("implement");
}

_inline fwstring<16>::fwstring<16>() // 0x504534
{
    mangled_assert("??0?$fwstring@$0BA@@@QAE@XZ");
    todo("implement");
}

_inline fwstring<64>::fwstring<64>() // 0x4F7480
{
    mangled_assert("??0?$fwstring@$0EA@@@QAE@XZ");
    todo("implement");
}

_inline fwstring<16>::fwstring<16>(wchar_t const *) // 0x501030
{
    mangled_assert("??0?$fwstring@$0BA@@@QAE@PB_W@Z");
    todo("implement");
}

_inline fwstring<64> &fwstring<64>::operator=(wchar_t const *) // 0x50F933
{
    mangled_assert("??4?$fwstring@$0EA@@@QAEAAV0@PB_W@Z");
    todo("implement");
}

_inline fwstring<32> &fwstring<32>::operator=(wchar_t const *) // 0x50DBD8
{
    mangled_assert("??4?$fwstring@$0CA@@@QAEAAV0@PB_W@Z");
    todo("implement");
}

_inline fwstring<16> &fwstring<16>::operator=(wchar_t const *) // 0x504735
{
    mangled_assert("??4?$fwstring@$0BA@@@QAEAAV0@PB_W@Z");
    todo("implement");
}

_inline fwstring<16> &fwstring<16>::operator=(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x50471A
{
    mangled_assert("??4?$fwstring@$0BA@@@QAEAAV0@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

_inline fwstring<32>::~fwstring<32>() // 0x50DB4D
{
    mangled_assert("??1?$fwstring@$0CA@@@QAE@XZ");
    todo("implement");
}

_inline fwstring<16>::~fwstring<16>() // 0x5010DA
{
    mangled_assert("??1?$fwstring@$0BA@@@QAE@XZ");
    todo("implement");
}

_inline fwstring<64>::~fwstring<64>() // 0x4F74B4
{
    mangled_assert("??1?$fwstring@$0EA@@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FIXEDSTRING_H__
/* combined */
#ifndef __FIXEDSTRING_H__
#define __FIXEDSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class fixedstring<260,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 260, // 0x0104
    };
private:
    char m_internal[261]; // 0x0
public:
    fixedstring<260,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fixedstring<260,relicstring_trait<char> >(char const *);
    fixedstring<260,relicstring_trait<char> >();
    ~fixedstring<260,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    char const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(char const *) const;
    static fixedstring<260,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<260,relicstring_trait<char> >) == 261, "Invalid fixedstring<260,relicstring_trait<char> > size");

class fstring<260> :
    public fixedstring<260,relicstring_trait<char> >
{
public:
    fstring<260>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fstring<260>(char const *);
    fstring<260>();
    ~fstring<260>();
};
static_assert(sizeof(fstring<260>) == 261, "Invalid fstring<260> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FIXEDSTRING_H__
/* combined */
#ifndef __FIXEDSTRING_H__
#define __FIXEDSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class fixedstring<260,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 260, // 0x0104
    };
private:
    char m_internal[261]; // 0x0
public:
    fixedstring<260,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fixedstring<260,relicstring_trait<char> >(char const *);
    fixedstring<260,relicstring_trait<char> >();
    ~fixedstring<260,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    char const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(char const *) const;
    static fixedstring<260,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<260,relicstring_trait<char> >) == 261, "Invalid fixedstring<260,relicstring_trait<char> > size");

class fixedstring<256,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 256, // 0x0100
    };
private:
    char m_internal[257]; // 0x0
public:
    fixedstring<256,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fixedstring<256,relicstring_trait<char> >(char const *);
    fixedstring<256,relicstring_trait<char> >();
    ~fixedstring<256,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    char const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(char const *) const;
    static fixedstring<256,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<256,relicstring_trait<char> >) == 257, "Invalid fixedstring<256,relicstring_trait<char> > size");

class fstring<260> :
    public fixedstring<260,relicstring_trait<char> >
{
public:
    fstring<260>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fstring<260>(char const *);
    fstring<260>();
    ~fstring<260>();
};
static_assert(sizeof(fstring<260>) == 261, "Invalid fstring<260> size");

class fstring<256> :
    public fixedstring<256,relicstring_trait<char> >
{
public:
    fstring<256>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fstring<256>(char const *);
    fstring<256>();
    ~fstring<256>();
};
static_assert(sizeof(fstring<256>) == 257, "Invalid fstring<256> size");

/* ---------- prototypes */

extern _inline bool operator<<256,relicstring_trait<char> >(fixedstring<256,relicstring_trait<char> > const &l, char const *r);

/* ---------- globals */

/* ---------- public code */

_inline bool operator<<256,relicstring_trait<char> >(fixedstring<256,relicstring_trait<char> > const &l, char const *r) // 0x100044C9
{
    mangled_assert("??$?M$0BAA@V?$relicstring_trait@D@@@@YG_NABV?$fixedstring@$0BAA@V?$relicstring_trait@D@@@@PBD@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __FIXEDSTRING_H__
/* combined */
#ifndef __FIXEDSTRING_H__
#define __FIXEDSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class fixedstring<260,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 260, // 0x0104
    };
private:
    char m_internal[261]; // 0x0
public:
    fixedstring<260,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fixedstring<260,relicstring_trait<char> >(char const *);
    fixedstring<260,relicstring_trait<char> >();
    ~fixedstring<260,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    char const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(char const *) const;
    static fixedstring<260,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<260,relicstring_trait<char> >) == 261, "Invalid fixedstring<260,relicstring_trait<char> > size");

class fstring<260> :
    public fixedstring<260,relicstring_trait<char> >
{
public:
    fstring<260>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fstring<260>(char const *);
    fstring<260>();
    ~fstring<260>();
};
static_assert(sizeof(fstring<260>) == 261, "Invalid fstring<260> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FIXEDSTRING_H__
/* combined */
#ifndef __FIXEDSTRING_H__
#define __FIXEDSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class fixedstring<260,relicstring_trait<char> >
{
public:
    typedef char char_type;
    typedef unsigned __int32 size_type;
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > stl_string;
    typedef char const *const_iterator;
    enum
    {
        LEN = 260, // 0x0104
    };
private:
    char m_internal[261]; // 0x0
public:
    fixedstring<260,relicstring_trait<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fixedstring<260,relicstring_trait<char> >(char const *);
    fixedstring<260,relicstring_trait<char> >();
    ~fixedstring<260,relicstring_trait<char> >();
    char const *begin() const;
    char const *end() const;
    char at(unsigned __int32) const;
    char const &operator[](unsigned __int32) const;
    char &operator[](unsigned __int32);
    char const *c_str() const;
    unsigned __int32 length() const;
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    unsigned __int32 capacity() const;
    bool empty() const;
    void erase();
    __int32 compare(char const *) const;
    static fixedstring<260,relicstring_trait<char> > const &fakestring(char const *);
};
static_assert(sizeof(fixedstring<260,relicstring_trait<char> >) == 261, "Invalid fixedstring<260,relicstring_trait<char> > size");

class fstring<260> :
    public fixedstring<260,relicstring_trait<char> >
{
public:
    fstring<260>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    fstring<260>(char const *);
    fstring<260>();
    ~fstring<260>();
};
static_assert(sizeof(fstring<260>) == 261, "Invalid fstring<260> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FIXEDSTRING_H__
#endif
