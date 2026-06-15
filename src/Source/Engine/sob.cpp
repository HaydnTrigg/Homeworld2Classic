#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\osdef.h>
#include <set>
#include <assist\stlexsmallvector.h>
#include <weaponTargetInfo.h>
#include <xstring>
#include <weaponstaticinfo.h>
#include <Player.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <WeaponClassSpecificInfo.h>
#include <ResearchManager.h>
#include <pch.h>
#include <NavLights.h>
#include <Render\objects\light.h>
#include <HyperspaceManager.h>
#include <Render\objects\objects.h>
#include <assist\stlexvector.h>
#include <SquadronList.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\matrix3.h>
#include <EngineTrailSystem.h>
#include <SobWithMeshStatic.h>
#include <SobRigidBodyStatic.h>
#include <ship.h>
#include <ShieldTypes.h>
#include <SobZeroMassBody.h>
#include <Render\gl\lotypes.h>
#include <new>
#include <Missile.h>
#include <sobzeromassbodystatic.h>
#include <exception>
#include <SobWithMesh.h>
#include <renderer.h>
#include <xstddef>
#include <GunBinding.h>
#include <SobRigidBody.h>
#include <type_traits>
#include <Universe.h>
#include <shipHold.h>
#include <Render\objects\stateblock\stateblock.h>
#include <Collision\Primitives\obb.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <Render\objects\texture.h>
#include <Collision\BVH\octree.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <Subsystems\HardPointManager.h>
#include <Render\objects\textureregistry.h>
#include <Collision\BVH\span.h>
#include <Render\gl\r_types.h>
#include <Subsystems\HardPoint.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Subsystems\HardPointStatic.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <xutility>
#include <Collision\primitivesfwd.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Modifiers\ModifierAbility.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <MissileStatic.h>
#include <gameRandom.h>
#include <MeshAnimation.h>
#include <Interpolation.h>
#include <math.h>
#include <EffectCreate.h>
#include <list>
#include <Collision\Primitives\aabb.h>
#include <sobid.h>
#include <Mathlib\vector3.h>
#include <resourceCommand.h>
#include <OrderFeedback.h>
#include <DynamicPoint.h>
#include <Mathlib\vector4.h>
#include <map>
#include <SobFactory.h>
#include <xtree>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <abilities.h>
#include <Modifiers\ModifierTargetCache.h>
#include <playerresourcetype.h>
#include <boost\cstdint.hpp>
#include <Render\objects\mesh.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <Render\objects\core.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <DockCommand.h>
#include <seInterface2\SoundParams.h>
#include <SoundManager\SoundEntityHandle.h>
#include <fog.h>
#include <Mathlib\quat.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <assist\typemagic.h>
#include <Squadron.h>
#include <ParadeCommand.h>
#include <Parade.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <random.h>
#include <savegameimpl.h>
#include <fixedpoint.h>
#include <Race.h>
#include <pathpoints.h>
#include <util\fixed.h>
#include <Subsystems\Subsystem.h>
#include <weaponinfo.h>
#include <debug\db.h>
#include <ITweak.h>
#include <command.h>
#include <commandtype.h>
#include <Tactics.h>
#include <dbdefines.h>
#include <Modifiers\ModifierUIInfo.h>
#include <deque>
#include <UnitCaps\UnitCaps.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Render\objects\stateblock\stateblocktypes.h>
#include <Modifiers\ModifierEffect.h>
#include <SOBGroupManager.h>
#include <BuildManager.h>
#include <boost\shared_ptr.hpp>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <util\colour.h>
#include <hash_map>
#include <fileio\iff.h>
#include <sobtypes.h>
#include <MultiplierTypes.h>
#include <boost\throw_exception.hpp>
#include <xhash>
#include <Collision\BVH\bvh.h>
#include <selection.h>
#include <ShaderVariables.h>
#include <savegamedef.h>
#include <util\dictionary.h>
#include <boost\detail\shared_count.hpp>
#include <util\utilexports.h>
#include <bitset>
#include <WeaponStatic.h>
#include <Render\objects\stateblock\statevariableinstance.h>
#include <boost\detail\lwm_win32.hpp>
#include <Modifiers\ModifierApplier.h>
#include <Subsystems\SubsystemStatic.h>
#include <weapon.h>
#include <Subsystems\SubSystemType.h>
#include <WeaponFire\WeaponFire.h>
#include <weaponfiretypes.h>
#include <sob.h>
#include <SimVis\SobVis.h>
#include <sobstatic.h>
#include <wchar.h>
#include <Collision\Primitives\sphere.h>
#include <profile\profile.h>
#include <iostream>
#include <queue>
#include <Collision\Collision.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <Render\objects\renderable.h>
#include <config.h>
#include <task.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern _inline void flagSet<unsigned int,int>(unsigned __int32 &mflagvar, __int32 const &mflag, bool a);
extern _inline void flagSet<unsigned int,unsigned int>(unsigned __int32 &mflagvar, unsigned __int32 const &mflag, bool a);
extern _inline void flagSet<unsigned int,enum SobDetFlags>(unsigned __int32 &mflagvar, SobDetFlags const &mflag, bool a);
extern _inline void flagSet<unsigned int,enum SobFlags>(unsigned __int32 &mflagvar, SobFlags const &mflag, bool a);
extern __int32 handle_hvmd(IFF *iff, IFFChunk *chunk, void *user0, void *user1);

