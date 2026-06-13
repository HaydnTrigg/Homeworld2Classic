#if 0
#ifndef __BLOWFISH_H__
#define __BLOWFISH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CBlowFish
{
private:
    unsigned long PArray[18]; // 0x0
    unsigned long SBoxes[4][256]; // 0x48
    void Blowfish_encipher(unsigned long *, unsigned long *) const;
    void Blowfish_decipher(unsigned long *, unsigned long *) const;
public:
    void Initialize(unsigned char *, __int32);
    static unsigned long GetOutputLength(__int32 lInputLong);
    unsigned long Encode(unsigned char const *, unsigned char *, __int32) const;
    void Decode(unsigned char const *, unsigned char *, __int32) const;
};
static_assert(sizeof(CBlowFish) == 4168, "Invalid CBlowFish size");

union aword
{
    unsigned long dword; // 0x0
    unsigned char byte[4]; // 0x0
    struct
    {
        unsigned __int32 byte3 : 8; // 0x0
        unsigned __int32 byte2 : 8; // 0x0
        unsigned __int32 byte1 : 8; // 0x0
        unsigned __int32 byte0 : 8; // 0x0
    } w; // 0x0
    struct <unnamed-type-w>
    {
        unsigned __int32 byte3 : 8; // 0x0
        unsigned __int32 byte2 : 8; // 0x0
        unsigned __int32 byte1 : 8; // 0x0
        unsigned __int32 byte0 : 8; // 0x0
    };
    static_assert(sizeof(<unnamed-type-w>) == 4, "Invalid <unnamed-type-w> size");
};
static_assert(sizeof(aword) == 4, "Invalid aword size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BLOWFISH_H__
#endif
