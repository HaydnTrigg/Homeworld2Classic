#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <NavLights.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\objects\light.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\lotypes.h>
#include <fileio\iff.h>
#include <new>
#include <Render\gl\r_types.h>
#include <xstddef>
#include <type_traits>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <NavLightStyleManager.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Render\objects\options.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <debug\db.h>
#include <NavLightManager.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Collision\Primitives\obb.h>
#include <NavLightIFF.h>
#include <wchar.h>
#include <platform\osdef.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern __int32 handle_NavLight_Chunk_Old(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 handle_NavLight_Chunk_New(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

_static __int32 handle_NavLight_Chunk_ver1(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 handle_NavLight_Chunk_ver2(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 handle_NavLight_Chunk_ver3(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6095F6(NavLightStatic::NavLight *const, NavLightStatic::NavLight const &);
_inline NavLightStatic::NavLight::NavLight(NavLightStatic::NavLight const &) // 0x6095F6
{
    mangled_assert("??0NavLight@NavLightStatic@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_6095F6(this, arg);
}

_extern _sub_609675(NavLightStatic::NavLight *const);
_inline NavLightStatic::NavLight::NavLight() // 0x609675
{
    mangled_assert("??0NavLight@NavLightStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_609675(this);
}

_extern void _sub_60968E(NavLightStatic::NavLight *const);
_inline NavLightStatic::NavLight::~NavLight() // 0x60968E
{
    mangled_assert("??1NavLight@NavLightStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_60968E(this);
}

_extern __int32 _sub_6098FF(IFF *, IFFChunk *, void *, void *);
__int32 handle_NavLight_Chunk_Old(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x6098FF
{
    mangled_assert("?handle_NavLight_Chunk_Old@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_6098FF(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_6098B3(IFF *, IFFChunk *, void *, void *);
__int32 handle_NavLight_Chunk_New(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x6098B3
{
    mangled_assert("?handle_NavLight_Chunk_New@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_6098B3(iff, chunk, user0, user1);
    return __result;
}

/* ---------- private code */

_extern __int32 _sub_609A3D(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_NavLight_Chunk_ver1(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x609A3D
{
    mangled_assert("handle_NavLight_Chunk_ver1");
    todo("implement");
    __int32 __result = _sub_609A3D(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_609B83(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_NavLight_Chunk_ver2(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x609B83
{
    mangled_assert("handle_NavLight_Chunk_ver2");
    todo("implement");
    __int32 __result = _sub_609B83(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_609CD1(IFF *, IFFChunk *, void *, void *);
_static __int32 handle_NavLight_Chunk_ver3(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x609CD1
{
    mangled_assert("handle_NavLight_Chunk_ver3");
    todo("implement");
    __int32 __result = _sub_609CD1(iff, chunk, user0, user1);
    return __result;
}
#endif
