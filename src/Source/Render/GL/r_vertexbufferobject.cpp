#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern unsigned __int32 rglCreateVBO();
extern void rglDeleteVBO(unsigned __int32 handle);
extern bool rglIsValidVBO(unsigned __int32 handle);
extern void rlgBindVBO(unsigned __int32 handle);
extern void rglSetDataVBO(unsigned __int32 size, void const *data, VertexBufferObjectUsage usage);
extern void rglSetSubDataVBO(unsigned __int32 offset, unsigned __int32 size, void const *data);
extern void rglGetSubDataVBO(unsigned __int32 offset, unsigned __int32 size, void *data);
extern void *rglMapVBO(VertexBufferObjectAccess access);
extern bool rglUnMapVBO();
extern void rglGetBufferParameterivVBO(VertexBufferObjectPName pname, __int32 *params);
extern void rglGetBufferPointervVBO(VertexBufferObjectPName pname, void **params);
extern void rglApplyVBO(unsigned __int32 mask, VertexBufferDescriptor const &desc, __int32 start, __int32 count, bool enable);
extern void rglReapplyVBO(unsigned __int32 mask, VertexBufferDescriptor const &desc);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

unsigned __int32 rglCreateVBO() // 0x100157F4
{
    mangled_assert("?rglCreateVBO@@YGIXZ");
    todo("implement");
}

void rglDeleteVBO(unsigned __int32 handle) // 0x1001581A
{
    mangled_assert("?rglDeleteVBO@@YGXI@Z");
    todo("implement");
}

bool rglIsValidVBO(unsigned __int32 handle) // 0x10015878
{
    mangled_assert("?rglIsValidVBO@@YG_NI@Z");
    todo("implement");
}

void rlgBindVBO(unsigned __int32 handle) // 0x100158F6
{
    mangled_assert("?rlgBindVBO@@YGXI@Z");
    todo("implement");
}

void rglSetDataVBO(unsigned __int32 size, void const *data, VertexBufferObjectUsage usage) // 0x100158AB
{
    mangled_assert("?rglSetDataVBO@@YGXIPBXW4VertexBufferObjectUsage@@@Z");
    todo("implement");
}

void rglSetSubDataVBO(unsigned __int32 offset, unsigned __int32 size, void const *data) // 0x100158C6
{
    mangled_assert("?rglSetSubDataVBO@@YGXIIPBX@Z");
    todo("implement");
}

void rglGetSubDataVBO(unsigned __int32 offset, unsigned __int32 size, void *data) // 0x1001585D
{
    mangled_assert("?rglGetSubDataVBO@@YGXIIPAX@Z");
    todo("implement");
}

void *rglMapVBO(VertexBufferObjectAccess access) // 0x10015891
{
    mangled_assert("?rglMapVBO@@YGPAXW4VertexBufferObjectAccess@@@Z");
    todo("implement");
}

bool rglUnMapVBO() // 0x100158E1
{
    mangled_assert("?rglUnMapVBO@@YG_NXZ");
    todo("implement");
}

void rglGetBufferParameterivVBO(VertexBufferObjectPName pname, __int32 *params) // 0x1001582D
{
    mangled_assert("?rglGetBufferParameterivVBO@@YGXW4VertexBufferObjectPName@@PAH@Z");
    todo("implement");
}

void rglGetBufferPointervVBO(VertexBufferObjectPName pname, void **params) // 0x10015845
{
    mangled_assert("?rglGetBufferPointervVBO@@YGXW4VertexBufferObjectPName@@PAPAX@Z");
    todo("implement");
}

void rglApplyVBO(unsigned __int32 mask, VertexBufferDescriptor const &desc, __int32 start, __int32 count, bool enable) // 0x100157EF
{
    mangled_assert("?rglApplyVBO@@YGXIABUVertexBufferDescriptor@@HH_N@Z");
    todo("implement");
}

void rglReapplyVBO(unsigned __int32 mask, VertexBufferDescriptor const &desc) // 0x100158A6
{
    mangled_assert("?rglReapplyVBO@@YGXIABUVertexBufferDescriptor@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
