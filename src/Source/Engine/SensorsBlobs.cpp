#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <assist\stlexsmallvector.h>
#include <localizer\localizer.h>
#include <BuildManager.h>
#include <xstring>
#include <Modifiers\ModifierUIInfo.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Render\gl\r_types.h>
#include <Modifiers\ModifierMultiplier.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Modifiers\ModifierEffect.h>
#include <memory\memorylib.h>
#include <Universe.h>
#include <Waypoint.h>
#include <crtdefs.h>
#include <SobUnmoveable.h>
#include <MainUI.h>
#include <Selector.h>
#include <sob.h>
#include <sobstatic.h>
#include <config.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <Modifiers\ModifierApplier.h>
#include <weaponinfo.h>
#include <AttackCommand.h>
#include <AttackStyle.h>
#include <memory\mmfixedpool.h>
#include <seInterface2\sedefinesshared.h>
#include <boost\static_assert.hpp>
#include <new>
#include <shipstatic.h>
#include <weaponTargetInfo.h>
#include <exception>
#include <alliance.h>
#include <weaponstaticinfo.h>
#include <xstddef>
#include <playerresourcetype.h>
#include <GunBinding.h>
#include <type_traits>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <TeamColourRegistry.h>
#include <MultiplierTypes.h>
#include <savegame.h>
#include <HyperspaceManager.h>
#include <DynamicPoint.h>
#include <Render\objects\compiledtext.h>
#include <Collision\BVH\bvh.h>
#include <task.h>
#include <stack>
#include <xutility>
#include <SobWithMeshStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <utility>
#include <iosfwd>
#include <Ping.h>
#include <vector>
#include <ship.h>
#include <Render\gl\r_defines.h>
#include <Parade.h>
#include <xmemory>
#include <SobWithMesh.h>
#include <Render\gl\glext.h>
#include <SobRigidBody.h>
#include <ResearchManager.h>
#include <SobRigidBodyStatic.h>
#include <WeaponClassSpecificInfo.h>
#include <MeshAnimation.h>
#include <math.h>
#include <ShieldTypes.h>
#include <list>
#include <gameRenderDebug.h>
#include <Collision\Primitives\obb.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Mathlib\vector3.h>
#include <Subsystems\HardPointManager.h>
#include <Mathlib\vector4.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <map>
#include <dbdefines.h>
#include <xtree>
#include <UnitCaps\UnitCaps.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <GameEventDefs.h>
#include <GameEventSys.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Camera\OrbitParameters.h>
#include <Sob\Resource\Resource.h>
#include <boost\cstdint.hpp>
#include <Sob\Resource\ResourceStatic.h>
#include <Modifiers\ModifierAbility.h>
#include <boost\config.hpp>
#include <sobid.h>
#include <abilities.h>
#include <Graphics\ArcArray.h>
#include <assert.h>
#include <StrikeGroup.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\quat.h>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <renderer.h>
#include <Collision\BVH\proxy.h>
#include <Squadron.h>
#include <Collision\intersect.h>
#include <ParadeCommand.h>
#include <Collision\primitivesfwd.h>
#include <commandtype.h>
#include <assist\typemagic.h>
#include <TacticalOverlay.h>
#include <SensorsManager.h>
#include <hash_map>
#include <SoundManager\SoundManager.h>
#include <xhash>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <SOBGroupManager.h>
#include <CameraHW.h>
#include <Mathlib\mathlibdll.h>
#include <Camera\CameraOrbitTarget.h>
#include <Mathlib\fastmath.h>
#include <Camera\Camera.h>
#include <seInterface2\PatchID.h>
#include <Interpolation.h>
#include <Camera\Frustum.h>
#include <seInterface2\PatchBase.h>
#include <Camera\Plane3.h>
#include <MetaSelTarg.h>
#include <seInterface2\SoundParams.h>
#include <Tactics.h>
#include <pathpoints.h>
#include <Collision\Primitives\aabb.h>
#include <debug\db.h>
#include <profile\profile.h>
#include <iostream>
#include <deque>
#include <Player.h>
#include <SquadronList.h>
#include <Render\objects\cliprect.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <Pieplate.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Modifiers\ModifierTargetCache.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <platform\timer.h>
#include <bitset>
#include <platform\osdef.h>
#include <platform\platformexports.h>
#include <boost\detail\lwm_win32.hpp>
#include <fixedpoint.h>
#include <OrderFeedback.h>
#include <util\fixed.h>
#include <Render\objects\debugrender.h>
#include <seInterface2\SampleID.h>
#include <Render\objects\core.h>
#include <seInterface2\SampleBase.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <SensorsBlobs.h>
#include <Mathlib\matvec.h>
#include <ATITemplate.h>
#include <SelTarg.h>
#include <wchar.h>
#include <ATI.h>
#include <Race.h>
#include <string>
#include <prim.h>
#include <command.h>
#include <luaconfig\luaconfig.h>
#include <Render\objects\simplemesh.h>
#include <queue>
#include <lua.h>
#include <Render\objects\textureproxy.h>
#include <algorithm>
#include <Render\gl\lotypes.h>
#include <Render\objects\textureregistry.h>
#include <Collision\Primitives\capsule.h>

