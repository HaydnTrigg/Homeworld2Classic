#if 0
/* ---------- headers */

#include "decomp.h"
#include <Modifiers\ModifierTargetCache.h>
#include <Race.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <HyperspaceManager.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <fixedpoint.h>
#include <BuildManager.h>
#include <util\fixed.h>
#include <shipstatic.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <alliance.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Render\gl\r_defines.h>
#include <Collision\BVH\bvh.h>
#include <Render\gl\glext.h>
#include <WeaponClassSpecificInfo.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <CPUPlayer\CpuCommon.h>
#include <fileio\logfile.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <CPUPlayer\CpuTarget.h>
#include <fileio\fileioexports.h>
#include <Squadron.h>
#include <dbdefines.h>
#include <command.h>
#include <UnitCaps\UnitCaps.h>
#include <sobid.h>
#include <Parade.h>
#include <hash_map>
#include <xhash>
#include <weaponinfo.h>
#include <Player.h>
#include <ResearchManager.h>
#include <list>
#include <assist\fixedstring.h>
#include <playerresourcetype.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <xtree>
#include <stack>
#include <boost\scoped_ptr.hpp>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Modifiers\ModifierAbility.h>
#include <SobRigidBody.h>
#include <sob.h>
#include <Mathlib\vector2.h>
#include <sobstatic.h>
#include <SobRigidBodyStatic.h>
#include <util\types.h>
#include <Collision\Primitives\sphere.h>
#include <MeshAnimation.h>
#include <boost\cstdint.hpp>
#include <ShieldTypes.h>
#include <SOBGroupManager.h>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPointManager.h>
#include <Collision\BVH\span.h>
#include <Subsystems\HardPoint.h>
#include <Mathlib\quat.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\BVH\proxy.h>
#include <Subsystems\SubSystemType.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Tactics.h>
#include <ParadeCommand.h>
#include <commandtype.h>
#include <Mathlib\mathlibdll.h>
#include <Interpolation.h>
#include <OrderFeedback.h>
#include <Mathlib\fastmath.h>
#include <SquadronList.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <Collision\Primitives\aabb.h>
#include <Collision\Primitives\obb.h>
#include <pathpoints.h>
#include <Collision\Collision.h>
#include <debug\db.h>
#include <abilities.h>
#include <deque>
#include <platform\osdef.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <Render\objects\debugrender.h>
#include <boost\detail\lwm_win32.hpp>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <SelTarg.h>
#include <Universe.h>
#include <prim.h>
#include <Waypoint.h>
#include <Render\gl\lotypes.h>
#include <SobUnmoveable.h>
#include <CPUPlayer\CpuBlobs.h>
#include <ShipQuery.h>
#include <wchar.h>
#include <Modifiers\ModifierUIInfo.h>
#include <queue>
#include <Modifiers\ModifierMultiplier.h>
#include <Render\gl\r_types.h>
#include <Collision\Primitives\capsule.h>
#include <Modifiers\ModifierEffect.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <DynamicPoint.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<SquadronList const *,std::allocator<SquadronList const *> > SQListArray;

/* ---------- prototypes */


_static float getSquadRadius(Squadron &squadron);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern float const kBlobRadiusScale; // 0x79D160
    extern float const kBlobScanRadiusScale; // 0x79D164
}

/* ---------- public code */

_extern _sub_5260BE(CpuBlob *const, vector3 const &, float);
CpuBlob::CpuBlob(vector3 const &, float) // 0x5260BE
{
    mangled_assert("??0CpuBlob@@QAE@ABVvector3@@M@Z");
    todo("implement");
    _sub_5260BE(this, arg, arg);
}

_extern _sub_52611A(CpuBlob *const, Squadron *);
CpuBlob::CpuBlob(Squadron *) // 0x52611A
{
    mangled_assert("??0CpuBlob@@QAE@PAVSquadron@@@Z");
    todo("implement");
    _sub_52611A(this, arg);
}

_extern _sub_5261EC(CpuBlob *const, Squadron *, float);
CpuBlob::CpuBlob(Squadron *, float) // 0x5261EC
{
    mangled_assert("??0CpuBlob@@QAE@PAVSquadron@@M@Z");
    todo("implement");
    _sub_5261EC(this, arg, arg);
}

