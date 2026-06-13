#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <Render\objects\varymesh.h>
#include <hash_map>
#include <xhash>
#include <Mathlib\matrix3.h>
#include <Render\objects\vertexarray.h>
#include <Render\objects\vertexarrayinternal.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <platform\osdef.h>
#include <xutility>
#include <utility>
#include <Render\objects\meshbatcher.h>
#include <iosfwd>
#include <vector>
#include <Render\objects\objects.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Render\objects\basicmesh.h>
#include <Render\objects\mesh.h>
#include <debug\ctassert.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <list>
#include <Render\gl\lotypes.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\gl\r_types.h>
#include <map>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <xtree>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <Render\objects\memtracker.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <profile\profile.h>
#include <iostream>
#include <debug\db.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <bitset>
#include <Render\objects\renderable.h>
#include <Graphics\BatchMeshRender.h>
#include <Graphics\meshrenderproxy.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_56B98E(BatchMeshRender *const, SubMesh *, matrix4 const &, MeshInstance const *, unsigned __int32, float, vector4 const &, bool);
void BatchMeshRender::Render(SubMesh *, matrix4 const &, MeshInstance const *, unsigned __int32, float, vector4 const &, bool) // 0x56B98E
{
    mangled_assert("?Render@BatchMeshRender@@UAEXPAVSubMesh@@ABVmatrix4@@PBVMeshInstance@@IMABVvector4@@_N@Z");
    todo("implement");
    _sub_56B98E(this, arg, arg, arg, arg, arg, arg, arg);
}

/* ---------- private code */
#endif