/* ---------- globals */

extern char const Sob::m_saveToken[0]; // 0x78B7F0
extern char const *SobTypePath[0]; // 0x834B78
extern SaveData const Sob::m_saveData[13]; // 0x78B7F8

/* ---------- private variables */

/* ---------- public code */

_inline void flagSet<unsigned int,int>(unsigned __int32 &mflagvar, __int32 const &mflag, bool a) // 0x47743A
{
    mangled_assert("??$flagSet@IH@@YGXAAIABH_N@Z");
    todo("implement");
}

_inline void flagSet<unsigned int,unsigned int>(unsigned __int32 &mflagvar, unsigned __int32 const &mflag, bool a) // 0x477457
{
    mangled_assert("??$flagSet@II@@YGXAAIABI_N@Z");
    todo("implement");
}

_inline void flagSet<unsigned int,enum SobDetFlags>(unsigned __int32 &mflagvar, SobDetFlags const &mflag, bool a) // 0x477474
{
    mangled_assert("??$flagSet@IW4SobDetFlags@@@@YGXAAIABW4SobDetFlags@@_N@Z");
    todo("implement");
}

_inline void flagSet<unsigned int,enum SobFlags>(unsigned __int32 &mflagvar, SobFlags const &mflag, bool a) // 0x477491
{
    mangled_assert("??$flagSet@IW4SobFlags@@@@YGXAAIABW4SobFlags@@_N@Z");
    todo("implement");
}

Sob::Sob(SobType, char const *, bool) // 0x477686
{
    mangled_assert("??0Sob@@QAE@W4SobType@@PBD_N@Z");
    todo("implement");
}

void Sob::staticInit() // 0x4795F1
{
    mangled_assert("?staticInit@Sob@@QAEXXZ");
    todo("implement");
}

void Sob::sobVisInit() // 0x4795E4
{
    mangled_assert("?sobVisInit@Sob@@UAEXXZ");
    todo("implement");
}

Sob::Sob(SobType, SaveGameData *) // 0x477579
{
    mangled_assert("??0Sob@@QAE@W4SobType@@PAVSaveGameData@@@Z");
    todo("implement");
}

void Sob::postRestore() // 0x478E6C
{
    mangled_assert("?postRestore@Sob@@UAEXXZ");
    todo("implement");
}

void Sob::defaultSettings() // 0x478857
{
    mangled_assert("?defaultSettings@Sob@@QAEXXZ");
    todo("implement");
}

void Sob::sobDied() // 0x4795D0
{
    mangled_assert("?sobDied@Sob@@IAEXXZ");
    todo("implement");
}

void Sob::setDead(bool) // 0x4793D7
{
    mangled_assert("?setDead@Sob@@QAEX_N@Z");
    todo("implement");
}

void Sob::setHidden(bool) // 0x4793F1
{
    mangled_assert("?setHidden@Sob@@QAEX_N@Z");
    todo("implement");
}

void Sob::setInHyperspace(bool) // 0x479439
{
    mangled_assert("?setInHyperspace@Sob@@UAEX_N@Z");
    todo("implement");
}

void Sob::setSleepingFlag(bool) // 0x479543
{
    mangled_assert("?setSleepingFlag@Sob@@UAEX_N@Z");
    todo("implement");
}

void Sob::setInvincible(bool) // 0x47947D
{
    mangled_assert("?setInvincible@Sob@@QAEX_N@Z");
    todo("implement");
}

