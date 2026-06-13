#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <sob.h>
#include <Render\gl\r_defines.h>
#include <sobstatic.h>
#include <Render\gl\glext.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <Graphics\ArcArray.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Universe.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <list>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Mathlib\vector3.h>
#include <Collision\BVH\proxy.h>
#include <Mathlib\vector4.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <Interpolation.h>
#include <util\types.h>
#include <Collision\Primitives\aabb.h>
#include <boost\cstdint.hpp>
#include <sobid.h>
#include <ITweak.h>
#include <Mathlib\quat.h>
#include <Tactics.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Render\gl\types.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\matvec.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <fixedpoint.h>
#include <savegamedef.h>
#include <util\fixed.h>
#include <boost\detail\shared_count.hpp>
#include <Render\gl\lotypes.h>
#include <boost\detail\lwm_win32.hpp>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <Render\gl\r_types.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <profile\profile.h>
#include <xhash>
#include <iostream>
#include <Graphics\SensorsOutlines.h>
#include <wchar.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static SobType ArcTypeToSobType(SensorsOutlines::ArcType arcType);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_56BBF4(SensorsOutlines::Observer *const, SensorsOutlines *);
_inline SensorsOutlines::Observer::Observer(SensorsOutlines *) // 0x56BBF4
{
    mangled_assert("??0Observer@SensorsOutlines@@QAE@PAV1@@Z");
    todo("implement");
    _sub_56BBF4(this, arg);
}

_extern void _sub_56BD21(SensorsOutlines::Observer *const, Sob *);
_inline void SensorsOutlines::Observer::Notify_Insertion(Sob *) // 0x56BD21
{
    mangled_assert("?Notify_Insertion@Observer@SensorsOutlines@@UAEXPAVSob@@@Z");
    todo("implement");
    _sub_56BD21(this, arg);
}

_extern void _sub_56BD33(SensorsOutlines::Observer *const, Sob *);
_inline void SensorsOutlines::Observer::Notify_Removal(Sob *) // 0x56BD33
{
    mangled_assert("?Notify_Removal@Observer@SensorsOutlines@@UAEXPAVSob@@@Z");
    todo("implement");
    _sub_56BD33(this, arg);
}

_extern void _sub_56BD45(SensorsOutlines::Observer *const, SobType);
_inline void SensorsOutlines::Observer::OnChanged(SobType) // 0x56BD45
{
    mangled_assert("?OnChanged@Observer@SensorsOutlines@@AAEXW4SobType@@@Z");
    todo("implement");
    _sub_56BD45(this, arg);
}

_extern _sub_56BC06(SensorsOutlines *const);
SensorsOutlines::SensorsOutlines() // 0x56BC06
{
    mangled_assert("??0SensorsOutlines@@QAE@XZ");
    todo("implement");
    _sub_56BC06(this);
}

_extern _sub_56BBD6(SensorsOutlines::Data *const);
_inline SensorsOutlines::Data::Data() // 0x56BBD6
{
    mangled_assert("??0Data@SensorsOutlines@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_56BBD6(this);
}

_extern void _sub_56BC9A(SensorsOutlines::Data *const);
_inline SensorsOutlines::Data::~Data() // 0x56BC9A
{
    mangled_assert("??1Data@SensorsOutlines@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_56BC9A(this);
}

_extern void _sub_56BCAD(SensorsOutlines *const);
SensorsOutlines::~SensorsOutlines() // 0x56BCAD
{
    mangled_assert("??1SensorsOutlines@@QAE@XZ");
    todo("implement");
    _sub_56BCAD(this);
}

_extern void _sub_56BD70(SensorsOutlines *const);
void SensorsOutlines::RegisterObservers() // 0x56BD70
{
    mangled_assert("?RegisterObservers@SensorsOutlines@@AAEXXZ");
    todo("implement");
    _sub_56BD70(this);
}

_extern void _sub_56BD86(SensorsOutlines *const);
void SensorsOutlines::RemoveObservers() // 0x56BD86
{
    mangled_assert("?RemoveObservers@SensorsOutlines@@AAEXXZ");
    todo("implement");
    _sub_56BD86(this);
}

_extern void _sub_56BE58(SensorsOutlines *const, unsigned __int32);
void SensorsOutlines::SetDirty(unsigned __int32) // 0x56BE58
{
    mangled_assert("?SetDirty@SensorsOutlines@@QAEXI@Z");
    todo("implement");
    _sub_56BE58(this, arg);
}

_extern void _sub_56BE6E(SensorsOutlines *const, unsigned __int32, Selection const &);
void SensorsOutlines::Update(unsigned __int32, Selection const &) // 0x56BE6E
{
    mangled_assert("?Update@SensorsOutlines@@AAEXIABVSelection@@@Z");
    todo("implement");
    _sub_56BE6E(this, arg, arg);
}

_extern void _sub_56BD9C(SensorsOutlines *const, rndTable &, Universe const &);
void SensorsOutlines::Render(rndTable &, Universe const &) // 0x56BD9C
{
    mangled_assert("?Render@SensorsOutlines@@QAEXAAUrndTable@@ABVUniverse@@@Z");
    todo("implement");
    _sub_56BD9C(this, arg, arg);
}

/* ---------- private code */

_extern SobType _sub_56BD07(SensorsOutlines::ArcType);
_static SobType ArcTypeToSobType(SensorsOutlines::ArcType arcType) // 0x56BD07
{
    mangled_assert("ArcTypeToSobType");
    todo("implement");
    SobType __result = _sub_56BD07(arcType);
    return __result;
}
#endif
