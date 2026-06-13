#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <ShieldTypes.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <visibility.h>
#include <MultiplierContainer.h>
#include <Sob\Resource\SalvageStatic.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Tactics.h>
#include <RenderAnim\RenderModel.h>
#include <abilities.h>
#include <RenderAnim\Marker.h>
#include <Animation.h>
#include <Mathlib\matrix3.h>
#include <boost\checked_delete.hpp>
#include <Family.h>
#include <weaponstaticinfo.h>
#include <Render\objects\mesh.h>
#include <GunBinding.h>
#include <Render\objects\core.h>
#include <new>
#include <Render\objects\objects.h>
#include <exception>
#include <Render\gl\types.h>
#include <xstddef>
#include <Mathlib\matvec.h>
#include <Collision\Primitives\obb.h>
#include <type_traits>
#include <DockCommand.h>
#include <Render\gl\lotypes.h>
#include <command.h>
#include <xutility>
#include <Universe.h>
#include <utility>
#include <iosfwd>
#include <Waypoint.h>
#include <vector>
#include <SobUnmoveable.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <WeaponStatic.h>
#include <platform\timer.h>
#include <fileio\fileioexports.h>
#include <platform\platformexports.h>
#include <debug\ctassert.h>
#include <Render\gl\r_types.h>
#include <WeaponClassSpecificInfo.h>
#include <platform\cmdline.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <fileio\filestream.h>
#include <Modifiers\ModifierUIInfo.h>
#include <weaponfiretypes.h>
#include <platform\sysutilinterface.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Render\objects\memtracker.h>
#include <list>
#include <Modifiers\ModifierEffect.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <RenderAnim\EffectAnimation.h>
#include <Collision\Primitives\triangle.h>
#include <shipstatic.h>
#include <SobWithMeshStatic.h>
#include <config.h>
#include <Mathlib\vector3.h>
#include <SobRigidBodyStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <Mathlib\vector4.h>
#include <Collision\Collision.h>
#include <map>
#include <xtree>
#include <EngineTrailSystem.h>
#include <boost\scoped_ptr.hpp>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <FamilyListMgr.h>
#include <Mathlib\vector2.h>
#include <Collision\intersect.h>
#include <FamilyList.h>
#include <Sob\Nebula\NebulaStatic.h>
#include <util\types.h>
#include <Collision\primitivesfwd.h>
#include <MeshAnimation.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <commandtype.h>
#include <boost\cstdint.hpp>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <seInterface2\PatchID.h>
#include <util\dictionary.h>
#include <seInterface2\PatchBase.h>
#include <Interface.h>
#include <RenderAnim\MarkerAnimation.h>
#include <util\utilexports.h>
#include <seInterface2\SoundParams.h>
#include <profile\profile.h>
#include <iostream>
#include <Render\objects\meshloader.h>
#include <Interpolation.h>
#include <ResourceGroupManager.h>
#include <SobZeroMassBody.h>
#include <Collision\Primitives\aabb.h>
#include <fileio\filepath.h>
#include <Mathlib\quat.h>
#include <sobzeromassbodystatic.h>
#include <weapon.h>
#include <platform\windowinterface.h>
#include <WeaponFire\WeaponFire.h>
#include <platform\osdef.h>
#include <sob.h>
#include <MissileStatic.h>
#include <sobid.h>
#include <HyperspaceManager.h>
#include <fileio\iff.h>
#include <sctObjectLoad.h>
#include <Render\objects\renderable.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <weaponTargetInfo.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <gameRandom.h>
#include <DockLaunch.h>
#include <random.h>
#include <Sob\Pebble\PebbleStatic.h>
#include <DockQueue.h>
#include <SquadronQueue.h>
#include <Render\objects\parentmesh.h>
#include <SelTarg.h>
#include <fixedpoint.h>
#include <prim.h>
#include <util\fixed.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <LaunchCommand.h>
#include <Modifiers\ModifierAbility.h>
#include <selection.h>
#include <savegamedef.h>
#include <App\Hw2Identify.h>
#include <boost\detail\shared_count.hpp>
#include <dbdefines.h>
#include <bitset>
#include <UnitCaps\UnitCaps.h>
#include <boost\detail\lwm_win32.hpp>
#include <Collision\Primitives\capsule.h>
#include <SOBGroupManager.h>
#include <Collision\Primitives\segment.h>
#include <shipHold.h>
#include <hash_map>
#include <Render\objects\stateblock\stateblock.h>
#include <Collision\BVH\profiling.h>
#include <SquadronList.h>
#include <xhash>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <fileio\ramstream.h>
#include <sobstatic.h>
#include <Subsystems\SubsystemStatic.h>
#include <Collision\Primitives\sphere.h>
#include <wchar.h>
#include <Subsystems\SubSystemType.h>
#include <Sob\Cloud\CloudStatic.h>
#include <string>
#include <StaticModelRegistry.h>
#include <Sob\Resource\AsteroidStatic.h>
#include <Sob\Resource\ResourceStatic.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> > > NameToStaticInfoMap;

