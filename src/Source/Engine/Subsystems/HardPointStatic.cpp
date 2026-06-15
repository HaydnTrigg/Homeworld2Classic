#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <sob.h>
#include <xmemory0>
#include <sobstatic.h>
#include <pch.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Subsystems\SubsystemStatic.h>
#include <SobWithMeshStatic.h>
#include <Modifiers\ModifierUIInfo.h>
#include <SobRigidBodyStatic.h>
#include <xutility>
#include <Modifiers\ModifierMultiplier.h>
#include <utility>
#include <iosfwd>
#include <Modifiers\ModifierEffect.h>
#include <vector>
#include <xmemory>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Modifiers\ModifierApplier.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Interpolation.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\Primitives\aabb.h>
#include <sobid.h>
#include <Mathlib\vector2.h>
#include <WeaponClassSpecificInfo.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <App\Hw2Identify.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierAbility.h>
#include <debug\db.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <wchar.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern HardPointHealthType getHardPointHealthTypeFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

HardPointStatic::HardPointStatic() // 0x4EFFEC
{
    mangled_assert("??0HardPointStatic@@QAE@XZ");
    todo("implement");
}

HardPointStatic::~HardPointStatic() // 0x4F0024
{
    mangled_assert("??1HardPointStatic@@QAE@XZ");
    todo("implement");
}

void HardPointStatic::setDefaultSubSystemId(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F019E
{
    mangled_assert("?setDefaultSubSystemId@HardPointStatic@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

void HardPointStatic::addFittingSubSystem(unsigned __int32) // 0x4F0046
{
    mangled_assert("?addFittingSubSystem@HardPointStatic@@QAEXI@Z");
    todo("implement");
}

bool HardPointStatic::doesSubSystemFit(unsigned __int32) const // 0x4F0061
{
    mangled_assert("?doesSubSystemFit@HardPointStatic@@QBE_NI@Z");
    todo("implement");
}

HardPointHealthType getHardPointHealthTypeFromString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inStr) // 0x4F008A
{
    mangled_assert("?getHardPointHealthTypeFromString@@YG?AW4HardPointHealthType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
