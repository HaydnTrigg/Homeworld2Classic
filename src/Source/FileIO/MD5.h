#if 0
#ifndef __MD5_H__
#define __MD5_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MD5
{
public:
    _inline MD5();
    _inline ~MD5();
    void ResetStream();
    void GetMD5Hash(unsigned char *);
    void AddValues(void const *, unsigned __int32);
    static void GetFileMD5Hash(char const *fileName, unsigned char *MD5Hash);
    static void GetStreamMD5Hash(ByteStream *stream, unsigned char *MD5Hash);
    struct MD5State
    {
        unsigned long state[4]; // 0x0
        unsigned long count[2]; // 0x10
        unsigned char buffer[64]; // 0x18
    };
    static_assert(sizeof(MD5State) == 88, "Invalid MD5State size");
private:
    MD5::MD5State m_State; // 0x0
};
static_assert(sizeof(MD5) == 88, "Invalid MD5 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_10001C09(MD5 *const);
_inline MD5::MD5() // 0x10001C09
{
    mangled_assert("??0MD5@@QAE@XZ");
    todo("implement");
    _sub_10001C09(this);
}

_extern void _sub_10001E7D(MD5 *const);
_inline MD5::~MD5() // 0x10001E7D
{
    mangled_assert("??1MD5@@QAE@XZ");
    todo("implement");
    _sub_10001E7D(this);
}

/* ---------- private code */

#endif // __MD5_H__
/* combined */
#ifndef __MD5_H__
#define __MD5_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MD5
{
public:
    _inline MD5();
    _inline ~MD5();
    void ResetStream();
    void GetMD5Hash(unsigned char *);
    void AddValues(void const *, unsigned __int32);
    static void GetFileMD5Hash(char const *, unsigned char *);
    static void GetStreamMD5Hash(ByteStream *, unsigned char *);
    struct MD5State
    {
        unsigned long state[4]; // 0x0
        unsigned long count[2]; // 0x10
        unsigned char buffer[64]; // 0x18
    };
    static_assert(sizeof(MD5State) == 88, "Invalid MD5State size");
private:
    MD5::MD5State m_State; // 0x0
};
static_assert(sizeof(MD5) == 88, "Invalid MD5 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_5B98BF(MD5 *const);
_inline MD5::MD5() // 0x5B98BF
{
    mangled_assert("??0MD5@@QAE@XZ");
    todo("implement");
    _sub_5B98BF(this);
}

_extern void _sub_469FEE(MD5 *const);
_inline MD5::~MD5() // 0x469FEE
{
    mangled_assert("??1MD5@@QAE@XZ");
    todo("implement");
    _sub_469FEE(this);
}

/* ---------- private code */

#endif // __MD5_H__
#endif
