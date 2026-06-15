#if 0
/* ---------- headers */

#include "decomp.h"
#include <Collision\Collision.h>
#include <weaponTargetInfo.h>
#include <set>
#include <assist\stlexsmallvector.h>
#include <Universe.h>
#include <Waypoint.h>
#include <xstring>
#include <SobUnmoveable.h>
#include <MoveToSobCommand.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <boost\shared_array.hpp>
#include <BuildManager.h>
#include <pch.h>
#include <SensorPingManager.h>
#include <Subsystems\SubsystemStatic.h>
#include <RetireCommand.h>
#include <Sob\Resource\SalvageStatic.h>
#include <FormHyperspaceGateCommand.h>
#include <weaponinfo.h>
#include <Camera\OrbitParameters.h>
#include <Mathlib\matrix3.h>
#include <DynamicPoint.h>
#include <Squadron.h>
#include <DefenseFieldShieldStatic.h>
#include <OrderFeedback.h>
#include <new>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <exception>
#include <resourceCommand.h>
#include <HyperspaceManager.h>
#include <xstddef>
#include <Modifiers\ModifierAbility.h>
#include <Collision\BVH\Internal\span_i.h>
#include <command.h>
#include <SquadronList.h>
#include <RepairByLatchingCommand.h>
#include <type_traits>
#include <Collision\BVH\proxy.h>
#include <SobZeroMassBody.h>
#include <Ship\FormationTargetInfo.h>
#include <Collision\intersect.h>
#include <TacticalOverlay.h>
#include <Collision\primitivesfwd.h>
#include <hash_map>
#include <sobzeromassbodystatic.h>
#include <DockCommand.h>
#include <xhash>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <fileio\filepath.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <LayMinesCommand.h>
#include <HyperspaceInhibitorManager.h>
#include <profile\profile.h>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <iostream>
#include <Interpolation.h>
#include <Player.h>
#include <Sob\DustCloud\DustCloudStatic.h>
#include <GuardCommand.h>
#include <ResearchManager.h>
#include <SalvageCommand.h>
#include <sobstatic.h>
#include <SobPointMassStatic.h>
#include <TrailTargetCommand.h>
#include <Collision\Primitives\sphere.h>
#include <Collision\Primitives\aabb.h>
#include <SoundManager\SoundManager.h>
#include <ship.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <math.h>
#include <SobWithMesh.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <SobRigidBody.h>
#include <list>
#include <sob.h>
#include <DefenseFieldManager.h>
#include <sobid.h>
#include <MADState.h>
#include <ShieldTypes.h>
#include <platform\timer.h>
#include <shipHold.h>
#include <Mathlib\vector3.h>
#include <platform\platformexports.h>
#include <Mathlib\vector4.h>
#include <Render\FxGL\FXManager.h>
#include <map>
#include <Render\FxGL\VarMulti.h>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <Ship\Formation.h>
#include <Tactics.h>
#include <boost\scoped_ptr.hpp>
#include <Ship\FormationPattern.h>
#include <Mathlib\compressednormal.h>
#include <CaptureCommand.h>
#include <abilities.h>
#include <Sob\Pebble\PebbleStatic.h>
#include <Mathlib\vector2.h>
#include <scripting.h>
#include <util\types.h>
#include <scriptaccess.h>
#include <weaponstaticinfo.h>
#include <scripttypedef.h>
#include <GunBinding.h>
#include <SelTarg.h>
#include <Modifiers\ModifierTargetCache.h>
#include <CaptureManager.h>
#include <prim.h>
#include <LatchPointManager.h>
#include <boost\cstdint.hpp>
#include <lua.h>
#include <Family.h>
#include <Collision\Primitives\obb.h>
#include <MoveCommand.h>
#include <Collision\Primitives\capsule.h>
#include <seInterface2\SampleID.h>
#include <boost\scoped_array.hpp>
#include <Collision\Primitives\segment.h>
#include <seInterface2\SampleBase.h>
#include <Collision\BVH\profiling.h>
#include <Mathlib\quat.h>
#include <Subsystems\HardPointManager.h>
#include <CloakManager.h>
#include <MeshAnimation.h>
#include <Subsystems\HardPoint.h>
#include <Subsystems\HardPointStatic.h>
#include <Subsystems\SubSystemType.h>
#include <Interface.h>
#include <SOBGroupManager.h>
#include <assist\typemagic.h>
#include <WeaponClassSpecificInfo.h>
#include <RepairManager.h>
#include <Sob\Cloud\CloudStatic.h>
#include <AttackCommand.h>
#include <SensorsManager.h>
#include <AttackStyle.h>
#include <Modifiers\ModifierUIInfo.h>
#include <Render\gl\r_types.h>
#include <Ship\FlightManeuverManager.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\matvec.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Mathlib\fastmath.h>
#include <ITweak.h>
#include <Modifiers\ModifierEffect.h>
#include <ParadeCommand.h>
#include <Modifiers\ModifierInfluenceType.h>
#include <Parade.h>
#include <MainUI.h>
#include <shipstatic.h>
#include <Selector.h>
#include <Render\gl\r_defines.h>
#include <pathpoints.h>
#include <SobWithMeshStatic.h>
#include <config.h>
#include <MetaSelTarg.h>
#include <Render\gl\glext.h>
#include <debug\db.h>
#include <SobRigidBodyStatic.h>
#include <Modifiers\ModifierApplier.h>
#include <visibility.h>
#include <HyperSpaceCommand.h>
#include <deque>
#include <MultiplierContainer.h>
#include <HyperSpaceBaseCommand.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <HyperSpaceViaGateCommand.h>
#include <Modifiers\ModifierActivityRelation.h>
#include <BuildQueueStatic.h>
#include <Mathlib\mathutil.h>
#include <util\colour.h>
#include <Sob\Nebula\NebulaStatic.h>
#include <boost\shared_ptr.hpp>
#include <seInterface2\sedefinesshared.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <dbdefines.h>
#include <ParadeManager.h>
#include <selection.h>
#include <LaunchCommand.h>
#include <BuildQueue.h>
#include <UnitCaps\UnitCaps.h>
#include <savegamedef.h>
#include <BuildData.h>
#include <SalvageManager.h>
#include <boost\detail\shared_count.hpp>
#include <TeamColourRegistry.h>
#include <DependencyData.h>
#include <bitset>
#include <savegame.h>
#include <boost\detail\lwm_win32.hpp>
#include <task.h>
#include <fixedpoint.h>
#include <WeaponStatic.h>
#include <commandtype.h>
#include <util\fixed.h>
#include <FamilyListMgr.h>
#include <App\Hw2Identify.h>
#include <playerresourcetype.h>
#include <waypointMoveCommand.h>
#include <FamilyList.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SoundParams.h>
#include <weapon.h>
#include <WeaponFire\WeaponFire.h>
#include <SoundManager\SoundEntityHandle.h>
#include <weaponfiretypes.h>
#include <sctObjectLoad.h>
#include <stack>
#include <platform\sysutilinterface.h>
#include <localizer\localizer.h>
#include <wchar.h>
#include <string>
#include <Race.h>
#include <Sob\Resource\AsteroidStatic.h>
#include <MissileStatic.h>
#include <queue>
#include <Sob\Resource\ResourceStatic.h>
#include <HierarchyStatic.h>
#include <Decal\DecalRefMesh.h>
#include <algorithm>
#include <Collision\Primitives\mesh.h>
#include <Collision\Primitives\triangle.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern __int32 solStartShipConfig(lua_State *lstate);
extern __int32 solStartMissileConfig(lua_State *lstate);
extern __int32 solStartAsteroidConfig(lua_State *lstate);
extern __int32 solStartSalvageConfig(lua_State *lstate);
extern __int32 solStartDustCloudConfig(lua_State *lstate);
extern __int32 solStartCloudConfig(lua_State *lstate);
extern __int32 solStartPebbleConfig(lua_State *lstate);
extern __int32 solStartNebulaConfig(lua_State *lstate);
extern char const *sctSafeGetString(unsigned __int32 num, char const *errormsg);
extern float sctSafeGetReal32(unsigned __int32 num, char const *errormsg);
extern float sctSafeGetAngle(unsigned __int32 num, char const *errormsg);
extern float sctSafeGetCosAng(unsigned __int32 num, char const *errormsg);
extern bool sctSafeGetBool(unsigned __int32 num, char const *errormsg);
extern unsigned __int32 sctSafeGetUdword(unsigned __int32 num, char const *errormsg);
extern unsigned __int32 sctSafeGetSdword(unsigned __int32 num, char const *errormsg);
extern __int32 solLoadHODFile(lua_State *lstate);
extern __int32 solLoadModel(lua_State *lstate);
extern __int32 solLoadSharedModel(lua_State *lstate);
extern void loadMainGunJoint(WeaponStatic *ws, WeaponClassSpecificInfo *wcsi, HierarchyStatic *hierarchy, char const *shipName);
extern bool loadGunBindingJoint(GunBinding &binding, char const *jointName, HierarchyStatic &hierarchy);
extern void bindWeapon(WeaponStaticInfo &wsi, HierarchyStatic &hierarcyStatic, WeaponClassSpecificInfo *wcsi, WeaponStatic *ws, char const *shipName);
extern void bindWeaponRecoil(WeaponStaticInfo &wsi, HierarchyStatic &hierarcyStatic, WeaponClassSpecificInfo *wcsi, WeaponStatic *ws, char const *shipName);
extern __int32 solStartShipWeaponConfig(lua_State *lstate);
extern __int32 solStartSubSystemWeaponConfig(lua_State *lstate);
extern __int32 solAddShield(lua_State *lstate);
extern __int32 solStartWeaponConfig(lua_State *lstate);
extern __int32 solSpawnSalvageOnDeath(lua_State *lstate);
extern __int32 solSpawnDustCloudOnDeath(lua_State *lstate);
extern __int32 solAddWeaponResult(lua_State *lstate);
extern __int32 solSetPenetration(lua_State *lstate);
extern __int32 solSetAccuracy(lua_State *lstate);
extern __int32 solSetAngles(lua_State *lstate);
extern __int32 solSetMiscValues(lua_State *lstate);
extern void loadHardPointCoordSys(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &jointName, HierarchyStatic *hierarchy, vector3 &outPosition, matrix3 &outMatrix, char const *shipName);
extern __int32 solStartShipHardPointConfig(lua_State *lstate);
extern __int32 solSetDisplayedName(lua_State *lstate);
extern __int32 solSetSobDescription(lua_State *lstate);
extern __int32 solSetBlobName(lua_State *lstate);
extern __int32 solSetBlobNamePriority(lua_State *lstate);
extern __int32 solSetAttackFamily(lua_State *lstate);
extern __int32 solSetTOIcon(lua_State *lstate);
extern __int32 solSetSpawnShipOnDeath(lua_State *lstate);
extern __int32 solSetMissileWeaponName(lua_State *lstate);
extern __int32 solSetSubMunitionName(lua_State *lstate);
extern __int32 solSetControllerType(lua_State *lstate);
extern __int32 solSetStaticParadeData(lua_State *lstate);
extern __int32 setSpecialManeuver(lua_State *lstate, std::vector<unsigned int,std::allocator<unsigned int> > &maneuvers);
extern __int32 solSetMirrorBelowManeuver(lua_State *lstate);
extern __int32 solSetMirrorAboveManeuver(lua_State *lstate);
extern __int32 solSetSpecialTurnLeftManeuver(lua_State *lstate);
extern __int32 solSetSpecialTurnRightManeuver(lua_State *lstate);
extern __int32 solSetSpecialTurnDownManeuver(lua_State *lstate);
extern __int32 solSetSpecialTurnUpManeuver(lua_State *lstate);
extern __int32 solSetDockFormation(lua_State *lstate);
extern __int32 solSetQueueFormation(lua_State *lstate);
extern __int32 solSetPassiveFormation(lua_State *lstate);
extern __int32 solSetDefensiveFormation(lua_State *lstate);
extern __int32 solSetAggressiveFormation(lua_State *lstate);
extern __int32 solSetLaunchFormation(lua_State *lstate);
extern __int32 solSetMinimalFamilyToFindPathAround(lua_State *lstate);
extern __int32 solSetm_relativeMoveFactor(lua_State *lstate);
extern __int32 solSetSMRepresentation(lua_State *lstate);
extern __int32 solSetm_resourceValue(lua_State *lstate);
extern __int32 solSetm_blobRadius(lua_State *lstate);
extern __int32 solSetm_maxVelocity(lua_State *lstate);
extern __int32 solSetm_maxAngularVelocity(lua_State *lstate);
extern __int32 solSetm_linearFriction(lua_State *lstate);
extern __int32 solSetm_angularFriction(lua_State *lstate);
extern __int32 solSetm_pixelSize(lua_State *lstate);
extern __int32 solSetm_pixelColour(lua_State *lstate);
extern __int32 solSetm_pixelColourDepleted(lua_State *lstate);
extern __int32 solSetm_salvageSpeedFraction(lua_State *lstate);
extern __int32 solSetPebblem_pixelSize(lua_State *lstate);
extern __int32 solSetPebblem_pixelColour(lua_State *lstate);
extern __int32 solSetPebblem_smFadeDistance(lua_State *lstate);
extern __int32 solSetPebblem_smFadeMinAlpha(lua_State *lstate);
extern __int32 solSetPebblem_smPixelSize(lua_State *lstate);
extern __int32 solSetChargeable(lua_State *lstate);
extern __int32 solSetDustCloudDamageMultiplier(lua_State *lstate);
extern __int32 solSetLightningEffectName(lua_State *lstate);
extern __int32 solSetChargedLightningEffectName(lua_State *lstate);
extern __int32 solSetSSSm_typeString(lua_State *lstate);
extern __int32 solSetmaxHealth(lua_State *lstate);
extern __int32 solSetm_sobDieTime(lua_State *lstate);
extern __int32 solSetm_deadSobFadeTime(lua_State *lstate);
extern __int32 solSetm_HealthRegenerateTime(lua_State *lstate);
extern __int32 solSetm_minHealthRegenerateTime(lua_State *lstate);
extern __int32 solSetm_TOScale(lua_State *lstate);
extern __int32 solSetm_TODistanceFade0(lua_State *lstate);
extern __int32 solSetm_TODistanceDisappear0(lua_State *lstate);
extern __int32 solSetm_TODistanceFade1(lua_State *lstate);
extern __int32 solSetm_TODistanceDisappear1(lua_State *lstate);
extern __int32 solSetm_TODistanceFade2(lua_State *lstate);
extern __int32 solSetm_TODistanceDisappear2(lua_State *lstate);
extern __int32 solSetm_TOGroupScale(lua_State *lstate);
extern __int32 solSetm_TOGroupMergeSize(lua_State *lstate);
extern __int32 solSetm_moMinFadeSize(lua_State *lstate);
extern __int32 solSetm_moMaxFadeSize(lua_State *lstate);
extern __int32 solSetm_healthBarStyle(lua_State *lstate);
extern __int32 solSetm_battleScarMaxTriBase(lua_State *lstate);
extern __int32 solSetm_battleScarMaxTriInc(lua_State *lstate);
extern __int32 solSetm_SMHighlightDistMin(lua_State *lstate);
extern __int32 solSetm_SMHighlightDistMax(lua_State *lstate);
extern __int32 solSetnlips(lua_State *lstate);
extern __int32 solSetnlipsRange(lua_State *lstate);
extern __int32 solSetnlipsFar(lua_State *lstate);
extern __int32 solSetnlipsFarRange(lua_State *lstate);
extern __int32 solSetminimumZoomFactor(lua_State *lstate);
extern __int32 solSetm_meshRenderLimit(lua_State *lstate);
extern __int32 solSetm_dotRenderLimit(lua_State *lstate);
extern __int32 solSetm_visibleInSecondary(lua_State *lstate);
extern __int32 solSetm_selectionPriority(lua_State *lstate);
extern __int32 solSetm_minLOD(lua_State *lstate);
extern __int32 solSetm_detailLevel(lua_State *lstate);
extern __int32 solSetm_attackFamilyIndex(lua_State *lstate);
extern __int32 solSetm_dockFamilyIndex(lua_State *lstate);
extern __int32 solSetm_buildFamilyIndex(lua_State *lstate);
extern __int32 solSetm_avoidanceFamilyIndex(lua_State *lstate);
extern __int32 solSetm_collisionFamilyIndex(lua_State *lstate);
extern __int32 solSetm_displayFamilyIndex(lua_State *lstate);
extern __int32 solSetm_autoFormationFamilyIndex(lua_State *lstate);
extern __int32 solSetm_armourFamilyIndex(lua_State *lstate);
extern __int32 solSetm_ucFamilyIndex(lua_State *lstate);
extern __int32 solSetm_ucShipTypeIndex(lua_State *lstate);
extern __int32 solSetm_preciseSelectionLimit(lua_State *lstate);
extern __int32 solSetm_preciseATILimit(lua_State *lstate);
extern __int32 solSetm_selectionLimit(lua_State *lstate);
extern __int32 solSetm_selectionSizeMin(lua_State *lstate);
extern __int32 solSetm_selectionSizeMax(lua_State *lstate);
extern __int32 solSetSRBm_mass(lua_State *lstate);
extern __int32 solSetSPMm_mass(lua_State *lstate);
extern __int32 solSetm_nSquadronSize(lua_State *lstate);
extern __int32 solSetm_sideArmourDamage(lua_State *lstate);
extern __int32 solSetm_rearArmourDamage(lua_State *lstate);
extern __int32 solSetm_buildCost(lua_State *lstate);
extern __int32 solSetm_buildTime(lua_State *lstate);
extern __int32 solSetm_fighterValue(lua_State *lstate);
extern __int32 solSetm_corvetteValue(lua_State *lstate);
extern __int32 solSetm_frigateValue(lua_State *lstate);
extern __int32 solSetm_neutralValue(lua_State *lstate);
extern __int32 solSetm_antiFighterValue(lua_State *lstate);
extern __int32 solSetm_antiCorvetteValue(lua_State *lstate);
extern __int32 solSetm_antiFrigateValue(lua_State *lstate);
extern __int32 solSetm_sobSpecialDieTime(lua_State *lstate);
extern __int32 solSetm_specialDeathSpeed(lua_State *lstate);
extern __int32 solSetm_chanceOfSpecialDeath(lua_State *lstate);
extern __int32 solSetm_useTargetRandom(lua_State *lstate);
extern __int32 solSetm_targetRandomPointXMin(lua_State *lstate);
extern __int32 solSetm_targetRandomPointXMax(lua_State *lstate);
extern __int32 solSetm_targetRandomPointYMin(lua_State *lstate);
extern __int32 solSetm_targetRandomPointYMax(lua_State *lstate);
extern __int32 solSetm_targetRandomPointZMin(lua_State *lstate);
extern __int32 solSetm_targetRandomPointZMax(lua_State *lstate);
extern __int32 solSetm_formationSwayUpdateTime(lua_State *lstate);
extern __int32 solSetm_formationSwayOffsetRandomX(lua_State *lstate);
extern __int32 solSetm_formationSwayOffsetRandomY(lua_State *lstate);
extern __int32 solSetm_formationSwayOffsetRandomZ(lua_State *lstate);
extern __int32 solSetm_formationSwayBobbingFactor(lua_State *lstate);
extern __int32 solSetm_formationSwayRotateFactor(lua_State *lstate);
extern __int32 solSetm_slideMoveRange(lua_State *lstate);
extern __int32 solSetm_dontDockWithOtherRaceShips(lua_State *lstate);
extern __int32 solSetm_ignoreRaceWhenDocking(lua_State *lstate);
extern __int32 solSetm_bShipHoldActive(lua_State *lstate);
extern __int32 solSetm_nbRestrictedHardpoints(lua_State *lstate);
extern __int32 solSetm_thrusterAccelTime(lua_State *lstate);
extern __int32 solSetm_mainEngineAccelTime(lua_State *lstate);
extern __int32 solSetm_rotationAccelTime(lua_State *lstate);
extern __int32 solSetm_thrusterBrakeTime(lua_State *lstate);
extern __int32 solSetm_mainEngineBrakeTime(lua_State *lstate);
extern __int32 solSetm_rotationBrakeTime(lua_State *lstate);
extern __int32 solSetm_tumbleStaticX(lua_State *lstate);
extern __int32 solSetm_tumbleStaticY(lua_State *lstate);
extern __int32 solSetm_tumbleStaticZ(lua_State *lstate);
extern __int32 solSetm_tumbleDynamicX(lua_State *lstate);
extern __int32 solSetm_tumbleDynamicY(lua_State *lstate);
extern __int32 solSetm_tumbleDynamicZ(lua_State *lstate);
extern __int32 solSetm_tumbleSpecialDynamicX(lua_State *lstate);
extern __int32 solSetm_tumbleSpecialDynamicY(lua_State *lstate);
extern __int32 solSetm_tumbleSpecialDynamicZ(lua_State *lstate);
extern __int32 solSetm_dockQueueSelectionQueueMultiplier(lua_State *lstate);
extern __int32 solSetm_dockQueueSelectionOccupiedMultiplier(lua_State *lstate);
extern __int32 solSetm_thrusterMaxSpeed(lua_State *lstate);
extern __int32 solSetm_mainEngineMaxSpeed(lua_State *lstate);
extern __int32 solSetm_rotationMaxSpeed(lua_State *lstate);
extern __int32 solSetm_cosAccelerationAngle(lua_State *lstate);
extern __int32 solSetm_addedAngleMin(lua_State *lstate);
extern __int32 solSetm_addedAngleMax(lua_State *lstate);
extern __int32 solSetShipDustCloudDamageTime(lua_State *lstate);
extern __int32 solSetShipNebulaDamageTime(lua_State *lstate);
extern __int32 solSetm_targetAngle(lua_State *lstate);
extern __int32 solSetNebulaDamageMultiplier(lua_State *lstate);
extern __int32 solSetm_clusterRadiansAngle(lua_State *lstate);
extern __int32 solSetm_thrusterUsage(lua_State *lstate);
extern __int32 solSetm_descendPitch(lua_State *lstate);
extern __int32 solSetm_maxBankingAmount(lua_State *lstate);
extern __int32 solSetm_goalReachEpsilon(lua_State *lstate);
extern __int32 solSetformationSpacing(lua_State *lstate);
extern __int32 solSetm_dockTimeBetweenTwoFormations(lua_State *lstate);
extern __int32 solSetm_dockTimeBeforeStart(lua_State *lstate);
extern __int32 solSetm_dockNrOfShipsInDockFormation(lua_State *lstate);
extern __int32 solSetm_launchTimeBetweenTwoFormations(lua_State *lstate);
extern __int32 solSetm_launchTimeBeforeStart(lua_State *lstate);
extern __int32 solSetm_launchNrOfShipsInDockFormation(lua_State *lstate);
extern __int32 solSetm_retaliationRange(lua_State *lstate);
extern __int32 solSetm_visualRange(lua_State *lstate);
extern __int32 solSetm_prmSensorRange(lua_State *lstate);
extern __int32 solSetm_secSensorRange(lua_State *lstate);
extern __int32 solSetm_baseCloakDetectionLevel(lua_State *lstate);
extern __int32 solSetm_retaliationDistanceFromGoal(lua_State *lstate);
extern __int32 solSetm_bTransferable(lua_State *lstate);
extern __int32 solSetm_isMilitary(lua_State *lstate);
extern __int32 solSetm_kamikazeCollisionDamageMultiplier(lua_State *lstate);
extern __int32 solSetSSSm_collateralDamage(lua_State *lstate);
extern __int32 solSetSSSm_inactiveTimeAfterDamage(lua_State *lstate);
extern __int32 solSetSSSm_activateHealthPercentage(lua_State *lstate);
extern __int32 solSetSSSm_costToBuild(lua_State *lstate);
extern __int32 solSetSSSm_timeToBuild(lua_State *lstate);
extern __int32 solSetSSSm_isResearch(lua_State *lstate);
extern __int32 solSetSSSm_visible(lua_State *lstate);
extern __int32 solSetSSSm_bInnate(lua_State *lstate);
extern __int32 solSetm_lifeTime(lua_State *lstate);
extern __int32 solSetm_clusterSeparationDistance(lua_State *lstate);
extern __int32 solSetm_numberOfClusterMunitionsToSpawn(lua_State *lstate);
extern __int32 solSetm_detectionDistance(lua_State *lstate);
extern __int32 solSetm_launchTime(lua_State *lstate);
extern __int32 solSetm_proximityDetonationDistance(lua_State *lstate);
extern __int32 solSetm_slowdownFactor(lua_State *lstate);
extern __int32 solSetm_tumbleSpeed(lua_State *lstate);
extern __int32 solSetm_trackingSpeedMultiplier(lua_State *lstate);
extern void translateMultiplier(lua_State *lstate, MultiplierType &multType, InfluenceType &inflType, ActivityRelation &actRel, float &multHigh, float &multLow, float &sphereRadius, char const *shipName);
extern void translateAbility(lua_State *lstate, AbilityType &abilityType, InfluenceType &inflType, float &sphereRadius, char const *shipName, bool &enable);
extern __int32 solAddSubSystemMultiplier(lua_State *lstate);
extern __int32 solAddSubSystemAbility(lua_State *lstate);
extern __int32 solAddNebulaMultiplier(lua_State *lstate);
extern __int32 solAddNebulaAbility(lua_State *lstate);
extern __int32 solAddShipMultiplier(lua_State *lstate);
extern __int32 solAddShipAbility(lua_State *lstate);
extern __int32 solSetSSSType(lua_State *lstate);
extern __int32 solSetBuildPriorityOrder(lua_State *lstate);
extern __int32 solSetaccelerationAngle(lua_State *state);
extern __int32 solSetmirrorAngle(lua_State *state);
extern __int32 solSetSecondaryTurnAngle(lua_State *state);
extern void solAddHarvest(ShipStatic *staticptr);
extern void solAddShipHold(ShipStatic *staticptr);
extern void solAddCanBuildShips(ShipStatic *staticptr);
extern void solAddCanBeSalvaged(ShipStatic *staticptr);
extern void solAddCanBeCaptured(ShipStatic *staticptr);
extern void solAddCanBeRepaired(ShipStatic *staticptr);
extern void solAddCanRepairByLatching(ShipStatic *staticptr);
extern void solAddCanLaunch(ShipStatic *staticptr);
extern void solAddCanDock(ShipStatic *staticptr);
extern void solAddMoveCommand(ShipStatic *staticptr);
extern void solAddGuardCommand(ShipStatic *staticptr);
extern void solAddCaptureCommand(ShipStatic *staticptr);
extern void solAddSalvageCommand(ShipStatic *staticptr);
extern void solAddHyperSpaceCommand(ShipStatic *staticptr);
extern void solAddHyperSpaceViaGateCommand(ShipStatic *staticptr);
extern void solAddFormHyperspaceGateCommand(ShipStatic *staticptr);
extern void solAddCanAttack(ShipStatic *staticptr);
extern void solAddWaypointMove(ShipStatic *staticptr);
extern void solAddParadeCommand(ShipStatic *staticptr);
extern void solAddSensorPing(ShipStatic *staticptr);
extern void solAddCloaking(ShipStatic *staticptr);
extern void solAddDefenseField(ShipStatic *staticptr);
extern void solAddDefenseFieldShield(ShipStatic *staticptr);
extern void solAddHyperspaceInhibitor(ShipStatic *staticptr);
extern void solAddRetire(ShipStatic *staticptr);
extern void solAddSpecialAttack(ShipStatic *staticptr);
extern void solAddMinelayingAbility(ShipStatic *staticptr);
extern void solAbilityCheck(ShipStatic *staticptr, unsigned __int32 ability, char *name);
extern __int32 solAddAbility(lua_State *lstate);
extern void solPrecacheWeaponResults(std::vector<WeaponResult,std::allocator<WeaponResult> > const &wrList);
extern void solReloadSobStatic();
extern bool solLoadWeapon(WeaponStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern bool solLoadShip(ShipStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern bool solLoadMissile(MissileStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern bool solLoadResource(ResourceStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobType type);
extern bool solLoadAsteroid(AsteroidStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern bool solLoadSalvage(SalvageStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern bool solLoadDustCloud(DustCloudStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern bool solLoadCloud(CloudStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern bool solLoadPebble(PebbleStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern bool solLoadNebula(NebulaStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
extern __int32 solSetUpLOD(lua_State *lstate);
extern __int32 solSetDownLOD(lua_State *lstate);
extern __int32 solSetgoblinsOff(lua_State *lstate);
extern __int32 solSetAlwaysInRenderList(lua_State *lstate);
extern __int32 solSetgoblinsStartFade(lua_State *lstate);
extern __int32 solSetCanHaveFog(lua_State *lstate);
extern __int32 solSetCanHaveShadows(lua_State *lstate);
extern __int32 solSetCanBlink(lua_State *lstate);
extern __int32 solSetAlternativeHyperspaceEffectV(lua_State *lstate);
extern __int32 solSetAlternativeHyperspaceEffectA(lua_State *lstate);
extern __int32 solSetAlternativeHyperspaceEffectTime(lua_State *lstate);
extern __int32 solAddAnimTurretSound(lua_State *state);
extern void solInit();

_static bool sortLOD(float const &a, float const &b);
_static __int32 solLoadShipPatchList(lua_State *state);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern SobStatic *gNewStatic; // 0x844028
    extern ShipStatic *gNewShipStatic; // 0x84402C
    extern MissileStatic *gNewMissileStatic; // 0x844030
    extern WeaponStatic *gNewWeaponStatic; // 0x844034
    extern AsteroidStatic *gNewAsteroidStatic; // 0x844038
    extern SalvageStatic *gNewSalvageStatic; // 0x84403C
    extern DustCloudStatic *gNewDustCloudStatic; // 0x844040
    extern PebbleStatic *gNewPebbleStatic; // 0x844044
    extern CloudStatic *gNewCloudStatic; // 0x844048
    extern NebulaStatic *gNewNebulaStatic; // 0x84404C
    extern std::_Nil _Nil_obj; // 0x844024
}

/* ---------- public code */

_inline SobStatic::PatchMarker::PatchMarker() // 0x4CE6FD
{
    mangled_assert("??0PatchMarker@SobStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline WeaponResult::WeaponResult(WeaponResult const &) // 0x4CE72A
{
    mangled_assert("??0WeaponResult@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline WeaponResult::WeaponResult() // 0x4CE759
{
    mangled_assert("??0WeaponResult@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ShipStatic::spawnDustCloud::spawnDustCloud() // 0x4CE76B
{
    mangled_assert("??0spawnDustCloud@ShipStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ShipStatic::spawnSalvage::spawnSalvage() // 0x4CE77C
{
    mangled_assert("??0spawnSalvage@ShipStatic@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<unsigned int,SobStatic::PatchMarker>::~pair<unsigned int,SobStatic::PatchMarker>() // 0x4CE78D
{
    mangled_assert("??1?$pair@IVPatchMarker@SobStatic@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

__int32 solStartShipConfig(lua_State *lstate) // 0x4DB874
{
    mangled_assert("?solStartShipConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solStartMissileConfig(lua_State *lstate) // 0x4DB7B0
{
    mangled_assert("?solStartMissileConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solStartAsteroidConfig(lua_State *lstate) // 0x4DB71D
{
    mangled_assert("?solStartAsteroidConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solStartSalvageConfig(lua_State *lstate) // 0x4DB843
{
    mangled_assert("?solStartSalvageConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solStartDustCloudConfig(lua_State *lstate) // 0x4DB77F
{
    mangled_assert("?solStartDustCloudConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solStartCloudConfig(lua_State *lstate) // 0x4DB74E
{
    mangled_assert("?solStartCloudConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solStartPebbleConfig(lua_State *lstate) // 0x4DB812
{
    mangled_assert("?solStartPebbleConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solStartNebulaConfig(lua_State *lstate) // 0x4DB7E1
{
    mangled_assert("?solStartNebulaConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

char const *sctSafeGetString(unsigned __int32 num, char const *errormsg) // 0x4D022F
{
    mangled_assert("?sctSafeGetString@@YGPBDIPBD@Z");
    todo("implement");
}

float sctSafeGetReal32(unsigned __int32 num, char const *errormsg) // 0x4D01BB
{
    mangled_assert("?sctSafeGetReal32@@YGMIPBD@Z");
    todo("implement");
}

float sctSafeGetAngle(unsigned __int32 num, char const *errormsg) // 0x4D00BC
{
    mangled_assert("?sctSafeGetAngle@@YGMIPBD@Z");
    todo("implement");
}

float sctSafeGetCosAng(unsigned __int32 num, char const *errormsg) // 0x4D0149
{
    mangled_assert("?sctSafeGetCosAng@@YGMIPBD@Z");
    todo("implement");
}

bool sctSafeGetBool(unsigned __int32 num, char const *errormsg) // 0x4D010F
{
    mangled_assert("?sctSafeGetBool@@YG_NIPBD@Z");
    todo("implement");
}

unsigned __int32 sctSafeGetUdword(unsigned __int32 num, char const *errormsg) // 0x4D0269
{
    mangled_assert("?sctSafeGetUdword@@YGIIPBD@Z");
    todo("implement");
}

unsigned __int32 sctSafeGetSdword(unsigned __int32 num, char const *errormsg) // 0x4D01F5
{
    mangled_assert("?sctSafeGetSdword@@YGIIPBD@Z");
    todo("implement");
}

__int32 solLoadHODFile(lua_State *lstate) // 0x4D3715
{
    mangled_assert("?solLoadHODFile@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solLoadModel(lua_State *lstate) // 0x4D3897
{
    mangled_assert("?solLoadModel@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solLoadSharedModel(lua_State *lstate) // 0x4D3C37
{
    mangled_assert("?solLoadSharedModel@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void loadMainGunJoint(WeaponStatic *ws, WeaponClassSpecificInfo *wcsi, HierarchyStatic *hierarchy, char const *shipName) // 0x4CF840
{
    mangled_assert("?loadMainGunJoint@@YGXPAVWeaponStatic@@PAVWeaponClassSpecificInfo@@PAVHierarchyStatic@@PBD@Z");
    todo("implement");
}

bool loadGunBindingJoint(GunBinding &binding, char const *jointName, HierarchyStatic &hierarchy) // 0x4CF524
{
    mangled_assert("?loadGunBindingJoint@@YG_NAAVGunBinding@@PBDAAVHierarchyStatic@@@Z");
    todo("implement");
}

void bindWeapon(WeaponStaticInfo &wsi, HierarchyStatic &hierarcyStatic, WeaponClassSpecificInfo *wcsi, WeaponStatic *ws, char const *shipName) // 0x4CF183
{
    mangled_assert("?bindWeapon@@YGXAAVWeaponStaticInfo@@AAVHierarchyStatic@@PAVWeaponClassSpecificInfo@@PAVWeaponStatic@@PBD@Z");
    todo("implement");
}

void bindWeaponRecoil(WeaponStaticInfo &wsi, HierarchyStatic &hierarcyStatic, WeaponClassSpecificInfo *wcsi, WeaponStatic *ws, char const *shipName) // 0x4CF323
{
    mangled_assert("?bindWeaponRecoil@@YGXAAVWeaponStaticInfo@@AAVHierarchyStatic@@PAVWeaponClassSpecificInfo@@PAVWeaponStatic@@PBD@Z");
    todo("implement");
}

__int32 solStartShipWeaponConfig(lua_State *lstate) // 0x4DBC17
{
    mangled_assert("?solStartShipWeaponConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solStartSubSystemWeaponConfig(lua_State *lstate) // 0x4DBF74
{
    mangled_assert("?solStartSubSystemWeaponConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solAddShield(lua_State *lstate) // 0x4D1AA7
{
    mangled_assert("?solAddShield@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solStartWeaponConfig(lua_State *lstate) // 0x4DC2AF
{
    mangled_assert("?solStartWeaponConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSpawnSalvageOnDeath(lua_State *lstate) // 0x4DB574
{
    mangled_assert("?solSpawnSalvageOnDeath@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSpawnDustCloudOnDeath(lua_State *lstate) // 0x4DB3CB
{
    mangled_assert("?solSpawnDustCloudOnDeath@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solAddWeaponResult(lua_State *lstate) // 0x4D20C3
{
    mangled_assert("?solAddWeaponResult@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetPenetration(lua_State *lstate) // 0x4D56E8
{
    mangled_assert("?solSetPenetration@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetAccuracy(lua_State *lstate) // 0x4D40BA
{
    mangled_assert("?solSetAccuracy@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetAngles(lua_State *lstate) // 0x4D461B
{
    mangled_assert("?solSetAngles@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetMiscValues(lua_State *lstate) // 0x4D5239
{
    mangled_assert("?solSetMiscValues@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void loadHardPointCoordSys(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &jointName, HierarchyStatic *hierarchy, vector3 &outPosition, matrix3 &outMatrix, char const *shipName) // 0x4CF53F
{
    mangled_assert("?loadHardPointCoordSys@@YGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVHierarchyStatic@@AAVvector3@@AAVmatrix3@@PBD@Z");
    todo("implement");
}

__int32 solStartShipHardPointConfig(lua_State *lstate) // 0x4DB8A5
{
    mangled_assert("?solStartShipHardPointConfig@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetDisplayedName(lua_State *lstate) // 0x4D4C68
{
    mangled_assert("?solSetDisplayedName@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSobDescription(lua_State *lstate) // 0x4D6221
{
    mangled_assert("?solSetSobDescription@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetBlobName(lua_State *lstate) // 0x4D46E0
{
    mangled_assert("?solSetBlobName@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetBlobNamePriority(lua_State *lstate) // 0x4D47A1
{
    mangled_assert("?solSetBlobNamePriority@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetAttackFamily(lua_State *lstate) // 0x4D46DB
{
    mangled_assert("?solSetAttackFamily@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetTOIcon(lua_State *lstate) // 0x4D65F5
{
    mangled_assert("?solSetTOIcon@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSpawnShipOnDeath(lua_State *lstate) // 0x4D62E2
{
    mangled_assert("?solSetSpawnShipOnDeath@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetMissileWeaponName(lua_State *lstate) // 0x4D52A2
{
    mangled_assert("?solSetMissileWeaponName@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSubMunitionName(lua_State *lstate) // 0x4D656A
{
    mangled_assert("?solSetSubMunitionName@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetControllerType(lua_State *lstate) // 0x4D4B0E
{
    mangled_assert("?solSetControllerType@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetStaticParadeData(lua_State *lstate) // 0x4D649B
{
    mangled_assert("?solSetStaticParadeData@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 setSpecialManeuver(lua_State *lstate, std::vector<unsigned int,std::allocator<unsigned int> > &maneuvers) // 0x4D0343
{
    mangled_assert("?setSpecialManeuver@@YGHPAUlua_State@@AAV?$vector@IV?$allocator@I@std@@@std@@@Z");
    todo("implement");
}

__int32 solSetMirrorBelowManeuver(lua_State *lstate) // 0x4D51F3
{
    mangled_assert("?solSetMirrorBelowManeuver@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetMirrorAboveManeuver(lua_State *lstate) // 0x4D51AD
{
    mangled_assert("?solSetMirrorAboveManeuver@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSpecialTurnLeftManeuver(lua_State *lstate) // 0x4D63C9
{
    mangled_assert("?solSetSpecialTurnLeftManeuver@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSpecialTurnRightManeuver(lua_State *lstate) // 0x4D640F
{
    mangled_assert("?solSetSpecialTurnRightManeuver@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSpecialTurnDownManeuver(lua_State *lstate) // 0x4D6383
{
    mangled_assert("?solSetSpecialTurnDownManeuver@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSpecialTurnUpManeuver(lua_State *lstate) // 0x4D6455
{
    mangled_assert("?solSetSpecialTurnUpManeuver@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetDockFormation(lua_State *lstate) // 0x4D4D29
{
    mangled_assert("?solSetDockFormation@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetQueueFormation(lua_State *lstate) // 0x4D5819
{
    mangled_assert("?solSetQueueFormation@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetPassiveFormation(lua_State *lstate) // 0x4D53A8
{
    mangled_assert("?solSetPassiveFormation@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetDefensiveFormation(lua_State *lstate) // 0x4D4B99
{
    mangled_assert("?solSetDefensiveFormation@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetAggressiveFormation(lua_State *lstate) // 0x4D42EE
{
    mangled_assert("?solSetAggressiveFormation@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetLaunchFormation(lua_State *lstate) // 0x4D4F4C
{
    mangled_assert("?solSetLaunchFormation@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetMinimalFamilyToFindPathAround(lua_State *lstate) // 0x4D50BD
{
    mangled_assert("?solSetMinimalFamilyToFindPathAround@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_relativeMoveFactor(lua_State *lstate) // 0x4D9809
{
    mangled_assert("?solSetm_relativeMoveFactor@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSMRepresentation(lua_State *lstate) // 0x4D58E8
{
    mangled_assert("?solSetSMRepresentation@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_resourceValue(lua_State *lstate) // 0x4D9881
{
    mangled_assert("?solSetm_resourceValue@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_blobRadius(lua_State *lstate) // 0x4D7771
{
    mangled_assert("?solSetm_blobRadius@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_maxVelocity(lua_State *lstate) // 0x4D8F56
{
    mangled_assert("?solSetm_maxVelocity@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_maxAngularVelocity(lua_State *lstate) // 0x4D8E44
{
    mangled_assert("?solSetm_maxAngularVelocity@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_linearFriction(lua_State *lstate) // 0x4D8C37
{
    mangled_assert("?solSetm_linearFriction@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_angularFriction(lua_State *lstate) // 0x4D701C
{
    mangled_assert("?solSetm_angularFriction@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_pixelSize(lua_State *lstate) // 0x4D9527
{
    mangled_assert("?solSetm_pixelSize@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_pixelColour(lua_State *lstate) // 0x4D941D
{
    mangled_assert("?solSetm_pixelColour@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_pixelColourDepleted(lua_State *lstate) // 0x4D94A2
{
    mangled_assert("?solSetm_pixelColourDepleted@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_salvageSpeedFraction(lua_State *lstate) // 0x4D9B91
{
    mangled_assert("?solSetm_salvageSpeedFraction@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetPebblem_pixelSize(lua_State *lstate) // 0x4D54FC
{
    mangled_assert("?solSetPebblem_pixelSize@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetPebblem_pixelColour(lua_State *lstate) // 0x4D5477
{
    mangled_assert("?solSetPebblem_pixelColour@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetPebblem_smFadeDistance(lua_State *lstate) // 0x4D5577
{
    mangled_assert("?solSetPebblem_smFadeDistance@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetPebblem_smFadeMinAlpha(lua_State *lstate) // 0x4D55F2
{
    mangled_assert("?solSetPebblem_smFadeMinAlpha@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetPebblem_smPixelSize(lua_State *lstate) // 0x4D566D
{
    mangled_assert("?solSetPebblem_smPixelSize@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetChargeable(lua_State *lstate) // 0x4D49F8
{
    mangled_assert("?solSetChargeable@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetDustCloudDamageMultiplier(lua_State *lstate) // 0x4D4EA1
{
    mangled_assert("?solSetDustCloudDamageMultiplier@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetLightningEffectName(lua_State *lstate) // 0x4D501B
{
    mangled_assert("?solSetLightningEffectName@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetChargedLightningEffectName(lua_State *lstate) // 0x4D4A6C
{
    mangled_assert("?solSetChargedLightningEffectName@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSm_typeString(lua_State *lstate) // 0x4D5EE8
{
    mangled_assert("?solSetSSSm_typeString@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetmaxHealth(lua_State *lstate) // 0x4DB047
{
    mangled_assert("?solSetmaxHealth@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_sobDieTime(lua_State *lstate) // 0x4D9FE6
{
    mangled_assert("?solSetm_sobDieTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_deadSobFadeTime(lua_State *lstate) // 0x4D7CBE
{
    mangled_assert("?solSetm_deadSobFadeTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_HealthRegenerateTime(lua_State *lstate) // 0x4D6948
{
    mangled_assert("?solSetm_HealthRegenerateTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_minHealthRegenerateTime(lua_State *lstate) // 0x4D9049
{
    mangled_assert("?solSetm_minHealthRegenerateTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_TOScale(lua_State *lstate) // 0x4D6E76
{
    mangled_assert("?solSetm_TOScale@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_TODistanceFade0(lua_State *lstate) // 0x4D6C1E
{
    mangled_assert("?solSetm_TODistanceFade0@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_TODistanceDisappear0(lua_State *lstate) // 0x4D6AB6
{
    mangled_assert("?solSetm_TODistanceDisappear0@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_TODistanceFade1(lua_State *lstate) // 0x4D6C96
{
    mangled_assert("?solSetm_TODistanceFade1@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_TODistanceDisappear1(lua_State *lstate) // 0x4D6B2E
{
    mangled_assert("?solSetm_TODistanceDisappear1@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_TODistanceFade2(lua_State *lstate) // 0x4D6D0E
{
    mangled_assert("?solSetm_TODistanceFade2@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_TODistanceDisappear2(lua_State *lstate) // 0x4D6BA6
{
    mangled_assert("?solSetm_TODistanceDisappear2@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_TOGroupScale(lua_State *lstate) // 0x4D6DFE
{
    mangled_assert("?solSetm_TOGroupScale@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_TOGroupMergeSize(lua_State *lstate) // 0x4D6D86
{
    mangled_assert("?solSetm_TOGroupMergeSize@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_moMinFadeSize(lua_State *lstate) // 0x4D91B1
{
    mangled_assert("?solSetm_moMinFadeSize@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_moMaxFadeSize(lua_State *lstate) // 0x4D9139
{
    mangled_assert("?solSetm_moMaxFadeSize@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_healthBarStyle(lua_State *lstate) // 0x4D87F7
{
    mangled_assert("?solSetm_healthBarStyle@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_battleScarMaxTriBase(lua_State *lstate) // 0x4D7689
{
    mangled_assert("?solSetm_battleScarMaxTriBase@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_battleScarMaxTriInc(lua_State *lstate) // 0x4D76FD
{
    mangled_assert("?solSetm_battleScarMaxTriInc@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_SMHighlightDistMin(lua_State *lstate) // 0x4D6A3B
{
    mangled_assert("?solSetm_SMHighlightDistMin@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_SMHighlightDistMax(lua_State *lstate) // 0x4D69C0
{
    mangled_assert("?solSetm_SMHighlightDistMax@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetnlips(lua_State *lstate) // 0x4DB1EB
{
    mangled_assert("?solSetnlips@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetnlipsRange(lua_State *lstate) // 0x4DB353
{
    mangled_assert("?solSetnlipsRange@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetnlipsFar(lua_State *lstate) // 0x4DB263
{
    mangled_assert("?solSetnlipsFar@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetnlipsFarRange(lua_State *lstate) // 0x4DB2DB
{
    mangled_assert("?solSetnlipsFarRange@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetminimumZoomFactor(lua_State *lstate) // 0x4DB0BF
{
    mangled_assert("?solSetminimumZoomFactor@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_meshRenderLimit(lua_State *lstate) // 0x4D8FD1
{
    mangled_assert("?solSetm_meshRenderLimit@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_dotRenderLimit(lua_State *lstate) // 0x4D833A
{
    mangled_assert("?solSetm_dotRenderLimit@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_visibleInSecondary(lua_State *lstate) // 0x4DAF4A
{
    mangled_assert("?solSetm_visibleInSecondary@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_selectionPriority(lua_State *lstate) // 0x4D9D02
{
    mangled_assert("?solSetm_selectionPriority@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_minLOD(lua_State *lstate) // 0x4D90C1
{
    mangled_assert("?solSetm_minLOD@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_detailLevel(lua_State *lstate) // 0x4D7DCD
{
    mangled_assert("?solSetm_detailLevel@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_attackFamilyIndex(lua_State *lstate) // 0x4D72C0
{
    mangled_assert("?solSetm_attackFamilyIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_dockFamilyIndex(lua_State *lstate) // 0x4D7F8D
{
    mangled_assert("?solSetm_dockFamilyIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_buildFamilyIndex(lua_State *lstate) // 0x4D7860
{
    mangled_assert("?solSetm_buildFamilyIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_avoidanceFamilyIndex(lua_State *lstate) // 0x4D7459
{
    mangled_assert("?solSetm_avoidanceFamilyIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_collisionFamilyIndex(lua_State *lstate) // 0x4D7B2E
{
    mangled_assert("?solSetm_collisionFamilyIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_displayFamilyIndex(lua_State *lstate) // 0x4D7EC0
{
    mangled_assert("?solSetm_displayFamilyIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_autoFormationFamilyIndex(lua_State *lstate) // 0x4D738C
{
    mangled_assert("?solSetm_autoFormationFamilyIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_armourFamilyIndex(lua_State *lstate) // 0x4D71F3
{
    mangled_assert("?solSetm_armourFamilyIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_ucFamilyIndex(lua_State *lstate) // 0x4DAD3C
{
    mangled_assert("?solSetm_ucFamilyIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_ucShipTypeIndex(lua_State *lstate) // 0x4DAE09
{
    mangled_assert("?solSetm_ucShipTypeIndex@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_preciseSelectionLimit(lua_State *lstate) // 0x4D961D
{
    mangled_assert("?solSetm_preciseSelectionLimit@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_preciseATILimit(lua_State *lstate) // 0x4D95A2
{
    mangled_assert("?solSetm_preciseATILimit@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_selectionLimit(lua_State *lstate) // 0x4D9C87
{
    mangled_assert("?solSetm_selectionLimit@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_selectionSizeMin(lua_State *lstate) // 0x4D9DFA
{
    mangled_assert("?solSetm_selectionSizeMin@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_selectionSizeMax(lua_State *lstate) // 0x4D9D7F
{
    mangled_assert("?solSetm_selectionSizeMax@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSRBm_mass(lua_State *lstate) // 0x4D5A2B
{
    mangled_assert("?solSetSRBm_mass@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSPMm_mass(lua_State *lstate) // 0x4D59B0
{
    mangled_assert("?solSetSPMm_mass@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_nSquadronSize(lua_State *lstate) // 0x4D9229
{
    mangled_assert("?solSetm_nSquadronSize@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_sideArmourDamage(lua_State *lstate) // 0x4D9E75
{
    mangled_assert("?solSetm_sideArmourDamage@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_rearArmourDamage(lua_State *lstate) // 0x4D978E
{
    mangled_assert("?solSetm_rearArmourDamage@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_buildCost(lua_State *lstate) // 0x4D77EC
{
    mangled_assert("?solSetm_buildCost@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_buildTime(lua_State *lstate) // 0x4D792D
{
    mangled_assert("?solSetm_buildTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_fighterValue(lua_State *lstate) // 0x4D83B2
{
    mangled_assert("?solSetm_fighterValue@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_corvetteValue(lua_State *lstate) // 0x4D7BFB
{
    mangled_assert("?solSetm_corvetteValue@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_frigateValue(lua_State *lstate) // 0x4D8708
{
    mangled_assert("?solSetm_frigateValue@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_neutralValue(lua_State *lstate) // 0x4D9329
{
    mangled_assert("?solSetm_neutralValue@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_antiFighterValue(lua_State *lstate) // 0x4D710B
{
    mangled_assert("?solSetm_antiFighterValue@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_antiCorvetteValue(lua_State *lstate) // 0x4D7097
{
    mangled_assert("?solSetm_antiCorvetteValue@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_antiFrigateValue(lua_State *lstate) // 0x4D717F
{
    mangled_assert("?solSetm_antiFrigateValue@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_sobSpecialDieTime(lua_State *lstate) // 0x4DA05E
{
    mangled_assert("?solSetm_sobSpecialDieTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_specialDeathSpeed(lua_State *lstate) // 0x4DA0D9
{
    mangled_assert("?solSetm_specialDeathSpeed@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_chanceOfSpecialDeath(lua_State *lstate) // 0x4D79A1
{
    mangled_assert("?solSetm_chanceOfSpecialDeath@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_useTargetRandom(lua_State *lstate) // 0x4DAED6
{
    mangled_assert("?solSetm_useTargetRandom@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_targetRandomPointXMin(lua_State *lstate) // 0x4DA283
{
    mangled_assert("?solSetm_targetRandomPointXMin@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_targetRandomPointXMax(lua_State *lstate) // 0x4DA208
{
    mangled_assert("?solSetm_targetRandomPointXMax@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_targetRandomPointYMin(lua_State *lstate) // 0x4DA379
{
    mangled_assert("?solSetm_targetRandomPointYMin@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_targetRandomPointYMax(lua_State *lstate) // 0x4DA2FE
{
    mangled_assert("?solSetm_targetRandomPointYMax@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_targetRandomPointZMin(lua_State *lstate) // 0x4DA46F
{
    mangled_assert("?solSetm_targetRandomPointZMin@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_targetRandomPointZMax(lua_State *lstate) // 0x4DA3F4
{
    mangled_assert("?solSetm_targetRandomPointZMax@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_formationSwayUpdateTime(lua_State *lstate) // 0x4D868D
{
    mangled_assert("?solSetm_formationSwayUpdateTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_formationSwayOffsetRandomX(lua_State *lstate) // 0x4D84A1
{
    mangled_assert("?solSetm_formationSwayOffsetRandomX@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_formationSwayOffsetRandomY(lua_State *lstate) // 0x4D851C
{
    mangled_assert("?solSetm_formationSwayOffsetRandomY@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_formationSwayOffsetRandomZ(lua_State *lstate) // 0x4D8597
{
    mangled_assert("?solSetm_formationSwayOffsetRandomZ@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_formationSwayBobbingFactor(lua_State *lstate) // 0x4D8426
{
    mangled_assert("?solSetm_formationSwayBobbingFactor@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_formationSwayRotateFactor(lua_State *lstate) // 0x4D8612
{
    mangled_assert("?solSetm_formationSwayRotateFactor@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_slideMoveRange(lua_State *lstate) // 0x4D9EF0
{
    mangled_assert("?solSetm_slideMoveRange@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_dontDockWithOtherRaceShips(lua_State *lstate) // 0x4D82C6
{
    mangled_assert("?solSetm_dontDockWithOtherRaceShips@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_ignoreRaceWhenDocking(lua_State *lstate) // 0x4D8868
{
    mangled_assert("?solSetm_ignoreRaceWhenDocking@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_bShipHoldActive(lua_State *lstate) // 0x4D7526
{
    mangled_assert("?solSetm_bShipHoldActive@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_nbRestrictedHardpoints(lua_State *lstate) // 0x4D92A9
{
    mangled_assert("?solSetm_nbRestrictedHardpoints@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_thrusterAccelTime(lua_State *lstate) // 0x4DA4EA
{
    mangled_assert("?solSetm_thrusterAccelTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_mainEngineAccelTime(lua_State *lstate) // 0x4D8CB2
{
    mangled_assert("?solSetm_mainEngineAccelTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_rotationAccelTime(lua_State *lstate) // 0x4D99F7
{
    mangled_assert("?solSetm_rotationAccelTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_thrusterBrakeTime(lua_State *lstate) // 0x4DA565
{
    mangled_assert("?solSetm_thrusterBrakeTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_mainEngineBrakeTime(lua_State *lstate) // 0x4D8D2D
{
    mangled_assert("?solSetm_mainEngineBrakeTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_rotationBrakeTime(lua_State *lstate) // 0x4D9A72
{
    mangled_assert("?solSetm_rotationBrakeTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleStaticX(lua_State *lstate) // 0x4DAB77
{
    mangled_assert("?solSetm_tumbleStaticX@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleStaticY(lua_State *lstate) // 0x4DAC0E
{
    mangled_assert("?solSetm_tumbleStaticY@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleStaticZ(lua_State *lstate) // 0x4DACA5
{
    mangled_assert("?solSetm_tumbleStaticZ@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleDynamicX(lua_State *lstate) // 0x4DA772
{
    mangled_assert("?solSetm_tumbleDynamicX@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleDynamicY(lua_State *lstate) // 0x4DA809
{
    mangled_assert("?solSetm_tumbleDynamicY@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleDynamicZ(lua_State *lstate) // 0x4DA8A0
{
    mangled_assert("?solSetm_tumbleDynamicZ@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleSpecialDynamicX(lua_State *lstate) // 0x4DA937
{
    mangled_assert("?solSetm_tumbleSpecialDynamicX@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleSpecialDynamicY(lua_State *lstate) // 0x4DA9CE
{
    mangled_assert("?solSetm_tumbleSpecialDynamicY@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleSpecialDynamicZ(lua_State *lstate) // 0x4DAA65
{
    mangled_assert("?solSetm_tumbleSpecialDynamicZ@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_dockQueueSelectionQueueMultiplier(lua_State *lstate) // 0x4D8155
{
    mangled_assert("?solSetm_dockQueueSelectionQueueMultiplier@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_dockQueueSelectionOccupiedMultiplier(lua_State *lstate) // 0x4D80DA
{
    mangled_assert("?solSetm_dockQueueSelectionOccupiedMultiplier@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_thrusterMaxSpeed(lua_State *lstate) // 0x4DA5E0
{
    mangled_assert("?solSetm_thrusterMaxSpeed@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_mainEngineMaxSpeed(lua_State *lstate) // 0x4D8DA8
{
    mangled_assert("?solSetm_mainEngineMaxSpeed@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_rotationMaxSpeed(lua_State *lstate) // 0x4D9AED
{
    mangled_assert("?solSetm_rotationMaxSpeed@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_cosAccelerationAngle(lua_State *lstate) // 0x4D7C6F
{
    mangled_assert("?solSetm_cosAccelerationAngle@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_addedAngleMin(lua_State *lstate) // 0x4D6F85
{
    mangled_assert("?solSetm_addedAngleMin@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_addedAngleMax(lua_State *lstate) // 0x4D6EEE
{
    mangled_assert("?solSetm_addedAngleMax@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetShipDustCloudDamageTime(lua_State *lstate) // 0x4D60AB
{
    mangled_assert("?solSetShipDustCloudDamageTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetShipNebulaDamageTime(lua_State *lstate) // 0x4D6166
{
    mangled_assert("?solSetShipNebulaDamageTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_targetAngle(lua_State *lstate) // 0x4DA154
{
    mangled_assert("?solSetm_targetAngle@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetNebulaDamageMultiplier(lua_State *lstate) // 0x4D532D
{
    mangled_assert("?solSetNebulaDamageMultiplier@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_clusterRadiansAngle(lua_State *lstate) // 0x4D7A1C
{
    mangled_assert("?solSetm_clusterRadiansAngle@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_thrusterUsage(lua_State *lstate) // 0x4DA67C
{
    mangled_assert("?solSetm_thrusterUsage@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_descendPitch(lua_State *lstate) // 0x4D7D36
{
    mangled_assert("?solSetm_descendPitch@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_maxBankingAmount(lua_State *lstate) // 0x4D8EBF
{
    mangled_assert("?solSetm_maxBankingAmount@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_goalReachEpsilon(lua_State *lstate) // 0x4D877C
{
    mangled_assert("?solSetm_goalReachEpsilon@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetformationSpacing(lua_State *lstate) // 0x4D67D7
{
    mangled_assert("?solSetformationSpacing@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_dockTimeBetweenTwoFormations(lua_State *lstate) // 0x4D824B
{
    mangled_assert("?solSetm_dockTimeBetweenTwoFormations@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_dockTimeBeforeStart(lua_State *lstate) // 0x4D81D0
{
    mangled_assert("?solSetm_dockTimeBeforeStart@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_dockNrOfShipsInDockFormation(lua_State *lstate) // 0x4D805A
{
    mangled_assert("?solSetm_dockNrOfShipsInDockFormation@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_launchTimeBetweenTwoFormations(lua_State *lstate) // 0x4D8B41
{
    mangled_assert("?solSetm_launchTimeBetweenTwoFormations@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_launchTimeBeforeStart(lua_State *lstate) // 0x4D8AC6
{
    mangled_assert("?solSetm_launchTimeBeforeStart@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_launchNrOfShipsInDockFormation(lua_State *lstate) // 0x4D89CB
{
    mangled_assert("?solSetm_launchNrOfShipsInDockFormation@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_retaliationRange(lua_State *lstate) // 0x4D997C
{
    mangled_assert("?solSetm_retaliationRange@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_visualRange(lua_State *lstate) // 0x4DAFCC
{
    mangled_assert("?solSetm_visualRange@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_prmSensorRange(lua_State *lstate) // 0x4D9698
{
    mangled_assert("?solSetm_prmSensorRange@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_secSensorRange(lua_State *lstate) // 0x4D9C0C
{
    mangled_assert("?solSetm_secSensorRange@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_baseCloakDetectionLevel(lua_State *lstate) // 0x4D760E
{
    mangled_assert("?solSetm_baseCloakDetectionLevel@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_retaliationDistanceFromGoal(lua_State *lstate) // 0x4D9901
{
    mangled_assert("?solSetm_retaliationDistanceFromGoal@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_bTransferable(lua_State *lstate) // 0x4D759A
{
    mangled_assert("?solSetm_bTransferable@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_isMilitary(lua_State *lstate) // 0x4D88DC
{
    mangled_assert("?solSetm_isMilitary@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_kamikazeCollisionDamageMultiplier(lua_State *lstate) // 0x4D8950
{
    mangled_assert("?solSetm_kamikazeCollisionDamageMultiplier@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSm_collateralDamage(lua_State *lstate) // 0x4D5C96
{
    mangled_assert("?solSetSSSm_collateralDamage@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSm_inactiveTimeAfterDamage(lua_State *lstate) // 0x4D5D85
{
    mangled_assert("?solSetSSSm_inactiveTimeAfterDamage@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSm_activateHealthPercentage(lua_State *lstate) // 0x4D5BA7
{
    mangled_assert("?solSetSSSm_activateHealthPercentage@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSm_costToBuild(lua_State *lstate) // 0x4D5D11
{
    mangled_assert("?solSetSSSm_costToBuild@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSm_timeToBuild(lua_State *lstate) // 0x4D5E74
{
    mangled_assert("?solSetSSSm_timeToBuild@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSm_isResearch(lua_State *lstate) // 0x4D5E00
{
    mangled_assert("?solSetSSSm_isResearch@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSm_visible(lua_State *lstate) // 0x4D5F83
{
    mangled_assert("?solSetSSSm_visible@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSm_bInnate(lua_State *lstate) // 0x4D5C22
{
    mangled_assert("?solSetSSSm_bInnate@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_lifeTime(lua_State *lstate) // 0x4D8BBC
{
    mangled_assert("?solSetm_lifeTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_clusterSeparationDistance(lua_State *lstate) // 0x4D7AB3
{
    mangled_assert("?solSetm_clusterSeparationDistance@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_numberOfClusterMunitionsToSpawn(lua_State *lstate) // 0x4D939D
{
    mangled_assert("?solSetm_numberOfClusterMunitionsToSpawn@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_detectionDistance(lua_State *lstate) // 0x4D7E45
{
    mangled_assert("?solSetm_detectionDistance@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_launchTime(lua_State *lstate) // 0x4D8A4B
{
    mangled_assert("?solSetm_launchTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_proximityDetonationDistance(lua_State *lstate) // 0x4D9713
{
    mangled_assert("?solSetm_proximityDetonationDistance@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_slowdownFactor(lua_State *lstate) // 0x4D9F6B
{
    mangled_assert("?solSetm_slowdownFactor@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_tumbleSpeed(lua_State *lstate) // 0x4DAAFC
{
    mangled_assert("?solSetm_tumbleSpeed@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetm_trackingSpeedMultiplier(lua_State *lstate) // 0x4DA6F7
{
    mangled_assert("?solSetm_trackingSpeedMultiplier@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void translateMultiplier(lua_State *lstate, MultiplierType &multType, InfluenceType &inflType, ActivityRelation &actRel, float &multHigh, float &multLow, float &sphereRadius, char const *shipName) // 0x4DC88D
{
    mangled_assert("?translateMultiplier@@YGXPAUlua_State@@AAW4MultiplierType@@AAW4InfluenceType@@AAW4ActivityRelation@@AAM44PBD@Z");
    todo("implement");
}

void translateAbility(lua_State *lstate, AbilityType &abilityType, InfluenceType &inflType, float &sphereRadius, char const *shipName, bool &enable) // 0x4DC74E
{
    mangled_assert("?translateAbility@@YGXPAUlua_State@@AAW4AbilityType@@AAW4InfluenceType@@AAMPBDAA_N@Z");
    todo("implement");
}

__int32 solAddSubSystemMultiplier(lua_State *lstate) // 0x4D1FBD
{
    mangled_assert("?solAddSubSystemMultiplier@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solAddSubSystemAbility(lua_State *lstate) // 0x4D1F1A
{
    mangled_assert("?solAddSubSystemAbility@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solAddNebulaMultiplier(lua_State *lstate) // 0x4D1837
{
    mangled_assert("?solAddNebulaMultiplier@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solAddNebulaAbility(lua_State *lstate) // 0x4D1775
{
    mangled_assert("?solAddNebulaAbility@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solAddShipMultiplier(lua_State *lstate) // 0x4D1DE3
{
    mangled_assert("?solAddShipMultiplier@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solAddShipAbility(lua_State *lstate) // 0x4D1B23
{
    mangled_assert("?solAddShipAbility@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSSSType(lua_State *lstate) // 0x4D5AA6
{
    mangled_assert("?solSetSSSType@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetBuildPriorityOrder(lua_State *lstate) // 0x4D481C
{
    mangled_assert("?solSetBuildPriorityOrder@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetaccelerationAngle(lua_State *state) // 0x4D6723
{
    mangled_assert("?solSetaccelerationAngle@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetmirrorAngle(lua_State *state) // 0x4DB137
{
    mangled_assert("?solSetmirrorAngle@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetSecondaryTurnAngle(lua_State *state) // 0x4D5FF7
{
    mangled_assert("?solSetSecondaryTurnAngle@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void solAddHarvest(ShipStatic *staticptr) // 0x4D13DE
{
    mangled_assert("?solAddHarvest@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddShipHold(ShipStatic *staticptr) // 0x4D1BC6
{
    mangled_assert("?solAddShipHold@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCanBuildShips(ShipStatic *staticptr) // 0x4D0CAD
{
    mangled_assert("?solAddCanBuildShips@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCanBeSalvaged(ShipStatic *staticptr) // 0x4D0C6E
{
    mangled_assert("?solAddCanBeSalvaged@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCanBeCaptured(ShipStatic *staticptr) // 0x4D0BB1
{
    mangled_assert("?solAddCanBeCaptured@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCanBeRepaired(ShipStatic *staticptr) // 0x4D0C2F
{
    mangled_assert("?solAddCanBeRepaired@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCanRepairByLatching(ShipStatic *staticptr) // 0x4D0E30
{
    mangled_assert("?solAddCanRepairByLatching@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCanLaunch(ShipStatic *staticptr) // 0x4D0DF0
{
    mangled_assert("?solAddCanLaunch@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCanDock(ShipStatic *staticptr) // 0x4D0D96
{
    mangled_assert("?solAddCanDock@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddMoveCommand(ShipStatic *staticptr) // 0x4D16B4
{
    mangled_assert("?solAddMoveCommand@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddGuardCommand(ShipStatic *staticptr) // 0x4D136C
{
    mangled_assert("?solAddGuardCommand@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCaptureCommand(ShipStatic *staticptr) // 0x4D0F5A
{
    mangled_assert("?solAddCaptureCommand@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddSalvageCommand(ShipStatic *staticptr) // 0x4D19C3
{
    mangled_assert("?solAddSalvageCommand@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddHyperSpaceCommand(ShipStatic *staticptr) // 0x4D14C3
{
    mangled_assert("?solAddHyperSpaceCommand@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddHyperSpaceViaGateCommand(ShipStatic *staticptr) // 0x4D1568
{
    mangled_assert("?solAddHyperSpaceViaGateCommand@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddFormHyperspaceGateCommand(ShipStatic *staticptr) // 0x4D12CE
{
    mangled_assert("?solAddFormHyperspaceGateCommand@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCanAttack(ShipStatic *staticptr) // 0x4D0882
{
    mangled_assert("?solAddCanAttack@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddWaypointMove(ShipStatic *staticptr) // 0x4D2084
{
    mangled_assert("?solAddWaypointMove@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddParadeCommand(ShipStatic *staticptr) // 0x4D191D
{
    mangled_assert("?solAddParadeCommand@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddSensorPing(ShipStatic *staticptr) // 0x4D1A0F
{
    mangled_assert("?solAddSensorPing@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddCloaking(ShipStatic *staticptr) // 0x4D0FC7
{
    mangled_assert("?solAddCloaking@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddDefenseField(ShipStatic *staticptr) // 0x4D10DB
{
    mangled_assert("?solAddDefenseField@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddDefenseFieldShield(ShipStatic *staticptr) // 0x4D122A
{
    mangled_assert("?solAddDefenseFieldShield@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddHyperspaceInhibitor(ShipStatic *staticptr) // 0x4D15EB
{
    mangled_assert("?solAddHyperspaceInhibitor@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddRetire(ShipStatic *staticptr) // 0x4D1968
{
    mangled_assert("?solAddRetire@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddSpecialAttack(ShipStatic *staticptr) // 0x4D1EAA
{
    mangled_assert("?solAddSpecialAttack@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAddMinelayingAbility(ShipStatic *staticptr) // 0x4D1653
{
    mangled_assert("?solAddMinelayingAbility@@YGXPAVShipStatic@@@Z");
    todo("implement");
}

void solAbilityCheck(ShipStatic *staticptr, unsigned __int32 ability, char *name) // 0x4D0411
{
    mangled_assert("?solAbilityCheck@@YGXPAVShipStatic@@IPAD@Z");
    todo("implement");
}

__int32 solAddAbility(lua_State *lstate) // 0x4D042D
{
    mangled_assert("?solAddAbility@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void solPrecacheWeaponResults(std::vector<WeaponResult,std::allocator<WeaponResult> > const &wrList) // 0x4D4065
{
    mangled_assert("?solPrecacheWeaponResults@@YGXABV?$vector@VWeaponResult@@V?$allocator@VWeaponResult@@@std@@@std@@@Z");
    todo("implement");
}

void solReloadSobStatic() // 0x4D40A2
{
    mangled_assert("?solReloadSobStatic@@YGXXZ");
    todo("implement");
}

bool solLoadWeapon(WeaponStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4D3F95
{
    mangled_assert("?solLoadWeapon@@YG_NPAVWeaponStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool solLoadShip(ShipStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4D3CC8
{
    mangled_assert("?solLoadShip@@YG_NPAVShipStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool solLoadMissile(MissileStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4D375A
{
    mangled_assert("?solLoadMissile@@YG_NPAVMissileStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool solLoadResource(ResourceStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobType type) // 0x4D3AC2
{
    mangled_assert("?solLoadResource@@YG_NPAVResourceStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4SobType@@@Z");
    todo("implement");
}

bool solLoadAsteroid(AsteroidStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4D35B3
{
    mangled_assert("?solLoadAsteroid@@YG_NPAVAsteroidStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool solLoadSalvage(SalvageStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4D3C1F
{
    mangled_assert("?solLoadSalvage@@YG_NPAVSalvageStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool solLoadDustCloud(DustCloudStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4D3670
{
    mangled_assert("?solLoadDustCloud@@YG_NPAVDustCloudStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool solLoadCloud(CloudStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4D35CB
{
    mangled_assert("?solLoadCloud@@YG_NPAVCloudStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool solLoadPebble(PebbleStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4D3A1D
{
    mangled_assert("?solLoadPebble@@YG_NPAVPebbleStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool solLoadNebula(NebulaStatic *newStatic, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x4D38DC
{
    mangled_assert("?solLoadNebula@@YG_NPAVNebulaStatic@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

__int32 solSetUpLOD(lua_State *lstate) // 0x4D667A
{
    mangled_assert("?solSetUpLOD@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetDownLOD(lua_State *lstate) // 0x4D4DF8
{
    mangled_assert("?solSetDownLOD@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetgoblinsOff(lua_State *lstate) // 0x4D6852
{
    mangled_assert("?solSetgoblinsOff@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetAlwaysInRenderList(lua_State *lstate) // 0x4D45AA
{
    mangled_assert("?solSetAlwaysInRenderList@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetgoblinsStartFade(lua_State *lstate) // 0x4D68CD
{
    mangled_assert("?solSetgoblinsStartFade@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetCanHaveFog(lua_State *lstate) // 0x4D4910
{
    mangled_assert("?solSetCanHaveFog@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetCanHaveShadows(lua_State *lstate) // 0x4D4984
{
    mangled_assert("?solSetCanHaveShadows@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetCanBlink(lua_State *lstate) // 0x4D489C
{
    mangled_assert("?solSetCanBlink@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetAlternativeHyperspaceEffectV(lua_State *lstate) // 0x4D44F1
{
    mangled_assert("?solSetAlternativeHyperspaceEffectV@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetAlternativeHyperspaceEffectA(lua_State *lstate) // 0x4D43BD
{
    mangled_assert("?solSetAlternativeHyperspaceEffectA@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solSetAlternativeHyperspaceEffectTime(lua_State *lstate) // 0x4D4476
{
    mangled_assert("?solSetAlternativeHyperspaceEffectTime@@YGHPAUlua_State@@@Z");
    todo("implement");
}

__int32 solAddAnimTurretSound(lua_State *state) // 0x4D0805
{
    mangled_assert("?solAddAnimTurretSound@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void solInit() // 0x4D2295
{
    mangled_assert("?solInit@@YGXXZ");
    todo("implement");
}

/* ---------- private code */

_static bool sortLOD(float const &a, float const &b) // 0x4DC737
{
    mangled_assert("sortLOD");
    todo("implement");
}

_static __int32 solLoadShipPatchList(lua_State *state) // 0x4D3E14
{
    mangled_assert("solLoadShipPatchList");
    todo("implement");
}
#endif
