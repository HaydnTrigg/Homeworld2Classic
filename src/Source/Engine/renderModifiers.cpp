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

_extern _sub_62580F(FlashModifier *const);
FlashModifier::FlashModifier() // 0x62580F
{
    mangled_assert("??0FlashModifier@@QAE@XZ");
    todo("implement");
    _sub_62580F(this);
}

_extern void _sub_625C65(FlashModifier *const, bool);
void FlashModifier::setOn(bool) // 0x625C65
{
    mangled_assert("?setOn@FlashModifier@@QAEX_N@Z");
    todo("implement");
    _sub_625C65(this, arg);
}

_extern void _sub_6259B8(FlashModifier *const, VertexArray *, unsigned __int32 *, bool);
void FlashModifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x6259B8
{
    mangled_assert("?modify@FlashModifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
    _sub_6259B8(this, arg, arg, arg);
}

_extern _sub_625848(OutlineModifier *const);
OutlineModifier::OutlineModifier() // 0x625848
{
    mangled_assert("??0OutlineModifier@@QAE@XZ");
    todo("implement");
    _sub_625848(this);
}

_extern void _sub_6258C6(OutlineModifier *const);
OutlineModifier::~OutlineModifier() // 0x6258C6
{
    mangled_assert("??1OutlineModifier@@UAE@XZ");
    todo("implement");
    _sub_6258C6(this);
}

_extern void _sub_625C53(OutlineModifier *const, vector4 const &);
void OutlineModifier::setColour(vector4 const &) // 0x625C53
{
    mangled_assert("?setColour@OutlineModifier@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_625C53(this, arg);
}

_extern void _sub_625ACF(OutlineModifier *const, VertexArray *, unsigned __int32 *, bool);
void OutlineModifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x625ACF
{
    mangled_assert("?modify@OutlineModifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
    _sub_625ACF(this, arg, arg, arg);
}

_extern _sub_625881(SolidColourModifier *const);
SolidColourModifier::SolidColourModifier() // 0x625881
{
    mangled_assert("??0SolidColourModifier@@QAE@XZ");
    todo("implement");
    _sub_625881(this);
}

_extern void _sub_6258BA(FlashModifier *const);
_inline FlashModifier::~FlashModifier() // 0x6258BA
{
    mangled_assert("??1FlashModifier@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6258BA(this);
}

_extern void _sub_6258C0(NebulaModifier *const);
_inline NebulaModifier::~NebulaModifier() // 0x6258C0
{
    mangled_assert("??1NebulaModifier@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6258C0(this);
}

_extern void _sub_625906(SolidColourModifier *const);
SolidColourModifier::~SolidColourModifier() // 0x625906
{
    mangled_assert("??1SolidColourModifier@@UAE@XZ");
    todo("implement");
    _sub_625906(this);
}

_extern void _sub_625C5C(SolidColourModifier *const, vector4 const &);
void SolidColourModifier::setColour(vector4 const &) // 0x625C5C
{
    mangled_assert("?setColour@SolidColourModifier@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_625C5C(this, arg);
}

_extern void _sub_625BDA(SolidColourModifier *const, VertexArray *, unsigned __int32 *, bool);
void SolidColourModifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x625BDA
{
    mangled_assert("?modify@SolidColourModifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
    _sub_625BDA(this, arg, arg, arg);
}

_extern _sub_625826(NebulaModifier *const);
NebulaModifier::NebulaModifier() // 0x625826
{
    mangled_assert("??0NebulaModifier@@QAE@XZ");
    todo("implement");
    _sub_625826(this);
}

_extern void _sub_625C42(NebulaModifier *const, vector3 const &);
void NebulaModifier::setCameraDir(vector3 const &) // 0x625C42
{
    mangled_assert("?setCameraDir@NebulaModifier@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_625C42(this, arg);
}

_extern void _sub_6259F1(NebulaModifier *const, VertexArray *, unsigned __int32 *, bool);
void NebulaModifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x6259F1
{
    mangled_assert("?modify@NebulaModifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
    _sub_6259F1(this, arg, arg, arg);
}

/* ---------- private code */
#endif
