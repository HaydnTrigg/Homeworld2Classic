#if 0
/* ---------- headers */

#include "decomp.h"
#include <Modifiers\ModifierMultiplier.h>
#include <assist\stlexsmallvector.h>
#include <ShieldTypes.h>
#include <Modifiers\ModifierEffect.h>
#include <CoordSysUtilities.h>
#include <gameRenderDebug.h>
#include <MeshAnimation.h>
#include <Render\objects\fontsystem.h>
#include <xstring>
#include <weapon.h>
#include <Render\objects\objects.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <WeaponStatic.h>
#include <Render\objects\bitmapfont.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <Subsystems\HardPointManager.h>
#include <WeaponResult.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <Subsystems\SubSystemType.h>
#include <Missile.h>
#include <Mathlib\matrix3.h>
#include <GameObj.h>
#include <MissileStatic.h>
#include <weaponfiretypes.h>
#include <platform\osdef.h>
#include <config.h>
#include <task.h>
#include <stack>
#include <WeaponFire\Bullet.h>
#include <weaponstaticinfo.h>
#include <new>
#include <GunBinding.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\obb.h>
#include <Collision\BVH\octree.h>
#include <Collision\Collision.h>
#include <renderer.h>
#include <Collision\BVH\span.h>
#include <Render\gl\types.h>
#include <weaponTargetInfo.h>
#include <playerresourcetype.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Mathlib\matvec.h>
#include <Collision\BVH\proxy.h>
#include <xutility>
#include <Collision\intersect.h>
#include <memory\memoryalloc.h>
#include <Mathlib\LinearInterp.h>
#include <utility>
#include <iosfwd>
#include <Collision\primitivesfwd.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\gl\lotypes.h>
#include <debug\ctassert.h>
#include <scripting.h>
#include <SoundManager\SoundEntityHandle.h>
#include <WeaponClassSpecificInfo.h>
#include <SimVis\EffectContainer.h>
#include <scriptaccess.h>
#include <RenderAnim\MarkerInstance.h>
#include <scripttypedef.h>
#include <Interpolation.h>
#include <TeamColourRegistry.h>
#include <math.h>
#include <Render\gl\r_types.h>
#include <gameSettings.h>
#include <lua.h>
#include <savegame.h>
#include <syncChecking.h>
#include <Render\objects\compiledtext.h>
#include <WeaponFire\SphereBurst.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <SobWithMeshStatic.h>
#include <ship.h>
#include <Mathlib\vector3.h>
#include <SobZeroMassBody.h>
#include <SobWithMesh.h>
#include <sobid.h>
#include <Mathlib\vector4.h>
#include <SobRigidBody.h>
#include <WeaponFire\WeaponFireEvent.h>
#include <sobzeromassbodystatic.h>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <SobRigidBodyStatic.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <map>
#include <Collision\Primitives\mesh.h>
#include <xtree>
#include <Collision\Primitives\triangle.h>
#include <SOBGroupManager.h>
#include <boost\scoped_ptr.hpp>
#include <hash_map>
#include <xhash>
#include <SobFactory.h>
#include <SimVis\RenderModelVis.h>
#include <Mathlib\vector2.h>
#include <RenderAnim\RenderModelInstance.h>
#include <util\types.h>
#include <RenderAnim\EffectAnimationList.h>
#include <Modifiers\ModifierAbility.h>
#include <RenderAnim\AnimEventContext.h>
#include <assist\callback.h>
#include <memory\memorysmall.h>
#include <boost\cstdint.hpp>
#include <shipstatic.h>
#include <boost\config.hpp>
#include <commandtype.h>
#include <platform\sysutilinterface.h>
#include <luaconfig\luaconfig.h>
#include <Render\gl\r_defines.h>
#include <LevelDesc.h>
#include <Race.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <Render\gl\glext.h>
#include <Hash.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <fileio\md5.h>
#include <EffectCreate.h>
#include <seInterface2\SoundParams.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <abilities.h>
#include <Mathlib\quat.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Collision\Primitives\capsule.h>
#include <SimVis\RenderModelScars.h>
#include <Camera\Plane3.h>
#include <BuildManager.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <WeaponFire\InstantHit.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\mathlibdll.h>
#include <SimVis\LodFX.h>
#include <Mathlib\fastmath.h>
#include <Tactics.h>
#include <savegameimpl.h>
#include <HyperspaceManager.h>
#include <pathpoints.h>
#include <SquadronList.h>
#include <debug\db.h>
#include <boost\static_assert.hpp>
#include <Interface.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <boost\throw_exception.hpp>
#include <Universe.h>
#include <fileio\filepath.h>
#include <MultiplierTypes.h>
#include <selection.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <weaponinfo.h>
#include <savegamedef.h>
#include <Collision\BVH\bvh.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <boost\detail\shared_count.hpp>
#include <gameRandom.h>
#include <boost\detail\lwm_win32.hpp>
#include <random.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Render\objects\core.h>
#include <BattleScar\BattleScarStats.h>
#include <BattleScar\BattleScarManager.h>
#include <Decal\DecalManager.h>
#include <Decal\VertexPool.h>
#include <Render\objects\cliprect.h>
#include <WeaponFire\WeaponFire.h>
#include <sob.h>
#include <wchar.h>
#include <string>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Subsystems\Subsystem.h>
#include <Subsystems\SubsystemStatic.h>
#include <SimVis\SobVis.h>
#include <Modifiers\ModifierUIInfo.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern WeaponFireResultType convertStringIntoWeaponResultType(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern WeaponFireType convertStrintIntoWeaponFireType(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern Sob *wfSpawnMissile(Sob *pOwner, Player *player, char const *fireEvent, WeaponFireType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, vector3 const &initialPosition, matrix3 const &coordSystem, vector3 const &initialVelocity, WeaponStatic const *weaponStatic, WeaponTargetInfo const &target, vector3 const &positionToFlyTo);
extern WeaponFire *wfSpawnWeaponFire(Sob *pOwner, Weapon *wOwner, HierarchyJoint *joint, char const *fireEvent, WeaponFireType type, char const *name, vector3 const &initialPosition, matrix3 const &coordSystem, WeaponStatic const *weaponStatic, WeaponTargetInfo const &target);
extern WeaponFire *wfSpawnWeaponFireWithoutWeapon(WeaponStatic const *weaponStatic, vector3 const &position, vector3 const &direction, matrix3 const &coordSys, __int32 ownerPlayerIndex);