void Sob::setNISShip(bool) // 0x4794CF
{
    mangled_assert("?setNISShip@Sob@@QAEX_N@Z");
    todo("implement");
}

void Sob::setSelected(bool) // 0x47950F
{
    mangled_assert("?setSelected@Sob@@QAEX_N@Z");
    todo("implement");
}

void Sob::setSelecting(bool) // 0x479529
{
    mangled_assert("?setSelecting@Sob@@QAEX_N@Z");
    todo("implement");
}

void Sob::setMouseOver(bool) // 0x4794B5
{
    mangled_assert("?setMouseOver@Sob@@QAEX_N@Z");
    todo("implement");
}

void Sob::setInGroup(__int32, bool) // 0x479411
{
    mangled_assert("?setInGroup@Sob@@QAEXH_N@Z");
    todo("implement");
}

void Sob::setLocalFlag(unsigned __int32, bool) // 0x479497
{
    mangled_assert("?setLocalFlag@Sob@@QAEXI_N@Z");
    todo("implement");
}

bool Sob::isLocalFlagSet(unsigned __int32) const // 0x478D71
{
    mangled_assert("?isLocalFlagSet@Sob@@QBE_NI@Z");
    todo("implement");
}

void Sob::setCurrentHealth(float) // 0x479395
{
    mangled_assert("?setCurrentHealth@Sob@@QAEXM@Z");
    todo("implement");
}

void Sob::forceCurrentHealthTo(float) // 0x4788FB
{
    mangled_assert("?forceCurrentHealthTo@Sob@@QAEXM@Z");
    todo("implement");
}

void Sob::onHealthChange(float) // 0x478E4F
{
    mangled_assert("?onHealthChange@Sob@@MAEXM@Z");
    todo("implement");
}

void Sob::changedPosition() // 0x4787CA
{
    mangled_assert("?changedPosition@Sob@@UAEXXZ");
    todo("implement");
}

void Sob::jumpedPosition() // 0x478DAD
{
    mangled_assert("?jumpedPosition@Sob@@QAEXXZ");
    todo("implement");
}

void Sob::resetTransform(vector3 const &, matrix3 const &) // 0x4792EF
{
    mangled_assert("?resetTransform@Sob@@UAEXABVvector3@@ABVmatrix3@@@Z");
    todo("implement");
}

float Sob::getCurrentHealth() const // 0x478936
{
    mangled_assert("?getCurrentHealth@Sob@@QBEMXZ");
    todo("implement");
}

float Sob::getMaxHealth() const // 0x478961
{
    mangled_assert("?getMaxHealth@Sob@@UBEMXZ");
    todo("implement");
}

float Sob::getHealthRegenMultiplier() const // 0x478948
{
    mangled_assert("?getHealthRegenMultiplier@Sob@@UBEMXZ");
    todo("implement");
}

void Sob::regenerateHealth(float) // 0x479163
{
    mangled_assert("?regenerateHealth@Sob@@AAEXM@Z");
    todo("implement");
}

void Sob::doDeathEffects(char const *) // 0x478888
{
    mangled_assert("?doDeathEffects@Sob@@EAEXPBD@Z");
    todo("implement");
}

void Sob::kill() // 0x478DB5
{
    mangled_assert("?kill@Sob@@QAEXXZ");
    todo("implement");
}

void Sob::takeDamage(float, char const *, unsigned __int32, Sob::ReasonDied) // 0x4796C3
{
    mangled_assert("?takeDamage@Sob@@UAEXMPBDIW4ReasonDied@1@@Z");
    todo("implement");
}

void Sob::takeDamage(float, WeaponFire *) // 0x47967A
{
    mangled_assert("?takeDamage@Sob@@QAEXMPAVWeaponFire@@@Z");
    todo("implement");
}

void Sob::takeDamage(float, Missile *) // 0x47964A
{
    mangled_assert("?takeDamage@Sob@@QAEXMPAVMissile@@@Z");
    todo("implement");
}

float Sob::getSobDieTime() // 0x478B1F
{
    mangled_assert("?getSobDieTime@Sob@@MAEMXZ");
    todo("implement");
}

void Sob::makeDead(Sob::ReasonDied, unsigned __int32) // 0x478DE2
{
    mangled_assert("?makeDead@Sob@@UAEXW4ReasonDied@1@I@Z");
    todo("implement");
}

