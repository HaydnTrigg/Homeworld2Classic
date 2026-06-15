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

Recycler::Recycler() // 0x62474F
{
    mangled_assert("??0Recycler@@QAE@XZ");
    todo("implement");
}

Recycler::~Recycler() // 0x624779
{
    mangled_assert("??1Recycler@@UAE@XZ");
    todo("implement");
}

void Recycler::recycleClear() // 0x6248E8
{
    mangled_assert("?recycleClear@Recycler@@QAEXXZ");
    todo("implement");
}

void Recycler::setGarbageCollectThreshold(float) // 0x624931
{
    mangled_assert("?setGarbageCollectThreshold@Recycler@@QAEXM@Z");
    todo("implement");
}

void Recycler::setRecyclableFactory(RecyclableFactory *) // 0x62493F
{
    mangled_assert("?setRecyclableFactory@Recycler@@QAEXPAVRecyclableFactory@@@Z");
    todo("implement");
}

Recyclable *Recycler::giveMeRecyclable() // 0x624878
{
    mangled_assert("?giveMeRecyclable@Recycler@@QAEPAVRecyclable@@XZ");
    todo("implement");
}

void Recycler::recycle(Recyclable *) // 0x6248BA
{
    mangled_assert("?recycle@Recycler@@QAEXPAVRecyclable@@@Z");
    todo("implement");
}

unsigned __int32 Recycler::garbageCollect(float) // 0x6247D0
{
    mangled_assert("?garbageCollect@Recycler@@QAEIM@Z");
    todo("implement");
}

__int32 Recycler::getStat(unsigned __int32) const // 0x62482B
{
    mangled_assert("?getStat@Recycler@@QBEHI@Z");
    todo("implement");
}

char const *Recycler::getStatString(unsigned __int32) const // 0x624836
{
    mangled_assert("?getStatString@Recycler@@QBEPBDI@Z");
    todo("implement");
}

void Recycler::clearStats() // 0x6247C3
{
    mangled_assert("?clearStats@Recycler@@QAEXXZ");
    todo("implement");
}

Recyclable::Recyclable() // 0x62473A
{
    mangled_assert("??0Recyclable@@QAE@XZ");
    todo("implement");
}

Recyclable::~Recyclable() // 0x624772
{
    mangled_assert("??1Recyclable@@UAE@XZ");
    todo("implement");
}

void Recyclable::recycleExpire(float) // 0x624918
{
    mangled_assert("?recycleExpire@Recyclable@@UAEXM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
