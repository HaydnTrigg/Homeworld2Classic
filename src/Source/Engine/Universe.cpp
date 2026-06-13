#if 0
/* ---------- headers */

#include "decomp.h"
#include <Modifiers\ModifierTargetCache.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\signals.h>
#include <set>
#include <assist\stlexsmallvector.h>
#include <region.h>
#include <HyperspaceManager.h>
#include <platform\keydefines.h>
#include <WeaponFire\WeaponFire.h>
#include <xstring>
#include <SquadronList.h>
#include <Sob\DustCloud\DustCloudGroupManager.h>
#include <platform\namedinterface.h>
#include <weaponfiretypes.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Player.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <ResearchManager.h>
#include <Render\gl\r_types.h>
#include <memory\memorylib.h>
#include <limits>
#include <cstdarg>
#include <GameObj.h>
#include <stdarg.h>
#include <crtdefs.h>
#include <ShieldTypes.h>
#include <util\statmonitor.h>
#include <MeshAnimation.h>
#include <util\utilexports.h>
#include <Collision\Collision.h>
#include <Mathlib\matrix3.h>
#include <platform\timer.h>
#include <boost\checked_delete.hpp>
#include <platform\platformexports.h>
#include <Subsystems\HardPointManager.h>
#include <Sob\DefenseField\DefenseField.h>
#include <Subsystems\HardPoint.h>
#include <Sob\DefenseField\DefenseFieldStatic.h>
#include <new>
#include <Subsystems\HardPointStatic.h>
#include <exception>
#include <Subsystems\SubSystemType.h>
#include <xstddef>
#include <type_traits>
#include <Modifiers\ModifierAbility.h>
#include <seInterface2\sedefinesshared.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <EngineTrailSystem.h>
#include <xutility>
#include <Collision\BVH\Internal\span_i.h>
#include <SobWithMeshStatic.h>
#include <utility>
#include <iosfwd>
#include <Collision\BVH\proxy.h>
#include <SobRigidBodyStatic.h>
#include <weaponinfo.h>
#include <vector>
#include <Collision\intersect.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\primitivesfwd.h>
#include <Physics\PhysicsEngine.h>
#include <fileio\fileioexports.h>
#include <Render\gl\r_defines.h>
#include <Physics\PhysicsObject.h>
#include <gamemsg.h>
#include <OrderFeedback.h>
#include <weaponTargetInfo.h>
#include <HierarchyDynamic.h>
#include <Render\gl\glext.h>
#include <debug\ctassert.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <Collision\Primitives\mesh.h>
#include <SobZeroMassBody.h>
#include <Collision\Primitives\triangle.h>
#include <compiler\compilerconfig.h>
#include <LuaTools\LCWatcher.h>
#include <sobzeromassbodystatic.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <ProfilePerFrame.h>
#include <TeamColourRegistry.h>
#include <math.h>
#include <savegame.h>
#include <Interpolation.h>
#include <recorder.h>
#include <task.h>
#include <UserInterface\NewFrame.h>
#include <list>
#include <config.h>
#include <random.h>
#include <UserInterface\InterfaceElement.h>
#include <syncChecking.h>
#include <UserInterface\uitypes.h>
#include <Scar\LuaRuleSystem.h>
#include <platform\inputinterface.h>
#include <Collision\Primitives\aabb.h>
#include <assist\fixedstring.h>
#include <shipHold.h>
#include <playerresourcetype.h>
#include <Mathlib\vector3.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <Mathlib\vector4.h>
#include <util\dictionary.h>
#include <sobid.h>
#include <map>
#include <Stats\StatLogging.h>
#include <xtree>
#include <StrikeGroup.h>
#include <boost\smart_ptr.hpp>
#include <scripting.h>
#include <Family.h>
#include <boost\scoped_ptr.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <scriptaccess.h>
#include <SoundManager\SoundEntityHandle.h>
#include <scripttypedef.h>
#include <TimerMap.h>
#include <FogOfWar.h>
#include <Mathlib\vector2.h>
#include <lua.h>
#include <util\types.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <SobRigidBody.h>
#include <Render\objects\renderable.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <cassert>
#include <Render\objects\meshloader.h>
#include <assert.h>
#include <orders.h>
#include <platform\cmdline.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <orders_base.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <commandtype.h>
#include <boost\scoped_array.hpp>
#include <seInterface2\SoundParams.h>
#include <Mathlib\quat.h>
#include <profile\profile.h>
#include <iostream>
#include <Menus\MenuSupport.h>
#include <DynamicPoint.h>
#include <ProfileSystem.h>
#include <Collision\Primitives\capsule.h>
#include <assist\typemagic.h>
#include <Collision\Primitives\segment.h>
#include <EventPointerManager.h>
#include <Collision\BVH\profiling.h>
#include <fixedpoint.h>
#include <ParadeCommand.h>
#include <util\fixed.h>
#include <Parade.h>
#include <Squadron.h>
#include <Mathlib\mathlibdll.h>
#include <command.h>
#include <Mathlib\fastmath.h>
#include <dbdefines.h>
#include <Interface.h>
#include <UnitCaps\UnitCaps.h>
#include <savegameimpl.h>
#include <Modifiers\ModifierUIInfo.h>
#include <SoundManager\SoundManager.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Render\objects\stateblock\stateblock.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <savegamedata.h>
#include <pathpoints.h>
#include <Race.h>
#include <Modifiers\ModifierEffect.h>
#include <Render\objects\texture.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <SOBGroupManager.h>
#include <Render\objects\textureregistry.h>
#include <debug\db.h>
#include <hash_map>
#include <xhash>
#include <alliance.h>
#include <deque>
#include <gameSettings.h>
#include <fileio\logfile.h>
#include <LevelDesc.h>
#include <Sob\Nebula\NebulaGroupManager.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <Modifiers\ModifierApplier.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <BuildManager.h>
#include <WeaponFire\WeaponFireEvent.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Scar\Scar.h>
#include <selection.h>
#include <Scar\ScarEventSys.h>
#include <savegamedef.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Subsystems\Subsystem.h>
#include <luaconfig\luabinding.h>
#include <MultiplierTypes.h>
#include <boost\detail\shared_count.hpp>
#include <gamestructimpl.h>
#include <bitset>
#include <luaconfig\luaconfig.h>
#include <Collision\BVH\bvh.h>
#include <Badge.h>
#include <Subsystems\SubsystemStatic.h>
#include <boost\detail\lwm_win32.hpp>
#include <weaponstaticinfo.h>
#include <platform\osdef.h>
#include <GunBinding.h>
#include <NIS\NISManager.h>
#include <stack>
#include <UserInterface\StyleSheet.h>
#include <UserInterface\pch.h>
#include <Render\objects\mesh.h>
#include <Render\objects\core.h>
#include <KeyBindings.h>
#include <Missile.h>
#include <Render\objects\objects.h>
#include <Mathlib\mathutil.h>
#include <Universe.h>
#include <savestream.h>
#include <MissileStatic.h>
#include <Render\gl\types.h>
#include <Waypoint.h>
#include <wchar.h>
#include <Mathlib\matvec.h>
#include <boost\utility.hpp>
#include <Collision\Avoidance.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <abilities.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <sobstatic.h>
#include <seInterface2\SampleID.h>
#include <UserInterface\Graphic.h>
#include <queue>
#include <Collision\Primitives\sphere.h>
#include <WeaponClassSpecificInfo.h>
#include <seInterface2\SampleBase.h>
#include <Render\objects\textureproxy.h>
#include <algorithm>
#include <SubtitleCounter.h>
#include <Camera\FocusPoint.h>
#include <Render\gl\lotypes.h>
#include <Render\objects\parentmesh.h>
#include <subtitle.h>
#include <boost\static_assert.hpp>
#include <Menus\SubtitleScreen.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::CollisionPair
{
    Sob *m_sobA; // 0x0
    Sob *m_sobB; // 0x4
    Collision::Point m_point; // 0x8
    CollisionPair(); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::CollisionPair) == 40, "Invalid `anonymous-namespace'::CollisionPair size");

