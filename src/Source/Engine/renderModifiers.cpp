#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\lotypes.h>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\gl\r_types.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <type_traits>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <profile\profile.h>
#include <map>
#include <iostream>
#include <xtree>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\objects\mesh.h>
#include <Render\objects\renderable.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <renderer.h>
#include <debug\db.h>
#include <Render\objects\vertexarray.h>
#include <Render\objects\vertexarrayinternal.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <bitset>
#include <Render\objects\material.h>
#include <platform\osdef.h>
#include <renderModifiers.h>
#include <Render\objects\geometry.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

FlashModifier::FlashModifier() // 0x62580F
{
    mangled_assert("??0FlashModifier@@QAE@XZ");
    todo("implement");
}

void FlashModifier::setOn(bool) // 0x625C65
{
    mangled_assert("?setOn@FlashModifier@@QAEX_N@Z");
    todo("implement");
}

void FlashModifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x6259B8
{
    mangled_assert("?modify@FlashModifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
}

OutlineModifier::OutlineModifier() // 0x625848
{
    mangled_assert("??0OutlineModifier@@QAE@XZ");
    todo("implement");
}

OutlineModifier::~OutlineModifier() // 0x6258C6
{
    mangled_assert("??1OutlineModifier@@UAE@XZ");
    todo("implement");
}

void OutlineModifier::setColour(vector4 const &) // 0x625C53
{
    mangled_assert("?setColour@OutlineModifier@@QAEXABVvector4@@@Z");
    todo("implement");
}

void OutlineModifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x625ACF
{
    mangled_assert("?modify@OutlineModifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
}

SolidColourModifier::SolidColourModifier() // 0x625881
{
    mangled_assert("??0SolidColourModifier@@QAE@XZ");
    todo("implement");
}

_inline FlashModifier::~FlashModifier() // 0x6258BA
{
    mangled_assert("??1FlashModifier@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NebulaModifier::~NebulaModifier() // 0x6258C0
{
    mangled_assert("??1NebulaModifier@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

SolidColourModifier::~SolidColourModifier() // 0x625906
{
    mangled_assert("??1SolidColourModifier@@UAE@XZ");
    todo("implement");
}

void SolidColourModifier::setColour(vector4 const &) // 0x625C5C
{
    mangled_assert("?setColour@SolidColourModifier@@QAEXABVvector4@@@Z");
    todo("implement");
}

void SolidColourModifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x625BDA
{
    mangled_assert("?modify@SolidColourModifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
}

NebulaModifier::NebulaModifier() // 0x625826
{
    mangled_assert("??0NebulaModifier@@QAE@XZ");
    todo("implement");
}

void NebulaModifier::setCameraDir(vector3 const &) // 0x625C42
{
    mangled_assert("?setCameraDir@NebulaModifier@@QAEXABVvector3@@@Z");
    todo("implement");
}

void NebulaModifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x6259F1
{
    mangled_assert("?modify@NebulaModifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif
