#if 0
/* ---------- headers */

#include "decomp.h"
#include <Graphics\meshrenderproxy.h>
#include <xstring>
#include <Collision\Primitives\aabb.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Sob\DustCloud\DustCloud.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Sob\Nebula\NebulaGroupBase.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <SelTarg.h>
#include <xutility>
#include <prim.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <task.h>
#include <xmemory>
#include <stack>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\profiling.h>
#include <math.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <Camera\OrbitParameters.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <seInterface2\PatchID.h>
#include <CameraCommand.h>
#include <seInterface2\PatchBase.h>
#include <CameraHW.h>
#include <seInterface2\SoundParams.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <savegameimpl.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Sob\DustCloud\DustCloudGroup.h>
#include <sobid.h>
#include <wchar.h>
#include <Interpolation.h>
#include <BillboardRender.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const DustCloudGroup::m_saveToken[0]; // 0x792DB0
extern SaveData const DustCloudGroup::m_saveData[4]; // 0x792D30

/* ---------- private variables */

/* ---------- public code */

DustCloudGroup::DustCloudGroup(char const *) // 0x4C595B
{
    mangled_assert("??0DustCloudGroup@@AAE@PBD@Z");
    todo("implement");
}

DustCloudGroup::DustCloudGroup(SaveGameData *) // 0x4C59C1
{
    mangled_assert("??0DustCloudGroup@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

_inline DustCloudGroup::~DustCloudGroup() // 0x4C5A0F
{
    mangled_assert("??1DustCloudGroup@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void DustCloudGroup::defaultSettings() // 0x4C5A7B
{
    mangled_assert("?defaultSettings@DustCloudGroup@@QAEXXZ");
    todo("implement");
}

void DustCloudGroup::postRestore() // 0x4C5A8B
{
    mangled_assert("?postRestore@DustCloudGroup@@UAEXXZ");
    todo("implement");
}

void DustCloudGroup::addDustCloud(DustCloud *) // 0x4C5A73
{
    mangled_assert("?addDustCloud@DustCloudGroup@@AAEXPAVDustCloud@@@Z");
    todo("implement");
}

void DustCloudGroup::recomputePositionRadius() // 0x4C5A8C
{
    mangled_assert("?recomputePositionRadius@DustCloudGroup@@QAEXXZ");
    todo("implement");
}

char const *DustCloudGroup::getName() const // 0x4C5A7C
{
    mangled_assert("?getName@DustCloudGroup@@QBEPBDXZ");
    todo("implement");
}

bool DustCloudGroup::restore(SaveGameData *) // 0x4C5B03
{
    mangled_assert("?restore@DustCloudGroup@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool DustCloudGroup::save(SaveGameData *, SaveType) // 0x4C5B50
{
    mangled_assert("?save@DustCloudGroup@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
