#if 0
/* ---------- headers */

#include "decomp.h"
#include <Memory\Memorylib.h>
#include <.h>
#include <Memory\MemoryPool.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_10002090(MemoryPoolObj *const, char const *, unsigned __int32);
MemoryPoolObj::MemoryPoolObj(char const *, unsigned __int32) // 0x10002090
{
    mangled_assert("??0MemoryPoolObj@@QAE@PBDI@Z");
    todo("implement");
    _sub_10002090(this, arg, arg);
}

_extern _sub_10002060(MemoryPoolObj *const, MemoryPoolObj const &);
MemoryPoolObj::MemoryPoolObj(MemoryPoolObj const &) // 0x10002060
{
    mangled_assert("??0MemoryPoolObj@@QAE@ABV0@@Z");
    todo("implement");
    _sub_10002060(this, arg);
}

_extern MemoryPoolObj &_sub_10002110(MemoryPoolObj *const, MemoryPoolObj const &);
MemoryPoolObj &MemoryPoolObj::operator=(MemoryPoolObj const &) // 0x10002110
{
    mangled_assert("??4MemoryPoolObj@@QAEAAV0@ABV0@@Z");
    todo("implement");
    MemoryPoolObj & __result = _sub_10002110(this, arg);
    return __result;
}

_extern void _sub_100020C0(MemoryPoolObj *const);
MemoryPoolObj::~MemoryPoolObj() // 0x100020C0
{
    mangled_assert("??1MemoryPoolObj@@QAE@XZ");
    todo("implement");
    _sub_100020C0(this);
}

_extern void _sub_10002190(MemoryPoolObj *const);
void MemoryPoolObj::Release() // 0x10002190
{
    mangled_assert("?Release@MemoryPoolObj@@AAEXXZ");
    todo("implement");
    _sub_10002190(this);
}

/* ---------- private code */
#endif
