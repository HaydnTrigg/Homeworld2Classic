#if 0
/* ---------- headers */

#include "decomp.h"
/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void *mallocOverloaded(unsigned __int32 size);
extern void freeOverloaded(void *pointer);
extern void *mallocString(unsigned __int32 size, unsigned __int32 sizeOfOne);
extern void freeString(void *pointer);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void *_sub_10003100(unsigned __int32);
void *mallocOverloaded(unsigned __int32 size) // 0x10003100
{
    mangled_assert("?mallocOverloaded@@YGPAXI@Z");
    todo("implement");
    void * __result = _sub_10003100(size);
    return __result;
}

_extern void _sub_100030D0(void *);
void freeOverloaded(void *pointer) // 0x100030D0
{
    mangled_assert("?freeOverloaded@@YGXPAX@Z");
    todo("implement");
    _sub_100030D0(pointer);
}

_extern void *_sub_10003120(unsigned __int32, unsigned __int32);
void *mallocString(unsigned __int32 size, unsigned __int32 sizeOfOne) // 0x10003120
{
    mangled_assert("?mallocString@@YGPAXII@Z");
    todo("implement");
    void * __result = _sub_10003120(size, sizeOfOne);
    return __result;
}

_extern void _sub_100030F0(void *);
void freeString(void *pointer) // 0x100030F0
{
    mangled_assert("?freeString@@YGXPAX@Z");
    todo("implement");
    _sub_100030F0(pointer);
}

/* ---------- private code */
#endif
