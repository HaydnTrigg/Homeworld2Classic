#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <Recycler.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_62474F(Recycler *const);
Recycler::Recycler() // 0x62474F
{
    mangled_assert("??0Recycler@@QAE@XZ");
    todo("implement");
    _sub_62474F(this);
}

_extern void _sub_624779(Recycler *const);
Recycler::~Recycler() // 0x624779
{
    mangled_assert("??1Recycler@@UAE@XZ");
    todo("implement");
    _sub_624779(this);
}

_extern void _sub_6248E8(Recycler *const);
void Recycler::recycleClear() // 0x6248E8
{
    mangled_assert("?recycleClear@Recycler@@QAEXXZ");
    todo("implement");
    _sub_6248E8(this);
}

_extern void _sub_624931(Recycler *const, float);
void Recycler::setGarbageCollectThreshold(float) // 0x624931
{
    mangled_assert("?setGarbageCollectThreshold@Recycler@@QAEXM@Z");
    todo("implement");
    _sub_624931(this, arg);
}

_extern void _sub_62493F(Recycler *const, RecyclableFactory *);
void Recycler::setRecyclableFactory(RecyclableFactory *) // 0x62493F
{
    mangled_assert("?setRecyclableFactory@Recycler@@QAEXPAVRecyclableFactory@@@Z");
    todo("implement");
    _sub_62493F(this, arg);
}

_extern Recyclable *_sub_624878(Recycler *const);
Recyclable *Recycler::giveMeRecyclable() // 0x624878
{
    mangled_assert("?giveMeRecyclable@Recycler@@QAEPAVRecyclable@@XZ");
    todo("implement");
    Recyclable * __result = _sub_624878(this);
    return __result;
}

_extern void _sub_6248BA(Recycler *const, Recyclable *);
void Recycler::recycle(Recyclable *) // 0x6248BA
{
    mangled_assert("?recycle@Recycler@@QAEXPAVRecyclable@@@Z");
    todo("implement");
    _sub_6248BA(this, arg);
}

_extern unsigned __int32 _sub_6247D0(Recycler *const, float);
unsigned __int32 Recycler::garbageCollect(float) // 0x6247D0
{
    mangled_assert("?garbageCollect@Recycler@@QAEIM@Z");
    todo("implement");
    unsigned __int32 __result = _sub_6247D0(this, arg);
    return __result;
}

_extern __int32 _sub_62482B(Recycler const *const, unsigned __int32);
__int32 Recycler::getStat(unsigned __int32) const // 0x62482B
{
    mangled_assert("?getStat@Recycler@@QBEHI@Z");
    todo("implement");
    __int32 __result = _sub_62482B(this, arg);
    return __result;
}

_extern char const *_sub_624836(Recycler const *const, unsigned __int32);
char const *Recycler::getStatString(unsigned __int32) const // 0x624836
{
    mangled_assert("?getStatString@Recycler@@QBEPBDI@Z");
    todo("implement");
    char const * __result = _sub_624836(this, arg);
    return __result;
}

_extern void _sub_6247C3(Recycler *const);
void Recycler::clearStats() // 0x6247C3
{
    mangled_assert("?clearStats@Recycler@@QAEXXZ");
    todo("implement");
    _sub_6247C3(this);
}

_extern _sub_62473A(Recyclable *const);
Recyclable::Recyclable() // 0x62473A
{
    mangled_assert("??0Recyclable@@QAE@XZ");
    todo("implement");
    _sub_62473A(this);
}

_extern void _sub_624772(Recyclable *const);
Recyclable::~Recyclable() // 0x624772
{
    mangled_assert("??1Recyclable@@UAE@XZ");
    todo("implement");
    _sub_624772(this);
}

_extern void _sub_624918(Recyclable *const, float);
void Recyclable::recycleExpire(float) // 0x624918
{
    mangled_assert("?recycleExpire@Recyclable@@UAEXM@Z");
    todo("implement");
    _sub_624918(this, arg);
}

/* ---------- private code */
#endif