/* ---------- constants */

/* ---------- definitions */

class ATITemplateBlob :
    public ATITemplate
{
public:
    ATITemplateBlob(ATITemplateBlob const &); /* compiler_generated() */
    ATITemplateBlob(LuaConfig &, char const *);
    SensorsBlobArray::CreationParams m_creationParams; // 0x18
    vector4 m_colourNear; // 0x28
    vector4 m_colourFar; // 0x38
    vector4 m_colourMouseOverNear; // 0x48
    vector4 m_colourMouseOverFar; // 0x58
    vector4 m_colourFootNear; // 0x68
    vector4 m_colourFootFar; // 0x78
    vector4 m_colourFootMouseOverNear; // 0x88
    vector4 m_colourFootMouseOverFar; // 0x98
    vector4 m_colourEquatorNear; // 0xA8
    vector4 m_colourEquatorFar; // 0xB8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_RUFormatString; // 0xC8
    bool m_equator; // 0xE0
    float m_equatorScale; // 0xE4
    float m_blobColourCurve; // 0xE8
    float m_blobInsideRadius; // 0xEC
    _inline ~ATITemplateBlob(); /* compiler_generated() */
    ATITemplateBlob &operator=(ATITemplateBlob const &); /* compiler_generated() */
};
static_assert(sizeof(ATITemplateBlob) == 240, "Invalid ATITemplateBlob size");

typedef std::map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > > PingMap;

/* ---------- prototypes */

extern bool sensorsBlobsStartup();
extern bool sensorsBlobsShutdown();

/* ---------- globals */

extern float sbNearestBlob; // 0x83D020
extern float sbFarthestBlob; // 0x83D024
extern float sbBattlePingSweepTime; // 0x83D028
extern float sbBattlePingSweepDistanceCurrent; // 0x84AEF8
extern float sbBattlePingSweepDistancePrevious; // 0x84AEFC
extern ATITemplatePing *sbBattlePingTemplate; // 0x84AF00
extern SensorsBlobArray::CreationParams *SensorsBlobArray::s_subBlobProperties; // 0x84AF04
extern SensorsBlobArray::CreationParams *sbShipBlobCreationParams; // 0x84AF08
extern SensorsBlobArray::CreationParams *sbResourceBlobCreationParams; // 0x84AF0C

/* ---------- private variables */

_static
{
    extern FixedSizeObjAllocator<SensorsBlob,1000> s_SensorsBlobAllocator; // 0x84AF10
    extern ATITemplateBlob *sbTemplateFriendlies; // 0x84AEDC
    extern ATITemplateBlob *sbTemplateAllies; // 0x84AEE0
    extern ATITemplateBlob *sbTemplateEnemies; // 0x84AEE4
    extern ATITemplateBlob *sbTemplateResources; // 0x84AEE8
    extern ATITemplateBlob *sbTemplateObjective; // 0x84AEEC
    extern ATITemplateBlob *sbTemplateUnknownEnemy; // 0x84AEF0
    extern ATITemplateBlob *sbTemplateBattle; // 0x84AEF4
    extern ATIPossibleVisFlag sbVisibilityFlags[11]; // 0x83D030
}

/* ---------- public code */

_extern void *_sub_63431A(unsigned __int32);
void *SensorsBlob::operator new(unsigned __int32 size) // 0x63431A
{
    mangled_assert("??2SensorsBlob@@SGPAXI@Z");
    todo("implement");
    void * __result = _sub_63431A(size);
    return __result;
}

