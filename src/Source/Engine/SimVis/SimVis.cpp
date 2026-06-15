#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Universe.h>
#include <Waypoint.h>
#include <profile\profile.h>
#include <SobUnmoveable.h>
#include <iostream>
#include <Mathlib\matrix3.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <new>
#include <Collision\BVH\bvh.h>
#include <SimVis\SobVis.h>
#include <xstddef>
#include <type_traits>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Viewer.h>
#include <vector>
#include <xmemory>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Player.h>
#include <SquadronList.h>
#include <Mathlib\vector2.h>
#include <Race.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Mathlib\quat.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <TeamColourRegistry.h>
#include <SimVis\simvistypes.h>
#include <Interpolation.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <Collision\Primitives\aabb.h>
#include <SOBGroupManager.h>
#include <hash_map>
#include <BuildManager.h>
#include <xhash>
#include <sobid.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <playerresourcetype.h>
#include <SimVis\SimVisHandler.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <fixedpoint.h>
#include <savegamedef.h>
#include <util\fixed.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <SimVis\SimVis.h>
#include <ResearchManager.h>
#include <wchar.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <HyperspaceManager.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::list<SimVisHandler *,std::allocator<SimVisHandler *> > HandlerCont;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<SimVisHandler *> > > HandlerContI;

/* ---------- prototypes */

/* ---------- globals */

extern SimVis *SimVis::s_instance; // 0x8448E8

/* ---------- private variables */

_static
{
    extern float const ViewerUpdateRate; // 0x79D070
    extern float const ViewerUpdatePeriod; // 0x8378FC
    extern float const CameraDistanceUpdateRate; // 0x79D074
    extern float const CameraDistanceUpdatePeriod; // 0x837900
}

/* ---------- public code */

bool SimVis::startup() // 0x523DA7
{
    mangled_assert("?startup@SimVis@@SG_NXZ");
    todo("implement");
}

bool SimVis::shutdown() // 0x523D83
{
    mangled_assert("?shutdown@SimVis@@SG_NXZ");
    todo("implement");
}

SimVis *SimVis::i() // 0x523D26
{
    mangled_assert("?i@SimVis@@SGPAV1@XZ");
    todo("implement");
}

SimVis::SimVis() // 0x5239EE
{
    mangled_assert("??0SimVis@@AAE@XZ");
    todo("implement");
}

_inline std::_List_buy<SimVisHandler *,std::allocator<SimVisHandler *> >::~_List_buy<SimVisHandler *,std::allocator<SimVisHandler *> >() // 0x523A6C
{
    mangled_assert("??1?$_List_buy@PAVSimVisHandler@@V?$allocator@PAVSimVisHandler@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SimVis::Data::~Data() // 0x523A87
{
    mangled_assert("??1Data@SimVis@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SimVis::~SimVis() // 0x523A99
{
    mangled_assert("??1SimVis@@AAE@XZ");
    todo("implement");
}

_inline SimVis::Data::Data() // 0x5239D7
{
    mangled_assert("??0Data@SimVis@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void SimVis::addHandler(SimVisHandler *) // 0x523BFB
{
    mangled_assert("?addHandler@SimVis@@QAEXPAVSimVisHandler@@@Z");
    todo("implement");
}

void SimVis::removeHandler(SimVisHandler *) // 0x523D54
{
    mangled_assert("?removeHandler@SimVis@@QAEXPAVSimVisHandler@@@Z");
    todo("implement");
}

void SimVis::update(Universe const &, Player const *, Camera const &, float const, float const) // 0x523DE0
{
    mangled_assert("?update@SimVis@@QAEXABVUniverse@@PBVPlayer@@ABVCamera@@MM@Z");
    todo("implement");
}

void SimVis::updateHandlers(SimVisDisplayData &) // 0x523F0F
{
    mangled_assert("?updateHandlers@SimVis@@IAEXAAVSimVisDisplayData@@@Z");
    todo("implement");
}

void SimVis::draw(Universe const &, Player const *, Camera const &, float const) // 0x523C83
{
    mangled_assert("?draw@SimVis@@QAEXABVUniverse@@PBVPlayer@@ABVCamera@@M@Z");
    todo("implement");
}

/* ---------- private code */
#endif