_extern _sub_526011(CpuBlob *const, CpuBlob const &);
CpuBlob::CpuBlob(CpuBlob const &) // 0x526011
{
    mangled_assert("??0CpuBlob@@QAE@ABV0@@Z");
    todo("implement");
    _sub_526011(this, arg);
}

_extern void _sub_5266B6(CpuBlob *const);
void CpuBlob::Clear() // 0x5266B6
{
    mangled_assert("?Clear@CpuBlob@@QAEXXZ");
    todo("implement");
    _sub_5266B6(this);
}

_extern void _sub_5263E7(CpuBlob *const, Squadron *);
void CpuBlob::AddEnemySquad(Squadron *) // 0x5263E7
{
    mangled_assert("?AddEnemySquad@CpuBlob@@AAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_5263E7(this, arg);
}

_extern void _sub_5263F7(CpuBlob *const, Squadron *);
void CpuBlob::AddFriendlySquad(Squadron *) // 0x5263F7
{
    mangled_assert("?AddFriendlySquad@CpuBlob@@AAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_5263F7(this, arg);
}

_extern void _sub_5266DB(CpuBlob *const, CpuBlob &);
void CpuBlob::Combine(CpuBlob &) // 0x5266DB
{
    mangled_assert("?Combine@CpuBlob@@AAEXAAV1@@Z");
    todo("implement");
    _sub_5266DB(this, arg);
}

_extern _sub_52628D(CpuBlobManager *const, CpuCommon &);
CpuBlobManager::CpuBlobManager(CpuCommon &) // 0x52628D
{
    mangled_assert("??0CpuBlobManager@@QAE@AAVCpuCommon@@@Z");
    todo("implement");
    _sub_52628D(this, arg);
}

_extern void _sub_5262CF(CpuBlobManager *const);
CpuBlobManager::~CpuBlobManager() // 0x5262CF
{
    mangled_assert("??1CpuBlobManager@@QAE@XZ");
    todo("implement");
    _sub_5262CF(this);
}

_extern void _sub_527002(CpuBlobManager *const);
void CpuBlobManager::Update() // 0x527002
{
    mangled_assert("?Update@CpuBlobManager@@QAEXXZ");
    todo("implement");
    _sub_527002(this);
}

_extern void _sub_52670A(CpuBlobManager *const, std::vector<SquadronList const *,std::allocator<SquadronList const *> > const &);
void CpuBlobManager::CreateBlobs(std::vector<SquadronList const *,std::allocator<SquadronList const *> > const &) // 0x52670A
{
    mangled_assert("?CreateBlobs@CpuBlobManager@@AAEXABV?$vector@PBVSquadronList@@V?$allocator@PBVSquadronList@@@std@@@std@@@Z");
    todo("implement");
    _sub_52670A(this, arg);
}

_extern void _sub_5269E2(CpuBlobManager *const, std::vector<SquadronList const *,std::allocator<SquadronList const *> > const &);
void CpuBlobManager::CreateEnemyBlobs(std::vector<SquadronList const *,std::allocator<SquadronList const *> > const &) // 0x5269E2
{
    mangled_assert("?CreateEnemyBlobs@CpuBlobManager@@AAEXABV?$vector@PBVSquadronList@@V?$allocator@PBVSquadronList@@@std@@@std@@@Z");
    todo("implement");
    _sub_5269E2(this, arg);
}

_extern float _sub_526EDC(CpuBlob const *const);
float CpuBlob::GetRadiusMult() const // 0x526EDC
{
    mangled_assert("?GetRadiusMult@CpuBlob@@QBEMXZ");
    todo("implement");
    float __result = _sub_526EDC(this);
    return __result;
}

_extern void _sub_526407(CpuBlob *const, Player *, bool);
void CpuBlob::AddSquadrons(Player *, bool) // 0x526407
{
    mangled_assert("?AddSquadrons@CpuBlob@@QAEXPAVPlayer@@_N@Z");
    todo("implement");
    _sub_526407(this, arg, arg);
}

_extern void _sub_5263C2(CpuBlobManager *const);
void CpuBlobManager::AddEnemiesToBlobs() // 0x5263C2
{
    mangled_assert("?AddEnemiesToBlobs@CpuBlobManager@@AAEXXZ");
    todo("implement");
    _sub_5263C2(this);
}

_extern void _sub_52657C(CpuBlob *const);
void CpuBlob::Analyze() // 0x52657C
{
    mangled_assert("?Analyze@CpuBlob@@QAEXXZ");
    todo("implement");
    _sub_52657C(this);
}

_extern void _sub_526CC9(CpuBlob *const);
void CpuBlob::EnemyAnalyze() // 0x526CC9
{
    mangled_assert("?EnemyAnalyze@CpuBlob@@QAEXXZ");
    todo("implement");
    _sub_526CC9(this);
}

_extern void _sub_526665(CpuBlobManager *const);
void CpuBlobManager::AnalyzeBlobs() // 0x526665
{
    mangled_assert("?AnalyzeBlobs@CpuBlobManager@@AAEXXZ");
    todo("implement");
    _sub_526665(this);
}

_extern CpuBlob *_sub_526DC8(CpuBlobManager *const, Squadron const *);
CpuBlob *CpuBlobManager::FindBlob(Squadron const *) // 0x526DC8
{
    mangled_assert("?FindBlob@CpuBlobManager@@QAEPAVCpuBlob@@PBVSquadron@@@Z");
    todo("implement");
    CpuBlob * __result = _sub_526DC8(this, arg);
    return __result;
}

_extern void _sub_526DF8(CpuBlobManager *const, SquadronList const &, std::vector<CpuBlob *,std::allocator<CpuBlob *> > &);
void CpuBlobManager::FindBlobs(SquadronList const &, std::vector<CpuBlob *,std::allocator<CpuBlob *> > &) // 0x526DF8
{
    mangled_assert("?FindBlobs@CpuBlobManager@@QAEXABVSquadronList@@AAV?$vector@PAVCpuBlob@@V?$allocator@PAVCpuBlob@@@std@@@std@@@Z");
    todo("implement");
    _sub_526DF8(this, arg, arg);
}

_extern void _sub_526E53(CpuBlobManager *const, SquadronList const &, SquadronList &);
void CpuBlobManager::GetEnemyInBlobs(SquadronList const &, SquadronList &) // 0x526E53
{
    mangled_assert("?GetEnemyInBlobs@CpuBlobManager@@QAEXABVSquadronList@@AAV2@@Z");
    todo("implement");
    _sub_526E53(this, arg, arg);
}

_extern void _sub_526EE3(CpuBlobManager *const, SquadronList const &, SquadronList &, SquadronList &);
void CpuBlobManager::GetShipsInBlobs(SquadronList const &, SquadronList &, SquadronList &) // 0x526EE3
{
    mangled_assert("?GetShipsInBlobs@CpuBlobManager@@QAEXABVSquadronList@@AAV2@1@Z");
    todo("implement");
    _sub_526EE3(this, arg, arg, arg);
}

_extern void _sub_526F8C(CpuBlobManager *const, vector3 const &, std::vector<CpuBlob *,std::allocator<CpuBlob *> > &);
void CpuBlobManager::PointInBlob(vector3 const &, std::vector<CpuBlob *,std::allocator<CpuBlob *> > &) // 0x526F8C
{
    mangled_assert("?PointInBlob@CpuBlobManager@@QAEXABVvector3@@AAV?$vector@PAVCpuBlob@@V?$allocator@PAVCpuBlob@@@std@@@std@@@Z");
    todo("implement");
    _sub_526F8C(this, arg, arg);
}

_extern void _sub_526CC5(CpuBlobManager *const);
void CpuBlobManager::Debug() // 0x526CC5
{
    mangled_assert("?Debug@CpuBlobManager@@QAEXXZ");
    todo("implement");
    _sub_526CC5(this);
}

_extern void _sub_526CC6(CpuBlobManager *const, float);
void CpuBlobManager::DebugStats(float) // 0x526CC6
{
    mangled_assert("?DebugStats@CpuBlobManager@@QAEXM@Z");
    todo("implement");
    _sub_526CC6(this, arg);
}

/* ---------- private code */

_extern float _sub_527669(Squadron &);
_static float getSquadRadius(Squadron &squadron) // 0x527669
{
    mangled_assert("getSquadRadius");
    todo("implement");
    float __result = _sub_527669(squadron);
    return __result;
}
#endif
