#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <seInterface2\sedefinesshared.h>
#include <abilities.h>
#include <Mathlib\matrix3.h>
#include <sobid.h>
#include <new>
#include <Mathlib\mathutil.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <math.h>
#include <Collision\Primitives\aabb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <CameraTuning.h>
#include <MainUI.h>
#include <Selector.h>
#include <prim.h>
#include <boost\scoped_array.hpp>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Mathlib\quat.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <debug\db.h>
#include <Camera\OrbitParameters.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierTypes.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\BVH\bvh.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <seInterface2\SampleID.h>
#include <bitset>
#include <seInterface2\SampleBase.h>
#include <boost\detail\lwm_win32.hpp>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <SensorsManager.h>
#include <CameraHW.h>
#include <Render\gl\r_types.h>
#include <Camera\CameraOrbitTarget.h>
#include <wchar.h>
#include <Mathlib\matvec.h>
#include <Camera\Camera.h>
#include <Collision\Primitives\obb.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline float randf();

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

CameraHW::CameraHW() // 0x4E0414
{
    mangled_assert("??0CameraHW@@QAE@XZ");
    todo("implement");
}

CameraHW::~CameraHW() // 0x4E0465
{
    mangled_assert("??1CameraHW@@UAE@XZ");
    todo("implement");
}

void CameraHW::adjustFloatFactor(float const) // 0x4E0492
{
    mangled_assert("?adjustFloatFactor@CameraHW@@IAEXM@Z");
    todo("implement");
}

void CameraHW::updateCameraFloat(float const) // 0x4E05C3
{
    mangled_assert("?updateCameraFloat@CameraHW@@QAEXM@Z");
    todo("implement");
}

_inline float randf() // 0x4E0542
{
    mangled_assert("?randf@@YGMXZ");
    todo("implement");
}

void CameraHW::updateCameraShake(float const) // 0x4E07C0
{
    mangled_assert("?updateCameraShake@CameraHW@@QAEXM@Z");
    todo("implement");
}

vector3 CameraHW::updateGetTarget() // 0x4E08AA
{
    mangled_assert("?updateGetTarget@CameraHW@@MAE?AVvector3@@XZ");
    todo("implement");
}

void CameraHW::update() // 0x4E0572
{
    mangled_assert("?update@CameraHW@@UAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
