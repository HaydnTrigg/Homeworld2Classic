#if 0
/* ---------- headers */

#include "decomp.h"
#include <assert.h>
#include <memory\memorypool.h>
#include <Render\GL\pch.h>
#include <memory\memorylib.h>
#include <xmemory0>
#include <crtdefs.h>
#include <new>
#include <xstddef>
#include <util\types.h>
#include <debug\debug.h>
#include <debug\filter.h>
#include <type_traits>
#include <map>
#include <xtree>
#include <xutility>
#include <utility>

/* ---------- constants */

/* ---------- definitions */

struct VertexBuffer
{
    enum MemoryType
    {
        standard = 0,
        nvidia,
    };
    enum State
    {
        idle = 0,
        locked,
    };
    VertexBuffer::State state; // 0x0
    unsigned __int32 mask; // 0x4
    unsigned __int32 handle; // 0x8
    VertexBuffer::MemoryType memoryType; // 0xC
    __int32 size; // 0x10
    VertexBufferDescriptor info; // 0x14
};
static_assert(sizeof(VertexBuffer) == 120, "Invalid VertexBuffer size");

/* ---------- prototypes */

extern bool _free(VertexBuffer::MemoryType memoryType, void *data);
extern void rglStartupVertexBuffer();
extern void rglShutdownVertexBuffer();
extern void rglDisableArrayElement(unsigned __int32 element);
extern void rglEnableArrayElement(unsigned __int32 element);
extern void rglAdjustClientPointer(unsigned __int32 mask, VertexBufferDescriptor const *vb);
extern void rglSetupClientPointer(unsigned __int32 mask, VertexBufferDescriptor const *vb, __int32 start, __int32 count, bool enable);
extern bool rglApplyVertexBuffer(unsigned __int32 handle, __int32 start, __int32 count);
extern bool rglApplyVertexBufferWithMask(unsigned __int32 handle, unsigned __int32 mask, __int32 start, __int32 count);
extern bool rglReapplyVertexBuffer(unsigned __int32 handle, unsigned __int32 mask);
extern bool rglUnapplyVertexBuffer(unsigned __int32 handle);
extern VertexBufferDescriptor const *rglLockVertexBuffer(unsigned __int32 handle, __int32 start, __int32 count);
extern bool rglUnlockVertexBuffer(unsigned __int32 handle, __int32 start, __int32 count);
extern void rglSetVertexBufferDescriptorBase(VertexBufferDescriptor &vbInfo, void *_base);
extern void rglFillVertexBufferDescriptor(unsigned __int32 mask, __int32 nVert, __int32 &singleVertexSize, __int32 &totalSize, VertexBufferDescriptor &vbInfo);
extern unsigned __int32 rglCreateVertexBuffer(unsigned __int32 mask, __int32 nVert);
extern bool rglReleaseVertexBuffer(unsigned __int32 handle);
extern bool rglApplyVertexStream(unsigned __int32 mask, void const *stream, __int32 stride);
extern bool rglUnapplyVertexStream(unsigned __int32 mask);

_static void *MemAlloc(unsigned __int32 size);
_static void MemFree(void *ptr);
_static VertexBuffer *_findVB(unsigned __int32 handle);
_static bool _remVB(unsigned __int32 handle);
_static _inline unsigned __int32 createVertexBufferHandle();
_static void _incPtr(void *&p, unsigned char *inc);

/* ---------- globals */

extern MemoryPoolObj s_mmPool; // 0x10021FA4
extern VertexBufferDescriptor const *rglVertexBufferDescriptor; // 0x10021F9C

/* ---------- private variables */

_static
{
    extern unsigned __int32 uvMask[4]; // 0x1002060C
    extern unsigned __int32 g_mask; // 0x10021FB8
    extern __int32 g_start; // 0x10021FBC
    extern __int32 g_count; // 0x10021FC0
    extern std::map<unsigned int,VertexBuffer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,VertexBuffer> > > vbMap; // 0x10021FB0
    extern unsigned __int32 _vbHandle; // 0x10021FA0
}

/* ---------- public code */

