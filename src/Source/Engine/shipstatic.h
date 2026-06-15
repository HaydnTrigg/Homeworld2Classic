#if 0
#ifndef __SHIPSTATIC_H__
#define __SHIPSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HardPointStaticInfo
{
public:
    std::vector<HardPointStatic *,std::allocator<HardPointStatic *> > m_hardPointStatics; // 0x0
    HardPointStaticInfo(HardPointStaticInfo const &); /* compiler_generated() */
    _inline HardPointStaticInfo(); /* compiler_generated() */
    _inline ~HardPointStaticInfo(); /* compiler_generated() */
    HardPointStaticInfo &operator=(HardPointStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(HardPointStaticInfo) == 12, "Invalid HardPointStaticInfo size");

class ShipStatic :
    public SobWithMeshStatic
{
public:
    typedef SobWithMeshStatic SuperClass;
    ShipStatic(ShipStatic const &); /* compiler_generated() */
protected:
    ShipStatic(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, SobType);
public:
    virtual ~ShipStatic() override;
    static SobStatic *Create(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, SobStatic *found);
    virtual void postStaticLoad() override;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_controllerType; // 0x2AC
    std::vector<unsigned int,std::allocator<unsigned int> > m_mirrorAboveManeuvers; // 0x2C4
    std::vector<unsigned int,std::allocator<unsigned int> > m_mirrorBelowManeuvers; // 0x2D0
    std::vector<unsigned int,std::allocator<unsigned int> > m_specialTurnLeftManeuvers; // 0x2DC
    std::vector<unsigned int,std::allocator<unsigned int> > m_specialTurnUpManeuvers; // 0x2E8
    std::vector<unsigned int,std::allocator<unsigned int> > m_specialTurnRightManeuvers; // 0x2F4
    std::vector<unsigned int,std::allocator<unsigned int> > m_specialTurnDownManeuvers; // 0x300
    float formationSpacing; // 0x30C
    StaticParadeData *staticParadeData; // 0x310
    float paradeSpacing; // 0x314
    HardPointStaticInfo hardPointStaticInfo; // 0x318
    WeaponStaticInfo weaponStaticInfo; // 0x324
    float m_dockTimeBetweenTwoFormations; // 0x340
    float m_dockTimeBeforeStart; // 0x344
    unsigned __int32 m_dockNrOfShipsInDockFormation; // 0x348
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_dockFormation; // 0x34C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_queueFormation; // 0x364
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_tacticsFormations[3]; // 0x37C
    float m_launchTimeBetweenTwoFormations; // 0x3C4
    float m_launchTimeBeforeStart; // 0x3C8
    unsigned __int32 m_launchNrOfShipsInDockFormation; // 0x3CC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_launchFormation; // 0x3D0
    __int32 m_buildCost; // 0x3E8
    __int32 m_buildTime; // 0x3EC
    unsigned __int32 m_buildPriority; // 0x3F0
    Texture *m_buildIconTexture; // 0x3F4
    bool m_bTransferable; // 0x3F8
    CaptureStatic *m_captureStatic; // 0x3FC
    RepairManagerStatic *m_repairManagerStatic; // 0x400
    SensorPingStatic *m_sensorPingStatic; // 0x404
    CloakStatic *m_cloakStatic; // 0x408
    SalvageManagerStatic *m_salvageStatic; // 0x40C
    DefenseFieldManagerStatic *m_defenseFieldManagerStatic; // 0x410
    DefenseFieldShieldStatic *m_defenseFieldShieldStatic; // 0x414
    HyperspaceInhibitorStatic *m_hyperspaceInhibitorStatic; // 0x418
    __int32 m_fighterValue; // 0x41C
    __int32 m_corvetteValue; // 0x420
    __int32 m_frigateValue; // 0x424
    __int32 m_neutralValue; // 0x428
    __int32 m_antiFighterValue; // 0x42C
    __int32 m_antiCorvetteValue; // 0x430
    __int32 m_antiFrigateValue; // 0x434
    float m_retaliationRange; // 0x438
    float m_visualRange; // 0x43C
    float m_prmSensorRange; // 0x440
    float m_secSensorRange; // 0x444
    float m_baseCloakDetectionLevel; // 0x448
    unsigned __int32 m_nSquadronSize; // 0x44C
    __int32 m_minimalFamilyToFindPathAround; // 0x450
    float m_kamikazeCollisionDamageMultiplier; // 0x454
    BaseCommandStaticInfo *m_commandStatic[22]; // 0x458
    BuildQueueStatic *m_buildStatic; // 0x4B0
    float m_sideArmourDamage; // 0x4B4
    float m_rearArmourDamage; // 0x4B8
    float m_maxShield[2]; // 0x4BC
    float m_shieldRechargeTime[2]; // 0x4C4
    float m_retaliationDistanceFromGoal; // 0x4CC
    bool m_abilityActive[30]; // 0x4D0
    ModifierApplier m_modifierApplier; // 0x4F0
    ModifierUIInfo m_modifierUIInfo; // 0x4FC
    float m_sobSpecialDieTime; // 0x50C
    float m_specialDeathSpeed; // 0x510
    float m_chanceOfSpecialDeath; // 0x514
    bool m_isMilitary; // 0x518
    bool m_useTargetRandom; // 0x519
    float m_targetRandomPointXMin; // 0x51C
    float m_targetRandomPointXMax; // 0x520
    float m_targetRandomPointYMin; // 0x524
    float m_targetRandomPointYMax; // 0x528
    float m_targetRandomPointZMin; // 0x52C
    float m_targetRandomPointZMax; // 0x530
    unsigned __int32 m_raceHash; // 0x534
    bool m_dontDockWithOtherRaceShips; // 0x538
    bool m_ignoreRaceWhenDocking; // 0x539
    float m_formationSwayUpdateTime; // 0x53C
    float m_formationSwayOffsetRandomX; // 0x540
    float m_formationSwayOffsetRandomY; // 0x544
    float m_formationSwayOffsetRandomZ; // 0x548
    float m_formationSwayBobbingFactor; // 0x54C
    float m_formationSwayRotateFactor; // 0x550
    float m_cosMirrorAngle; // 0x554
    float m_cosSecondaryTurnAngle; // 0x558
    float m_slideMoveRange; // 0x55C
    float m_dockQueueSelectionQueueMultiplier; // 0x560
    float m_dockQueueSelectionOccupiedMultiplier; // 0x564
    float m_nebulaDamagePerSecond; // 0x568
    float m_dustCloudDamagePerSecond; // 0x56C
    bool m_bShipHoldActive; // 0x570
    unsigned __int32 m_nbRestrictedHardpoints; // 0x574
private:
    std::vector<ShipStatic::spawnSalvage,std::allocator<ShipStatic::spawnSalvage> > m_salvagesToSpawn; // 0x578
    std::vector<ShipStatic::spawnDustCloud,std::allocator<ShipStatic::spawnDustCloud> > m_dustCloudsToSpawn; // 0x584
public:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_spawnShipOnDeath; // 0x590
private:
    ShipHoldStatic *m_pShipHoldStatic; // 0x5A8
    boost::scoped_ptr<ShipStatic::LoadingEnv> m_loadingEnv; // 0x5AC
public:
    static char const *k_buildIconTextureBaseName;
    static unsigned __int32 GenerateRaceHash(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
    bool CanDockWith(ShipStatic const *) const;
    struct spawnSalvage
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_salvageName; // 0x0
        unsigned __int32 m_numberOfObjectsSpawned; // 0x18
        float m_percentageRUsOfShip; // 0x1C
        vector3 m_position; // 0x20
        float m_positionRandom; // 0x2C
        vector3 m_rotation; // 0x30
        float m_rotationRandom; // 0x3C
        vector3 m_addedVelocity; // 0x40
        float m_addedVelocityRandom; // 0x4C
        vector3 m_addedAngularVelocity; // 0x50
        float m_addedAngularVelocityRandom; // 0x5C
        _inline spawnSalvage(ShipStatic::spawnSalvage const &); /* compiler_generated() */
        _inline spawnSalvage(); /* compiler_generated() */
        _inline ~spawnSalvage(); /* compiler_generated() */
        ShipStatic::spawnSalvage &operator=(ShipStatic::spawnSalvage const &); /* compiler_generated() */
    };
    static_assert(sizeof(spawnSalvage) == 96, "Invalid spawnSalvage size");
    void addSalvageToSpawnWhenDying(ShipStatic::spawnSalvage const &);
    typedef std::vector<ShipStatic::spawnSalvage,std::allocator<ShipStatic::spawnSalvage> > spawnSalvageVector;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnSalvage> > > spawnSalvageVectorConstIterator;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnSalvage> > > spawnSalvageBegin() const;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnSalvage> > > spawnSalvageEnd() const;
    _inline ShipHoldStatic const *getShipHoldStatic() const;
    _inline ShipHoldStatic *getShipHoldStatic();
    void setShipHoldStatic(ShipHoldStatic *);
    _inline bool isShipHoldActive() const;
    struct spawnDustCloud
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_dustcloudName; // 0x0
        unsigned __int32 m_numberOfObjectsSpawned; // 0x18
        float m_percentageRUsOfHeldResources; // 0x1C
        vector3 m_position; // 0x20
        float m_positionRandom; // 0x2C
        float m_rotation; // 0x30
        float m_rotationRandom; // 0x34
        vector3 m_addedVelocity; // 0x38
        float m_addedVelocityRandom; // 0x44
        vector4 m_colour; // 0x48
        float m_size; // 0x58
        float m_sizeRandom; // 0x5C
        _inline spawnDustCloud(ShipStatic::spawnDustCloud const &); /* compiler_generated() */
        _inline spawnDustCloud(); /* compiler_generated() */
        _inline ~spawnDustCloud(); /* compiler_generated() */
        ShipStatic::spawnDustCloud &operator=(ShipStatic::spawnDustCloud const &); /* compiler_generated() */
    };
    static_assert(sizeof(spawnDustCloud) == 96, "Invalid spawnDustCloud size");
    void addDustCloudToSpawnWhenDying(ShipStatic::spawnDustCloud const &);
    typedef std::vector<ShipStatic::spawnDustCloud,std::allocator<ShipStatic::spawnDustCloud> > spawnDustCloudVector;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnDustCloud> > > spawnDustCloudVectorConstIterator;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnDustCloud> > > spawnDustCloudBegin() const;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnDustCloud> > > spawnDustCloudEnd() const;
    class LoadingEnv
    {
    public:
        ShipHoldStatic *m_pShipHoldStatic; // 0x0
        SobWithMeshStatic::LoadingEnv *m_sobWithMeshStaticLoadingEnv; // 0x4
    };
    static_assert(sizeof(LoadingEnv) == 8, "Invalid LoadingEnv size");
protected:
    virtual bool LoadModelBegin(SobType, char const *) override;
    virtual void LoadModelExecute() override;
    virtual void LoadModelEnd(char const *) override;
    virtual bool LoadModelFromCache(char const *) override;
    virtual void OnHandlingDTRM(IFF *, IFFChunk *, void *, void *) override;
public:
    ShipStatic &operator=(ShipStatic const &); /* compiler_generated() */
};
static_assert(sizeof(ShipStatic) == 1456, "Invalid ShipStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnSalvage> > > ShipStatic::spawnSalvageBegin() const // 0x49064E
{
    mangled_assert("?spawnSalvageBegin@ShipStatic@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UspawnSalvage@ShipStatic@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnSalvage> > > ShipStatic::spawnSalvageEnd() const // 0x49065D
{
    mangled_assert("?spawnSalvageEnd@ShipStatic@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UspawnSalvage@ShipStatic@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline ShipHoldStatic *ShipStatic::getShipHoldStatic() // 0x4CF4CB
{
    mangled_assert("?getShipHoldStatic@ShipStatic@@QAEPAVShipHoldStatic@@XZ");
    todo("implement");
}

_inline ShipHoldStatic const *ShipStatic::getShipHoldStatic() const // 0x48CC3F
{
    mangled_assert("?getShipHoldStatic@ShipStatic@@QBEPBVShipHoldStatic@@XZ");
    todo("implement");
}

_inline bool ShipStatic::isShipHoldActive() const // 0x48E028
{
    mangled_assert("?isShipHoldActive@ShipStatic@@QBE_NXZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnDustCloud> > > ShipStatic::spawnDustCloudBegin() const // 0x48FEC3
{
    mangled_assert("?spawnDustCloudBegin@ShipStatic@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UspawnDustCloud@ShipStatic@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ShipStatic::spawnDustCloud> > > ShipStatic::spawnDustCloudEnd() const // 0x48FED2
{
    mangled_assert("?spawnDustCloudEnd@ShipStatic@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UspawnDustCloud@ShipStatic@@@std@@@std@@@std@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SHIPSTATIC_H__
#endif
