#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <assist\stlexsmallvector.h>
#include <weaponTargetInfo.h>
#include <xstring>
#include <seInterface2\sedefinesshared.h>
#include <Mathlib\mathutil.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <Universe.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <abilities.h>
#include <Tactics.h>
#include <Race.h>
#include <Sob\Cloud\Cloud.h>
#include <HyperspaceManager.h>
#include <Sob\Cloud\CloudStatic.h>
#include <new>
#include <SquadronList.h>
#include <exception>
#include <xstddef>
#include <FamilyListMgr.h>
#include <type_traits>
#include <FamilyList.h>
#include <Scar\GameQuery.h>
#include <BuildManager.h>
#include <Render\FxGL\FXDynamics.h>
#include <Ship\Formation.h>
#include <SobFactory.h>
#include <Render\FxGL\FXManager.h>
#include <Ship\FormationPattern.h>
#include <Render\FxGL\VarMulti.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <platform\timer.h>
#include <TacticalIcon.h>
#include <fileio\filestream.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <platform\platformexports.h>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <Sob\DustCloud\DustCloud.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <gameRender.h>
#include <AxisAlignBox.h>
#include <math.h>
#include <list>
#include <Sob\Resource\Asteroid.h>
#include <Sob\Resource\Resource.h>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <weaponinfo.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Collision\BVH\span.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Mathlib\vector3.h>
#include <Collision\intersect.h>
#include <Mathlib\vector4.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Collision\primitivesfwd.h>
#include <Selector.h>
#include <map>
#include <MetaSelTarg.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <boost\scoped_ptr.hpp>
#include <campaign.h>
#include <GameObj.h>
#include <TeamColourRegistry.h>
#include <Modifiers\ModifierUIInfo.h>
#include <scripting.h>
#include <Player.h>
#include <savegame.h>
#include <Modifiers\ModifierMultiplier.h>
#include <scriptaccess.h>
#include <ResearchManager.h>
#include <task.h>
#include <Modifiers\ModifierEffect.h>
#include <scripttypedef.h>
#include <util\statmonitor.h>
#include <stack>
#include <gameRandom.h>
#include <util\utilexports.h>
#include <Interpolation.h>
#include <random.h>
#include <Mathlib\vector2.h>
#include <SobWithMeshStatic.h>
#include <BillboardRender.h>
#include <util\types.h>
#include <Graphics\meshrenderproxy.h>
#include <lua.h>
#include <ship.h>
#include <CameraTuning.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <Collision\Primitives\aabb.h>
#include <SobWithMesh.h>
#include <Sob\Resource\Salvage.h>
#include <util\dictionary.h>
#include <SobRigidBody.h>
#include <Sob\Resource\SalvageStatic.h>
#include <config.h>
#include <CameraCommand.h>
#include <boost\cstdint.hpp>
#include <SobRigidBodyStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <CameraHW.h>
#include <gameSettings.h>
#include <boost\config.hpp>
#include <Camera\CameraOrbitTarget.h>
#include <SoundManager\SoundManager.h>
#include <syncChecking.h>
#include <Camera\Camera.h>
#include <sobid.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <MeshAnimation.h>
#include <Camera\Frustum.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <ShieldTypes.h>
#include <Camera\Plane3.h>
#include <OrderFeedback.h>
#include <boost\scoped_array.hpp>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <luaconfig\lualibman.h>
#include <Mathlib\quat.h>
#include <SoundManager\SoundEntityHandle.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Render\objects\renderable.h>
#include <Subsystems\SubSystemType.h>
#include <shipHold.h>
#include <MainUI.h>
#include <Render\objects\parentmesh.h>
#include <Render\objects\mesh.h>
#include <Render\objects\core.h>
#include <Mathlib\mathlibdll.h>
#include <Render\objects\objects.h>
#include <Mathlib\fastmath.h>
#include <Missile.h>
#include <Render\gl\types.h>
#include <WeaponClassSpecificInfo.h>
#include <MissileStatic.h>
#include <Render\gl\lotypes.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <profile\profile.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <iostream>
#include <seInterface2\SoundParams.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <Sob\Resource\AsteroidStatic.h>
#include <LevelDesc.h>
#include <ReactiveFleet.h>
#include <playerresourcetype.h>
#include <Hash.h>
#include <Sob\Pebble\Pebble.h>
#include <fileio\md5.h>
#include <Collision\Primitives\capsule.h>
#include <Sob\Pebble\PebbleStatic.h>
#include <Mathlib\luamathbinding.h>
#include <deque>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <SOBGroup.h>
#include <Sob\Nebula\Nebula.h>
#include <seInterface2\SampleID.h>
#include <gamestructimpl.h>
#include <Sob\Nebula\NebulaStatic.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <seInterface2\SampleBase.h>
#include <Badge.h>
#include <Camera\FocusPoint.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <dbdefines.h>
#include <Render\objects\stateblock\stateblock.h>
#include <boost\detail\shared_count.hpp>
#include <UnitCaps\UnitCaps.h>
#include <GameOptions.h>
#include <Render\objects\texture.h>
#include <bitset>
#include <Family.h>
#include <Render\objects\textureregistry.h>
#include <boost\detail\lwm_win32.hpp>
#include <SOBGroupManager.h>
#include <Point.h>
#include <hash_map>
#include <Volume.h>
#include <xhash>
#include <VolumeStatic.h>
#include <SobUnmoveableStatic.h>
#include <Sphere.h>
#include <SensorsManager.h>
#include <Render\gl\r_types.h>
#include <DynamicPoint.h>
#include <Mathlib\matvec.h>
#include <ResourceGroupManager.h>
#include <Modifiers\ModifierAbility.h>
#include <luaconfig\luabinding.h>
#include <LuaLoadLevel.h>
#include <shipstatic.h>
#include <luaconfig\luaconfig.h>
#include <wchar.h>
#include <commandtype.h>
#include <string>
#include <Pieplate.h>
#include <Camera\OrbitParameters.h>
#include <ParadeCommand.h>
#include <fixedpoint.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Render\gl\r_defines.h>
#include <boost\static_assert.hpp>
#include <Parade.h>
#include <platform\osdef.h>
#include <util\fixed.h>
#include <MultiplierTypes.h>
#include <Render\gl\glext.h>
#include <queue>
#include <Collision\BVH\bvh.h>
#include <Squadron.h>
#include <Ship\FormationTargetInfo.h>
#include <command.h>
#include <UIGraphic.h>
#include <platform\cmdline.h>

