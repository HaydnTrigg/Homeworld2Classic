#if 0
#ifndef __HASH_H__
#define __HASH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MD5Hash
{
public:
    enum
    {
        LENGTH = 16, // 0x0010
    };
    MD5Hash(unsigned char const *);
    MD5Hash();
    void Update(void const *, unsigned __int32);
    void Finish();
    void GetValue(unsigned char *) const;
    void Print(std::basic_ostream<char,std::char_traits<char> > &) const;
private:
    bool m_bIsInit; // 0x0
    unsigned char m_value[16]; // 0x1
    MD5 m_hashContext; // 0x14
public:
    _inline ~MD5Hash(); /* compiler_generated() */
};
static_assert(sizeof(MD5Hash) == 108, "Invalid MD5Hash size");

/* ---------- prototypes */

extern _inline bool operator==(MD5Hash const &x, MD5Hash const &y);
extern _inline bool operator<(MD5Hash const &x, MD5Hash const &y);
extern _inline bool operator!=(MD5Hash const &x, MD5Hash const &y);
extern _inline std::basic_ostream<char,std::char_traits<char> > &operator<<(std::basic_ostream<char,std::char_traits<char> > &out, MD5Hash const &hash);

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_46A007(MD5Hash const &, MD5Hash const &);
_inline bool operator==(MD5Hash const &x, MD5Hash const &y) // 0x46A007
{
    mangled_assert("??8@YG_NABVMD5Hash@@0@Z");
    todo("implement");
    bool __result = _sub_46A007(x, y);
    return __result;
}

_extern bool _sub_5F6775(MD5Hash const &, MD5Hash const &);
_inline bool operator<(MD5Hash const &x, MD5Hash const &y) // 0x5F6775
{
    mangled_assert("??M@YG_NABVMD5Hash@@0@Z");
    todo("implement");
    bool __result = _sub_5F6775(x, y);
    return __result;
}

_extern bool _sub_46A035(MD5Hash const &, MD5Hash const &);
_inline bool operator!=(MD5Hash const &x, MD5Hash const &y) // 0x46A035
{
    mangled_assert("??9@YG_NABVMD5Hash@@0@Z");
    todo("implement");
    bool __result = _sub_46A035(x, y);
    return __result;
}

_extern std::basic_ostream<char,std::char_traits<char> > &_sub_602775(std::basic_ostream<char,std::char_traits<char> > &, MD5Hash const &);
_inline std::basic_ostream<char,std::char_traits<char> > &operator<<(std::basic_ostream<char,std::char_traits<char> > &out, MD5Hash const &hash) // 0x602775
{
    mangled_assert("??6@YGAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AAV01@ABVMD5Hash@@@Z");
    todo("implement");
    std::basic_ostream<char,std::char_traits<char> > & __result = _sub_602775(out, hash);
    return __result;
}

/* ---------- private code */

#endif // __HASH_H__
#endif
