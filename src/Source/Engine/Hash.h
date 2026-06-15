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

_inline bool operator==(MD5Hash const &x, MD5Hash const &y) // 0x46A007
{
    mangled_assert("??8@YG_NABVMD5Hash@@0@Z");
    todo("implement");
}

_inline bool operator<(MD5Hash const &x, MD5Hash const &y) // 0x5F6775
{
    mangled_assert("??M@YG_NABVMD5Hash@@0@Z");
    todo("implement");
}

_inline bool operator!=(MD5Hash const &x, MD5Hash const &y) // 0x46A035
{
    mangled_assert("??9@YG_NABVMD5Hash@@0@Z");
    todo("implement");
}

_inline std::basic_ostream<char,std::char_traits<char> > &operator<<(std::basic_ostream<char,std::char_traits<char> > &out, MD5Hash const &hash) // 0x602775
{
    mangled_assert("??6@YGAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AAV01@ABVMD5Hash@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __HASH_H__
#endif
