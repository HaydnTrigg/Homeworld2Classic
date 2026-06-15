#if 0
/* ---------- headers */

#include "decomp.h"
#include <profile\profile.h>
#include <iostream>
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>
#include <debug\ctassert.h>
#include <Decal\DecalRefMesh.h>
#include <platform\osdef.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Interpolation.h>
#include <map>
#include <xtree>
#include <Render\gl\lotypes.h>
#include <Render\objects\mesh.h>
#include <Render\objects\core.h>
#include <Mathlib\vector2.h>
#include <Render\objects\objects.h>
#include <util\types.h>
#include <Render\gl\r_types.h>
#include <boost\cstdint.hpp>
#include <Camera\Camera.h>
#include <Mathlib\quat.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Graphics\DirectMeshRender.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <savegameimpl.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <debug\db.h>
#include <ShaderVariables.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <savegamedef.h>
#include <bitset>
#include <HierarchyStatic.h>
#include <Collision\Primitives\obb.h>
#include <Render\objects\renderable.h>
#include <BillboardRender.h>
#include <Graphics\meshrenderproxy.h>
#include <task.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const BillboardRender::m_saveToken[16]; // 0x7A0420
extern SaveData const BillboardRender::m_saveData[3]; // 0x7A0430

/* ---------- private variables */

/* ---------- public code */

BillboardRender::BillboardRender(float, float) // 0x56DB97
{
    mangled_assert("??0BillboardRender@@QAE@MM@Z");
    todo("implement");
}

void BillboardRender::Render(Camera const *, MeshRenderProxy &, vector4 const &, vector4 const &, HierarchyStatic const *, vector3 const &, float, float, MeshInstance const *) // 0x56DBE1
{
    mangled_assert("?Render@BillboardRender@@QAEXPBVCamera@@AAVMeshRenderProxy@@ABVvector4@@2PBVHierarchyStatic@@ABVvector3@@MMPBVMeshInstance@@@Z");
    todo("implement");
}

void BillboardRender::postRestore() // 0x56DEA3
{
    mangled_assert("?postRestore@BillboardRender@@UAEXXZ");
    todo("implement");
}

void BillboardRender::defaultSettings() // 0x56DE93
{
    mangled_assert("?defaultSettings@BillboardRender@@QAEXXZ");
    todo("implement");
}

bool BillboardRender::restore(SaveGameData *) // 0x56DEA4
{
    mangled_assert("?restore@BillboardRender@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool BillboardRender::save(SaveGameData *, SaveType) // 0x56DEE2
{
    mangled_assert("?save@BillboardRender@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
