#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <boost\detail\shared_count.hpp>
#include <xhash>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <crtdefs.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix4.h>
#include <xutility>
#include <Mathlib\vector3.h>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Objects\RawMesh.h>
#include <Table.h>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <memory>
#include <stdint.h>
#include <Objects\Material.h>
#include <list>
#include <gl\interface.h>
#include <functional>
#include <xfunctional>
#include <map>
#include <xtree>
#include <Objects\Mesh.h>
#include <Objects\Renderable.h>
#include <debug\ctassert.h>
#include <assert.h>
#include <util\types.h>
#include <boost\shared_ptr.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <platform\osdef.h>
#include <Objects\StateBlock\stateblocktypes.h>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <Objects\Texture.h>
#include <Objects\TextureRegistry.h>
#include <Objects\StateBlock\StateVariableInstance.h>
#include <Mathlib\matvec.h>
#include <util\dictionary.h>
#include <boost\detail\workaround.hpp>
#include <Mathlib\vector2.h>
#include <util\utilexports.h>
#include <tuple>
#include <Objects\Geometry.h>
#include <Objects\Objects.h>
#include <Objects\StateBlock\stateBlock.h>
#include <Objects\VertexArray.h>
#include <Objects\Core.h>
#include <gl\lotypes.h>
#include <bitset>
#include <debug\db.h>
#include <Objects\VertexArrayInternal.h>
#include <gl\types.h>
#include <Objects\PrimSet.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <boost\config\suffix.hpp>
#include <Mathlib\fastmath.h>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <gl\r_types.h>
#include <string>
#include <Objects\Constructor.h>
#include <profile\profile.h>
#include <iostream>
#include <boost\throw_exception.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline float v3_magnitude(vector3 &v);
extern _inline void v3_normalize(vector3 &v);
extern _inline void v3_cross(vector3 &c, vector3 &a, vector3 &b);
extern __int32 ComparePolyMats(void const *p1, void const *p2);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern std::_Tuple_alloc_t _Tuple_alloc; // 0x10132BF1
    extern std::_Nil _Nil_obj; // 0x10132BF2
    extern std::_Ignore ignore; // 0x10132BF0
}

/* ---------- public code */

RawMesh *RawMesh::create() // 0x1008D170
{
    mangled_assert("?create@RawMesh@@SGPAV1@XZ");
    todo("implement");
}

void RawMesh::PurgeAll() // 0x1008CD60
{
    mangled_assert("?PurgeAll@RawMesh@@QAEXXZ");
    todo("implement");
}

void RawMesh::AppendOptPoly(OptPoly &) // 0x1008C2C0
{
    mangled_assert("?AppendOptPoly@RawMesh@@QAEXAAUOptPoly@@@Z");
    todo("implement");
}

void RawMesh::AppendOptVert(vector3 &) // 0x1008C340
{
    mangled_assert("?AppendOptVert@RawMesh@@QAEXAAVvector3@@@Z");
    todo("implement");
}

void RawMesh::AppendOptNorm(vector3 &) // 0x1008C280
{
    mangled_assert("?AppendOptNorm@RawMesh@@QAEXAAVvector3@@@Z");
    todo("implement");
}

void RawMesh::AppendOptUV(vector2 &) // 0x1008C300
{
    mangled_assert("?AppendOptUV@RawMesh@@QAEXAAVvector2@@@Z");
    todo("implement");
}

void RawMesh::AppendPoly(RawPoly &) // 0x1008C380
{
    mangled_assert("?AppendPoly@RawMesh@@QAEXAAURawPoly@@@Z");
    todo("implement");
}

__int32 RawMesh::AppendVert(vector3 &) // 0x1008C4E0
{
    mangled_assert("?AppendVert@RawMesh@@QAEHAAVvector3@@@Z");
    todo("implement");
}

__int32 RawMesh::AppendUV(vector2 &) // 0x1008C3C0
{
    mangled_assert("?AppendUV@RawMesh@@QAEHAAVvector2@@@Z");
    todo("implement");
}

__int32 RawMesh::AppendNorm(vector3 &) // 0x1008C130
{
    mangled_assert("?AppendNorm@RawMesh@@QAEHAAVvector3@@@Z");
    todo("implement");
}

_inline float v3_magnitude(vector3 &v) // 0x1008D940
{
    mangled_assert("?v3_magnitude@@YGMAAVvector3@@@Z");
    todo("implement");
}

_inline void v3_normalize(vector3 &v) // 0x1008D990
{
    mangled_assert("?v3_normalize@@YGXAAVvector3@@@Z");
    todo("implement");
}

_inline void v3_cross(vector3 &c, vector3 &a, vector3 &b) // 0x1008D8D0
{
    mangled_assert("?v3_cross@@YGXAAVvector3@@00@Z");
    todo("implement");
}

void RawMesh::ComputeFaceNormals() // 0x1008C640
{
    mangled_assert("?ComputeFaceNormals@RawMesh@@QAEXXZ");
    todo("implement");
}

void RawMesh::ComputeVertexNormals() // 0x1008C7E0
{
    mangled_assert("?ComputeVertexNormals@RawMesh@@QAEXXZ");
    todo("implement");
}

__int32 ComparePolyMats(void const *p1, void const *p2) // 0x1008C630
{
    mangled_assert("?ComparePolyMats@@YAHPBX0@Z");
    todo("implement");
}

void RawMesh::Optimize() // 0x1008CC20
{
    mangled_assert("?Optimize@RawMesh@@QAEXXZ");
    todo("implement");
}

Geometry *RawMesh::produceGeometry(__int32, Material **, bool) // 0x1008D1A0
{
    mangled_assert("?produceGeometry@RawMesh@@QAEPAVGeometry@@HQAPAVMaterial@@_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif
