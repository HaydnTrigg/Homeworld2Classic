#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <memory\memorylib.h>
#include <memory\memorypool.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::LuaAlloc
{
    unsigned long magic; // 0x0
    unsigned long size; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::LuaAlloc) == 8, "Invalid `anonymous-namespace'::LuaAlloc size");

/* ---------- prototypes */

extern void luaOverload_free(void *buffer);
extern void *luaOverload_realloc(void *buffer, unsigned __int32 size);
extern void lua_exit();

_static void *alloc(unsigned __int32 size);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern MemoryPoolObj s_pool; // 0x10013114
}

/* ---------- public code */

_extern void _sub_1000D1BB(void *);
void luaOverload_free(void *buffer) // 0x1000D1BB
{
    mangled_assert("_luaOverload_free@4");
    todo("implement");
    _sub_1000D1BB(buffer);
}

_extern void *_sub_1000D1D6(void *, unsigned __int32);
void *luaOverload_realloc(void *buffer, unsigned __int32 size) // 0x1000D1D6
{
    mangled_assert("_luaOverload_realloc@8");
    todo("implement");
    void * __result = _sub_1000D1D6(buffer, size);
    return __result;
}

_extern void _sub_1000D223();
void lua_exit() // 0x1000D223
{
    mangled_assert("_lua_exit@0");
    todo("implement");
    _sub_1000D223();
}

/* ---------- private code */

_extern void *_sub_1000D196(unsigned __int32);
_static void *alloc(unsigned __int32 size) // 0x1000D196
{
    mangled_assert("alloc");
    todo("implement");
    void * __result = _sub_1000D196(size);
    return __result;
}
#endif
