#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void rglVertexAttributePointer(unsigned __int32 index, __int32 size, unsigned __int32 type, bool normalized, unsigned __int32 stride, void const *data);
extern void rglEnableVertexAttribute(unsigned __int32 index);
extern void rglDisableVertexAttribute(unsigned __int32 index);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_10015939(unsigned __int32, __int32, unsigned __int32, bool, unsigned __int32, void const *);
void rglVertexAttributePointer(unsigned __int32 index, __int32 size, unsigned __int32 type, bool normalized, unsigned __int32 stride, void const *data) // 0x10015939
{
    mangled_assert("?rglVertexAttributePointer@@YGXIHI_NIPBX@Z");
    todo("implement");
    _sub_10015939(index, size, type, normalized, stride, data);
}

_extern void _sub_10015922(unsigned __int32);
void rglEnableVertexAttribute(unsigned __int32 index) // 0x10015922
{
    mangled_assert("?rglEnableVertexAttribute@@YGXI@Z");
    todo("implement");
    _sub_10015922(index);
}

_extern void _sub_1001590B(unsigned __int32);
void rglDisableVertexAttribute(unsigned __int32 index) // 0x1001590B
{
    mangled_assert("?rglDisableVertexAttribute@@YGXI@Z");
    todo("implement");
    _sub_1001590B(index);
}

/* ---------- private code */
#endif
