#if 0
#ifndef __FXMEMORY_H__
#define __FXMEMORY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXMemory
{
public:
    enum
    {
        NODEBUF_SIZE = 256, // 0x0100
    };
    struct Handle
    {
        unsigned long r0; // 0x0
        unsigned short r1; // 0x4
        unsigned short r2; // 0x6
        _inline Handle();
    };
    static_assert(sizeof(Handle) == 8, "Invalid Handle size");
private:
    static unsigned short const SIGNATURE_ALLOCATED;
    static unsigned short const SIGNATURE_FREED;
    struct Node
    {
        unsigned short signature; // 0x0
        unsigned short use; // 0x2
        union
        {
            FXMemory::Node *next; // 0x4
            unsigned char buf[256]; // 0x4
        };
    };
    static_assert(sizeof(Node) == 260, "Invalid Node size");
    MemoryPoolObj m_pool; // 0x0
    FXMemory::Node *m_head; // 0xC
    unsigned __int32 m_allocated; // 0x10
    unsigned __int32 m_inuse; // 0x14
public:
    FXMemory(FXMemory const &); /* compiler_generated() */
    FXMemory();
    ~FXMemory();
    FXMemory::Handle Alloc();
    void Release(FXMemory::Handle);
    bool HandleInUse(FXMemory::Handle) const;
    _inline void *Handle2Ptr(FXMemory::Handle);
    void const *Handle2Ptr(FXMemory::Handle) const;
    _inline void *Handle2PtrFast(FXMemory::Handle);
    FXMemory &operator=(FXMemory const &); /* compiler_generated() */
};
static_assert(sizeof(FXMemory) == 24, "Invalid FXMemory size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6F7332(FXMemory::Handle *const);
_inline FXMemory::Handle::Handle() // 0x6F7332
{
    mangled_assert("??0Handle@FXMemory@@QAE@XZ");
    todo("implement");
    _sub_6F7332(this);
}

_extern void *_sub_6DCE53(FXMemory *const, FXMemory::Handle);
_inline void *FXMemory::Handle2PtrFast(FXMemory::Handle) // 0x6DCE53
{
    mangled_assert("?Handle2PtrFast@FXMemory@@QAEPAXUHandle@1@@Z");
    todo("implement");
    void * __result = _sub_6DCE53(this, arg);
    return __result;
}

_extern void *_sub_6DCE34(FXMemory *const, FXMemory::Handle);
_inline void *FXMemory::Handle2Ptr(FXMemory::Handle) // 0x6DCE34
{
    mangled_assert("?Handle2Ptr@FXMemory@@QAEPAXUHandle@1@@Z");
    todo("implement");
    void * __result = _sub_6DCE34(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __FXMEMORY_H__
#endif
