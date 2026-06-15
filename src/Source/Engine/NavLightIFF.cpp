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

_inline NavLightStatic::NavLight::NavLight(NavLightStatic::NavLight const &) // 0x6095F6
{
    mangled_assert("??0NavLight@NavLightStatic@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline NavLightStatic::NavLight::NavLight() // 0x609675
{
    mangled_assert("??0NavLight@NavLightStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NavLightStatic::NavLight::~NavLight() // 0x60968E
{
    mangled_assert("??1NavLight@NavLightStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

__int32 handle_NavLight_Chunk_Old(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x6098FF
{
    mangled_assert("?handle_NavLight_Chunk_Old@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

__int32 handle_NavLight_Chunk_New(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x6098B3
{
    mangled_assert("?handle_NavLight_Chunk_New@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

/* ---------- private code */

_static __int32 handle_NavLight_Chunk_ver1(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x609A3D
{
    mangled_assert("handle_NavLight_Chunk_ver1");
    todo("implement");
}

_static __int32 handle_NavLight_Chunk_ver2(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x609B83
{
    mangled_assert("handle_NavLight_Chunk_ver2");
    todo("implement");
}

_static __int32 handle_NavLight_Chunk_ver3(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x609CD1
{
    mangled_assert("handle_NavLight_Chunk_ver3");
    todo("implement");
}
#endif