_static void findConnectedSobs(Sob *pSob, std::vector<Sob *,std::allocator<Sob *> > &connectedSobs);

/* ---------- globals */

extern char const WeaponFire::m_saveToken[0]; // 0x78F180
extern SaveData const WeaponFire::m_saveData[8]; // 0x78F190

/* ---------- private variables */

_static
{
    extern char const *twkDefaultDeath; // 0x8355D4
    extern float const alwaysAccurate; // 0x78F290
    extern float const alwaysInaccurate; // 0x78F294
    extern char const *k_undefinedfx; // 0x8355D8
    extern char const *k_undefinedsound; // 0x8355DC
    extern char const *twkDefaultScarType; // 0x8355E0
    extern char const *k_rootSoundDir; // 0x8355E4
}

/* ---------- public code */

_inline BattleScarManager::DamageInfo::DamageInfo() // 0x4A9189
{
    mangled_assert("??0DamageInfo@BattleScarManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

WeaponFireResultType convertStringIntoWeaponResultType(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4AA014
{
    mangled_assert("?convertStringIntoWeaponResultType@@YG?AW4WeaponFireResultType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

WeaponFireType convertStrintIntoWeaponFireType(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4AA080
{
    mangled_assert("?convertStrintIntoWeaponFireType@@YG?AW4WeaponFireType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

WeaponFireStatic::WeaponFireStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType) // 0x4A9314
{
    mangled_assert("??0WeaponFireStatic@@IAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
}

_inline SobZeroMassBodyStatic::~SobZeroMassBodyStatic() // 0x4A945E
{
    mangled_assert("??1SobZeroMassBodyStatic@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

SobStatic *WeaponFireStatic::Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found) // 0x4A95D1
{
    mangled_assert("?Create@WeaponFireStatic@@SGPAVSobStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV2@@Z");
    todo("implement");
}

char const *WeaponFireStatic::getFX(WeaponFireStatic::EffectTypes) const // 0x4AA1F7
{
    mangled_assert("?getFX@WeaponFireStatic@@QBEPBDW4EffectTypes@1@@Z");
    todo("implement");
}

char const *WeaponFireStatic::getSound(WeaponFireStatic::EffectTypes) const // 0x4AA2C3
{
    mangled_assert("?getSound@WeaponFireStatic@@QBEPBDW4EffectTypes@1@@Z");
    todo("implement");
}

float WeaponFireStatic::getNlips(WeaponFireStatic::EffectTypes) const // 0x4AA237
{
    mangled_assert("?getNlips@WeaponFireStatic@@QBEMW4EffectTypes@1@@Z");
    todo("implement");
}

bool WeaponFireStatic::getFarMode(WeaponFireStatic::EffectTypes) const // 0x4AA21E
{
    mangled_assert("?getFarMode@WeaponFireStatic@@QBE_NW4EffectTypes@1@@Z");
    todo("implement");
}

vector2 const &WeaponFireStatic::getFXScaleClamp(WeaponFireStatic::EffectTypes) const // 0x4AA211
{
    mangled_assert("?getFXScaleClamp@WeaponFireStatic@@QBEABVvector2@@W4EffectTypes@1@@Z");
    todo("implement");
}

WeaponFire::WeaponFire(char const *, Sob *) // 0x4A921E
{
    mangled_assert("??0WeaponFire@@QAE@PBDPAVSob@@@Z");
    todo("implement");
}

Sob const *WeaponFire::getOwner() const // 0x4AA245
{
    mangled_assert("?getOwner@WeaponFire@@QBEPBVSob@@XZ");
    todo("implement");
}

Ship *WeaponFire::getOwnerShip() const // 0x4AA250
{
    mangled_assert("?getOwnerShip@WeaponFire@@QBEPAVShip@@XZ");
    todo("implement");
}

void WeaponFire::staticInit() // 0x4AA794
{
    mangled_assert("?staticInit@WeaponFire@@QAEXXZ");
    todo("implement");
}

WeaponFire::WeaponFire(SaveGameData *) // 0x4A91A8
{
    mangled_assert("??0WeaponFire@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void WeaponFire::defaultSettings() // 0x4AA0EB
{
    mangled_assert("?defaultSettings@WeaponFire@@QAEXXZ");
    todo("implement");
}

bool WeaponFire::restore(SaveGameData *) // 0x4AA5AE
{
    mangled_assert("?restore@WeaponFire@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool WeaponFire::save(SaveGameData *, SaveType) // 0x4AA5FB
{
    mangled_assert("?save@WeaponFire@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void WeaponFire::postRestore() // 0x4AA4CE
{
    mangled_assert("?postRestore@WeaponFire@@UAEXXZ");
    todo("implement");
}

WeaponFire::~WeaponFire() // 0x4A9463
{
    mangled_assert("??1WeaponFire@@UAE@XZ");
    todo("implement");
}

_inline WeaponFireStatic::~WeaponFireStatic() // 0x4A94DC
{
    mangled_assert("??1WeaponFireStatic@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void WeaponFire::RemoveFromSimulation() // 0x4A9C7B
{
    mangled_assert("?RemoveFromSimulation@WeaponFire@@MAEXXZ");
    todo("implement");
}

void WeaponFire::RemoveAllSimData() // 0x4A9C7A
{
    mangled_assert("?RemoveAllSimData@WeaponFire@@IAEXXZ");
    todo("implement");
}

void WeaponFire::initialize(WeaponStatic const *) // 0x4AA495
{
    mangled_assert("?initialize@WeaponFire@@UAEXPBVWeaponStatic@@@Z");
    todo("implement");
}

void WeaponFire::setEffect(unsigned __int32) // 0x4AA75C
{
    mangled_assert("?setEffect@WeaponFire@@QAEXI@Z");
    todo("implement");
}

unsigned __int32 WeaponFire::getEffect() const // 0x4AA1F0
{
    mangled_assert("?getEffect@WeaponFire@@QBEIXZ");
    todo("implement");
}

void WeaponFire::render(matrix4 &) // 0x4AA540
{
    mangled_assert("?render@WeaponFire@@UAEXAAVmatrix4@@@Z");
    todo("implement");
}

bool WeaponFire::update(float) // 0x4AA795
{
    mangled_assert("?update@WeaponFire@@UAE_NM@Z");
    todo("implement");
}

void WeaponFire::changedPosition() // 0x4A9F52
{
    mangled_assert("?changedPosition@WeaponFire@@UAEXXZ");
    todo("implement");
}

bool WeaponFire::ShouldIgnore(Sob *) // 0x4A9DD4
{
    mangled_assert("?ShouldIgnore@WeaponFire@@MAE_NPAVSob@@@Z");
    todo("implement");
}

void WeaponFire::calculateVisualHitNormal(vector3 const &, vector3 const &, vector3 &) // 0x4A9F37
{
    mangled_assert("?calculateVisualHitNormal@WeaponFire@@MAEXABVvector3@@0AAV2@@Z");
    todo("implement");
}

bool WeaponFire::hitsSob(Sob *, vector3 const &, vector3 const &) // 0x4AA2E4
{
    mangled_assert("?hitsSob@WeaponFire@@UAE_NPAVSob@@ABVvector3@@1@Z");
    todo("implement");
}

Weapon *WeaponFire::getParentWeapon() const // 0x4AA27C
{
    mangled_assert("?getParentWeapon@WeaponFire@@QBEPAVWeapon@@XZ");
    todo("implement");
}

void WeaponFire::computeNlips(Camera const &) // 0x4A9F7E
{
    mangled_assert("?computeNlips@WeaponFire@@QAEXABVCamera@@@Z");
    todo("implement");
}

Sob *wfSpawnMissile(Sob *pOwner, Player *player, char const *fireEvent, WeaponFireType type, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, vector3 const &initialPosition, matrix3 const &coordSystem, vector3 const &initialVelocity, WeaponStatic const *weaponStatic, WeaponTargetInfo const &target, vector3 const &positionToFlyTo) // 0x4AA7BD
{
    mangled_assert("?wfSpawnMissile@@YGPAVSob@@PAV1@PAVPlayer@@PBDW4WeaponFireType@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVvector3@@ABVmatrix3@@5PBVWeaponStatic@@ABVWeaponTargetInfo@@5@Z");
    todo("implement");
}

WeaponFire *wfSpawnWeaponFire(Sob *pOwner, Weapon *wOwner, HierarchyJoint *joint, char const *fireEvent, WeaponFireType type, char const *name, vector3 const &initialPosition, matrix3 const &coordSystem, WeaponStatic const *weaponStatic, WeaponTargetInfo const &target) // 0x4AA9C3
{
    mangled_assert("?wfSpawnWeaponFire@@YGPAVWeaponFire@@PAVSob@@PAVWeapon@@PAVHierarchyJoint@@PBDW4WeaponFireType@@3ABVvector3@@ABVmatrix3@@PBVWeaponStatic@@ABVWeaponTargetInfo@@@Z");
    todo("implement");
}

WeaponFire *wfSpawnWeaponFireWithoutWeapon(WeaponStatic const *weaponStatic, vector3 const &position, vector3 const &direction, matrix3 const &coordSys, __int32 ownerPlayerIndex) // 0x4AADF9
{
    mangled_assert("?wfSpawnWeaponFireWithoutWeapon@@YGPAVWeaponFire@@PBVWeaponStatic@@ABVvector3@@1ABVmatrix3@@H@Z");
    todo("implement");
}

void WeaponFireStatic::SetEffect(char const *, WeaponFireStatic::EffectTypes) // 0x4A9CB4
{
    mangled_assert("?SetEffect@WeaponFireStatic@@QAEXPBDW4EffectTypes@1@@Z");
    todo("implement");
}

void WeaponFireStatic::SetSound(char const *, WeaponFireStatic::EffectTypes) // 0x4A9D4D
{
    mangled_assert("?SetSound@WeaponFireStatic@@QAEXPBDW4EffectTypes@1@@Z");
    todo("implement");
}

void WeaponFireStatic::SetNlips(float, WeaponFireStatic::EffectTypes) // 0x4A9D37
{
    mangled_assert("?SetNlips@WeaponFireStatic@@QAEXMW4EffectTypes@1@@Z");
    todo("implement");
}

void WeaponFireStatic::SetFXScaleClamp(vector2 const &, WeaponFireStatic::EffectTypes) // 0x4A9D05
{
    mangled_assert("?SetFXScaleClamp@WeaponFireStatic@@QAEXABVvector2@@W4EffectTypes@1@@Z");
    todo("implement");
}

void WeaponFireStatic::SetFarMode(bool, WeaponFireStatic::EffectTypes) // 0x4A9D25
{
    mangled_assert("?SetFarMode@WeaponFireStatic@@QAEX_NW4EffectTypes@1@@Z");
    todo("implement");
}

bool WeaponFireStatic::LoadWeaponFire(char const *) // 0x4A966F
{
    mangled_assert("?LoadWeaponFire@WeaponFireStatic@@QAE_NPBD@Z");
    todo("implement");
}

void WeaponFireStatic::scarSob(Sob *, vector3 const &, vector3 const &, vector3 const &, float) const // 0x4AA648
{
    mangled_assert("?scarSob@WeaponFireStatic@@QBEXPAVSob@@ABVvector3@@11M@Z");
    todo("implement");
}

/* ---------- private code */

_static void findConnectedSobs(Sob *pSob, std::vector<Sob *,std::allocator<Sob *> > &connectedSobs) // 0x4AA141
{
    mangled_assert("findConnectedSobs");
    todo("implement");
}
#endif
