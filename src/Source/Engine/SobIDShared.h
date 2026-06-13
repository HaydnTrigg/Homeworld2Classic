#if 0
#ifndef __SOBIDSHARED_H__
#define __SOBIDSHARED_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobIDShared
{
public:
    SobIDShared(Sob *);
    _inline Sob *getSob() const;
    _inline void resetSob();
    _inline void explicitlySetSob(Sob *);
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
private:
    Sob *m_sob; // 0x0
};
static_assert(sizeof(SobIDShared) == 4, "Invalid SobIDShared size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Sob *_sub_47AB17(SobIDShared const *const);
_inline Sob *SobIDShared::getSob() const // 0x47AB17
{
    mangled_assert("?getSob@SobIDShared@@QBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_47AB17(this);
    return __result;
}

_extern void _sub_47AB92(SobIDShared *const);
_inline void SobIDShared::resetSob() // 0x47AB92
{
    mangled_assert("?resetSob@SobIDShared@@QAEXXZ");
    todo("implement");
    _sub_47AB92(this);
}

_extern void _sub_47AAA8(SobIDShared *const, Sob *);
_inline void SobIDShared::explicitlySetSob(Sob *) // 0x47AAA8
{
    mangled_assert("?explicitlySetSob@SobIDShared@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_47AAA8(this, arg);
}

/* ---------- private code */

#endif // __SOBIDSHARED_H__
#endif
