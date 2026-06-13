#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\matrix3.h>
#include <xfunctional>
#include <new>
#include <exception>
#include <xstddef>
#include <Interpolation.h>
#include <type_traits>
#include <DynamicPoint.h>
#include <Collision\Primitives\aabb.h>
#include <Parade.h>
#include <Race.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <sobid.h>
#include <abilities.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <BuildManager.h>
#include <math.h>
#include <list>
#include <alliance.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <xtree>
#include <seInterface2\SoundParams.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <util\types.h>
#include <weaponinfo.h>
#include <Collision\BVH\profiling.h>
#include <Modifiers\ModifierTargetCache.h>
#include <boost\cstdint.hpp>
#include <Ship\FormationTargetInfo.h>
#include <resourceCommand.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Mathlib\quat.h>
#include <SOBGroupManager.h>
#include <TeamColourRegistry.h>
#include <hash_map>
#include <savegame.h>
#include <ParadeCommand.h>
#include <xhash>
#include <task.h>
#include <commandtype.h>
#include <stack>
#include <SobWithMeshStatic.h>
#include <Sob\Resource\Resource.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Squadron.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <command.h>
#include <ship.h>
#include <MultiplierTypes.h>
#include <SobRigidBodyStatic.h>
#include <ShieldTypes.h>
#include <Mathlib\mathlibdll.h>
#include <Collision\BVH\bvh.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
#include <MeshAnimation.h>
#include <savegameimpl.h>
#include <Sob\Resource\ResourceStatic.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <assist\stlexvector.h>
#include <Subsystems\HardPointManager.h>
#include <debug\db.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <deque>
#include <Ship\Formation.h>
#include <Render\objects\objects.h>
#include <Ship\FormationPattern.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <sob.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobstatic.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\Primitives\sphere.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Render\gl\lotypes.h>
#include <boost\detail\lwm_win32.hpp>
#include <OrderFeedback.h>
#include <HyperspaceManager.h>
#include <fixedpoint.h>
#include <playerresourcetype.h>
#include <SquadronList.h>
#include <util\fixed.h>
#include <Render\gl\r_types.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <CPUPlayer\CpuResourceBlobs.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ShipQuery.h>
#include <wchar.h>
#include <savestream.h>
#include <queue>
#include <Universe.h>
#include <algorithm>
#include <Waypoint.h>
#include <SobUnmoveable.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::GatherSiteEntity
{
    Sob *pSob; // 0x0
    bool bInGatherSite; // 0x4
};
static_assert(sizeof(`anonymous-namespace'::GatherSiteEntity) == 8, "Invalid `anonymous-namespace'::GatherSiteEntity size");

class `anonymous-namespace'::SobInGroup :
    public std::binary_function<`anonymous namespace'::GatherSiteEntity,Selection,bool>
{
public:
    bool operator()(`anonymous-namespace'::GatherSiteEntity const &, Selection const &) const;
};
static_assert(sizeof(`anonymous-namespace'::SobInGroup) == 1, "Invalid `anonymous-namespace'::SobInGroup size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5391A2(ResourceBlobManager *const, CpuCommon &);
ResourceBlobManager::ResourceBlobManager(CpuCommon &) // 0x5391A2
{
    mangled_assert("??0ResourceBlobManager@@QAE@AAVCpuCommon@@@Z");
    todo("implement");
    _sub_5391A2(this, arg);
}

_extern void _sub_539219(ResourceBlob *const);
_inline ResourceBlob::~ResourceBlob() // 0x539219
{
    mangled_assert("??1ResourceBlob@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_539219(this);
}

_extern void _sub_53925D(ResourceBlobManager *const);
ResourceBlobManager::~ResourceBlobManager() // 0x53925D
{
    mangled_assert("??1ResourceBlobManager@@QAE@XZ");
    todo("implement");
    _sub_53925D(this);
}

_extern Selection const *_sub_539649(ResourceBlobManager *const, Sob const *);
Selection const *ResourceBlobManager::GetResourceBlobList(Sob const *) // 0x539649
{
    mangled_assert("?GetResourceBlobList@ResourceBlobManager@@QAEPBVSelection@@PBVSob@@@Z");
    todo("implement");
    Selection const * __result = _sub_539649(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_539640(ResourceBlobManager *const);
unsigned __int32 ResourceBlobManager::GetResourceBlobCount() // 0x539640
{
    mangled_assert("?GetResourceBlobCount@ResourceBlobManager@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_539640(this);
    return __result;
}

_extern ResourceBlob *_sub_539624(ResourceBlobManager *const, unsigned __int32);
ResourceBlob *ResourceBlobManager::GetResourceBlobAt(unsigned __int32) // 0x539624
{
    mangled_assert("?GetResourceBlobAt@ResourceBlobManager@@QAEPAVResourceBlob@@I@Z");
    todo("implement");
    ResourceBlob * __result = _sub_539624(this, arg);
    return __result;
}

_extern void _sub_53956D(ResourceBlobManager *const);
void ResourceBlobManager::Debug() // 0x53956D
{
    mangled_assert("?Debug@ResourceBlobManager@@QAEXXZ");
    todo("implement");
    _sub_53956D(this);
}

_extern void _sub_53956E(ResourceBlob *const);
void ResourceBlob::DefaultSettings() // 0x53956E
{
    mangled_assert("?DefaultSettings@ResourceBlob@@AAEXXZ");
    todo("implement");
    _sub_53956E(this);
}

_extern _sub_538F5D(ResourceBlob *const, SaveGameData *);
ResourceBlob::ResourceBlob(SaveGameData *) // 0x538F5D
{
    mangled_assert("??0ResourceBlob@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_538F5D(this, arg);
}

_extern void _sub_53A108(ResourceBlob *const, SaveGameData *, SaveType);
void ResourceBlob::save(SaveGameData *, SaveType) // 0x53A108
{
    mangled_assert("?save@ResourceBlob@@QAEXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_53A108(this, arg, arg);
}

_extern _sub_539080(ResourceBlob *const, Sob *);
ResourceBlob::ResourceBlob(Sob *) // 0x539080
{
    mangled_assert("??0ResourceBlob@@QAE@PAVSob@@@Z");
    todo("implement");
    _sub_539080(this, arg);
}

_extern _sub_538E95(ResourceBlob *const, Selection const &);
ResourceBlob::ResourceBlob(Selection const &) // 0x538E95
{
    mangled_assert("??0ResourceBlob@@QAE@ABVSelection@@@Z");
    todo("implement");
    _sub_538E95(this, arg);
}

_extern _sub_539125(ResourceBlob *const);
ResourceBlob::ResourceBlob() // 0x539125
{
    mangled_assert("??0ResourceBlob@@QAE@XZ");
    todo("implement");
    _sub_539125(this);
}

_extern unsigned __int32 _sub_539707(ResourceBlob *const);
unsigned __int32 ResourceBlob::ResourceLatchPoints() // 0x539707
{
    mangled_assert("?ResourceLatchPoints@ResourceBlob@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_539707(this);
    return __result;
}

_extern unsigned __int32 _sub_539758(ResourceBlob *const);
unsigned __int32 ResourceBlob::TotalCollectors() // 0x539758
{
    mangled_assert("?TotalCollectors@ResourceBlob@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_539758(this);
    return __result;
}

_extern unsigned __int32 _sub_539782(ResourceBlob *const, Player *);
unsigned __int32 ResourceBlob::TotalFriendlyCollectors(Player *) // 0x539782
{
    mangled_assert("?TotalFriendlyCollectors@ResourceBlob@@QAEIPAVPlayer@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_539782(this, arg);
    return __result;
}

_extern void _sub_539580(ResourceBlob *const, Player *, std::vector<Squadron *,std::allocator<Squadron *> > &);
void ResourceBlob::GetEnemyUsingBlob(Player *, std::vector<Squadron *,std::allocator<Squadron *> > &) // 0x539580
{
    mangled_assert("?GetEnemyUsingBlob@ResourceBlob@@QAEXPAVPlayer@@AAV?$vector@PAVSquadron@@V?$allocator@PAVSquadron@@@std@@@std@@@Z");
    todo("implement");
    _sub_539580(this, arg, arg);
}

_extern void _sub_53969E(ResourceBlob *const, Squadron const *);
void ResourceBlob::RemoveGatherer(Squadron const *) // 0x53969E
{
    mangled_assert("?RemoveGatherer@ResourceBlob@@QAEXPBVSquadron@@@Z");
    todo("implement");
    _sub_53969E(this, arg);
}

_extern void _sub_5396D0(ResourceBlob *const, Squadron const *);
void ResourceBlob::RemoveRefinery(Squadron const *) // 0x5396D0
{
    mangled_assert("?RemoveRefinery@ResourceBlob@@QAEXPBVSquadron@@@Z");
    todo("implement");
    _sub_5396D0(this, arg);
}

_extern bool _sub_539C70(ResourceBlob const *const, vector3 &, float &);
bool ResourceBlob::getCentreAndRadiusOfCollectors(vector3 &, float &) const // 0x539C70
{
    mangled_assert("?getCentreAndRadiusOfCollectors@ResourceBlob@@QBE_NAAVvector3@@AAM@Z");
    todo("implement");
    bool __result = _sub_539C70(this, arg, arg);
    return __result;
}

_extern Resource *_sub_539EFA(ResourceBlob const *const, vector3 const);
Resource *ResourceBlob::getClosestBusyResourceTo(vector3 const) const // 0x539EFA
{
    mangled_assert("?getClosestBusyResourceTo@ResourceBlob@@QBEPAVResource@@Vvector3@@@Z");
    todo("implement");
    Resource * __result = _sub_539EFA(this, arg);
    return __result;
}

_extern Ship *_sub_539F7C(ResourceBlob const *const);
Ship *ResourceBlob::getLargestCollector() const // 0x539F7C
{
    mangled_assert("?getLargestCollector@ResourceBlob@@QBEPAVShip@@XZ");
    todo("implement");
    Ship * __result = _sub_539F7C(this);
    return __result;
}

_extern bool _sub_539AEA(ResourceBlob const *const, unsigned __int32);
bool ResourceBlob::blobInUseByAlly(unsigned __int32) const // 0x539AEA
{
    mangled_assert("?blobInUseByAlly@ResourceBlob@@QBE_NI@Z");
    todo("implement");
    bool __result = _sub_539AEA(this, arg);
    return __result;
}

/* ---------- private code */
#endif