_inline std::_Tree_buy<std::pair<unsigned int const ,VertexBuffer>,std::allocator<std::pair<unsigned int const ,VertexBuffer> > >::~_Tree_buy<std::pair<unsigned int const ,VertexBuffer>,std::allocator<std::pair<unsigned int const ,VertexBuffer> > >() // 0x1001483F
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIUVertexBuffer@@@std@@V?$allocator@U?$pair@$$CBIUVertexBuffer@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,VertexBuffer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,VertexBuffer> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,VertexBuffer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,VertexBuffer> >,0> >() // 0x10014848
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IUVertexBuffer@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUVertexBuffer@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<unsigned int,VertexBuffer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,VertexBuffer> > >::~map<unsigned int,VertexBuffer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,VertexBuffer> > >() // 0x10014851
{
    mangled_assert("??1?$map@IUVertexBuffer@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUVertexBuffer@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool _free(VertexBuffer::MemoryType memoryType, void *data) // 0x10014C60
{
    mangled_assert("?_free@@YG_NW4MemoryType@VertexBuffer@@PAX@Z");
    todo("implement");
}

void rglStartupVertexBuffer() // 0x1001572F
{
    mangled_assert("?rglStartupVertexBuffer@@YGXXZ");
    todo("implement");
}

void rglShutdownVertexBuffer() // 0x100156D6
{
    mangled_assert("?rglShutdownVertexBuffer@@YGXXZ");
    todo("implement");
}

void rglDisableArrayElement(unsigned __int32 element) // 0x100152D3
{
    mangled_assert("?rglDisableArrayElement@@YGXI@Z");
    todo("implement");
}

void rglEnableArrayElement(unsigned __int32 element) // 0x100152D9
{
    mangled_assert("?rglEnableArrayElement@@YGXI@Z");
    todo("implement");
}

void rglAdjustClientPointer(unsigned __int32 mask, VertexBufferDescriptor const *vb) // 0x10015077
{
    mangled_assert("?rglAdjustClientPointer@@YGXIPBUVertexBufferDescriptor@@@Z");
    todo("implement");
}

void rglSetupClientPointer(unsigned __int32 mask, VertexBufferDescriptor const *vb, __int32 start, __int32 count, bool enable) // 0x10015525
{
    mangled_assert("?rglSetupClientPointer@@YGXIPBUVertexBufferDescriptor@@HH_N@Z");
    todo("implement");
}

bool rglApplyVertexBuffer(unsigned __int32 handle, __int32 start, __int32 count) // 0x100150DF
{
    mangled_assert("?rglApplyVertexBuffer@@YG_NIHH@Z");
    todo("implement");
}

bool rglApplyVertexBufferWithMask(unsigned __int32 handle, unsigned __int32 mask, __int32 start, __int32 count) // 0x10015107
{
    mangled_assert("?rglApplyVertexBufferWithMask@@YG_NIIHH@Z");
    todo("implement");
}

bool rglReapplyVertexBuffer(unsigned __int32 handle, unsigned __int32 mask) // 0x1001545A
{
    mangled_assert("?rglReapplyVertexBuffer@@YG_NII@Z");
    todo("implement");
}

bool rglUnapplyVertexBuffer(unsigned __int32 handle) // 0x10015734
{
    mangled_assert("?rglUnapplyVertexBuffer@@YG_NI@Z");
    todo("implement");
}

VertexBufferDescriptor const *rglLockVertexBuffer(unsigned __int32 handle, __int32 start, __int32 count) // 0x10015437
{
    mangled_assert("?rglLockVertexBuffer@@YGPBUVertexBufferDescriptor@@IHH@Z");
    todo("implement");
}

bool rglUnlockVertexBuffer(unsigned __int32 handle, __int32 start, __int32 count) // 0x100157CA
{
    mangled_assert("?rglUnlockVertexBuffer@@YG_NIHH@Z");
    todo("implement");
}

void rglSetVertexBufferDescriptorBase(VertexBufferDescriptor &vbInfo, void *_base) // 0x100154D9
{
    mangled_assert("?rglSetVertexBufferDescriptorBase@@YGXAAUVertexBufferDescriptor@@PAX@Z");
    todo("implement");
}

void rglFillVertexBufferDescriptor(unsigned __int32 mask, __int32 nVert, __int32 &singleVertexSize, __int32 &totalSize, VertexBufferDescriptor &vbInfo) // 0x100152DF
{
    mangled_assert("?rglFillVertexBufferDescriptor@@YGXIHAAH0AAUVertexBufferDescriptor@@@Z");
    todo("implement");
}

unsigned __int32 rglCreateVertexBuffer(unsigned __int32 mask, __int32 nVert) // 0x1001520B
{
    mangled_assert("?rglCreateVertexBuffer@@YGIIH@Z");
    todo("implement");
}

bool rglReleaseVertexBuffer(unsigned __int32 handle) // 0x1001547F
{
    mangled_assert("?rglReleaseVertexBuffer@@YG_NI@Z");
    todo("implement");
}

bool rglApplyVertexStream(unsigned __int32 mask, void const *stream, __int32 stride) // 0x10015176
{
    mangled_assert("?rglApplyVertexStream@@YG_NIPBXH@Z");
    todo("implement");
}

bool rglUnapplyVertexStream(unsigned __int32 mask) // 0x1001576B
{
    mangled_assert("?rglUnapplyVertexStream@@YG_NI@Z");
    todo("implement");
}

/* ---------- private code */

_static void *MemAlloc(unsigned __int32 size) // 0x100149C9
{
    mangled_assert("MemAlloc");
    todo("implement");
}

_static void MemFree(void *ptr) // 0x100149DF
{
    mangled_assert("MemFree");
    todo("implement");
}

_static VertexBuffer *_findVB(unsigned __int32 handle) // 0x10014C34
{
    mangled_assert("_findVB");
    todo("implement");
}

_static bool _remVB(unsigned __int32 handle) // 0x10014CA1
{
    mangled_assert("_remVB");
    todo("implement");
}

_static _inline unsigned __int32 createVertexBufferHandle() // 0x10014D2F
{
    mangled_assert("createVertexBufferHandle");
    todo("implement");
}

_static void _incPtr(void *&p, unsigned char *inc) // 0x10014C92
{
    mangled_assert("_incPtr");
    todo("implement");
}
#endif
