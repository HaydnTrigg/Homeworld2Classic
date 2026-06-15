#if 0
#ifndef __ITWEAK_H__
#define __ITWEAK_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ITweak
{
private:
    ITweak(ITweak const &);
    ITweak();
    ~ITweak();
public:
    static ITweak *i();
    static bool initialize();
    static bool shutdown();
    struct ResourceInfo
    {
        unsigned long SIMILAR_DISTANCE; // 0x0
        float CONSIDER_DOCKING_EARLY_CAPACITY_FACTOR; // 0x4
        float DOCK_EARLY_DISTANCE_FACTOR; // 0x8
        float MIN_DISTANCE_TO_CONSIDER_EARLY_DOCK; // 0xC
        float m_maxDistancetoNewRU; // 0x10
        float FLYING_TO_RESOURCE_GOAL_TOLERANCE_SQR; // 0x14
        float FLYING_UP_FROM_RESOURCE_GOAL_TOLERANCE_SQR; // 0x18
        float POINT_ABOVE_RESOURCE_DISTANCE; // 0x1C
        float START_GETTING_IN_POSITION_DISTANCE_FROM_RESOURCE; // 0x20
        float OneOverStartFadeResources; // 0x24
        float initialExtraResourcesDistance; // 0x28
        float SPEECH_WAITING_TIME; // 0x2C
        float SPEECH_IDLE_WAITING_TIME; // 0x30
    };
    static_assert(sizeof(ResourceInfo) == 52, "Invalid ResourceInfo size");
    _inline ITweak::ResourceInfo const &GetResourceInfo() const;
    struct DustCloudInfo
    {
        float damageToChargeFactor; // 0x0
        float jumpRadiusMultiplier; // 0x4
        float chargeDissipationPerSecond; // 0x8
        float maxCharge; // 0xC
        float chargedPercentage; // 0x10
        float progressLightningChargeDifference; // 0x14
        float timeBetweenLightningMin; // 0x18
        float timeBetweenLightningMax; // 0x1C
        float timeBetweenChargedLightningMin; // 0x20
        float timeBetweenChargedLightningMax; // 0x24
        vector4 chargedColour; // 0x28
        vector4 chargedEmissiveColour; // 0x38
        vector4 sensorsOutlineColour; // 0x48
        float chargedEmissiveFalloffTime; // 0x58
        float maxSpinSpeed; // 0x5C
        float wobbleFrequency; // 0x60
        float wobbleAmplitude; // 0x64
        float radiusScale; // 0x68
        _inline DustCloudInfo(); /* compiler_generated() */
    };
    static_assert(sizeof(DustCloudInfo) == 108, "Invalid DustCloudInfo size");
    _inline ITweak::DustCloudInfo const &GetDustCloudInfo() const;
    struct NebulaInfo
    {
        float radiusScale; // 0x0
    };
    static_assert(sizeof(NebulaInfo) == 4, "Invalid NebulaInfo size");
    _inline ITweak::NebulaInfo const &GetNebulaInfo() const;
    struct FormationInfo
    {
        float formationVelocityMultiplier; // 0x0
        float formationTurnVelocityMultiplier; // 0x4
        float formationRecalcPathTime; // 0x8
        float formationPathFollowRadiusSqr; // 0xC
        float formationReinitializeTime; // 0x10
    };
    static_assert(sizeof(FormationInfo) == 20, "Invalid FormationInfo size");
    _inline ITweak::FormationInfo const &GetFormationInfo() const;
    struct ShipInfo
    {
        float battleTimeOutTime; // 0x0
        float sensorsHiddenTimeOutTime; // 0x4
        float radiationTimeOutTime; // 0x8
        float chargedDustCloudTimeOutTime; // 0xC
        float salvageSpawnPercentage; // 0x10
        char subSystemMouseEnterSound[256]; // 0x14
        char subSystemMouseClickSound[256]; // 0x114
    };
    static_assert(sizeof(ShipInfo) == 532, "Invalid ShipInfo size");
    _inline ITweak::ShipInfo const &GetShipInfo() const;
    struct ShipControllerInfo
    {
        float goalInfluence; // 0x0
        float zRotationAccelerationMultiplier; // 0x4
        float flightManeuverRotationBoost; // 0x8
        float accelerationPow; // 0xC
        float glancingBounceFactor; // 0x10
    };
    static_assert(sizeof(ShipControllerInfo) == 20, "Invalid ShipControllerInfo size");
    _inline ITweak::ShipControllerInfo const &GetShipControllerInfo() const;
    struct DockingInfo
    {
        float flyBehindQueueDistance; // 0x0
        vector3 queueSpacingDirection; // 0x4
        vector3 queueHeightDirection; // 0x10
        float dockQueueSelectionQueueMultiplier; // 0x1C
        float dockQueueSelectionOccupiedMultiplier; // 0x20
        float approachDistanceMultiplier; // 0x24
        float minDockingTime; // 0x28
        unsigned __int32 dockingDistanceBandSize; // 0x2C
        unsigned __int32 timeForReChoosingDockShip; // 0x30
        float latchInterpolationTime; // 0x34
        float latchInterpolationStep; // 0x38
        _inline DockingInfo(); /* compiler_generated() */
    };
    static_assert(sizeof(DockingInfo) == 60, "Invalid DockingInfo size");
    _inline ITweak::DockingInfo const &GetDockingInfo() const;
    struct LaunchingInfo
    {
        char familyDontAvoidOnLaunch[256]; // 0x0
    };
    static_assert(sizeof(LaunchingInfo) == 256, "Invalid LaunchingInfo size");
    _inline ITweak::LaunchingInfo const &GetLaunchingInfo() const;
    struct ParadeInfo
    {
        float ParadeDefaultGrowthSpacing; // 0x0
        float m_rallyPointMinDistance; // 0x4
    };
    static_assert(sizeof(ParadeInfo) == 8, "Invalid ParadeInfo size");
    _inline ITweak::ParadeInfo const &GetParadeInfo() const;
    struct ResearchInfo
    {
        float nRESEARCH_SUB_SYSTEM_POW; // 0x0
    };
    static_assert(sizeof(ResearchInfo) == 4, "Invalid ResearchInfo size");
    _inline ITweak::ResearchInfo const &GetResearchInfo() const;
    struct BuildInfo
    {
        float retireRefundRatio; // 0x0
        float buildCancelRefundRatio; // 0x4
        float buildMaxCircleSize; // 0x8
    };
    static_assert(sizeof(BuildInfo) == 12, "Invalid BuildInfo size");
    _inline ITweak::BuildInfo const &GetBuildInfo() const;
    struct AvoidanceInfo
    {
        float extraAvoidanceDistance; // 0x0
        float extraShipAvoidanceDistance; // 0x4
        float pathfindRadiusMultiplier; // 0x8
        float pathfindRadiusAddition; // 0xC
        float capsuleLookAheadTime; // 0x10
        float shipPathfindLookAheadTime; // 0x14
        unsigned __int32 avoidingForALongTimeTurns; // 0x18
        char familyAvoidanceBoxPriority[256]; // 0x1C
    };
    static_assert(sizeof(AvoidanceInfo) == 284, "Invalid AvoidanceInfo size");
    _inline ITweak::AvoidanceInfo const &GetAvoidanceInfo() const;
    struct OrderInfo
    {
        float maxDistanceFromGoal; // 0x0
    };
    static_assert(sizeof(OrderInfo) == 4, "Invalid OrderInfo size");
    _inline ITweak::OrderInfo const &GetOrderInfo() const;
    struct WeaponFireInfo
    {
        float friendlyFireRatio; // 0x0
    };
    static_assert(sizeof(WeaponFireInfo) == 4, "Invalid WeaponFireInfo size");
    _inline ITweak::WeaponFireInfo const &GetWeaponFireInfo() const;
    struct HyperSpaceInfo
    {
        float costPerMetre; // 0x0
        float minSpeedForHyperspace; // 0x4
    };
    static_assert(sizeof(HyperSpaceInfo) == 8, "Invalid HyperSpaceInfo size");
    _inline ITweak::HyperSpaceInfo const &GetHyperSpaceInfo() const;
    struct SensorPingInfo
    {
        float cost; // 0x0
    };
    static_assert(sizeof(SensorPingInfo) == 4, "Invalid SensorPingInfo size");
    _inline ITweak::SensorPingInfo const &GetSensorPingInfo() const;
    struct CaptureInfo
    {
        float m_zeroHealthMultiplier; // 0x0
        float m_lowShipsPerShipMultiplier; // 0x4
        float m_highShipsPerShipMultiplier; // 0x8
        unsigned long m_highShips; // 0xC
        float m_minModifier; // 0x10
        float m_maxModifier; // 0x14
        float m_immobilisedCaptureProgress; // 0x18
        float m_disableTime; // 0x1C
        float m_startLatchCommandDistance; // 0x20
    };
    static_assert(sizeof(CaptureInfo) == 36, "Invalid CaptureInfo size");
    _inline ITweak::CaptureInfo const &GetCaptureInfo() const;
    struct RepairInfo
    {
        float m_timeToWaitAfterLastDamageBeforeUnlatching; // 0x0
        float m_slowDownFactor; // 0x4
    };
    static_assert(sizeof(RepairInfo) == 8, "Invalid RepairInfo size");
    _inline ITweak::RepairInfo const &GetRepairInfo() const;
    struct UnitCapsInfo
    {
        unsigned long m_minUnitCaps; // 0x0
    };
    static_assert(sizeof(UnitCapsInfo) == 4, "Invalid UnitCapsInfo size");
    _inline ITweak::UnitCapsInfo const &GetUnitCapsInfo() const;
    struct AutoFormationInfo
    {
        float m_paddingX; // 0x0
        float m_paddingY; // 0x4
        float m_paddingZ; // 0x8
    };
    static_assert(sizeof(AutoFormationInfo) == 12, "Invalid AutoFormationInfo size");
    _inline ITweak::AutoFormationInfo const &GetAutoFormationInfo() const;
    struct EngineTrailInfo
    {
        enum
        {
            NUM_TrailFactors = 4, // 0x0004
        };
        float m_colourKeyframeTimes[4]; // 0x0
        vector3 m_baseToTrailFactors[4]; // 0x10
        unsigned __int32 m_trailTextureWidth; // 0x40
        float m_nearFadeDist; // 0x44
        float m_farFadeDist; // 0x48
        float m_farFadeValue; // 0x4C
        float m_totalFadeStartDistance; // 0x50
        float m_totalFadeEndDistance; // 0x54
        float m_orphanFadeTime; // 0x58
        bool m_useRefTexture; // 0x5C
        bool m_useHueShift; // 0x5D
        float m_trailSaturationLimit; // 0x60
        float m_burnSaturationLimit; // 0x64
        float m_trailColourLuminanceMin; // 0x68
        float m_blackLimit; // 0x6C
        float m_blackTrailHue; // 0x70
        float m_blackTrailSat; // 0x74
        float m_blackTrailLum; // 0x78
        vector4 m_refTextureColour; // 0x7C
        _inline EngineTrailInfo(); /* compiler_generated() */
    };
    static_assert(sizeof(EngineTrailInfo) == 140, "Invalid EngineTrailInfo size");
    _inline ITweak::EngineTrailInfo const &GetEngineTrailInfo() const;
    struct CombatInfo
    {
        float m_numberOfSecondsForDamageAssesment; // 0x0
        float m_heavyDamageFraction; // 0x4
        float m_damagedFraction; // 0x8
        float m_damagedFractionSubsystem; // 0xC
        float m_criticallyDamagedFraction; // 0x10
        float m_battleTrackerReductionFraction; // 0x14
        float m_priorityDistanceBandSize; // 0x18
        float m_distanceBandSize; // 0x1C
        unsigned __int32 m_attackerBandSize; // 0x20
        float m_maxWeaponOffsetTime; // 0x24
        unsigned __int32 m_numberOfBlockedShotsBeforeMove; // 0x28
        float m_shieldDamageTimeout; // 0x2C
    };
    static_assert(sizeof(CombatInfo) == 48, "Invalid CombatInfo size");
    _inline ITweak::CombatInfo const &GetCombatInfo() const;
    struct LatchInfo
    {
        float flying_above_latch_point_distance_sqr; // 0x0
        float flying_to_latch_point_tolerance_sqr; // 0x4
        float m_initialOffsetFromLatchPoint; // 0x8
        float m_tooFarFromPointSqr; // 0xC
    };
    static_assert(sizeof(LatchInfo) == 16, "Invalid LatchInfo size");
    _inline ITweak::LatchInfo const &GetLatchInfo() const;
    struct StrikeGroupInfo
    {
        float m_minSpeedFraction; // 0x0
        float m_maxSpeedFraction; // 0x4
        float m_maxSpeedWhenCloserThanSqr; // 0x8
        float m_minSpeedWhenFurtherThanSqr; // 0xC
        float m_strikeGroupSpacing; // 0x10
        float m_cosMirrorAngle; // 0x14
    };
    static_assert(sizeof(StrikeGroupInfo) == 24, "Invalid StrikeGroupInfo size");
    _inline ITweak::StrikeGroupInfo const &GetStrikeGroupInfo() const;
    struct TimingInfo
    {
        unsigned __int32 m_modifierTiming; // 0x0
        unsigned __int32 m_combatScanForRetaliationTargetsTiming; // 0x4
        float m_inactiveIdleTime; // 0x8
        unsigned __int32 m_idleScanningForRetaliationTargetsTiming; // 0xC
        unsigned __int32 m_guardScanningForRetaliationTargetsTiming; // 0x10
        unsigned __int32 m_moveScanningForRetaliationTargetsTiming; // 0x14
    };
    static_assert(sizeof(TimingInfo) == 24, "Invalid TimingInfo size");
    _inline ITweak::TimingInfo const &GetTimingInfo() const;
    struct MineLayingInfo
    {
        float m_maxFieldRadius; // 0x0
        float m_distanceMultiplierForSphere; // 0x4
        float m_mineSpacing; // 0x8
    };
    static_assert(sizeof(MineLayingInfo) == 12, "Invalid MineLayingInfo size");
    _inline ITweak::MineLayingInfo const &GetMineLayingInfo() const;
    struct CollisionInfo
    {
        float m_kamikazeDamageMultiplier; // 0x0
        float m_normalCollisionDamageMultiplier; // 0x4
    };
    static_assert(sizeof(CollisionInfo) == 8, "Invalid CollisionInfo size");
    _inline ITweak::CollisionInfo const &GetCollisionInfo() const;
    struct FXInfo
    {
        vector3 m_windStrength; // 0x0
        float m_fadePointDistance; // 0xC
        float m_maxPointDistance; // 0x10
        float m_beamFadePercentage; // 0x14
        _inline FXInfo(); /* compiler_generated() */
    };
    static_assert(sizeof(FXInfo) == 24, "Invalid FXInfo size");
    _inline ITweak::FXInfo const &GetFXInfo() const;
    struct MultiplierCapInfo
    {
        float m_cap[29]; // 0x0
    };
    static_assert(sizeof(MultiplierCapInfo) == 116, "Invalid MultiplierCapInfo size");
    _inline ITweak::MultiplierCapInfo const &GetMultiplierCapInfo() const;
    struct AutoLODInfo
    {
        float m_desiredFPS; // 0x0
        float m_minScaleFactor; // 0x4
        float m_maxScaleFactor; // 0x8
        float m_scaleDelta; // 0xC
        float m_increaseDelta; // 0x10
        float m_decreaseDelta; // 0x14
        float m_renderTimeDelta; // 0x18
    };
    static_assert(sizeof(AutoLODInfo) == 28, "Invalid AutoLODInfo size");
    _inline ITweak::AutoLODInfo const &GetAutoLODInfo() const;
    unsigned __int32 GetSyncToken() const;
private:
    ITweak::ResourceInfo m_ResourceInfo; // 0x0
    ITweak::DustCloudInfo m_DustCloudInfo; // 0x34
    ITweak::NebulaInfo m_NebulaInfo; // 0xA0
    ITweak::FormationInfo m_FormationInfo; // 0xA4
    ITweak::ShipControllerInfo m_ShipControllerInfo; // 0xB8
    ITweak::ShipInfo m_ShipInfo; // 0xCC
    ITweak::DockingInfo m_DockingInfo; // 0x2E0
    ITweak::LaunchingInfo m_LaunchingInfo; // 0x31C
    ITweak::ParadeInfo m_ParadeInfo; // 0x41C
    ITweak::ResearchInfo m_ResearchInfo; // 0x424
    ITweak::BuildInfo m_BuildInfo; // 0x428
    ITweak::OrderInfo m_OrderInfo; // 0x434
    ITweak::WeaponFireInfo m_WeaponFireInfo; // 0x438
    ITweak::HyperSpaceInfo m_HyperSpaceInfo; // 0x43C
    ITweak::SensorPingInfo m_SensorPingInfo; // 0x444
    ITweak::CaptureInfo m_CaptureInfo; // 0x448
    ITweak::RepairInfo m_RepairInfo; // 0x46C
    ITweak::UnitCapsInfo m_UnitCapsInfo; // 0x474
    ITweak::AutoFormationInfo m_AutoFormationInfo; // 0x478
    ITweak::EngineTrailInfo m_EngineTrailInfo; // 0x484
    ITweak::CombatInfo m_CombatInfo; // 0x510
    ITweak::LatchInfo m_LatchInfo; // 0x540
    ITweak::StrikeGroupInfo m_StrikeGroupInfo; // 0x550
    ITweak::AvoidanceInfo m_AvoidanceInfo; // 0x568
    ITweak::TimingInfo m_TimingInfo; // 0x684
    ITweak::MineLayingInfo m_MineLayingInfo; // 0x69C
    ITweak::CollisionInfo m_CollisionInfo; // 0x6A8
    ITweak::FXInfo m_FXInfo; // 0x6B0
    ITweak::MultiplierCapInfo m_MultiplierCapInfo; // 0x6C8
    ITweak::AutoLODInfo m_AutoLODInfo; // 0x73C
    void LoadFrom(char const *);
    ITweak &operator=(ITweak const &);
};
static_assert(sizeof(ITweak) == 1880, "Invalid ITweak size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline ITweak::ResourceInfo const &ITweak::GetResourceInfo() const // 0x48A6A7
{
    mangled_assert("?GetResourceInfo@ITweak@@QBEABUResourceInfo@1@XZ");
    todo("implement");
}

_inline ITweak::DustCloudInfo const &ITweak::GetDustCloudInfo() const // 0x4A2EC8
{
    mangled_assert("?GetDustCloudInfo@ITweak@@QBEABUDustCloudInfo@1@XZ");
    todo("implement");
}

_inline ITweak::NebulaInfo const &ITweak::GetNebulaInfo() const // 0x4C0B7C
{
    mangled_assert("?GetNebulaInfo@ITweak@@QBEABUNebulaInfo@1@XZ");
    todo("implement");
}

_inline ITweak::FormationInfo const &ITweak::GetFormationInfo() const // 0x48A68E
{
    mangled_assert("?GetFormationInfo@ITweak@@QBEABUFormationInfo@1@XZ");
    todo("implement");
}

_inline ITweak::ShipInfo const &ITweak::GetShipInfo() const // 0x48A6B1
{
    mangled_assert("?GetShipInfo@ITweak@@QBEABUShipInfo@1@XZ");
    todo("implement");
}

_inline ITweak::ShipControllerInfo const &ITweak::GetShipControllerInfo() const // 0x4981B8
{
    mangled_assert("?GetShipControllerInfo@ITweak@@QBEABUShipControllerInfo@1@XZ");
    todo("implement");
}

_inline ITweak::DockingInfo const &ITweak::GetDockingInfo() const // 0x4ACA6A
{
    mangled_assert("?GetDockingInfo@ITweak@@QBEABUDockingInfo@1@XZ");
    todo("implement");
}

_inline ITweak::LaunchingInfo const &ITweak::GetLaunchingInfo() const // 0x5FBBF0
{
    mangled_assert("?GetLaunchingInfo@ITweak@@QBEABULaunchingInfo@1@XZ");
    todo("implement");
}

_inline ITweak::ParadeInfo const &ITweak::GetParadeInfo() const // 0x4ACA71
{
    mangled_assert("?GetParadeInfo@ITweak@@QBEABUParadeInfo@1@XZ");
    todo("implement");
}

_inline ITweak::ResearchInfo const &ITweak::GetResearchInfo() const // 0x4ED79E
{
    mangled_assert("?GetResearchInfo@ITweak@@QBEABUResearchInfo@1@XZ");
    todo("implement");
}

_inline ITweak::BuildInfo const &ITweak::GetBuildInfo() const // 0x4B82E7
{
    mangled_assert("?GetBuildInfo@ITweak@@QBEABUBuildInfo@1@XZ");
    todo("implement");
}

_inline ITweak::AvoidanceInfo const &ITweak::GetAvoidanceInfo() const // 0x477BF4
{
    mangled_assert("?GetAvoidanceInfo@ITweak@@QBEABUAvoidanceInfo@1@XZ");
    todo("implement");
}

_inline ITweak::OrderInfo const &ITweak::GetOrderInfo() const // 0x5FBBFE
{
    mangled_assert("?GetOrderInfo@ITweak@@QBEABUOrderInfo@1@XZ");
    todo("implement");
}

_inline ITweak::WeaponFireInfo const &ITweak::GetWeaponFireInfo() const // 0x4A2ECC
{
    mangled_assert("?GetWeaponFireInfo@ITweak@@QBEABUWeaponFireInfo@1@XZ");
    todo("implement");
}

_inline ITweak::HyperSpaceInfo const &ITweak::GetHyperSpaceInfo() const // 0x48A695
{
    mangled_assert("?GetHyperSpaceInfo@ITweak@@QBEABUHyperSpaceInfo@1@XZ");
    todo("implement");
}

_inline ITweak::SensorPingInfo const &ITweak::GetSensorPingInfo() const // 0x48A6AA
{
    mangled_assert("?GetSensorPingInfo@ITweak@@QBEABUSensorPingInfo@1@XZ");
    todo("implement");
}

_inline ITweak::CaptureInfo const &ITweak::GetCaptureInfo() const // 0x48459A
{
    mangled_assert("?GetCaptureInfo@ITweak@@QBEABUCaptureInfo@1@XZ");
    todo("implement");
}

_inline ITweak::RepairInfo const &ITweak::GetRepairInfo() const // 0x489129
{
    mangled_assert("?GetRepairInfo@ITweak@@QBEABURepairInfo@1@XZ");
    todo("implement");
}

_inline ITweak::UnitCapsInfo const &ITweak::GetUnitCapsInfo() const // 0x5FBE2A
{
    mangled_assert("?GetUnitCapsInfo@ITweak@@QBEABUUnitCapsInfo@1@XZ");
    todo("implement");
}

_inline ITweak::AutoFormationInfo const &ITweak::GetAutoFormationInfo() const // 0x5FBBE2
{
    mangled_assert("?GetAutoFormationInfo@ITweak@@QBEABUAutoFormationInfo@1@XZ");
    todo("implement");
}

_inline ITweak::EngineTrailInfo const &ITweak::GetEngineTrailInfo() const // 0x44021A
{
    mangled_assert("?GetEngineTrailInfo@ITweak@@QBEABUEngineTrailInfo@1@XZ");
    todo("implement");
}

_inline ITweak::CombatInfo const &ITweak::GetCombatInfo() const // 0x48A67F
{
    mangled_assert("?GetCombatInfo@ITweak@@QBEABUCombatInfo@1@XZ");
    todo("implement");
}

_inline ITweak::LatchInfo const &ITweak::GetLatchInfo() const // 0x5FBBE9
{
    mangled_assert("?GetLatchInfo@ITweak@@QBEABULatchInfo@1@XZ");
    todo("implement");
}

_inline ITweak::StrikeGroupInfo const &ITweak::GetStrikeGroupInfo() const // 0x50770E
{
    mangled_assert("?GetStrikeGroupInfo@ITweak@@QBEABUStrikeGroupInfo@1@XZ");
    todo("implement");
}

_inline ITweak::TimingInfo const &ITweak::GetTimingInfo() const // 0x56E490
{
    mangled_assert("?GetTimingInfo@ITweak@@QBEABUTimingInfo@1@XZ");
    todo("implement");
}

_inline ITweak::MineLayingInfo const &ITweak::GetMineLayingInfo() const // 0x5FBBF7
{
    mangled_assert("?GetMineLayingInfo@ITweak@@QBEABUMineLayingInfo@1@XZ");
    todo("implement");
}

_inline ITweak::CollisionInfo const &ITweak::GetCollisionInfo() const // 0x4E3F54
{
    mangled_assert("?GetCollisionInfo@ITweak@@QBEABUCollisionInfo@1@XZ");
    todo("implement");
}

_inline ITweak::FXInfo const &ITweak::GetFXInfo() const // 0x4A6E27
{
    mangled_assert("?GetFXInfo@ITweak@@QBEABUFXInfo@1@XZ");
    todo("implement");
}

_inline ITweak::MultiplierCapInfo const &ITweak::GetMultiplierCapInfo() const // 0x4F1EA9
{
    mangled_assert("?GetMultiplierCapInfo@ITweak@@QBEABUMultiplierCapInfo@1@XZ");
    todo("implement");
}

_inline ITweak::AutoLODInfo const &ITweak::GetAutoLODInfo() const // 0x56AC8C
{
    mangled_assert("?GetAutoLODInfo@ITweak@@QBEABUAutoLODInfo@1@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ITWEAK_H__
#endif