/* ---------- prototypes */

extern bool staticInit();
extern bool staticReset();
extern bool staticClose();
extern __int32 Handle_CollisionBBOX(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 Handle_CollisionBSPH(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 Handle_CollisionTRIS(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 Handle_COLD(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
extern __int32 Handle_BSRM(IFF *iff, IFFChunk *chunk, void *user0, void *refMesh);
extern void staticGetStaticName(SobType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, char *staticName);
extern bool staticGetMeshFilename(SobType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, char *meshFilename, char const *extension);
extern bool staticGetBuildIconFilename(SobType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, char *filename);
extern SobStatic *staticGetWaypoint(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
extern SobStatic *staticGetFormationStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
extern SobStatic *staticGetDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found, SobType type);
extern SobStatic *staticFind(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, unsigned __int32 sobTypeFlags);
extern void staticGetMatchingStatics(StaticFinder const &finder, std::list<SobStatic *,std::allocator<SobStatic *> > &out);
extern void debugCheckLOD(SobStatic *newStatic);
extern SobStatic *staticGetId(SobType type, unsigned __int32 staticId, bool forceGet);
extern SobStatic *staticGet(SobType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, bool forceGet);
extern void staticLoadChangedStatics();
extern void staticReloadEvents();
extern SobStatic *staticFindFirst();
extern SobStatic *staticFindNext();

_static __int32 Handle_HIER(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 Handle_BNDV(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 Handle_DTRM(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
_static __int32 Handle_VERS(IFF *iff, IFFChunk *chunk, void *version, void *);

/* ---------- globals */

extern bool gbForceLOD; // 0x843BD1
extern unsigned __int32 gForcedLOD; // 0x843BD4

/* ---------- private variables */

_static
{
    extern stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> > > nameToStaticInfoMap; // 0x843BD8
    extern bool findNextStarted; // 0x843BD0
    extern std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> > > > findNextIterator; // 0x843BF8
    extern char const *MESH_EXTENSION; // 0x834C98
    extern char const *EVENT_Extension; // 0x834C9C
    extern float const ReallyBigRadius; // 0x78BC38
    extern bool s_bGoblinAlphaInterp; // 0x834CA0
}

/* ---------- public code */

_extern bool _sub_47F752();
bool staticInit() // 0x47F752
{
    mangled_assert("?staticInit@@YG_NXZ");
    todo("implement");
    bool __result = _sub_47F752();
    return __result;
}

_extern bool _sub_47F8E4();
bool staticReset() // 0x47F8E4
{
    mangled_assert("?staticReset@@YG_NXZ");
    todo("implement");
    bool __result = _sub_47F8E4();
    return __result;
}

_extern bool _sub_47F18A();
bool staticClose() // 0x47F18A
{
    mangled_assert("?staticClose@@YG_NXZ");
    todo("implement");
    bool __result = _sub_47F18A();
    return __result;
}

_extern __int32 _sub_47CDC0(IFF *, IFFChunk *, void *, void *);
__int32 Handle_CollisionBBOX(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x47CDC0
{
    mangled_assert("?Handle_CollisionBBOX@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_47CDC0(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_47CE23(IFF *, IFFChunk *, void *, void *);
__int32 Handle_CollisionBSPH(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x47CE23
{
    mangled_assert("?Handle_CollisionBSPH@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_47CE23(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_47CE72(IFF *, IFFChunk *, void *, void *);
__int32 Handle_CollisionTRIS(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x47CE72
{
    mangled_assert("?Handle_CollisionTRIS@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_47CE72(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_47CD0B(IFF *, IFFChunk *, void *, void *);
__int32 Handle_COLD(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x47CD0B
{
    mangled_assert("?Handle_COLD@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_47CD0B(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_47CC17(IFF *, IFFChunk *, void *, void *);
__int32 Handle_BSRM(IFF *iff, IFFChunk *chunk, void *user0, void *refMesh) // 0x47CC17
{
    mangled_assert("?Handle_BSRM@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_47CC17(iff, chunk, user0, refMesh);
    return __result;
}

_extern _sub_47BE35(SobStatic::Model *const);
SobStatic::Model::Model() // 0x47BE35
{
    mangled_assert("??0Model@SobStatic@@QAE@XZ");
    todo("implement");
    _sub_47BE35(this);
}

_extern void _sub_47C2CF(SobStatic::Model *const);
SobStatic::Model::~Model() // 0x47C2CF
{
    mangled_assert("??1Model@SobStatic@@QAE@XZ");
    todo("implement");
    _sub_47C2CF(this);
}

_extern void _sub_47C312(SobStatic::PatchMarker *const);
_inline SobStatic::PatchMarker::~PatchMarker() // 0x47C312
{
    mangled_assert("??1PatchMarker@SobStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C312(this);
}

_extern Collision::OBB const &_sub_47CA4D(SobStatic::Model const *const);
Collision::OBB const &SobStatic::Model::GetLocalOBB() const // 0x47CA4D
{
    mangled_assert("?GetLocalOBB@Model@SobStatic@@QBEABVOBB@Collision@@XZ");
    todo("implement");
    Collision::OBB const & __result = _sub_47CA4D(this);
    return __result;
}

_extern _sub_47BDA1(SobStatic::LoadingEnv *const);
SobStatic::LoadingEnv::LoadingEnv() // 0x47BDA1
{
    mangled_assert("??0LoadingEnv@SobStatic@@QAE@XZ");
    todo("implement");
    _sub_47BDA1(this);
}

_extern void _sub_47C260(SobStatic::LoadingEnv *const);
SobStatic::LoadingEnv::~LoadingEnv() // 0x47C260
{
    mangled_assert("??1LoadingEnv@SobStatic@@QAE@XZ");
    todo("implement");
    _sub_47C260(this);
}

_extern void _sub_47C2B4(Collision::Mesh *const);
_inline Collision::Mesh::~Mesh() // 0x47C2B4
{
    mangled_assert("??1Mesh@Collision@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C2B4(this);
}

_extern _sub_47BE8A(SobStatic *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
SobStatic::SobStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x47BE8A
{
    mangled_assert("??0SobStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    _sub_47BE8A(this, arg, arg);
}

_extern void _sub_47C15F(std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> > > *const);
_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> > >() // 0x47C15F
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C15F(this);
}

_extern void _sub_47C18F(std::_Tree_buy<std::pair<unsigned int const ,SobStatic::PatchMarker>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,SobStatic::PatchMarker>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> > >::~_Tree_buy<std::pair<unsigned int const ,SobStatic::PatchMarker>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> > >() // 0x47C18F
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIVPatchMarker@SobStatic@@@std@@V?$allocator@U?$pair@$$CBIVPatchMarker@SobStatic@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C18F(this);
}

_extern void _sub_47C198(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,SobStatic::PatchMarker,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,SobStatic::PatchMarker,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,SobStatic::PatchMarker,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> >,0> >() // 0x47C198
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IVPatchMarker@SobStatic@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVPatchMarker@SobStatic@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C198(this);
}

_extern void _sub_47C1E6(stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> > > *const);
_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> > >() // 0x47C1E6
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C1E6(this);
}

_extern void _sub_47C1FD(std::map<unsigned int,SobStatic::PatchMarker,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> > > *const);
_inline std::map<unsigned int,SobStatic::PatchMarker,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> > >::~map<unsigned int,SobStatic::PatchMarker,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SobStatic::PatchMarker> > >() // 0x47C1FD
{
    mangled_assert("??1?$map@IVPatchMarker@SobStatic@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVPatchMarker@SobStatic@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C1FD(this);
}

_extern void _sub_47C202(std::pair<unsigned int const ,SobStatic::PatchMarker> *const);
_inline std::pair<unsigned int const ,SobStatic::PatchMarker>::~pair<unsigned int const ,SobStatic::PatchMarker>() // 0x47C202
{
    mangled_assert("??1?$pair@$$CBIVPatchMarker@SobStatic@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C202(this);
}

_extern void _sub_47C20A(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SobStatic *>() // 0x47C20A
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C20A(this);
}

_extern void _sub_47C20F(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>() // 0x47C20F
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVSobStatic@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C20F(this);
}

_extern void _sub_47C21C(boost::shared_ptr<SobStatic::Model> *const);
_inline boost::shared_ptr<SobStatic::Model>::~shared_ptr<SobStatic::Model>() // 0x47C21C
{
    mangled_assert("??1?$shared_ptr@VModel@SobStatic@@@boost@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C21C(this);
}

_extern void _sub_47C228(boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> > *const);
_inline boost::detail::sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >::~sp_counted_base_impl<SobStatic::Model *,boost::checked_deleter<SobStatic::Model> >() // 0x47C228
{
    mangled_assert("??1?$sp_counted_base_impl@PAVModel@SobStatic@@U?$checked_deleter@VModel@SobStatic@@@boost@@@detail@boost@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C228(this);
}

_extern void _sub_47C24D(HierarchyStatic *const);
_inline HierarchyStatic::~HierarchyStatic() // 0x47C24D
{
    mangled_assert("??1HierarchyStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_47C24D(this);
}

_extern void _sub_47C317(SobStatic *const);
SobStatic::~SobStatic() // 0x47C317
{
    mangled_assert("??1SobStatic@@UAE@XZ");
    todo("implement");
    _sub_47C317(this);
}

_extern boost::shared_ptr<SobStatic::Model> &_sub_47C3EF(boost::shared_ptr<SobStatic::Model> *const, boost::shared_ptr<SobStatic::Model> const &);
_inline boost::shared_ptr<SobStatic::Model> &boost::shared_ptr<SobStatic::Model>::operator=(boost::shared_ptr<SobStatic::Model> const &) // 0x47C3EF
{
    mangled_assert("??4?$shared_ptr@VModel@SobStatic@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
    boost::shared_ptr<SobStatic::Model> & __result = _sub_47C3EF(this, arg);
    return __result;
}

_extern __int32 _sub_47C9EC(SobStatic const *const);
__int32 SobStatic::GetBuildFamilyIndex() const // 0x47C9EC
{
    mangled_assert("?GetBuildFamilyIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47C9EC(this);
    return __result;
}

_extern __int32 _sub_47CA46(SobStatic const *const);
__int32 SobStatic::GetDockFamilyIndex() const // 0x47CA46
{
    mangled_assert("?GetDockFamilyIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47CA46(this);
    return __result;
}

_extern __int32 _sub_47CA0A(SobStatic const *const);
__int32 SobStatic::GetCollisionFamilyIndex() const // 0x47CA0A
{
    mangled_assert("?GetCollisionFamilyIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47CA0A(this);
    return __result;
}

_extern __int32 _sub_47C9CE(SobStatic const *const);
__int32 SobStatic::GetAvoidanceFamilyIndex() const // 0x47C9CE
{
    mangled_assert("?GetAvoidanceFamilyIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47C9CE(this);
    return __result;
}

_extern __int32 _sub_47C9B0(SobStatic const *const);
__int32 SobStatic::GetAutoFormationFamilyIndex() const // 0x47C9B0
{
    mangled_assert("?GetAutoFormationFamilyIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47C9B0(this);
    return __result;
}

_extern __int32 _sub_47CA28(SobStatic const *const);
__int32 SobStatic::GetDisplayFamilyIndex() const // 0x47CA28
{
    mangled_assert("?GetDisplayFamilyIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47CA28(this);
    return __result;
}

_extern __int32 _sub_47C953(SobStatic const *const);
__int32 SobStatic::GetAttackFamilyIndex() const // 0x47C953
{
    mangled_assert("?GetAttackFamilyIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47C953(this);
    return __result;
}

_extern __int32 _sub_47C92F(SobStatic const *const);
__int32 SobStatic::GetArmourFamilyIndex() const // 0x47C92F
{
    mangled_assert("?GetArmourFamilyIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47C92F(this);
    return __result;
}

_extern __int32 _sub_47CA99(SobStatic const *const);
__int32 SobStatic::GetUCFamilyIndex() const // 0x47CA99
{
    mangled_assert("?GetUCFamilyIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47CA99(this);
    return __result;
}

_extern __int32 _sub_47CAB7(SobStatic const *const);
__int32 SobStatic::GetUCShipTypeIndex() const // 0x47CAB7
{
    mangled_assert("?GetUCShipTypeIndex@SobStatic@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_47CAB7(this);
    return __result;
}

_extern Family const *_sub_47C936(SobStatic const *const);
Family const *SobStatic::GetAttackFamily() const // 0x47C936
{
    mangled_assert("?GetAttackFamily@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47C936(this);
    return __result;
}

_extern Family const *_sub_47C9B7(SobStatic const *const);
Family const *SobStatic::GetAvoidanceFamily() const // 0x47C9B7
{
    mangled_assert("?GetAvoidanceFamily@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47C9B7(this);
    return __result;
}

_extern Family const *_sub_47C9F3(SobStatic const *const);
Family const *SobStatic::GetCollisionFamily() const // 0x47C9F3
{
    mangled_assert("?GetCollisionFamily@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47C9F3(this);
    return __result;
}

_extern Family const *_sub_47C9D5(SobStatic const *const);
Family const *SobStatic::GetBuildFamily() const // 0x47C9D5
{
    mangled_assert("?GetBuildFamily@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47C9D5(this);
    return __result;
}

_extern Family const *_sub_47CA2F(SobStatic const *const);
Family const *SobStatic::GetDockFamily() const // 0x47CA2F
{
    mangled_assert("?GetDockFamily@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47CA2F(this);
    return __result;
}

_extern Family const *_sub_47C999(SobStatic const *const);
Family const *SobStatic::GetAutoFormationFamily() const // 0x47C999
{
    mangled_assert("?GetAutoFormationFamily@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47C999(this);
    return __result;
}

_extern Family const *_sub_47CA11(SobStatic const *const);
Family const *SobStatic::GetDisplayFamily() const // 0x47CA11
{
    mangled_assert("?GetDisplayFamily@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47CA11(this);
    return __result;
}

_extern Family const *_sub_47C918(SobStatic const *const);
Family const *SobStatic::GetArmourFamily() const // 0x47C918
{
    mangled_assert("?GetArmourFamily@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47C918(this);
    return __result;
}

_extern Family const *_sub_47CA82(SobStatic const *const);
Family const *SobStatic::GetUCFamily() const // 0x47CA82
{
    mangled_assert("?GetUCFamily@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47CA82(this);
    return __result;
}

_extern Family const *_sub_47CAA0(SobStatic const *const);
Family const *SobStatic::GetUCShipType() const // 0x47CAA0
{
    mangled_assert("?GetUCShipType@SobStatic@@QBEPBVFamily@@XZ");
    todo("implement");
    Family const * __result = _sub_47CAA0(this);
    return __result;
}

_extern void _sub_47F705(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, char *);
void staticGetStaticName(SobType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, char *staticName) // 0x47F705
{
    mangled_assert("?staticGetStaticName@@YGXW4SobType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAD@Z");
    todo("implement");
    _sub_47F705(type, name, staticName);
}

_extern bool _sub_47F69A(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, char *, char const *);
bool staticGetMeshFilename(SobType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, char *meshFilename, char const *extension) // 0x47F69A
{
    mangled_assert("?staticGetMeshFilename@@YG_NW4SobType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PADPBD@Z");
    todo("implement");
    bool __result = _sub_47F69A(type, name, meshFilename, extension);
    return __result;
}

_extern bool _sub_47F4DE(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, char *);
bool staticGetBuildIconFilename(SobType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, char *filename) // 0x47F4DE
{
    mangled_assert("?staticGetBuildIconFilename@@YG_NW4SobType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAD@Z");
    todo("implement");
    bool __result = _sub_47F4DE(type, name, filename);
    return __result;
}

_extern SobStatic *_sub_47C895(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
SobStatic *SobStatic::Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobType type) // 0x47C895
{
    mangled_assert("?Create@SobStatic@@SGPAV1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
    SobStatic * __result = _sub_47C895(name, type);
    return __result;
}

_extern char const *_sub_47CA58();
char const *SobStatic::GetMeshExt() // 0x47CA58
{
    mangled_assert("?GetMeshExt@SobStatic@@SGPBDXZ");
    todo("implement");
    char const * __result = _sub_47CA58();
    return __result;
}

_extern float _sub_47CA74();
float SobStatic::GetReallyBigRadius() // 0x47CA74
{
    mangled_assert("?GetReallyBigRadius@SobStatic@@SGMXZ");
    todo("implement");
    float __result = _sub_47CA74();
    return __result;
}

_extern void _sub_47EF7B(SobStatic *const);
void SobStatic::postStaticLoad() // 0x47EF7B
{
    mangled_assert("?postStaticLoad@SobStatic@@UAEXXZ");
    todo("implement");
    _sub_47EF7B(this);
}

_extern SobStatic *_sub_47F732(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobStatic *);
SobStatic *staticGetWaypoint(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found) // 0x47F732
{
    mangled_assert("?staticGetWaypoint@@YGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV1@@Z");
    todo("implement");
    SobStatic * __result = _sub_47F732(name, found);
    return __result;
}

_extern SobStatic *_sub_47F59B(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobStatic *);
SobStatic *staticGetFormationStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found) // 0x47F59B
{
    mangled_assert("?staticGetFormationStatic@@YGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV1@@Z");
    todo("implement");
    SobStatic * __result = _sub_47F59B(name, found);
    return __result;
}

_extern SobStatic *_sub_47F583(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobStatic *, SobType);
SobStatic *staticGetDefault(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found, SobType type) // 0x47F583
{
    mangled_assert("?staticGetDefault@@YGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV1@W4SobType@@@Z");
    todo("implement");
    SobStatic * __result = _sub_47F583(name, found, type);
    return __result;
}

_extern void _sub_47D07F(SobStatic *const, char const *);
void SobStatic::LoadModel(char const *) // 0x47D07F
{
    mangled_assert("?LoadModel@SobStatic@@QAEXPBD@Z");
    todo("implement");
    _sub_47D07F(this, arg);
}

_extern bool _sub_47D158(SobStatic *const, SobType, char const *);
bool SobStatic::LoadModelBegin(SobType, char const *) // 0x47D158
{
    mangled_assert("?LoadModelBegin@SobStatic@@MAE_NW4SobType@@PBD@Z");
    todo("implement");
    bool __result = _sub_47D158(this, arg, arg);
    return __result;
}

_extern void _sub_47D4E6(SobStatic *const);
void SobStatic::LoadModelExecute() // 0x47D4E6
{
    mangled_assert("?LoadModelExecute@SobStatic@@MAEXXZ");
    todo("implement");
    _sub_47D4E6(this);
}

_extern void _sub_47D457(SobStatic *const, char const *);
void SobStatic::LoadModelEnd(char const *) // 0x47D457
{
    mangled_assert("?LoadModelEnd@SobStatic@@MAEXPBD@Z");
    todo("implement");
    _sub_47D457(this, arg);
}

_extern bool _sub_47D6A3(SobStatic *const, char const *);
bool SobStatic::LoadModelFromCache(char const *) // 0x47D6A3
{
    mangled_assert("?LoadModelFromCache@SobStatic@@MAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_47D6A3(this, arg);
    return __result;
}

_extern void _sub_47C8D2(SobStatic *const);
void SobStatic::CreateUnsharedModel() // 0x47C8D2
{
    mangled_assert("?CreateUnsharedModel@SobStatic@@IAEXXZ");
    todo("implement");
    _sub_47C8D2(this);
}

_extern void _sub_47D7BC(SobStatic *const, IFF *, IFFChunk *, void *, void *);
void SobStatic::OnHandlingDTRM(IFF *, IFFChunk *, void *, void *) // 0x47D7BC
{
    mangled_assert("?OnHandlingDTRM@SobStatic@@UAEXPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    _sub_47D7BC(this, arg, arg, arg, arg);
}

_extern void _sub_47D713(SobStatic *const);
void SobStatic::LoadRenderModelEvents() // 0x47D713
{
    mangled_assert("?LoadRenderModelEvents@SobStatic@@QAEXXZ");
    todo("implement");
    _sub_47D713(this);
}

_extern SobStatic *_sub_47F1CA(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, unsigned __int32);
SobStatic *staticFind(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, unsigned __int32 sobTypeFlags) // 0x47F1CA
{
    mangled_assert("?staticFind@@YGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z");
    todo("implement");
    SobStatic * __result = _sub_47F1CA(name, sobTypeFlags);
    return __result;
}

_extern void _sub_47F657(StaticFinder const &, std::list<SobStatic *,std::allocator<SobStatic *> > &);
void staticGetMatchingStatics(StaticFinder const &finder, std::list<SobStatic *,std::allocator<SobStatic *> > &out) // 0x47F657
{
    mangled_assert("?staticGetMatchingStatics@@YGXABVStaticFinder@@AAV?$list@PAVSobStatic@@V?$allocator@PAVSobStatic@@@std@@@std@@@Z");
    todo("implement");
    _sub_47F657(finder, out);
}

_extern void _sub_47E96F(SobStatic *);
void debugCheckLOD(SobStatic *newStatic) // 0x47E96F
{
    mangled_assert("?debugCheckLOD@@YGXPAVSobStatic@@@Z");
    todo("implement");
    _sub_47E96F(newStatic);
}

_extern SobStatic *_sub_47F5B1(SobType, unsigned __int32, bool);
SobStatic *staticGetId(SobType type, unsigned __int32 staticId, bool forceGet) // 0x47F5B1
{
    mangled_assert("?staticGetId@@YGPAVSobStatic@@W4SobType@@I_N@Z");
    todo("implement");
    SobStatic * __result = _sub_47F5B1(type, staticId, forceGet);
    return __result;
}

_extern SobStatic *_sub_47F296(SobType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool);
SobStatic *staticGet(SobType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, bool forceGet) // 0x47F296
{
    mangled_assert("?staticGet@@YGPAVSobStatic@@W4SobType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
    todo("implement");
    SobStatic * __result = _sub_47F296(type, name, forceGet);
    return __result;
}

_extern void _sub_47F755();
void staticLoadChangedStatics() // 0x47F755
{
    mangled_assert("?staticLoadChangedStatics@@YGXXZ");
    todo("implement");
    _sub_47F755();
}

_extern void _sub_47F8C7();
void staticReloadEvents() // 0x47F8C7
{
    mangled_assert("?staticReloadEvents@@YGXXZ");
    todo("implement");
    _sub_47F8C7();
}

_extern SobStatic::SMRepresentation _sub_47E7DF(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
SobStatic::SMRepresentation SobStatic::convertStringToSMRepresentation(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x47E7DF
{
    mangled_assert("?convertStringToSMRepresentation@SobStatic@@SG?AW4SMRepresentation@1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    SobStatic::SMRepresentation __result = _sub_47E7DF(name);
    return __result;
}

_extern float _sub_47E6AF(SobStatic const *const, float const);
float SobStatic::computeGoblinAlpha(float const) const // 0x47E6AF
{
    mangled_assert("?computeGoblinAlpha@SobStatic@@QBEMM@Z");
    todo("implement");
    float __result = _sub_47E6AF(this, arg);
    return __result;
}

_extern void _sub_47EFEC(SobStatic *const);
void SobStatic::releaseUnusedMemory() // 0x47EFEC
{
    mangled_assert("?releaseUnusedMemory@SobStatic@@AAEXXZ");
    todo("implement");
    _sub_47EFEC(this);
}

_extern unsigned __int32 _sub_47EDB7(SobStatic const *const);
unsigned __int32 SobStatic::getLowestLOD() const // 0x47EDB7
{
    mangled_assert("?getLowestLOD@SobStatic@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_47EDB7(this);
    return __result;
}

_extern unsigned __int32 _sub_47E750(SobStatic const *const, float const, unsigned __int32 const);
unsigned __int32 SobStatic::computeLOD(float const, unsigned __int32 const) const // 0x47E750
{
    mangled_assert("?computeLOD@SobStatic@@QBEIMI@Z");
    todo("implement");
    unsigned __int32 __result = _sub_47E750(this, arg, arg);
    return __result;
}

_extern void _sub_47F153(bool);
void SobStatic::setGoblinAlphaInterp(bool bInterp) // 0x47F153
{
    mangled_assert("?setGoblinAlphaInterp@SobStatic@@SGX_N@Z");
    todo("implement");
    _sub_47F153(bInterp);
}

_extern SobStatic *_sub_47F246();
SobStatic *staticFindFirst() // 0x47F246
{
    mangled_assert("?staticFindFirst@@YGPAVSobStatic@@XZ");
    todo("implement");
    SobStatic * __result = _sub_47F246();
    return __result;
}

_extern SobStatic *_sub_47F25E();
SobStatic *staticFindNext() // 0x47F25E
{
    mangled_assert("?staticFindNext@@YGPAVSobStatic@@XZ");
    todo("implement");
    SobStatic * __result = _sub_47F25E();
    return __result;
}

/* ---------- private code */

_extern __int32 _sub_47D024(IFF *, IFFChunk *, void *, void *);
_static __int32 Handle_HIER(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x47D024
{
    mangled_assert("Handle_HIER");
    todo("implement");
    __int32 __result = _sub_47D024(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_47CABE(IFF *, IFFChunk *, void *, void *);
_static __int32 Handle_BNDV(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x47CABE
{
    mangled_assert("Handle_BNDV");
    todo("implement");
    __int32 __result = _sub_47CABE(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_47CFFB(IFF *, IFFChunk *, void *, void *);
_static __int32 Handle_DTRM(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x47CFFB
{
    mangled_assert("Handle_DTRM");
    todo("implement");
    __int32 __result = _sub_47CFFB(iff, chunk, user0, user1);
    return __result;
}

_extern __int32 _sub_47D05E(IFF *, IFFChunk *, void *, void *);
_static __int32 Handle_VERS(IFF *iff, IFFChunk *chunk, void *version, void *) // 0x47D05E
{
    mangled_assert("Handle_VERS");
    todo("implement");
    __int32 __result = _sub_47D05E(iff, chunk, version, arg);
    return __result;
}
#endif
