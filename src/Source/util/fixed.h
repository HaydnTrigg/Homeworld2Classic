#if 0
#ifndef __FIXED_H__
#define __FIXED_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Fixed<10>
{
public:
    enum
    {
        FRACTION_MASK = 1023, // 0x03FF
    };
    enum
    {
        BITS = 10, // 0x000A
    };
    _inline Fixed<10>(__int32, unsigned __int32 const &);
    _inline __int32 integer() const;
    unsigned __int32 fraction() const;
    _inline Fixed<10> &operator=(__int32);
    _inline Fixed<10> &operator=(Fixed<10> const &);
    _inline Fixed<10> &operator+=(__int32);
    _inline Fixed<10> &operator+=(Fixed<10> const &);
    Fixed<10> &operator-=(__int32);
    _inline Fixed<10> &operator-=(Fixed<10> const &);
    _inline Fixed<10> &operator*=(__int32);
    _inline Fixed<10> &operator*=(Fixed<10> const &);
    _inline Fixed<10> &operator/=(__int32);
    _inline Fixed<10> &operator/=(Fixed<10> const &);
    Fixed<10> &operator<<=(__int32);
    Fixed<10> &operator>>=(__int32);
    _inline void setFloat(float);
    _inline float getFloat() const;
    __int32 v; // 0x0
    struct ?$select_shifter@$00;
    struct ?$select_shifter@$0A@;
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Fixed<10>) == 4, "Invalid Fixed<10> size");

/* ---------- prototypes */

extern _inline Fixed<10> operator+<10>(Fixed<10> const &lhs, Fixed<10> const &rhs);
extern _inline Fixed<10> operator-<10>(Fixed<10> const &lhs, Fixed<10> const &rhs);
extern _inline Fixed<10> operator*<10>(Fixed<10> const &lhs, Fixed<10> const &rhs);
extern _inline Fixed<10> operator*<10>(Fixed<10> const &lhs, __int32 rhs);
extern _inline bool operator==<10>(Fixed<10> const &lhs, Fixed<10> const &rhs);
extern _inline bool operator<<10>(Fixed<10> const &lhs, Fixed<10> const &rhs);
extern _inline bool operator><10>(Fixed<10> const &lhs, Fixed<10> const &rhs);
extern _inline bool operator<=<10>(Fixed<10> const &lhs, Fixed<10> const &rhs);
extern _inline bool operator>=<10>(Fixed<10> const &lhs, Fixed<10> const &rhs);

/* ---------- globals */

/* ---------- public code */

_inline Fixed<10>::Fixed<10>(__int32, unsigned __int32 const &) // 0x455EF6
{
    mangled_assert("??0?$Fixed@$09@@QAE@HABI@Z");
    todo("implement");
}

_inline __int32 Fixed<10>::integer() const // 0x48D7EF
{
    mangled_assert("?integer@?$Fixed@$09@@QBEHXZ");
    todo("implement");
}

_inline Fixed<10> &Fixed<10>::operator=(Fixed<10> const &) // 0x48A2D2
{
    mangled_assert("??4?$Fixed@$09@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline Fixed<10> &Fixed<10>::operator+=(Fixed<10> const &) // 0x48A5F5
{
    mangled_assert("??Y?$Fixed@$09@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline Fixed<10> &Fixed<10>::operator-=(Fixed<10> const &) // 0x48A602
{
    mangled_assert("??Z?$Fixed@$09@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline Fixed<10> &Fixed<10>::operator*=(Fixed<10> const &) // 0x4B1306
{
    mangled_assert("??X?$Fixed@$09@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline Fixed<10> &Fixed<10>::operator/=(Fixed<10> const &) // 0x4ED185
{
    mangled_assert("??_0?$Fixed@$09@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline Fixed<10> &Fixed<10>::operator=(__int32) // 0x48A2DF
{
    mangled_assert("??4?$Fixed@$09@@QAEAAV0@H@Z");
    todo("implement");
}

_inline Fixed<10> &Fixed<10>::operator+=(__int32) // 0x50F9B2
{
    mangled_assert("??Y?$Fixed@$09@@QAEAAV0@H@Z");
    todo("implement");
}

_inline Fixed<10> &Fixed<10>::operator*=(__int32) // 0x4B131C
{
    mangled_assert("??X?$Fixed@$09@@QAEAAV0@H@Z");
    todo("implement");
}

_inline Fixed<10> &Fixed<10>::operator/=(__int32) // 0x5CEB1E
{
    mangled_assert("??_0?$Fixed@$09@@QAEAAV0@H@Z");
    todo("implement");
}

_inline void Fixed<10>::setFloat(float) // 0x45846F
{
    mangled_assert("?setFloat@?$Fixed@$09@@QAEXM@Z");
    todo("implement");
}

_inline float Fixed<10>::getFloat() const // 0x615988
{
    mangled_assert("?getFloat@?$Fixed@$09@@QBEMXZ");
    todo("implement");
}

_inline Fixed<10> operator+<10>(Fixed<10> const &lhs, Fixed<10> const &rhs) // 0x4897DD
{
    mangled_assert("??$?H$09@@YG?AV?$Fixed@$09@@ABV0@0@Z");
    todo("implement");
}

_inline Fixed<10> operator-<10>(Fixed<10> const &lhs, Fixed<10> const &rhs) // 0x4897C8
{
    mangled_assert("??$?G$09@@YG?AV?$Fixed@$09@@ABV0@0@Z");
    todo("implement");
}

_inline Fixed<10> operator*<10>(Fixed<10> const &lhs, Fixed<10> const &rhs) // 0x4B7047
{
    mangled_assert("??$?D$09@@YG?AV?$Fixed@$09@@ABV0@0@Z");
    todo("implement");
}

_inline Fixed<10> operator*<10>(Fixed<10> const &lhs, __int32 rhs) // 0x4B1291
{
    mangled_assert("??$?D$09@@YG?AV?$Fixed@$09@@ABV0@H@Z");
    todo("implement");
}

_inline bool operator==<10>(Fixed<10> const &lhs, Fixed<10> const &rhs) // 0x4B04FD
{
    mangled_assert("??$?8$09@@YG_NABV?$Fixed@$09@@0@Z");
    todo("implement");
}

_inline bool operator<<10>(Fixed<10> const &lhs, Fixed<10> const &rhs) // 0x455E93
{
    mangled_assert("??$?M$09@@YG_NABV?$Fixed@$09@@0@Z");
    todo("implement");
}

_inline bool operator><10>(Fixed<10> const &lhs, Fixed<10> const &rhs) // 0x4AB181
{
    mangled_assert("??$?O$09@@YG_NABV?$Fixed@$09@@0@Z");
    todo("implement");
}

_inline bool operator<=<10>(Fixed<10> const &lhs, Fixed<10> const &rhs) // 0x455EA7
{
    mangled_assert("??$?N$09@@YG_NABV?$Fixed@$09@@0@Z");
    todo("implement");
}

_inline bool operator>=<10>(Fixed<10> const &lhs, Fixed<10> const &rhs) // 0x455EBB
{
    mangled_assert("??$?P$09@@YG_NABV?$Fixed@$09@@0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __FIXED_H__
#endif
