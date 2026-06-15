#ifdef DEVRELEASE
/* ---------- headers */

#include "decomp.h"
#include <memory\memorylib.h>
#include <memory\memorypool.h>
#include <memory.h>

/* ---------- constants */

/* ---------- definitions */

namespace
{
    struct LuaAlloc
    {
        unsigned long magic; // 0x0
        unsigned long size; // 0x4
    };
    static_assert(sizeof(LuaAlloc) == 8, "Invalid LuaAlloc size");
}

/* ---------- prototypes */

extern "C" void luaOverload_free(void *buffer);
extern "C" void *luaOverload_realloc(void *buffer, unsigned __int32 size);
extern "C" void lua_exit();

static void *alloc(unsigned __int32 size);

/* ---------- globals */

/* ---------- private variables */

static MemoryPoolObj s_pool("Lua", 0); // 0x10013114

/* ---------- public code */

void luaOverload_free(void *buffer) // 0x1000D1BB
{
    mangled_assert("_luaOverload_free@4");
    
    if(buffer != nullptr)
    {
        MemPoolFree(s_pool.Handle(), &static_cast<LuaAlloc*>(buffer)[-1]);
    }
}

void *luaOverload_realloc(void *buffer, unsigned __int32 size) // 0x1000D1D6
{
    mangled_assert("_luaOverload_realloc@8");

    void* new_buffer;
    if(buffer == nullptr)
    {
        new_buffer = alloc(size);
    }
    else if ( size > static_cast<LuaAlloc*>(buffer)[-1].size )
    {
        new_buffer = alloc(size);
        size_t new_size = static_cast<LuaAlloc*>(buffer)[-1].size < size ? static_cast<LuaAlloc*>(buffer)[-1].size : size;
        memcpy(
            new_buffer, 
            buffer, 
            new_size);
        luaOverload_free(buffer);
    }
    else
    {
        new_buffer = buffer;
    }
    return new_buffer;
}

void lua_exit() // 0x1000D223
{
    mangled_assert("_lua_exit@0");
    todo("implement");

    // $todo is this a macro or inline function?
    // g_dbFilename = "Mem\\LuaMem.cpp";
    // g_dbLineNum = 95;
    // dbFatalfAux("Lua -- Critical error");
}

/* ---------- private code */

static void *alloc(unsigned __int32 size) // 0x1000D196
{
    mangled_assert("alloc");
    
    LuaAlloc* memory_header = static_cast<LuaAlloc*>(MemPoolAlloc(s_pool.Handle(), size + sizeof(LuaAlloc)));
    memory_header->size = size;
    memory_header->magic = 'LAMC';
    
    void* memory = memory_header + 1;
    return memory;
}
#endif // DEVRELEASE
