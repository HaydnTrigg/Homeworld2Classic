#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <xstring>
#include <Collision\BVH\profiling.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <SoundManager\SoundEntityHandle.h>
#include <sob.h>
#include <Mathlib\matrix3.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <seInterface2\SampleID.h>
#include <xmemory>
#include <seInterface2\SampleBase.h>
#include <MetaSelTarg.h>
#include <SelTarg.h>
#include <platform\cmdline.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <seInterface2\sedefinesshared.h>
#include <Mathlib\mathutil.h>
#include <boost\cstdint.hpp>
#include <abilities.h>
#include <sobid.h>
#include <boost\scoped_array.hpp>
#include <platform\inputinterface.h>
#include <platform\keydefines.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <luaconfig\luaconfig.h>
#include <Collision\primitivesfwd.h>
#include <lua.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <debug\db.h>
#include <Collision\Primitives\aabb.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <Camera\OrbitParameters.h>
#include <CameraTuning.h>
#include <MainUI.h>
#include <wchar.h>
#include <Selector.h>
#include <prim.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool mscrIsAddToSelectionModifier();
extern bool mscrIsPanModifier();

/* ---------- globals */

extern CameraTuning *CameraTuning::s_instance; // 0x844068

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4E1168(CameraTuning *const);
CameraTuning::CameraTuning() // 0x4E1168
{
    mangled_assert("??0CameraTuning@@QAE@XZ");
    todo("implement");
    _sub_4E1168(this);
}

_extern bool _sub_4E15F4();
bool CameraTuning::startup() // 0x4E15F4
{
    mangled_assert("?startup@CameraTuning@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4E15F4();
    return __result;
}

_extern bool _sub_4E15DE();
bool CameraTuning::shutdown() // 0x4E15DE
{
    mangled_assert("?shutdown@CameraTuning@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4E15DE();
    return __result;
}

_extern CameraTuning *_sub_4E1189();
CameraTuning *CameraTuning::i() // 0x4E1189
{
    mangled_assert("?i@CameraTuning@@SGPAV1@XZ");
    todo("implement");
    CameraTuning * __result = _sub_4E1189();
    return __result;
}

_extern void _sub_4E118F(CameraTuning *const);
void CameraTuning::initialize() // 0x4E118F
{
    mangled_assert("?initialize@CameraTuning@@AAEXXZ");
    todo("implement");
    _sub_4E118F(this);
}

_extern bool _sub_4E1243(CameraTuning *const, char const *);
bool CameraTuning::loadTuning(char const *) // 0x4E1243
{
    mangled_assert("?loadTuning@CameraTuning@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_4E1243(this, arg);
    return __result;
}

_extern void _sub_4E117F(CameraTuning *const);
void CameraTuning::ResetPanStates() // 0x4E117F
{
    mangled_assert("?ResetPanStates@CameraTuning@@QAEXXZ");
    todo("implement");
    _sub_4E117F(this);
}

_extern bool _sub_4E159D();
bool mscrIsAddToSelectionModifier() // 0x4E159D
{
    mangled_assert("?mscrIsAddToSelectionModifier@@YG_NXZ");
    todo("implement");
    bool __result = _sub_4E159D();
    return __result;
}

_extern bool _sub_4E1174(CameraTuning const *const, CameraTuning::PanState);
bool CameraTuning::IsStateDown(CameraTuning::PanState) const // 0x4E1174
{
    mangled_assert("?IsStateDown@CameraTuning@@QBE_NW4PanState@1@@Z");
    todo("implement");
    bool __result = _sub_4E1174(this, arg);
    return __result;
}

_extern bool _sub_4E15AD();
bool mscrIsPanModifier() // 0x4E15AD
{
    mangled_assert("?mscrIsPanModifier@@YG_NXZ");
    todo("implement");
    bool __result = _sub_4E15AD();
    return __result;
}

/* ---------- private code */
#endif
