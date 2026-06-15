#if 0
#ifndef __ZEROED_H__
#define __ZEROED_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct ZeroedDefaultValue<unsigned long>
{
    static unsigned long DefVal();
};
static_assert(sizeof(ZeroedDefaultValue<unsigned long>) == 1, "Invalid ZeroedDefaultValue<unsigned long> size");

struct ZeroedDefaultValue<long>
{
    static long DefVal();
};
static_assert(sizeof(ZeroedDefaultValue<long>) == 1, "Invalid ZeroedDefaultValue<long> size");

struct ZeroedDefaultValue<unsigned int>
{
    static unsigned __int32 DefVal();
};
static_assert(sizeof(ZeroedDefaultValue<unsigned int>) == 1, "Invalid ZeroedDefaultValue<unsigned int> size");

struct ZeroedDefaultValue<int>
{
    static _inline __int32 DefVal();
};
static_assert(sizeof(ZeroedDefaultValue<int>) == 1, "Invalid ZeroedDefaultValue<int> size");

struct ZeroedDefaultValue<double>
{
    static double DefVal();
};
static_assert(sizeof(ZeroedDefaultValue<double>) == 1, "Invalid ZeroedDefaultValue<double> size");

struct ZeroedDefaultValue<float>
{
    static float DefVal();
};
static_assert(sizeof(ZeroedDefaultValue<float>) == 1, "Invalid ZeroedDefaultValue<float> size");

struct ZeroedDefaultValue<bool>
{
    static _inline bool DefVal();
};
static_assert(sizeof(ZeroedDefaultValue<bool>) == 1, "Invalid ZeroedDefaultValue<bool> size");

struct Zeroed<int,ZeroedDefaultValue<int> >
{
private:
    __int32 val; // 0x0
public:
    _inline Zeroed<int,ZeroedDefaultValue<int> >();
    __int32 &get();
    _inline __int32 const &get() const;
    __int32 const &operator const int &() const;
    _inline Zeroed<int,ZeroedDefaultValue<int> > operator++(__int32);
    _inline Zeroed<int,ZeroedDefaultValue<int> > const &operator++();
    _inline Zeroed<int,ZeroedDefaultValue<int> > operator--(__int32);
    Zeroed<int,ZeroedDefaultValue<int> > const &operator--();
};
static_assert(sizeof(Zeroed<int,ZeroedDefaultValue<int> >) == 4, "Invalid Zeroed<int,ZeroedDefaultValue<int> > size");