_extern void _sub_634327(void *, unsigned __int32);
void SensorsBlob::operator delete(void *p, unsigned __int32 size) // 0x634327
{
    mangled_assert("??3SensorsBlob@@SGXPAXI@Z");
    todo("implement");
    _sub_634327(p, size);
}

_extern SensorsBlobArray &_sub_634416(SensorsBlobArray *const, SensorsBlobArray const &);
_inline SensorsBlobArray &SensorsBlobArray::operator=(SensorsBlobArray const &) // 0x634416
{
    mangled_assert("??4SensorsBlobArray@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SensorsBlobArray & __result = _sub_634416(this, arg);
    return __result;
}

_extern _sub_634101(SensorsBlob *const, Sob *, float, vector3 const &);
SensorsBlob::SensorsBlob(Sob *, float, vector3 const &) // 0x634101
{
    mangled_assert("??0SensorsBlob@@QAE@PAVSob@@MABVvector3@@@Z");
    todo("implement");
    _sub_634101(this, arg, arg, arg);
}

_extern _sub_634039(SensorsBlob *const, SensorsBlob const &);
SensorsBlob::SensorsBlob(SensorsBlob const &) // 0x634039
{
    mangled_assert("??0SensorsBlob@@QAE@ABV0@@Z");
    todo("implement");
    _sub_634039(this, arg);
}

_extern void _sub_634298(SensorsBlob *const);
SensorsBlob::~SensorsBlob() // 0x634298
{
    mangled_assert("??1SensorsBlob@@QAE@XZ");
    todo("implement");
    _sub_634298(this);
}

_extern void _sub_635175(SensorsBlob *const, SensorsBlob *);
void SensorsBlob::combine(SensorsBlob *) // 0x635175
{
    mangled_assert("?combine@SensorsBlob@@AAEXPAV1@@Z");
    todo("implement");
    _sub_635175(this, arg);
}

_extern void _sub_6351FA(SensorsBlob *const);
void SensorsBlob::finalizeSelection() // 0x6351FA
{
    mangled_assert("?finalizeSelection@SensorsBlob@@AAEXXZ");
    todo("implement");
    _sub_6351FA(this);
}

_extern void _sub_635213(SensorsBlob *const, Player const *);
void SensorsBlob::itemize(Player const *) // 0x635213
{
    mangled_assert("?itemize@SensorsBlob@@AAEXPBVPlayer@@@Z");
    todo("implement");
    _sub_635213(this, arg);
}

_extern _sub_6341CB(SensorsBlobArray *const);
SensorsBlobArray::SensorsBlobArray() // 0x6341CB
{
    mangled_assert("??0SensorsBlobArray@@QAE@XZ");
    todo("implement");
    _sub_6341CB(this);
}

_extern void _sub_634277(ATITemplateBlob *const);
_inline ATITemplateBlob::~ATITemplateBlob() // 0x634277
{
    mangled_assert("??1ATITemplateBlob@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_634277(this);
}

_extern void _sub_634291(NDGameEvent_BattleStatus *const);
_inline NDGameEvent_BattleStatus::~NDGameEvent_BattleStatus() // 0x634291
{
    mangled_assert("??1NDGameEvent_BattleStatus@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_634291(this);
}

_extern void _sub_6344D2(SensorsBlobArray *const, CameraHW const *, Player const *, float (*)(Sob *), __int32, Selection const **, SensorsBlobArray::CreationParams *);
void SensorsBlobArray::AddObjects(CameraHW const *, Player const *, float (*)(Sob *), __int32, Selection const **, SensorsBlobArray::CreationParams *) // 0x6344D2
{
    mangled_assert("?AddObjects@SensorsBlobArray@@QAEXPBVCameraHW@@PBVPlayer@@P6GMPAVSob@@@ZHPAPBVSelection@@PAUCreationParams@1@@Z");
    todo("implement");
    _sub_6344D2(this, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_634A23(SensorsBlobArray *const);
void SensorsBlobArray::Clear() // 0x634A23
{
    mangled_assert("?Clear@SensorsBlobArray@@QAEXXZ");
    todo("implement");
    _sub_634A23(this);
}

_extern void _sub_6342E8(SensorsBlobArray *const);
SensorsBlobArray::~SensorsBlobArray() // 0x6342E8
{
    mangled_assert("??1SensorsBlobArray@@QAE@XZ");
    todo("implement");
    _sub_6342E8(this);
}

_extern void _sub_636394(SensorsBlobArray *const);
void SensorsBlobArray::sort() // 0x636394
{
    mangled_assert("?sort@SensorsBlobArray@@QAEXXZ");
    todo("implement");
    _sub_636394(this);
}

_extern void _sub_635DF7(SensorsBlobArray *const, float, float, CameraHW const *);
void SensorsBlobArray::renderPrepare(float, float, CameraHW const *) // 0x635DF7
{
    mangled_assert("?renderPrepare@SensorsBlobArray@@QAEXMMPBVCameraHW@@@Z");
    todo("implement");
    _sub_635DF7(this, arg, arg, arg);
}

_extern void _sub_635016(SensorsBlobArray *const, Camera const *);
void SensorsBlobArray::addMetaSelTargs(Camera const *) // 0x635016
{
    mangled_assert("?addMetaSelTargs@SensorsBlobArray@@QAEXPBVCamera@@@Z");
    todo("implement");
    _sub_635016(this, arg);
}

_extern void _sub_635B47(SensorsBlobArray *const, float, CameraHW const *);
void SensorsBlobArray::renderBackground(float, CameraHW const *) // 0x635B47
{
    mangled_assert("?renderBackground@SensorsBlobArray@@QAEXMPBVCameraHW@@@Z");
    todo("implement");
    _sub_635B47(this, arg, arg);
}

_extern void _sub_6354B4(SensorsBlobArray *const, float, CameraHW const *);
void SensorsBlobArray::render(float, CameraHW const *) // 0x6354B4
{
    mangled_assert("?render@SensorsBlobArray@@QAEXMPBVCameraHW@@@Z");
    todo("implement");
    _sub_6354B4(this, arg, arg);
}

_extern void _sub_635AB7(SensorsBlobArray *const, ATITemplate *, CameraHW const *, unsigned __int32);
void SensorsBlobArray::render(ATITemplate *, CameraHW const *, unsigned __int32) // 0x635AB7
{
    mangled_assert("?render@SensorsBlobArray@@QAEXPAVATITemplate@@PBVCameraHW@@I@Z");
    todo("implement");
    _sub_635AB7(this, arg, arg, arg);
}

_extern float _sub_6351EF(Sob *);
float SensorsBlobArray::enemySubBlob(Sob *sob) // 0x6351EF
{
    mangled_assert("?enemySubBlob@SensorsBlobArray@@CGMPAVSob@@@Z");
    todo("implement");
    float __result = _sub_6351EF(sob);
    return __result;
}

_extern float _sub_63511F(Sob *);
float SensorsBlobArray::battleSubBlob(Sob *sob) // 0x63511F
{
    mangled_assert("?battleSubBlob@SensorsBlobArray@@CGMPAVSob@@@Z");
    todo("implement");
    float __result = _sub_63511F(sob);
    return __result;
}

_extern void _sub_634C11(SensorsBlobArray *const, CameraHW const *, SensorsBlob const *);
void SensorsBlobArray::addBattlePings(CameraHW const *, SensorsBlob const *) // 0x634C11
{
    mangled_assert("?addBattlePings@SensorsBlobArray@@QAEXPBVCameraHW@@PBVSensorsBlob@@@Z");
    todo("implement");
    _sub_634C11(this, arg, arg);
}

_extern _sub_633C46(ATITemplateBlob *const, LuaConfig &, char const *);
ATITemplateBlob::ATITemplateBlob(LuaConfig &, char const *) // 0x633C46
{
    mangled_assert("??0ATITemplateBlob@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_633C46(this, arg, arg);
}

_extern bool _sub_6360F0();
bool sensorsBlobsStartup() // 0x6360F0
{
    mangled_assert("?sensorsBlobsStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_6360F0();
    return __result;
}

_extern bool _sub_63600B();
bool sensorsBlobsShutdown() // 0x63600B
{
    mangled_assert("?sensorsBlobsShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_63600B();
    return __result;
}

/* ---------- private code */
#endif