float Sob::increaseHealth(float) // 0x478CE1
{
    mangled_assert("?increaseHealth@Sob@@QAEMM@Z");
    todo("implement");
}

void Sob::enforceHealthBounds() // 0x4788AC
{
    mangled_assert("?enforceHealthBounds@Sob@@IAEXXZ");
    todo("implement");
}

Sob::~Sob() // 0x477833
{
    mangled_assert("??1Sob@@UAE@XZ");
    todo("implement");
}

_inline boost::shared_ptr<SobIDShared> &boost::shared_ptr<SobIDShared>::operator=(boost::shared_ptr<SobIDShared> const &) // 0x4778FA
{
    mangled_assert("??4?$shared_ptr@VSobIDShared@@@boost@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline SobID &SobID::operator=(SobID const &) // 0x477917
{
    mangled_assert("??4SobID@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void Sob::setNewborn(bool) // 0x4794EF
{
    mangled_assert("?setNewborn@Sob@@QAEX_N@Z");
    todo("implement");
}

void Sob::setZombie(bool) // 0x47959D
{
    mangled_assert("?setZombie@Sob@@AAEX_N@Z");
    todo("implement");
}

Volume *Sob::getVolumePtrSafe() // 0x478CA8
{
    mangled_assert("?getVolumePtrSafe@Sob@@QAEPAVVolume@@XZ");
    todo("implement");
}

WeaponFire *Sob::getWeaponFirePtr() // 0x478CB5
{
    mangled_assert("?getWeaponFirePtr@Sob@@QAEPAVWeaponFire@@XZ");
    todo("implement");
}

void Sob::setSobVis(SobVis *) // 0x47958D
{
    mangled_assert("?setSobVis@Sob@@QAEXPAVSobVis@@@Z");
    todo("implement");
}

__int32 handle_hvmd(IFF *iff, IFFChunk *chunk, void *user0, void *user1) // 0x478CC9
{
    mangled_assert("?handle_hvmd@@YGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
}

bool Sob::isSelected() const // 0x478D97
{
    mangled_assert("?isSelected@Sob@@QBE_NXZ");
    todo("implement");
}

bool Sob::isSelecting() const // 0x478DA1
{
    mangled_assert("?isSelecting@Sob@@QBE_NXZ");
    todo("implement");
}

bool Sob::isMouseOver() const // 0x478D84
{
    mangled_assert("?isMouseOver@Sob@@QBE_NXZ");
    todo("implement");
}

bool Sob::isInGroup(__int32) const // 0x478D4A
{
    mangled_assert("?isInGroup@Sob@@QBE_NH@Z");
    todo("implement");
}

void Sob::render(matrix4 &) // 0x479216
{
    mangled_assert("?render@Sob@@UAEXAAVmatrix4@@@Z");
    todo("implement");
}

bool Sob::update(float) // 0x47977A
{
    mangled_assert("?update@Sob@@UAE_NM@Z");
    todo("implement");
}

void Sob::reloadStats() // 0x4791EC
{
    mangled_assert("?reloadStats@Sob@@UAEXXZ");
    todo("implement");
}

void Sob::validateZoomDistance(float &) const // 0x479790
{
    mangled_assert("?validateZoomDistance@Sob@@QBEXAAM@Z");
    todo("implement");
}

void Sob::UpdateBoundingVolumes() // 0x478481
{
    mangled_assert("?UpdateBoundingVolumes@Sob@@AAEXXZ");
    todo("implement");
}

vector3 const &Sob::getInterpolatedGeometricCenter() const // 0x478952
{
    mangled_assert("?getInterpolatedGeometricCenter@Sob@@QBEABVvector3@@XZ");
    todo("implement");
}

float Sob::getSeperationDistance(Sob const *) const // 0x478A79
{
    mangled_assert("?getSeperationDistance@Sob@@QBEMPBV1@@Z");
    todo("implement");
}

SobWithMesh *Sob::getSobMeshPtr() // 0x478B29
{
    mangled_assert("?getSobMeshPtr@Sob@@UAEPAVSobWithMesh@@XZ");
    todo("implement");
}

Missile *Sob::getMissilePtr() // 0x478986
{
    mangled_assert("?getMissilePtr@Sob@@QAEPAVMissile@@XZ");
    todo("implement");
}

Ship *Sob::getShipPtr() // 0x478B13
{
    mangled_assert("?getShipPtr@Sob@@QAEPAVShip@@XZ");
    todo("implement");
}

SubSystem *Sob::getSubSystemPtr() // 0x478B2F
{
    mangled_assert("?getSubSystemPtr@Sob@@QAEPAVSubSystem@@XZ");
    todo("implement");
}

vector3 Sob::getVelocityOfBSPosition(vector3 const &) const // 0x478B7B
{
    mangled_assert("?getVelocityOfBSPosition@Sob@@UBE?AVvector3@@ABV2@@Z");
    todo("implement");
}

vector3 Sob::getPositionOfBSPosition(vector3 const &) const // 0x4789AD
{
    mangled_assert("?getPositionOfBSPosition@Sob@@QBE?AVvector3@@ABV2@@Z");
    todo("implement");
}

vector3 Sob::predictIntersectionPointWithTarget(Sob const *) const // 0x478EC3
{
    mangled_assert("?predictIntersectionPointWithTarget@Sob@@QBE?AVvector3@@PBV1@@Z");
    todo("implement");
}

vector3 Sob::predictIntersectionPointWithTarget(vector3 const &trackerPos, vector3 const &trackerVelocity, float trackerMaxSpeed, vector3 const &targetPos, vector3 const &targetVelocity) // 0x478F2A
{
    mangled_assert("?predictIntersectionPointWithTarget@Sob@@SG?AVvector3@@ABV2@0M00@Z");
    todo("implement");
}

bool Sob::HasRigidBody() // 0x477C1A
{
    mangled_assert("?HasRigidBody@Sob@@UAE_NXZ");
    todo("implement");
}

void Sob::CreateCollisionProxies() // 0x477A87
{
    mangled_assert("?CreateCollisionProxies@Sob@@AAEXXZ");
    todo("implement");
}

void Sob::UpdateCollisionProxies() // 0x47865D
{
    mangled_assert("?UpdateCollisionProxies@Sob@@MAEXXZ");
    todo("implement");
}

void Sob::UpdateAvoidanceCapsule() // 0x477D0C
{
    mangled_assert("?UpdateAvoidanceCapsule@Sob@@AAEXXZ");
    todo("implement");
}

void Sob::RemoveAllSimData() // 0x477C1D
{
    mangled_assert("?RemoveAllSimData@Sob@@IAEXXZ");
    todo("implement");
}

void Sob::RemoveFromSimulation() // 0x477C51
{
    mangled_assert("?RemoveFromSimulation@Sob@@MAEXXZ");
    todo("implement");
}

void Sob::makeZombie() // 0x478E01
{
    mangled_assert("?makeZombie@Sob@@QAEXXZ");
    todo("implement");
}

bool Sob::releaseMesh() // 0x4791DD
{
    mangled_assert("?releaseMesh@Sob@@QAE_NXZ");
    todo("implement");
}

void Sob::RemoveObserver(Selection *) // 0x477C56
{
    mangled_assert("?RemoveObserver@Sob@@QAEXPAVSelection@@@Z");
    todo("implement");
}

void Sob::getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const // 0x478B3C
{
    mangled_assert("?getTargetOnSob@Sob@@UBEXABVvector3@@AAV2@1M@Z");
    todo("implement");
}

void Sob::saveSobVis(void *objectPtr, SaveGameData *saveGameData, SaveType savetype) // 0x477330
{
    mangled_assert("?saveSobVis@Sob@@SGXPAXPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

void Sob::restoreSobVis(void *objectPtr, SaveGameData *saveGameData) // 0x477347
{
    mangled_assert("?restoreSobVis@Sob@@SGXPAXPAVSaveGameData@@@Z");
    todo("implement");
}

Visibility *Sob::getVisibility() // 0x478CA1
{
    mangled_assert("?getVisibility@Sob@@UAEPAVVisibility@@XZ");
    todo("implement");
}

void Sob::clearCloaking() // 0x4787DD
{
    mangled_assert("?clearCloaking@Sob@@UAEXXZ");
    todo("implement");
}

bool Sob::computeFogColour(vector4 &) const // 0x4787E9
{
    mangled_assert("?computeFogColour@Sob@@QBE_NAAVvector4@@@Z");
    todo("implement");
}

bool Sob::restore(SaveGameData *) // 0x479313
{
    mangled_assert("?restore@Sob@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool Sob::save(SaveGameData *, SaveType) // 0x479351
{
    mangled_assert("?save@Sob@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