struct Zeroed<bool,ZeroedDefaultValue<bool> >
{
private:
    bool val; // 0x0
public:
    _inline Zeroed<bool,ZeroedDefaultValue<bool> >();
    bool &get();
    bool const &get() const;
    bool const &operator const bool &() const;
    Zeroed<bool,ZeroedDefaultValue<bool> > operator++(__int32);
    Zeroed<bool,ZeroedDefaultValue<bool> > const &operator++();
    Zeroed<bool,ZeroedDefaultValue<bool> > operator--(__int32);
    Zeroed<bool,ZeroedDefaultValue<bool> > const &operator--();
};
static_assert(sizeof(Zeroed<bool,ZeroedDefaultValue<bool> >) == 1, "Invalid Zeroed<bool,ZeroedDefaultValue<bool> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline __int32 ZeroedDefaultValue<int>::DefVal() // 0x50E0D6
{
    mangled_assert("?DefVal@?$ZeroedDefaultValue@H@@SGHXZ");
    todo("implement");
}

_inline bool ZeroedDefaultValue<bool>::DefVal() // 0x50FBE9
{
    mangled_assert("?DefVal@?$ZeroedDefaultValue@_N@@SG_NXZ");
    todo("implement");
}

_inline Zeroed<bool,ZeroedDefaultValue<bool> >::Zeroed<bool,ZeroedDefaultValue<bool> >() // 0x50F81F
{
    mangled_assert("??0?$Zeroed@_NU?$ZeroedDefaultValue@_N@@@@QAE@XZ");
    todo("implement");
}

_inline Zeroed<int,ZeroedDefaultValue<int> >::Zeroed<int,ZeroedDefaultValue<int> >() // 0x50D6B3
{
    mangled_assert("??0?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QAE@XZ");
    todo("implement");
}

_inline __int32 const &Zeroed<int,ZeroedDefaultValue<int> >::get() const // 0x50F0C7
{
    mangled_assert("?get@?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QBEABHXZ");
    todo("implement");
}

_inline bool const &Zeroed<bool,ZeroedDefaultValue<bool> >::operator bool const &() const // 0x50F945
{
    mangled_assert("??B?$Zeroed@_NU?$ZeroedDefaultValue@_N@@@@QBEAB_NXZ");
    todo("implement");
}

_inline __int32 const &Zeroed<int,ZeroedDefaultValue<int> >::operator int const &() const // 0x50DF65
{
    mangled_assert("??B?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QBEABHXZ");
    todo("implement");
}

_inline Zeroed<int,ZeroedDefaultValue<int> > &Zeroed<int,ZeroedDefaultValue<int> >::operator=<int>(__int32 const &) // 0x50F7D7
{
    mangled_assert("??$?4H@?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QAEAAU0@ABH@Z");
    todo("implement");
}

_inline Zeroed<bool,ZeroedDefaultValue<bool> > &Zeroed<bool,ZeroedDefaultValue<bool> >::operator=<bool>(bool const &) // 0x50F7E4
{
    mangled_assert("??$?4_N@?$Zeroed@_NU?$ZeroedDefaultValue@_N@@@@QAEAAU0@AB_N@Z");
    todo("implement");
}

_inline Zeroed<int,ZeroedDefaultValue<int> > &Zeroed<int,ZeroedDefaultValue<int> >::operator=<unsigned int>(unsigned __int32 const &) // 0x50D08C
{
    mangled_assert("??$?4I@?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QAEAAU0@ABI@Z");
    todo("implement");
}

_inline Zeroed<int,ZeroedDefaultValue<int> > &Zeroed<int,ZeroedDefaultValue<int> >::operator+=<int>(__int32 const &) // 0x50F7F1
{
    mangled_assert("??$?YH@?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QAEAAU0@ABH@Z");
    todo("implement");
}

_inline Zeroed<int,ZeroedDefaultValue<int> > &Zeroed<int,ZeroedDefaultValue<int> >::operator+=<unsigned int>(unsigned __int32 const &) // 0x50F7FE
{
    mangled_assert("??$?YI@?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QAEAAU0@ABI@Z");
    todo("implement");
}

_inline Zeroed<int,ZeroedDefaultValue<int> > &Zeroed<int,ZeroedDefaultValue<int> >::operator-=<unsigned int>(unsigned __int32 const &) // 0x50F80B
{
    mangled_assert("??$?ZI@?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QAEAAU0@ABI@Z");
    todo("implement");
}

_inline Zeroed<int,ZeroedDefaultValue<int> > const &Zeroed<int,ZeroedDefaultValue<int> >::operator++() // 0x50F962
{
    mangled_assert("??E?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QAEABU0@XZ");
    todo("implement");
}

_inline Zeroed<int,ZeroedDefaultValue<int> > Zeroed<int,ZeroedDefaultValue<int> >::operator++(__int32) // 0x50F954
{
    mangled_assert("??E?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QAE?AU0@H@Z");
    todo("implement");
}

_inline Zeroed<int,ZeroedDefaultValue<int> > Zeroed<int,ZeroedDefaultValue<int> >::operator--(__int32) // 0x50F979
{
    mangled_assert("??F?$Zeroed@HU?$ZeroedDefaultValue@H@@@@QAE?AU0@H@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __ZEROED_H__
#endif