struct `anonymous-namespace'::SobPairSort
{
    typedef `anonymous-namespace'::CollisionPair value_type;
    bool operator()(`anonymous-namespace'::CollisionPair const &, `anonymous-namespace'::CollisionPair const &) const;
};
static_assert(sizeof(`anonymous-namespace'::SobPairSort) == 1, "Invalid `anonymous-namespace'::SobPairSort size");

struct `anonymous-namespace'::NarrowPhaseFunctionAvoidance
{
    bool operator()(Sob const *, Sob const *, Collision::Point &) const;
};
static_assert(sizeof(`anonymous-namespace'::NarrowPhaseFunctionAvoidance) == 1, "Invalid `anonymous-namespace'::NarrowPhaseFunctionAvoidance size");

struct `anonymous-namespace'::NarrowPhaseFunctionCollision
{
    bool operator()(Sob const *, Sob const *, Collision::Point &) const;
    bool DetectCollision(Missile const *, DefenseField const *, Collision::Point &) const;
    bool DetectCollision(Missile const *, SobWithMesh const *, Collision::Point &) const;
};
static_assert(sizeof(`anonymous-namespace'::NarrowPhaseFunctionCollision) == 1, "Invalid `anonymous-namespace'::NarrowPhaseFunctionCollision size");

/* ---------- prototypes */

extern void universeAllocateUniverse();
extern void universeAllocateAndAddPlayers();

_static bool clipToCylindricalVolume(vector3 const *scale, vector3 const *pointA, vector3 *pointB);
_static bool clipToCylindricalVolume(vector3 const &scale, vector3 &point);

/* ---------- globals */

extern Universe *universe; // 0x84AFD8
extern char *g_CollisionName; // 0x84AFDC
extern char *g_ResponseName; // 0x84AFE0
extern bool g_uiStatMonitorLog; // 0x84AFE4
extern float UniverseUpdateRate; // 0x83D7DC
extern float UniverseUpdatePeriod; // 0x84AFE8
extern SaveData const UniverseClientData::m_saveData[1]; // 0x7B14D0
extern char const UniverseClientData::m_saveToken[12]; // 0x7B14F0
extern SaveData const Universe::m_saveData[46]; // 0x7B1508
extern char const Universe::m_saveToken[9]; // 0x7B14FC

/* ---------- private variables */

_static
{
    extern float subtitleTwkScrollDwellStart; // 0x83D7C8
    extern float subtitleTwkScrollDwellEnd; // 0x83D7CC
    extern float subtitleTwkScrollShortest; // 0x83D7D0
    extern float subtitleTwkTitleShortest; // 0x83D7D4
    extern float K_MinSlowDown; // 0x84AFEC
    extern char const *kSuperTurboOption; // 0x83D7D8
}

/* ---------- public code */

_extern _sub_64C16A(Collision::BVH<Collision::Internal::Span,Sob> *const);
_inline Collision::BVH<Collision::Internal::Span,Sob>::BVH<Collision::Internal::Span,Sob>() // 0x64C16A
{
    mangled_assert("??0?$BVH@VSpan@Internal@Collision@@VSob@@@Collision@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C16A(this);
}

_extern _sub_64C176(Collision::Span<Sob> *const);
_inline Collision::Span<Sob>::Span<Sob>() // 0x64C176
{
    mangled_assert("??0?$Span@VSob@@@Collision@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C176(this);
}

_extern _sub_64C4CB(UnitCaps *const);
_inline UnitCaps::UnitCaps() // 0x64C4CB
{
    mangled_assert("??0UnitCaps@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C4CB(this);
}

_extern _sub_64C72D(UniverseClientData *const);
UniverseClientData::UniverseClientData() // 0x64C72D
{
    mangled_assert("??0UniverseClientData@@QAE@XZ");
    todo("implement");
    _sub_64C72D(this);
}

_extern void _sub_64C75F(Collision::BVH<Collision::Internal::Span,Sob> *const);
_inline Collision::BVH<Collision::Internal::Span,Sob>::~BVH<Collision::Internal::Span,Sob>() // 0x64C75F
{
    mangled_assert("??1?$BVH@VSpan@Internal@Collision@@VSob@@@Collision@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C75F(this);
}

_extern void _sub_64C764(Collision::Span<Sob> *const);
_inline Collision::Span<Sob>::~Span<Sob>() // 0x64C764
{
    mangled_assert("??1?$Span@VSob@@@Collision@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C764(this);
}

_extern void _sub_64C772(std::_List_buy<WeaponFireEvent *,std::allocator<WeaponFireEvent *> > *const);
_inline std::_List_buy<WeaponFireEvent *,std::allocator<WeaponFireEvent *> >::~_List_buy<WeaponFireEvent *,std::allocator<WeaponFireEvent *> >() // 0x64C772
{
    mangled_assert("??1?$_List_buy@PAVWeaponFireEvent@@V?$allocator@PAVWeaponFireEvent@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C772(this);
}

_extern void _sub_64C7C9(std::_Tree_buy<std::pair<unsigned int const ,Squadron *>,std::allocator<std::pair<unsigned int const ,Squadron *> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,Squadron *>,std::allocator<std::pair<unsigned int const ,Squadron *> > >::~_Tree_buy<std::pair<unsigned int const ,Squadron *>,std::allocator<std::pair<unsigned int const ,Squadron *> > >() // 0x64C7C9
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIPAVSquadron@@@std@@V?$allocator@U?$pair@$$CBIPAVSquadron@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C7C9(this);
}

_extern void _sub_64C7D2(std::_Tree_buy<std::pair<unsigned int const ,StrikeGroup *>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,StrikeGroup *>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > >::~_Tree_buy<std::pair<unsigned int const ,StrikeGroup *>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > >() // 0x64C7D2
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIPAVStrikeGroup@@@std@@V?$allocator@U?$pair@$$CBIPAVStrikeGroup@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C7D2(this);
}

_extern void _sub_64C7DB(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> >,0> >() // 0x64C7DB
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IPAVSquadron@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVSquadron@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C7DB(this);
}

_extern void _sub_64C7E4(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> >,0> >() // 0x64C7E4
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IPAVStrikeGroup@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVStrikeGroup@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C7E4(this);
}

_extern void _sub_64C816(std::map<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> > > *const);
_inline std::map<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> > >::~map<unsigned int,Squadron *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,Squadron *> > >() // 0x64C816
{
    mangled_assert("??1?$map@IPAVSquadron@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVSquadron@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C816(this);
}

_extern void _sub_64C81B(std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > > *const);
_inline std::map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > >::~map<unsigned int,StrikeGroup *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,StrikeGroup *> > >() // 0x64C81B
{
    mangled_assert("??1?$map@IPAVStrikeGroup@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPAVStrikeGroup@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C81B(this);
}

_extern void _sub_64C865(FocusPoint *const);
_inline FocusPoint::~FocusPoint() // 0x64C865
{
    mangled_assert("??1FocusPoint@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C865(this);
}

_extern void _sub_64C86A(UnitCaps *const);
_inline UnitCaps::~UnitCaps() // 0x64C86A
{
    mangled_assert("??1UnitCaps@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_64C86A(this);
}

_extern void _sub_64CABF(UniverseClientData *const);
UniverseClientData::~UniverseClientData() // 0x64CABF
{
    mangled_assert("??1UniverseClientData@@UAE@XZ");
    todo("implement");
    _sub_64CABF(this);
}

_extern bool _sub_65079E(UniverseClientData *const, SaveGameData *);
bool UniverseClientData::restore(SaveGameData *) // 0x65079E
{
    mangled_assert("?restore@UniverseClientData@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_65079E(this, arg);
    return __result;
}

_extern bool _sub_65088B(UniverseClientData *const, SaveGameData *, SaveType);
bool UniverseClientData::save(SaveGameData *, SaveType) // 0x65088B
{
    mangled_assert("?save@UniverseClientData@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_65088B(this, arg, arg);
    return __result;
}

_extern void _sub_65006E(UniverseClientData *const);
void UniverseClientData::postRestore() // 0x65006E
{
    mangled_assert("?postRestore@UniverseClientData@@UAEXXZ");
    todo("implement");
    _sub_65006E(this);
}

_extern void _sub_6512DB();
void universeAllocateUniverse() // 0x6512DB
{
    mangled_assert("?universeAllocateUniverse@@YGXXZ");
    todo("implement");
    _sub_6512DB();
}

_extern void _sub_651111();
void universeAllocateAndAddPlayers() // 0x651111
{
    mangled_assert("?universeAllocateAndAddPlayers@@YGXXZ");
    todo("implement");
    _sub_651111();
}

_extern bool _sub_64DAB2();
bool Universe::Startup() // 0x64DAB2
{
    mangled_assert("?Startup@Universe@@SG_NXZ");
    todo("implement");
    bool __result = _sub_64DAB2();
    return __result;
}

_extern bool _sub_64D8A1();
bool Universe::Shutdown() // 0x64D8A1
{
    mangled_assert("?Shutdown@Universe@@SG_NXZ");
    todo("implement");
    bool __result = _sub_64D8A1();
    return __result;
}

_extern bool _sub_64D76C(SaveGameData *, SaveType);
bool Universe::Save(SaveGameData *saveGameData, SaveType saveType) // 0x64D76C
{
    mangled_assert("?Save@Universe@@SG_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_64D76C(saveGameData, saveType);
    return __result;
}

_extern bool _sub_64D73F(SaveGameData *);
bool Universe::Restore(SaveGameData *saveGameData) // 0x64D73F
{
    mangled_assert("?Restore@Universe@@SG_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_64D73F(saveGameData);
    return __result;
}

_extern _sub_64C4E8(Universe *const);
Universe::Universe() // 0x64C4E8
{
    mangled_assert("??0Universe@@QAE@XZ");
    todo("implement");
    _sub_64C4E8(this);
}

_extern void _sub_64EE87(Universe *const);
void Universe::defaultSettings() // 0x64EE87
{
    mangled_assert("?defaultSettings@Universe@@QAEXXZ");
    todo("implement");
    _sub_64EE87(this);
}

_extern void _sub_64C885(Universe *const);
Universe::~Universe() // 0x64C885
{
    mangled_assert("??1Universe@@UAE@XZ");
    todo("implement");
    _sub_64C885(this);
}

_extern void _sub_64A96F(void *, SaveGameData *, SaveType);
void Universe::saveSquadronIDMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x64A96F
{
    mangled_assert("?saveSquadronIDMap@Universe@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_64A96F(objectPtr, saveGameData, savetype);
}

_extern void _sub_64A9C6(void *, SaveGameData *);
void Universe::restoreSquadronIDMap(void *objectPtr, SaveGameData *saveGameData) // 0x64A9C6
{
    mangled_assert("?restoreSquadronIDMap@Universe@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_64A9C6(objectPtr, saveGameData);
}

_extern void _sub_64AA27(void *, SaveGameData *, SaveType);
void Universe::saveStrikeGroups(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x64AA27
{
    mangled_assert("?saveStrikeGroups@Universe@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_64AA27(objectPtr, saveGameData, savetype);
}

_extern void _sub_64AA7E(void *, SaveGameData *);
void Universe::restoreStrikeGroups(void *objectPtr, SaveGameData *saveGameData) // 0x64AA7E
{
    mangled_assert("?restoreStrikeGroups@Universe@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_64AA7E(objectPtr, saveGameData);
}

_extern void _sub_64AADF(void *, SaveGameData *, SaveType);
void Universe::saveFocusPoints(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x64AADF
{
    mangled_assert("?saveFocusPoints@Universe@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    _sub_64AADF(objectPtr, saveGameData, savetype);
}

_extern void _sub_64AB42(void *, SaveGameData *);
void Universe::restoreFocusPoints(void *objectPtr, SaveGameData *saveGameData) // 0x64AB42
{
    mangled_assert("?restoreFocusPoints@Universe@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
    _sub_64AB42(objectPtr, saveGameData);
}

_extern void _sub_64CECF(Universe *const);
void Universe::AddMissingSaveObjects() // 0x64CECF
{
    mangled_assert("?AddMissingSaveObjects@Universe@@QAEXXZ");
    todo("implement");
    _sub_64CECF(this);
}

_extern bool _sub_650760(Universe *const, SaveGameData *);
bool Universe::restore(SaveGameData *) // 0x650760
{
    mangled_assert("?restore@Universe@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_650760(this, arg);
    return __result;
}

_extern bool _sub_650856(Universe *const, SaveGameData *, SaveType);
bool Universe::save(SaveGameData *, SaveType) // 0x650856
{
    mangled_assert("?save@Universe@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_650856(this, arg, arg);
    return __result;
}

_extern void _sub_64FFD7(Universe *const);
void Universe::postRestore() // 0x64FFD7
{
    mangled_assert("?postRestore@Universe@@UAEXXZ");
    todo("implement");
    _sub_64FFD7(this);
}

_extern float _sub_64FCF0(Universe const *const);
float Universe::getTotalTime() const // 0x64FCF0
{
    mangled_assert("?getTotalTime@Universe@@QBEMXZ");
    todo("implement");
    float __result = _sub_64FCF0(this);
    return __result;
}

_extern float _sub_64FCE9(Universe const *const);
float Universe::getTimeDelta() const // 0x64FCE9
{
    mangled_assert("?getTimeDelta@Universe@@QBEMXZ");
    todo("implement");
    float __result = _sub_64FCE9(this);
    return __result;
}

_extern Selection const &_sub_64FB83(Universe const *const);
Selection const &Universe::getAwakeSobs() const // 0x64FB83
{
    mangled_assert("?getAwakeSobs@Universe@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_64FB83(this);
    return __result;
}

_extern Selection const &_sub_64FB8A(Universe const *const, SobType);
Selection const &Universe::getAwakeSobsOfType(SobType) const // 0x64FB8A
{
    mangled_assert("?getAwakeSobsOfType@Universe@@QBEABVSelection@@W4SobType@@@Z");
    todo("implement");
    Selection const & __result = _sub_64FB8A(this, arg);
    return __result;
}

_extern std::vector<Sob *,std::allocator<Sob *> > const &_sub_64FBB9(Universe const *const);
std::vector<Sob *,std::allocator<Sob *> > const &Universe::getNewSleepers() const // 0x64FBB9
{
    mangled_assert("?getNewSleepers@Universe@@QBEABV?$vector@PAVSob@@V?$allocator@PAVSob@@@std@@@std@@XZ");
    todo("implement");
    std::vector<Sob *,std::allocator<Sob *> > const & __result = _sub_64FBB9(this);
    return __result;
}

_extern void _sub_6504F7(Universe *const, SobType, Selection::Observer *);
void Universe::registerObserverOfSobsOfType(SobType, Selection::Observer *) // 0x6504F7
{
    mangled_assert("?registerObserverOfSobsOfType@Universe@@QAEXW4SobType@@PAVObserver@Selection@@@Z");
    todo("implement");
    _sub_6504F7(this, arg, arg);
}

_extern void _sub_650511(Universe *const, SobType, Selection::Observer *);
void Universe::removeObserverOfSobsOfType(SobType, Selection::Observer *) // 0x650511
{
    mangled_assert("?removeObserverOfSobsOfType@Universe@@QAEXW4SobType@@PAVObserver@Selection@@@Z");
    todo("implement");
    _sub_650511(this, arg, arg);
}

_extern Selection &_sub_64FC85(Universe *const);
Selection &Universe::getSleepingSobs() // 0x64FC85
{
    mangled_assert("?getSleepingSobs@Universe@@QAEAAVSelection@@XZ");
    todo("implement");
    Selection & __result = _sub_64FC85(this);
    return __result;
}

_extern Selection &_sub_64FC8C(Universe *const, SobType);
Selection &Universe::getSleepingSobsOfType(SobType) // 0x64FC8C
{
    mangled_assert("?getSleepingSobsOfType@Universe@@QAEAAVSelection@@W4SobType@@@Z");
    todo("implement");
    Selection & __result = _sub_64FC8C(this, arg);
    return __result;
}

_extern Selection &_sub_64FBC0(Universe *const);
Selection &Universe::getNewbornList() // 0x64FBC0
{
    mangled_assert("?getNewbornList@Universe@@QAEAAVSelection@@XZ");
    todo("implement");
    Selection & __result = _sub_64FBC0(this);
    return __result;
}

_extern Selection &_sub_64FBC7(Universe *const);
Selection &Universe::getNonDeterministicNewbornList() // 0x64FBC7
{
    mangled_assert("?getNonDeterministicNewbornList@Universe@@QAEAAVSelection@@XZ");
    todo("implement");
    Selection & __result = _sub_64FBC7(this);
    return __result;
}

_extern Selection &_sub_64FCF7(Universe *const);
Selection &Universe::getZombieList() // 0x64FCF7
{
    mangled_assert("?getZombieList@Universe@@QAEAAVSelection@@XZ");
    todo("implement");
    Selection & __result = _sub_64FCF7(this);
    return __result;
}

_extern __int32 _sub_64FC9B(Universe *const);
__int32 Universe::getSpeedRepetitions() // 0x64FC9B
{
    mangled_assert("?getSpeedRepetitions@Universe@@QAEHXZ");
    todo("implement");
    __int32 __result = _sub_64FC9B(this);
    return __result;
}

_extern WeaponFireEvent *_sub_64D4DF(Universe *const, SobID const &, SobID const &, char const *);
WeaponFireEvent *Universe::FindWeaponFireEvent(SobID const &, SobID const &, char const *) // 0x64D4DF
{
    mangled_assert("?FindWeaponFireEvent@Universe@@QAEPAVWeaponFireEvent@@ABVSobID@@0PBD@Z");
    todo("implement");
    WeaponFireEvent * __result = _sub_64D4DF(this, arg, arg, arg);
    return __result;
}

_extern void _sub_6514DA(Universe *const, float);
void Universe::updateMultipliersAndAbilities(float) // 0x6514DA
{
    mangled_assert("?updateMultipliersAndAbilities@Universe@@AAEXM@Z");
    todo("implement");
    _sub_6514DA(this, arg);
}

_extern void _sub_651717(Universe *const);
void Universe::updateSobCollisions() // 0x651717
{
    mangled_assert("?updateSobCollisions@Universe@@AAEXXZ");
    todo("implement");
    _sub_651717(this);
}

_extern void _sub_6517DA(Universe *const);
void Universe::updateWeaponFireCollisions() // 0x6517DA
{
    mangled_assert("?updateWeaponFireCollisions@Universe@@AAEXXZ");
    todo("implement");
    _sub_6517DA(this);
}

_extern void _sub_651315(Universe *const);
void Universe::updateAvoidanceCollisions() // 0x651315
{
    mangled_assert("?updateAvoidanceCollisions@Universe@@AAEXXZ");
    todo("implement");
    _sub_651315(this);
}

_extern void _sub_651358(Universe *const, float);
void Universe::updateCollision(float) // 0x651358
{
    mangled_assert("?updateCollision@Universe@@AAEXM@Z");
    todo("implement");
    _sub_651358(this, arg);
}

_extern void _sub_6515EB(Universe *const, float);
void Universe::updatePhysics(float) // 0x6515EB
{
    mangled_assert("?updatePhysics@Universe@@AAEXM@Z");
    todo("implement");
    _sub_6515EB(this, arg);
}

_extern void _sub_6513BE(Universe *const, float);
void Universe::updateMissiles(float) // 0x6513BE
{
    mangled_assert("?updateMissiles@Universe@@AAEXM@Z");
    todo("implement");
    _sub_6513BE(this, arg);
}

_extern void _sub_65183F(Universe *const, float);
void Universe::updateWeapons(float) // 0x65183F
{
    mangled_assert("?updateWeapons@Universe@@AAEXM@Z");
    todo("implement");
    _sub_65183F(this, arg);
}

_extern void _sub_65165E(Universe *const, float);
void Universe::updateResources(float) // 0x65165E
{
    mangled_assert("?updateResources@Universe@@AAEXM@Z");
    todo("implement");
    _sub_65165E(this, arg);
}

_extern void _sub_651372(Universe *const, float);
void Universe::updateDustClouds(float) // 0x651372
{
    mangled_assert("?updateDustClouds@Universe@@AAEXM@Z");
    todo("implement");
    _sub_651372(this, arg);
}

_extern void _sub_651545(Universe *const, float);
void Universe::updateNebula(float) // 0x651545
{
    mangled_assert("?updateNebula@Universe@@AAEXM@Z");
    todo("implement");
    _sub_651545(this, arg);
}

_extern void _sub_651748(Universe *const, float);
void Universe::updateWeaponFire(float) // 0x651748
{
    mangled_assert("?updateWeaponFire@Universe@@AAEXM@Z");
    todo("implement");
    _sub_651748(this, arg);
}

_extern void _sub_6500C4(Universe *const);
void Universe::profileFrame() // 0x6500C4
{
    mangled_assert("?profileFrame@Universe@@AAEXXZ");
    todo("implement");
    _sub_6500C4(this);
}

_extern void _sub_650A26(Universe *const);
void Universe::simulate() // 0x650A26
{
    mangled_assert("?simulate@Universe@@QAEXXZ");
    todo("implement");
    _sub_650A26(this);
}

_extern Player *_sub_64FB99(Universe *const);
Player *Universe::getCurrentPlayer() // 0x64FB99
{
    mangled_assert("?getCurrentPlayer@Universe@@QAEPAVPlayer@@XZ");
    todo("implement");
    Player * __result = _sub_64FB99(this);
    return __result;
}

_extern void _sub_650F9D(Universe *const);
void Universe::switchCurrentPlayer() // 0x650F9D
{
    mangled_assert("?switchCurrentPlayer@Universe@@QAEXXZ");
    todo("implement");
    _sub_650F9D(this);
}

_extern Player *_sub_64FC1B(Universe *const, __int32);
Player *Universe::getPlayer(__int32) // 0x64FC1B
{
    mangled_assert("?getPlayer@Universe@@QAEPAVPlayer@@H@Z");
    todo("implement");
    Player * __result = _sub_64FC1B(this, arg);
    return __result;
}

_extern Player const *_sub_64FC50(Universe const *const, __int32);
Player const *Universe::getPlayer(__int32) const // 0x64FC50
{
    mangled_assert("?getPlayer@Universe@@QBEPBVPlayer@@H@Z");
    todo("implement");
    Player const * __result = _sub_64FC50(this, arg);
    return __result;
}

_extern void _sub_64E54C(Universe *const, Player *);
void Universe::addPlayer(Player *) // 0x64E54C
{
    mangled_assert("?addPlayer@Universe@@QAEXPAVPlayer@@@Z");
    todo("implement");
    _sub_64E54C(this, arg);
}

_extern void _sub_64E53F(Universe *const, Player *);
void Universe::addNeutralPlayer(Player *) // 0x64E53F
{
    mangled_assert("?addNeutralPlayer@Universe@@QAEXPAVPlayer@@@Z");
    todo("implement");
    _sub_64E53F(this, arg);
}

_extern void _sub_64E509(Universe *const, Sob *);
void Universe::addAwakeSob(Sob *) // 0x64E509
{
    mangled_assert("?addAwakeSob@Universe@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_64E509(this, arg);
}

_extern void _sub_64E55F(Universe *const, Sob *);
void Universe::addSleepingSob(Sob *) // 0x64E55F
{
    mangled_assert("?addSleepingSob@Universe@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_64E55F(this, arg);
}

_extern void _sub_6507DC(Universe *const, Sob *);
void Universe::rouseSob(Sob *) // 0x6507DC
{
    mangled_assert("?rouseSob@Universe@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_6507DC(this, arg);
}

_extern void _sub_64E6F4(Universe *const, Sob *);
void Universe::anesthetizeSob(Sob *) // 0x64E6F4
{
    mangled_assert("?anesthetizeSob@Universe@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_64E6F4(this, arg);
}

_extern void _sub_64F9A2(Universe *const);
void Universe::freeLists() // 0x64F9A2
{
    mangled_assert("?freeLists@Universe@@AAEXXZ");
    todo("implement");
    _sub_64F9A2(this);
}

_extern float _sub_64FE87(Universe *const, float);
float Universe::multiplySpeed(float) // 0x64FE87
{
    mangled_assert("?multiplySpeed@Universe@@QAEMM@Z");
    todo("implement");
    float __result = _sub_64FE87(this, arg);
    return __result;
}

_extern void _sub_6508F7(Universe *const, float);
void Universe::setSpeedMultiple(float) // 0x6508F7
{
    mangled_assert("?setSpeedMultiple@Universe@@QAEXM@Z");
    todo("implement");
    _sub_6508F7(this, arg);
}

_extern void _sub_64CF7D(Universe *const, float);
void Universe::ChangeSpeed(float) // 0x64CF7D
{
    mangled_assert("?ChangeSpeed@Universe@@AAEXM@Z");
    todo("implement");
    _sub_64CF7D(this, arg);
}

_extern void _sub_64D784(Universe *const, float, float);
void Universe::SetSlowDownSpeed(float, float) // 0x64D784
{
    mangled_assert("?SetSlowDownSpeed@Universe@@QAEXMM@Z");
    todo("implement");
    _sub_64D784(this, arg, arg);
}

_extern void _sub_64DBF8(Universe *const);
void Universe::UpdateUniversePause() // 0x64DBF8
{
    mangled_assert("?UpdateUniversePause@Universe@@QAEXXZ");
    todo("implement");
    _sub_64DBF8(this);
}

_extern void _sub_64E5F9(Universe *const, Sob *);
void Universe::addToNewbornList(Sob *) // 0x64E5F9
{
    mangled_assert("?addToNewbornList@Universe@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_64E5F9(this, arg);
}

_extern void _sub_64E636(Universe *const, Sob *);
void Universe::addToZombieList(Sob *) // 0x64E636
{
    mangled_assert("?addToZombieList@Universe@@QAEXPAVSob@@@Z");
    todo("implement");
    _sub_64E636(this, arg);
}

_extern void _sub_64FDAE(Universe *const);
void Universe::makeZombies() // 0x64FDAE
{
    mangled_assert("?makeZombies@Universe@@QAEXXZ");
    todo("implement");
    _sub_64FDAE(this);
}

_extern void _sub_650F87(Universe *const);
void Universe::spliceNewbornsForLevelStart() // 0x650F87
{
    mangled_assert("?spliceNewbornsForLevelStart@Universe@@QAEXXZ");
    todo("implement");
    _sub_650F87(this);
}

_extern void _sub_650F27(Universe *const);
void Universe::spliceNewbornList() // 0x650F27
{
    mangled_assert("?spliceNewbornList@Universe@@AAEXXZ");
    todo("implement");
    _sub_650F27(this);
}

_extern void _sub_64F1A3(Universe *const);
void Universe::deleteZombieList() // 0x64F1A3
{
    mangled_assert("?deleteZombieList@Universe@@AAEXXZ");
    todo("implement");
    _sub_64F1A3(this);
}

_extern void _sub_64FF76(Universe *const, bool);
void Universe::pauseUniverse(bool) // 0x64FF76
{
    mangled_assert("?pauseUniverse@Universe@@QAEX_N@Z");
    todo("implement");
    _sub_64FF76(this, arg);
}

_extern void _sub_64FF5D(Universe *const, bool);
void Universe::nisPauseUniverse(bool) // 0x64FF5D
{
    mangled_assert("?nisPauseUniverse@Universe@@QAEX_N@Z");
    todo("implement");
    _sub_64FF5D(this, arg);
}

_extern void _sub_650970(Universe *const, vector3 const &, vector3 const &);
void Universe::setWorldBoundsInner(vector3 const &, vector3 const &) // 0x650970
{
    mangled_assert("?setWorldBoundsInner@Universe@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_650970(this, arg, arg);
}

_extern void _sub_650A12(Universe *const, vector3 const &, vector3 const &);
void Universe::setWorldBoundsOuter(vector3 const &, vector3 const &) // 0x650A12
{
    mangled_assert("?setWorldBoundsOuter@Universe@@QAEXABVvector3@@0@Z");
    todo("implement");
    _sub_650A12(this, arg, arg);
}

_extern bool _sub_64EBAC(Universe *const, vector3 const &, vector3 &);
bool Universe::clipToWorldBounds(vector3 const &, vector3 &) // 0x64EBAC
{
    mangled_assert("?clipToWorldBounds@Universe@@QAE_NABVvector3@@AAV2@@Z");
    todo("implement");
    bool __result = _sub_64EBAC(this, arg, arg);
    return __result;
}

_extern bool _sub_64EC8F(Universe *const, vector3 &);
bool Universe::clipToWorldBoundsInner(vector3 &) // 0x64EC8F
{
    mangled_assert("?clipToWorldBoundsInner@Universe@@QAE_NAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_64EC8F(this, arg);
    return __result;
}

_extern bool _sub_64ED11(Universe *const, vector3 &);
bool Universe::clipToWorldBoundsOuter(vector3 &) // 0x64ED11
{
    mangled_assert("?clipToWorldBoundsOuter@Universe@@QAE_NAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_64ED11(this, arg);
    return __result;
}

_extern unsigned __int32 _sub_64FBCE(Universe const *const, PlayerConnectionStatus);
unsigned __int32 Universe::getNumConnections(PlayerConnectionStatus) const // 0x64FBCE
{
    mangled_assert("?getNumConnections@Universe@@QBEIW4PlayerConnectionStatus@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_64FBCE(this, arg);
    return __result;
}

_extern void _sub_64FD1A(Universe *const, bool (*)(Sob *), bool);
void Universe::hideByFilter(bool (*)(Sob *), bool) // 0x64FD1A
{
    mangled_assert("?hideByFilter@Universe@@QAEXP6G_NPAVSob@@@Z_N@Z");
    todo("implement");
    _sub_64FD1A(this, arg, arg);
}

_extern void _sub_64DB8E(Universe *const, float);
void Universe::UpdateStrikeGroups(float) // 0x64DB8E
{
    mangled_assert("?UpdateStrikeGroups@Universe@@AAEXM@Z");
    todo("implement");
    _sub_64DB8E(this, arg);
}

_extern void _sub_64DABF(Universe *const, float);
void Universe::UpdateSquadrons(float) // 0x64DABF
{
    mangled_assert("?UpdateSquadrons@Universe@@AAEXM@Z");
    todo("implement");
    _sub_64DABF(this, arg);
}

_extern void _sub_65052B(Universe *const, Squadron *);
void Universe::removeSquadron(Squadron *) // 0x65052B
{
    mangled_assert("?removeSquadron@Universe@@QAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_65052B(this, arg);
}

_extern void _sub_64E5AF(Universe *const, Squadron *);
void Universe::addSquadron(Squadron *) // 0x64E5AF
{
    mangled_assert("?addSquadron@Universe@@AAEXPAVSquadron@@@Z");
    todo("implement");
    _sub_64E5AF(this, arg);
}

_extern void _sub_64E5D5(Universe *const, StrikeGroup *);
void Universe::addStrikeGroup(StrikeGroup *) // 0x64E5D5
{
    mangled_assert("?addStrikeGroup@Universe@@QAEXPAVStrikeGroup@@@Z");
    todo("implement");
    _sub_64E5D5(this, arg);
}

_extern void _sub_64F77C(Universe const *const, Selection const &, Selection &, unsigned __int32, vector3 const &, float, __int32, bool);
void Universe::filterSobsWithinRadius(Selection const &, Selection &, unsigned __int32, vector3 const &, float, __int32, bool) const // 0x64F77C
{
    mangled_assert("?filterSobsWithinRadius@Universe@@ABEXABVSelection@@AAV2@IABVvector3@@MH_N@Z");
    todo("implement");
    _sub_64F77C(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern bool _sub_65058A(Universe const *const, Selection &, unsigned __int32, unsigned __int32, vector3 const &, float, __int32, bool);
bool Universe::requestSobsWithinRadius(Selection &, unsigned __int32, unsigned __int32, vector3 const &, float, __int32, bool) const // 0x65058A
{
    mangled_assert("?requestSobsWithinRadius@Universe@@QBE_NAAVSelection@@IIABVvector3@@MH_N@Z");
    todo("implement");
    bool __result = _sub_65058A(this, arg, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern void _sub_65006F(Universe *const);
void Universe::preRemoveEmptyPlayers() // 0x65006F
{
    mangled_assert("?preRemoveEmptyPlayers@Universe@@QAEXXZ");
    todo("implement");
    _sub_65006F(this);
}

_extern void _sub_64E6F3(Universe *const);
void Universe::analCheck() // 0x64E6F3
{
    mangled_assert("?analCheck@Universe@@QAEXXZ");
    todo("implement");
    _sub_64E6F3(this);
}

_extern bool _sub_64D6A6(Universe const *const, Collision::Sphere const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &);
bool Universe::Query(Collision::Sphere const &, unsigned __int32, std::vector<Sob *,std::allocator<Sob *> > &) const // 0x64D6A6
{
    mangled_assert("?Query@Universe@@QBE_NABVSphere@Collision@@IAAV?$vector@PAVSob@@V?$allocator@PAVSob@@@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_64D6A6(this, arg, arg, arg);
    return __result;
}

_extern Squadron *_sub_64F948(Universe const *const, unsigned __int32);
Squadron *Universe::findSquadron(unsigned __int32) const // 0x64F948
{
    mangled_assert("?findSquadron@Universe@@QBEPAVSquadron@@I@Z");
    todo("implement");
    Squadron * __result = _sub_64F948(this, arg);
    return __result;
}

_extern StrikeGroup *_sub_64F975(Universe const *const, unsigned __int32);
StrikeGroup *Universe::findStrikeGroup(unsigned __int32) const // 0x64F975
{
    mangled_assert("?findStrikeGroup@Universe@@QBEPAVStrikeGroup@@I@Z");
    todo("implement");
    StrikeGroup * __result = _sub_64F975(this, arg);
    return __result;
}

_extern void _sub_64D403(Universe *const, Collision::Sphere const &, vector3 &);
void Universe::FindEmptySpace(Collision::Sphere const &, vector3 &) // 0x64D403
{
    mangled_assert("?FindEmptySpace@Universe@@QAEXABVSphere@Collision@@AAVvector3@@@Z");
    todo("implement");
    _sub_64D403(this, arg, arg);
}

_extern void _sub_64DA67(Universe *const, char const *);
void Universe::SoundSetSubtitlePath(char const *) // 0x64DA67
{
    mangled_assert("?SoundSetSubtitlePath@Universe@@QAEXPBD@Z");
    todo("implement");
    _sub_64DA67(this, arg);
}

_extern void _sub_64D9C3(Universe *const, char const *);
void Universe::SoundSetDefaultMusic(char const *) // 0x64D9C3
{
    mangled_assert("?SoundSetDefaultMusic@Universe@@QAEXPBD@Z");
    todo("implement");
    _sub_64D9C3(this, arg);
}

_extern void _sub_64D8E6(Universe *const, char const *, __int32);
void Universe::SoundMusicPlayType(char const *, __int32) // 0x64D8E6
{
    mangled_assert("?SoundMusicPlayType@Universe@@QAEXPBDH@Z");
    todo("implement");
    _sub_64D8E6(this, arg, arg);
}

_extern void _sub_64DA36(Universe *const, char const *);
void Universe::SoundSetMuteActor(char const *) // 0x64DA36
{
    mangled_assert("?SoundSetMuteActor@Universe@@QAEXPBD@Z");
    todo("implement");
    _sub_64DA36(this, arg);
}

_extern void _sub_64D8BB(Universe *const, bool);
void Universe::SoundIntelEvent(bool) // 0x64D8BB
{
    mangled_assert("?SoundIntelEvent@Universe@@QAEX_N@Z");
    todo("implement");
    _sub_64D8BB(this, arg);
}

_extern void _sub_64DA98(Universe *const, bool);
void Universe::SoundSpeechEnable(bool) // 0x64DA98
{
    mangled_assert("?SoundSpeechEnable@Universe@@QAEX_N@Z");
    todo("implement");
    _sub_64DA98(this, arg);
}

_extern void _sub_64D96D(Universe *const, char const *, vector3);
void Universe::SoundSFXPlay3D(char const *, vector3) // 0x64D96D
{
    mangled_assert("?SoundSFXPlay3D@Universe@@QAEXPBDVvector3@@@Z");
    todo("implement");
    _sub_64D96D(this, arg, arg);
}

_extern void _sub_64CF3F(Universe *const);
void Universe::AllocateEventPointerManager() // 0x64CF3F
{
    mangled_assert("?AllocateEventPointerManager@Universe@@QAEXXZ");
    todo("implement");
    _sub_64CF3F(this);
}

_extern void _sub_64CF10(Universe *const, SubtitleCounter *);
void Universe::AddSubtitleCounter(SubtitleCounter *) // 0x64CF10
{
    mangled_assert("?AddSubtitleCounter@Universe@@QAEXPAVSubtitleCounter@@@Z");
    todo("implement");
    _sub_64CF10(this, arg);
}

_extern void _sub_64D261(Universe *const);
void Universe::EraseSubtitleCounters() // 0x64D261
{
    mangled_assert("?EraseSubtitleCounters@Universe@@QAEXXZ");
    todo("implement");
    _sub_64D261(this);
}

_extern void _sub_64D588(Universe *const);
void Universe::LoadCorrectUnitCaps() // 0x64D588
{
    mangled_assert("?LoadCorrectUnitCaps@Universe@@QAEXXZ");
    todo("implement");
    _sub_64D588(this);
}

_extern void _sub_64FCFE(Universe *const);
void Universe::handleDeferredPause() // 0x64FCFE
{
    mangled_assert("?handleDeferredPause@Universe@@QAEXXZ");
    todo("implement");
    _sub_64FCFE(this);
}

/* ---------- private code */

_extern bool _sub_64E93C(vector3 const *, vector3 const *, vector3 *);
_static bool clipToCylindricalVolume(vector3 const *scale, vector3 const *pointA, vector3 *pointB) // 0x64E93C
{
    mangled_assert("clipToCylindricalVolume");
    todo("implement");
    bool __result = _sub_64E93C(scale, pointA, pointB);
    return __result;
}

_extern bool _sub_64E876(vector3 const &, vector3 &);
_static bool clipToCylindricalVolume(vector3 const &scale, vector3 &point) // 0x64E876
{
    mangled_assert("clipToCylindricalVolume");
    todo("implement");
    bool __result = _sub_64E876(scale, point);
    return __result;
}
#endif