/* ---------- constants */

/* ---------- definitions */

class NameMatch :
    public Selection::FirstElementCompare
{
public:
    NameMatch(NameMatch const &); /* compiler_generated() */
    NameMatch(char const *);
    virtual bool Compare(Sob const &) const override;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
public:
    ~NameMatch(); /* compiler_generated() */
    NameMatch &operator=(NameMatch const &); /* compiler_generated() */
};
static_assert(sizeof(NameMatch) == 28, "Invalid NameMatch size");

class `anonymous-namespace'::LuaLoadLevelLib :
    public LuaLibrary
{
public:
    LuaLoadLevelLib(`anonymous-namespace'::LuaLoadLevelLib const &); /* compiler_generated() */
    LuaLoadLevelLib();
    virtual ~LuaLoadLevelLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaLoadLevelLib &operator=(`anonymous-namespace'::LuaLoadLevelLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaLoadLevelLib) == 16, "Invalid `anonymous-namespace'::LuaLoadLevelLib size");

typedef `anonymous-namespace'::LuaLoadLevelLib ?A0xe65b625a::LuaLoadLevelLib;

/* ---------- prototypes */

extern void DtmLoad::addSquadron(char const *squadname, char const *shipname, vector3 location, __int32 owner, vector3 rot, unsigned __int32 squadronSize, bool startinHyperspace);
extern void DtmLoad::addMissile(char const *minename, vector3 location, __int32 owner, vector3 rot);
extern void DtmLoad::createSOBGroup(char const *sobGroupName);
extern void DtmLoad::addToSOBGroup(char const *squadronName, char const *sobGroupName);
extern void DtmLoad::addResourcePatch(char const *patchName, vector3 location, float value, float rotx, float roty, float rotz);
extern void DtmLoad::addAsteroid(char const *patchName, vector3 location, float value, float rotx, float roty, float rotz, __int32 canBeToppedUpByReactiveFleet);
extern void DtmLoad::addSalvage(char const *patchName, vector3 location, float value, float rotx, float roty, float rotz, __int32 canBeToppedUpByReactiveFleet);
extern void DtmLoad::addDustCloud(char const *dustCloudGroupName, char const *patchName, vector3 location, vector4 color, float rotzDegrees, float radius);
extern void NonDtmLoad::addPebble(char const *patchName, vector3 location, float rotx, float roty, float rotz);
extern void NonDtmLoad::addCloud(char const *dustCloudGroupName, char const *patchName, vector3 location, vector4 color, float rotzDegrees, float radius);
extern void NonDtmLoad::addReactiveFleetSlot(char const *slotSobGroupName, __int32 playerID, __int32 inHyperspace, vector3 location, float rotx, float roty, float rotz, char const *allowedShipTypes);
extern void NonDtmLoad::addAmbientSound(char const *ambientSound, vector3 location);
extern void NonDtmLoad::addReactiveFleetResourceSlot(char const *name, vector3 location, float rotx, float roty, float rotz);
extern void NonDtmLoad::setDustCloudAmbient(vector4 ambient);
extern void NonDtmLoad::setNebulaAmbient(vector4 ambient);
extern void NonDtmLoad::setFXWind(vector3 windStrength);
extern void DtmLoad::addNebula(char const *nebulaGroupName, char const *patchName, vector3 location, vector4 color, float rotzDegrees, float radius);
extern void DtmLoad::addPoint(char const *name, vector3 location, vector3 rot);
extern void DtmLoad::addAxisAlignBox(char const *name, vector3 loc, float size);
extern void NonDtmLoad::setWorldBoundsInner(vector3 centre, vector3 inner);
extern void NonDtmLoad::setWorldBoundsOuter(vector3 centre, vector3 outer);
extern void DtmLoad::addSphere(char const *name, vector3 location, float radius);
extern __int32 DtmLoad::addPath(lua_State *lstate);
extern void DtmLoad::addCamera(char const *name, vector3 targetposition, vector3 eyePosition);
extern void NonDtmLoad::loadBackground(char const *bgName);
extern void NonDtmLoad::setMaxCameraDistance(float distance);
extern void NonDtmLoad::setSensorsManagerCameraDistances(float min, float max);
extern void NonDtmLoad::setSensorsThreshold(float startDist, float endDist, float dimValue);

/* ---------- globals */

extern char const *LUALIB_LOADLEVEL; // 0x83AD08

/* ---------- private variables */

/* ---------- public code */

void DtmLoad::addSquadron(char const *squadname, char const *shipname, vector3 location, __int32 owner, vector3 rot, unsigned __int32 squadronSize, bool startinHyperspace) // 0x5C9902
{
    mangled_assert("?addSquadron@DtmLoad@@YGXPBD0Vvector3@@H1I_N@Z");
    todo("implement");
}

void DtmLoad::addMissile(char const *minename, vector3 location, __int32 owner, vector3 rot) // 0x5C948B
{
    mangled_assert("?addMissile@DtmLoad@@YGXPBDVvector3@@H1@Z");
    todo("implement");
}

void DtmLoad::createSOBGroup(char const *sobGroupName) // 0x5C9EBF
{
    mangled_assert("?createSOBGroup@DtmLoad@@YGXPBD@Z");
    todo("implement");
}

void DtmLoad::addToSOBGroup(char const *squadronName, char const *sobGroupName) // 0x5C9E7F
{
    mangled_assert("?addToSOBGroup@DtmLoad@@YGXPBD0@Z");
    todo("implement");
}

void DtmLoad::addResourcePatch(char const *patchName, vector3 location, float value, float rotx, float roty, float rotz) // 0x5C9810
{
    mangled_assert("?addResourcePatch@DtmLoad@@YGXPBDVvector3@@MMMM@Z");
    todo("implement");
}

void DtmLoad::addAsteroid(char const *patchName, vector3 location, float value, float rotx, float roty, float rotz, __int32 canBeToppedUpByReactiveFleet) // 0x5C9063
{
    mangled_assert("?addAsteroid@DtmLoad@@YGXPBDVvector3@@MMMMH@Z");
    todo("implement");
}

void DtmLoad::addSalvage(char const *patchName, vector3 location, float value, float rotx, float roty, float rotz, __int32 canBeToppedUpByReactiveFleet) // 0x5C981F
{
    mangled_assert("?addSalvage@DtmLoad@@YGXPBDVvector3@@MMMMH@Z");
    todo("implement");
}

void DtmLoad::addDustCloud(char const *dustCloudGroupName, char const *patchName, vector3 location, vector4 color, float rotzDegrees, float radius) // 0x5C9455
{
    mangled_assert("?addDustCloud@DtmLoad@@YGXPBD0Vvector3@@Vvector4@@MM@Z");
    todo("implement");
}

void NonDtmLoad::addPebble(char const *patchName, vector3 location, float rotx, float roty, float rotz) // 0x5C9694
{
    mangled_assert("?addPebble@NonDtmLoad@@YGXPBDVvector3@@MMM@Z");
    todo("implement");
}

void NonDtmLoad::addCloud(char const *dustCloudGroupName, char const *patchName, vector3 location, vector4 color, float rotzDegrees, float radius) // 0x5C9427
{
    mangled_assert("?addCloud@NonDtmLoad@@YGXPBD0Vvector3@@Vvector4@@MM@Z");
    todo("implement");
}

void NonDtmLoad::addReactiveFleetSlot(char const *slotSobGroupName, __int32 playerID, __int32 inHyperspace, vector3 location, float rotx, float roty, float rotz, char const *allowedShipTypes) // 0x5C97B9
{
    mangled_assert("?addReactiveFleetSlot@NonDtmLoad@@YGXPBDHHVvector3@@MMM0@Z");
    todo("implement");
}

void NonDtmLoad::addAmbientSound(char const *ambientSound, vector3 location) // 0x5C900D
{
    mangled_assert("?addAmbientSound@NonDtmLoad@@YGXPBDVvector3@@@Z");
    todo("implement");
}

void NonDtmLoad::addReactiveFleetResourceSlot(char const *name, vector3 location, float rotx, float roty, float rotz) // 0x5C9773
{
    mangled_assert("?addReactiveFleetResourceSlot@NonDtmLoad@@YGXPBDVvector3@@MMM@Z");
    todo("implement");
}

void NonDtmLoad::setDustCloudAmbient(vector4 ambient) // 0x5CA108
{
    mangled_assert("?setDustCloudAmbient@NonDtmLoad@@YGXVvector4@@@Z");
    todo("implement");
}

void NonDtmLoad::setNebulaAmbient(vector4 ambient) // 0x5CA127
{
    mangled_assert("?setNebulaAmbient@NonDtmLoad@@YGXVvector4@@@Z");
    todo("implement");
}

void NonDtmLoad::setFXWind(vector3 windStrength) // 0x5CA117
{
    mangled_assert("?setFXWind@NonDtmLoad@@YGXVvector3@@@Z");
    todo("implement");
}

void DtmLoad::addNebula(char const *nebulaGroupName, char const *patchName, vector3 location, vector4 color, float rotzDegrees, float radius) // 0x5C9523
{
    mangled_assert("?addNebula@DtmLoad@@YGXPBD0Vvector3@@Vvector4@@MM@Z");
    todo("implement");
}

void DtmLoad::addPoint(char const *name, vector3 location, vector3 rot) // 0x5C96A5
{
    mangled_assert("?addPoint@DtmLoad@@YGXPBDVvector3@@1@Z");
    todo("implement");
}

void DtmLoad::addAxisAlignBox(char const *name, vector3 loc, float size) // 0x5C911F
{
    mangled_assert("?addAxisAlignBox@DtmLoad@@YGXPBDVvector3@@M@Z");
    todo("implement");
}

void NonDtmLoad::setWorldBoundsInner(vector3 centre, vector3 inner) // 0x5CA1A0
{
    mangled_assert("?setWorldBoundsInner@NonDtmLoad@@YGXVvector3@@0@Z");
    todo("implement");
}

void NonDtmLoad::setWorldBoundsOuter(vector3 centre, vector3 outer) // 0x5CA2D4
{
    mangled_assert("?setWorldBoundsOuter@NonDtmLoad@@YGXVvector3@@0@Z");
    todo("implement");
}

void DtmLoad::addSphere(char const *name, vector3 location, float radius) // 0x5C98A7
{
    mangled_assert("?addSphere@DtmLoad@@YGXPBDVvector3@@M@Z");
    todo("implement");
}

__int32 DtmLoad::addPath(lua_State *lstate) // 0x5C9554
{
    mangled_assert("?addPath@DtmLoad@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void DtmLoad::addCamera(char const *name, vector3 targetposition, vector3 eyePosition) // 0x5C91D8
{
    mangled_assert("?addCamera@DtmLoad@@YGXPBDVvector3@@1@Z");
    todo("implement");
}

void NonDtmLoad::loadBackground(char const *bgName) // 0x5CA020
{
    mangled_assert("?loadBackground@NonDtmLoad@@YGXPBD@Z");
    todo("implement");
}

void NonDtmLoad::setMaxCameraDistance(float distance) // 0x5CA124
{
    mangled_assert("?setMaxCameraDistance@NonDtmLoad@@YGXM@Z");
    todo("implement");
}

void NonDtmLoad::setSensorsManagerCameraDistances(float min, float max) // 0x5CA136
{
    mangled_assert("?setSensorsManagerCameraDistances@NonDtmLoad@@YGXMM@Z");
    todo("implement");
}

void NonDtmLoad::setSensorsThreshold(float startDist, float endDist, float dimValue) // 0x5CA15B
{
    mangled_assert("?setSensorsThreshold@NonDtmLoad@@YGXMMM@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal1<vector3,void,LuaBinding::Functor1Free<vector3,void> >::~ObjInternal1<vector3,void,LuaBinding::Functor1Free<vector3,void> >() // 0x5C7A5E
{
    mangled_assert("??1?$ObjInternal1@Vvector3@@XV?$Functor1Free@Vvector3@@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<vector4,void,LuaBinding::Functor1Free<vector4,void> >::~ObjInternal1<vector4,void,LuaBinding::Functor1Free<vector4,void> >() // 0x5C7A64
{
    mangled_assert("??1?$ObjInternal1@Vvector4@@XV?$Functor1Free@Vvector4@@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<float,float,void,LuaBinding::Functor2Free<float,float,void> >::~ObjInternal2<float,float,void,LuaBinding::Functor2Free<float,float,void> >() // 0x5C7A6A
{
    mangled_assert("??1?$ObjInternal2@MMXV?$Functor2Free@MMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<char const *,char const *,void,LuaBinding::Functor2Free<char const *,char const *,void> >::~ObjInternal2<char const *,char const *,void,LuaBinding::Functor2Free<char const *,char const *,void> >() // 0x5C7A70
{
    mangled_assert("??1?$ObjInternal2@PBDPBDXV?$Functor2Free@PBDPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<char const *,vector3,void,LuaBinding::Functor2Free<char const *,vector3,void> >::~ObjInternal2<char const *,vector3,void,LuaBinding::Functor2Free<char const *,vector3,void> >() // 0x5C7A76
{
    mangled_assert("??1?$ObjInternal2@PBDVvector3@@XV?$Functor2Free@PBDVvector3@@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<vector3,vector3,void,LuaBinding::Functor2Free<vector3,vector3,void> >::~ObjInternal2<vector3,vector3,void,LuaBinding::Functor2Free<vector3,vector3,void> >() // 0x5C7A7C
{
    mangled_assert("??1?$ObjInternal2@Vvector3@@V1@XV?$Functor2Free@Vvector3@@V1@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<float,float,float,void,LuaBinding::Functor3Free<float,float,float,void> >::~ObjInternal3<float,float,float,void,LuaBinding::Functor3Free<float,float,float,void> >() // 0x5C7A82
{
    mangled_assert("??1?$ObjInternal3@MMMXV?$Functor3Free@MMMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,vector3,float,void,LuaBinding::Functor3Free<char const *,vector3,float,void> >::~ObjInternal3<char const *,vector3,float,void,LuaBinding::Functor3Free<char const *,vector3,float,void> >() // 0x5C7A88
{
    mangled_assert("??1?$ObjInternal3@PBDVvector3@@MXV?$Functor3Free@PBDVvector3@@MX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,vector3,vector3,void,LuaBinding::Functor3Free<char const *,vector3,vector3,void> >::~ObjInternal3<char const *,vector3,vector3,void,LuaBinding::Functor3Free<char const *,vector3,vector3,void> >() // 0x5C7A8E
{
    mangled_assert("??1?$ObjInternal3@PBDVvector3@@V1@XV?$Functor3Free@PBDVvector3@@V1@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal4<char const *,vector3,int,vector3,void,LuaBinding::Functor4Free<char const *,vector3,int,vector3,void> >::~ObjInternal4<char const *,vector3,int,vector3,void,LuaBinding::Functor4Free<char const *,vector3,int,vector3,void> >() // 0x5C7A94
{
    mangled_assert("??1?$ObjInternal4@PBDVvector3@@HV1@XV?$Functor4Free@PBDVvector3@@HV1@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal5<char const *,vector3,float,float,float,void,LuaBinding::Functor5Free<char const *,vector3,float,float,float,void> >::~ObjInternal5<char const *,vector3,float,float,float,void,LuaBinding::Functor5Free<char const *,vector3,float,float,float,void> >() // 0x5C7A9A
{
    mangled_assert("??1?$ObjInternal5@PBDVvector3@@MMMXV?$Functor5Free@PBDVvector3@@MMMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal6<char const *,char const *,vector3,vector4,float,float,void,LuaBinding::Functor6Free<char const *,char const *,vector3,vector4,float,float,void> >::~ObjInternal6<char const *,char const *,vector3,vector4,float,float,void,LuaBinding::Functor6Free<char const *,char const *,vector3,vector4,float,float,void> >() // 0x5C7AA0
{
    mangled_assert("??1?$ObjInternal6@PBDPBDVvector3@@Vvector4@@MMXV?$Functor6Free@PBDPBDVvector3@@Vvector4@@MMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal6<char const *,vector3,float,float,float,float,void,LuaBinding::Functor6Free<char const *,vector3,float,float,float,float,void> >::~ObjInternal6<char const *,vector3,float,float,float,float,void,LuaBinding::Functor6Free<char const *,vector3,float,float,float,float,void> >() // 0x5C7AA6
{
    mangled_assert("??1?$ObjInternal6@PBDVvector3@@MMMMXV?$Functor6Free@PBDVvector3@@MMMMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal7<char const *,char const *,vector3,int,vector3,unsigned int,bool,void,LuaBinding::Functor7Free<char const *,char const *,vector3,int,vector3,unsigned int,bool,void> >::~ObjInternal7<char const *,char const *,vector3,int,vector3,unsigned int,bool,void,LuaBinding::Functor7Free<char const *,char const *,vector3,int,vector3,unsigned int,bool,void> >() // 0x5C7AAC
{
    mangled_assert("??1?$ObjInternal7@PBDPBDVvector3@@HV1@I_NXV?$Functor7Free@PBDPBDVvector3@@HV1@I_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal7<char const *,vector3,float,float,float,float,int,void,LuaBinding::Functor7Free<char const *,vector3,float,float,float,float,int,void> >::~ObjInternal7<char const *,vector3,float,float,float,float,int,void,LuaBinding::Functor7Free<char const *,vector3,float,float,float,float,int,void> >() // 0x5C7AB2
{
    mangled_assert("??1?$ObjInternal7@PBDVvector3@@MMMMHXV?$Functor7Free@PBDVvector3@@MMMMHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal8<char const *,int,int,vector3,float,float,float,char const *,void,LuaBinding::Functor8Free<char const *,int,int,vector3,float,float,float,char const *,void> >::~ObjInternal8<char const *,int,int,vector3,float,float,float,char const *,void,LuaBinding::Functor8Free<char const *,int,int,vector3,float,float,float,char const *,void> >() // 0x5C7AB8
{
    mangled_assert("??1?$ObjInternal8@PBDHHVvector3@@MMMPBDXV?$Functor8Free@PBDHHVvector3@@MMMPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
