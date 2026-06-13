#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <memory\mmfixedpool.h>
#include <boost\static_assert.hpp>
#include <Mathlib\vector3.h>
#include <Mathlib\vector2.h>
#include <boost\config.hpp>
#include <assert.h>
#include <EngineTrailFrame.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<EngineTrailFrameBlock,512> s_EngineTrailFrameBlockAllocator; // 0x8438E0
}

/* ---------- public code */

_extern void *_sub_446C3D(unsigned __int32);
void *EngineTrailFrameBlock::operator new(unsigned __int32 size) // 0x446C3D
{
    mangled_assert("??2EngineTrailFrameBlock@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_446C3D(size);
    return __result;
}

_extern void _sub_446C4A(void *, unsigned __int32);
void EngineTrailFrameBlock::operator delete(void *p, unsigned __int32 size) // 0x446C4A
{
    mangled_assert("??3EngineTrailFrameBlock@@SGXPAXI@Z");
    todo("implement");
    _sub_446C4A(p, size);
}

_extern _sub_446BBF(EngineTrailFrame *const);
EngineTrailFrame::EngineTrailFrame() // 0x446BBF
{
    mangled_assert("??0EngineTrailFrame@@QAE@XZ");
    todo("implement");
    _sub_446BBF(this);
}

_extern void _sub_446C3C(EngineTrailFrame *const);
EngineTrailFrame::~EngineTrailFrame() // 0x446C3C
{
    mangled_assert("??1EngineTrailFrame@@QAE@XZ");
    todo("implement");
    _sub_446C3C(this);
}

_extern void _sub_446FCE(EngineTrailFrame *const, float, matrix3 const &, vector3 const &, vector3 const &);
void EngineTrailFrame::update(float, matrix3 const &, vector3 const &, vector3 const &) // 0x446FCE
{
    mangled_assert("?update@EngineTrailFrame@@QAEXMABVmatrix3@@ABVvector3@@1@Z");
    todo("implement");
    _sub_446FCE(this, arg, arg, arg, arg);
}

/* ---------- private code */
#endif
