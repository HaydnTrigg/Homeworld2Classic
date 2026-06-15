#if 0
#ifndef __SHIP_H__
#define __SHIP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Ship :
    public SobWithMesh
{
public:
    enum RenderStyle
    {
        Render_Extras = 0,
        Render_Normal,
        Render_SM_Shadow,
        Render_Debug,
    };
    enum eShadowType
    {
        eNoShadow = 0,
        eHasShadow,
        eAlreadyDrawn,
    };
    typedef SobWithMesh SuperClass;
    Ship(Ship &); /* compiler_generated() */
    Ship(SaveGameData *);
    Ship(char const *, Player *);
    virtual ~Ship() override;
    virtual void sobVisInit() override;
    virtual bool update(float) override;
    BaseCommandStaticInfo *getActiveCommandDataStatic();
    Command *getActiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    bool canBeInterrupted(CommandType) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    bool isCurrentlyAble(AbilityType) const;
    bool isCurrentAbility(AbilityType) const;
    _inline void setAbilityEnabled(AbilityType, bool);
    _inline void temporarilyEnableAbility(AbilityType);
    _inline void temporarilyDisableAbility(AbilityType);
    void removeTemporaryAbilities();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    BaseCommandStaticInfo *getCommandDataStatic(CommandType) const;
    __int32 getSpecialAttackIndex() const;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getSpecialAttackName() const;
    void setFormation(Formation *);
    _inline Formation *getFormation() const;
    void setSquadron(Squadron *);
    _inline Squadron *getSquadron() const;
    unsigned __int32 getShipTypeId() const;
    float getMaxShield(ShieldType) const;
    float getShield(ShieldType) const;
    void takeDamageToShield(ShieldType, float const);
    bool getRecentDamageToShield(ShieldType) const;
    void upgradeHealth(float);
    void staticInit();
    virtual void reloadStats() override;
    _inline void setLatchPathID(unsigned char);
    unsigned char getLatchPathID();
    float getMaxSpeedWithFormation() const;
    float getThrusterAccel() const;
    float getMainEngineAccel() const;
    float getRotationAccel() const;
    float getThrusterBrake() const;
    float getMainEngineBrake() const;
    float getRotationBrake() const;
    float getThrusterMaxSpeed() const;
    float getMainEngineMaxSpeed() const;
    float getRotationMaxSpeed() const;
    float getBuildSpeedMultiplier() const;
    float getShipHoldRepairSpeedMultiplier() const;
    float getCosAccelerationAngle() const;
    float getCosMirrorAngle() const;
    float getCosSpecialTurnAngle() const;
    float getVisualRange() const;
    float getPrimarySensorsRange() const;
    float getSecondarySensorsRange() const;
    void applyMultipliersAndAbilities();
    bool isPartiallyTransparent() const;
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    _inline void setNbRestrictedHardpoints(unsigned __int32);
    _inline unsigned __int32 getNbRestrictedHardpoints() const;
private:
    ModifierTargetCache m_modifierTargets; // 0x24C
    unsigned __int32 m_nbRestrictedHardpoints; // 0x25C
protected:
    WeaponInfo m_weaponInfo; // 0x260
private:
    float m_inBattleTime; // 0x26C
    std::vector<float,std::allocator<float> > m_firedAtPlayerTime; // 0x270
protected:
    float m_sensorsHiddenTime; // 0x27C
    float m_radiationTime; // 0x280
    float m_inChargedDustCloudTime; // 0x284
private:
    unsigned __int32 m_displayedHotkeyGroup; // 0x288
protected:
    float m_recentHealthChanges; // 0x28C
    float m_damageDone; // 0x290
    HardPointManager m_hardPointManager; // 0x294
private:
    bool m_doingSpecialDeath; // 0x2A8
    Selection m_shipsAttacking; // 0x2AC
    float m_shipsAttackingUpdateTime; // 0x2E0
    BuildQueue *m_buildQueue; // 0x2E4
    CaptureManager *m_captureManager; // 0x2E8
    RepairManager *m_repairManager; // 0x2EC
    CloakManager *m_cloakManager; // 0x2F0
    DefenseFieldManager *m_defenseFieldManager; // 0x2F4
    HyperspaceInhibitorManager *m_hyperspaceInhibitorManager; // 0x2F8
    SensorPingManager *m_sensorPingManager; // 0x2FC
    SalvageManager *m_salvageManager; // 0x300
    ShipHold *m_shipHold; // 0x304
    unsigned char m_latchPathID; // 0x308
    ShipController *m_shipController; // 0x30C
    PlayerResourceType m_lastResourceTypeCollected; // 0x310
    Fixed<10> m_resources; // 0x314
    Formation *m_pFormation; // 0x318
    Squadron *m_pSquadron; // 0x31C
    ParadeFormation *m_paradeFormation; // 0x320
    ParadeFormation *m_rallyPointParadeFormation; // 0x324
    float m_shields[2]; // 0x328
    float m_shieldDamageTimers[2]; // 0x330
    float m_disabledTime; // 0x338
    bool m_weaponsFiredLastTurn; // 0x33C
    float m_idleTime; // 0x340
    unsigned __int32 m_numberOfBlockedShots; // 0x344
    bool m_overrideDock; // 0x348
protected:
    float m_disabledSteeringTime; // 0x34C
private:
    bool m_frozen; // 0x350
    bool m_fowVisible; // 0x351
    bool m_abilityActive[30]; // 0x352
    bool m_tempAbilityActive[30]; // 0x370
    bool m_tempAbilityDisabled[30]; // 0x38E
protected:
    MultiplierContainer m_multiplierContainer; // 0x3AC
public:
    virtual void setSleepingFlag(bool) override;
    virtual float getMainEngineUsage() override;
    virtual float getHorizontalRotationalThrusterUsage();
    virtual float getVerticalRotationalThrusterUsage();
    _inline void modifySpeedMultiplier(float const);
    _inline float getSpeedMultiplier() const;
    void getSubSystems(std::vector<SubSystem *,std::allocator<SubSystem *> > &) const;
    SubSystem *getSubSystem(char const *) const;
    unsigned __int32 getNumberOfFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfFreeFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfSubSystemsFitted(unsigned __int32) const;
    unsigned __int32 getNumberOfSubSystems(unsigned __int32) const;
    void getFreeHardpoints(std::vector<HardPoint *,std::allocator<HardPoint *> > &);
    bool canRetrofitSubSystem(unsigned __int32) const;
    float getHyperspaceTransitTime() const;
    float getGateTransitTime() const;
    float getHyperspaceRecoveryTime() const;
    float getHyperspaceCost(float) const;
    float getSensorPingCost() const;
    void takeDamageFromGateAbort();
    virtual void setInHyperspace(bool) override;
    bool isSubSystemTypePresentOnShip(unsigned __int32);
    bool isSubSystemTypePresentOnShip(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool availableSpaceForSubSystem(unsigned __int32);
    bool instantlyBuildSubSystem(unsigned __int32);
    _inline SubSystem *buildSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesAvailableForSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesCompatibleWithSubSystem(unsigned __int32);
    _inline Weapon *getWeapon(__int32);
    Weapon *getWeaponWithID(__int32);
    _inline unsigned __int32 getNumWeapons() const;
    void setEnableDisableWeapon(char const *, bool);
    void flushWeaponTargets();
    void fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &);
    void fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
    void weaponUpdate(float);
    void setupWeapons();
    void cleanUpWeapons();
    _inline bool weaponsFiredLastTurn() const;
    float getPerSecondDamageRating() const;
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const override;
    _inline bool isFOWVisible() const;
    void setFOWVisible(bool);
    _inline CloakManager *getCloakManager() const;
    bool doingCloakIncompatibleAction() const;
    float getCloakDetectionLevel() const;
    virtual void clearCloaking() override;
    BuildQueue *getBuildQueue() const;
    _inline CaptureManager *getCaptureManager() const;
    _inline RepairManager *getRepairManager() const;
    _inline SensorPingManager *getSensorPingManager() const;
    _inline ShipHold *getShipHold() const;
    void setShipHold(ShipHold *);
    _inline SalvageManager *getSalvageManager() const;
    virtual void setPlayerOwner(Player *) override;
    float getMinActiveWeaponRange() const;
    float getMaxActiveWeaponRange() const;
    unsigned __int32 getNumberOfWeaponsWithActivation(WeaponActivate) const;
    WeaponActivate getWeaponActivation() const;
    _inline float getWeaponAccuracy() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    float getMaxSensorRange() const;
    bool isVisHyperspacing() const;
    bool isVisHyperspacingClipped() const;
    Ship::eShadowType shouldDrawShadow(Camera const *) const;
    bool isDockingOrLaunching() const;
    bool inHyperspace() const;
    virtual void render(Camera const *);
    bool needsDirectRendering() const;
    void adjustShader();
private:
    bool renderHelper(Camera const *, bool const);
    void resetShaderVars(vector4 const &);
public:
    void renderSection(Camera const *, Ship::RenderStyle const, MeshRenderProxy &, bool const, __int32);
    void renderOnPlane(Camera const *, MeshRenderProxy &, vector3 const &, vector4 const &, bool const, bool const);
    void renderSMShadow(Camera const *, MeshRenderProxy &);
    ShipStatic const *getStatic() const;
    virtual void spawnDebris() override;
    virtual void spawnSkeleton() override;
    _inline bool isDisabled() const;
    void reenable();
    _inline void disable(float);
    virtual bool isInGodMode() override;
protected:
    void spawnSalvage();
    float getTotalSalvagePercentage();
    void spawnDustClouds();
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    void addAttacker(Ship *);
    void purgeFriendliesFromAttackingList();
    _inline Selection const &getAttackers() const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    bool isInCombat() const;
    bool enemyAttackingUs(Ship const *) const;
    void clearAttackingMeList();
    bool isAttackingPlayer(unsigned __int32) const;
    void attackingPlayer(unsigned __int32);
    bool blockedLineOfFire() const;
    void registerBlockedLineOfFire();
    void registerClearLineOfFire();
    void updateTimers(float);
    void updateShipControllerState(float);
    void updateSounds(float);
    void updateManagers(float);
    void updateDamageAssesment(float);
    void updateBattleTracker(float);
    bool isSensorsHidden() const;
    void setSensorsHidden();
    bool isInRadiation() const;
    void setInRadiation();
    bool isInChargedDustCloud() const;
    void setInChargedDustCloud();
    _inline __int32 getResources();
    _inline Fixed<10> const &getResourcesFixedPoint();
    void decreaseResources(Fixed<10> const &);
    void increaseResources(Fixed<10> const &, PlayerResourceType);
    float getResourceCollectionRate() const;
    __int32 getResourceCapacity() const;
    float getResourceDropOffRate() const;
    void flyShipToIntersectionPoint(Sob *, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, vector3, vector3, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, float);
    void flyShipToPoint(__int32, vector3 const &, float);
    void stopShip();
    bool finishedMovementGoals();
    bool IsShipNearPosition(vector3 *, float);
    enum PointToBehaviour
    {
        PointInDirFlying = 0,
        PointAtTarget,
        PointInHeadingGoal,
    };
    void setPointToBehaviour(Ship::PointToBehaviour);
    void setPointToTarget(DynamicPoint const &, float);
    void setEnforceMaximumAngles(bool);
    void flyShipToDynamicPosition(DynamicPoint const &, float const);
    _inline ShipController *getShipController();
    _inline ParadeFormation *getParadeFormation();
    _inline ParadeFormation *getRallyPointParadeFormation();
    _inline DefenseFieldManager *getDefenseFieldManager() const;
    static float ATTACKING_ME_LIST_STALE_TIME;
    void shipDidDamage(float);
    _inline float getBattleStatus();
    _inline float getRecentHealthChange();
    _inline unsigned __int32 getDisplayedHotkeyGroup() const;
    _inline void setDisplayedHotkeyGroup(unsigned __int32);
protected:
    virtual void onHealthChange(float) override;
    void updateController();
    void initialUpdateController();
    void setupHardPoints();
    virtual float getSobDieTime() override;
private:
    virtual void doDeathEffects(char const *) override;
    void tumble(vector3 const &);
    void setupShipController();
    void regenerateShields(float);
    void enforceShieldBounds(ShieldType);
public:
    _inline void SetOverrideDock(bool);
    _inline bool GetOverrideDock() const;
    void updateAnimations(float);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    _inline bool getFrozen() const;
    void setFrozen(bool);
    bool needsToAvoid(Sob *) const;
    void avoid(Sob *);
    _inline void disableSteering(float);
    void enableControllerSteering(bool);
    bool isSteeringDisabled();
private:
    SoundEntityHandle internalShipPlaySound(__int32);
    void internalShipStopSound(__int32);
public:
    _inline MultiplierContainer const &getMultiplierContainer() const;
    _inline MultiplierContainer &getMultiplierContainer();
    virtual float getMaxHealth() const override;
    virtual float getHealthRegenMultiplier() const override;
    Ship &operator=(Ship &); /* compiler_generated() */
};
static_assert(sizeof(Ship) == 1180, "Invalid Ship size");

class Ship :
    public SobWithMesh
{
public:
    enum RenderStyle
    {
        Render_Extras = 0,
        Render_Normal,
        Render_SM_Shadow,
        Render_Debug,
    };
    enum eShadowType
    {
        eNoShadow = 0,
        eHasShadow,
        eAlreadyDrawn,
    };
    typedef SobWithMesh SuperClass;
    Ship(Ship &); /* compiler_generated() */
    Ship(SaveGameData *);
    Ship(char const *, Player *);
    virtual ~Ship() override;
    virtual void sobVisInit() override;
    virtual bool update(float) override;
    BaseCommandStaticInfo *getActiveCommandDataStatic();
    Command *getActiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    bool canBeInterrupted(CommandType) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    bool isCurrentlyAble(AbilityType) const;
    bool isCurrentAbility(AbilityType) const;
    _inline void setAbilityEnabled(AbilityType, bool);
    _inline void temporarilyEnableAbility(AbilityType);
    _inline void temporarilyDisableAbility(AbilityType);
    void removeTemporaryAbilities();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    BaseCommandStaticInfo *getCommandDataStatic(CommandType) const;
    __int32 getSpecialAttackIndex() const;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getSpecialAttackName() const;
    void setFormation(Formation *);
    _inline Formation *getFormation() const;
    void setSquadron(Squadron *);
    _inline Squadron *getSquadron() const;
    unsigned __int32 getShipTypeId() const;
    float getMaxShield(ShieldType) const;
    float getShield(ShieldType) const;
    void takeDamageToShield(ShieldType, float const);
    bool getRecentDamageToShield(ShieldType) const;
    void upgradeHealth(float);
    void staticInit();
    virtual void reloadStats() override;
    _inline void setLatchPathID(unsigned char);
    unsigned char getLatchPathID();
    float getMaxSpeedWithFormation() const;
    float getThrusterAccel() const;
    float getMainEngineAccel() const;
    float getRotationAccel() const;
    float getThrusterBrake() const;
    float getMainEngineBrake() const;
    float getRotationBrake() const;
    float getThrusterMaxSpeed() const;
    float getMainEngineMaxSpeed() const;
    float getRotationMaxSpeed() const;
    float getBuildSpeedMultiplier() const;
    float getShipHoldRepairSpeedMultiplier() const;
    float getCosAccelerationAngle() const;
    float getCosMirrorAngle() const;
    float getCosSpecialTurnAngle() const;
    float getVisualRange() const;
    float getPrimarySensorsRange() const;
    float getSecondarySensorsRange() const;
    void applyMultipliersAndAbilities();
    bool isPartiallyTransparent() const;
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    _inline void setNbRestrictedHardpoints(unsigned __int32);
    _inline unsigned __int32 getNbRestrictedHardpoints() const;
private:
    ModifierTargetCache m_modifierTargets; // 0x24C
    unsigned __int32 m_nbRestrictedHardpoints; // 0x25C
protected:
    WeaponInfo m_weaponInfo; // 0x260
private:
    float m_inBattleTime; // 0x26C
    std::vector<float,std::allocator<float> > m_firedAtPlayerTime; // 0x270
protected:
    float m_sensorsHiddenTime; // 0x27C
    float m_radiationTime; // 0x280
    float m_inChargedDustCloudTime; // 0x284
private:
    unsigned __int32 m_displayedHotkeyGroup; // 0x288
protected:
    float m_recentHealthChanges; // 0x28C
    float m_damageDone; // 0x290
    HardPointManager m_hardPointManager; // 0x294
private:
    bool m_doingSpecialDeath; // 0x2A8
    Selection m_shipsAttacking; // 0x2AC
    float m_shipsAttackingUpdateTime; // 0x2E0
    BuildQueue *m_buildQueue; // 0x2E4
    CaptureManager *m_captureManager; // 0x2E8
    RepairManager *m_repairManager; // 0x2EC
    CloakManager *m_cloakManager; // 0x2F0
    DefenseFieldManager *m_defenseFieldManager; // 0x2F4
    HyperspaceInhibitorManager *m_hyperspaceInhibitorManager; // 0x2F8
    SensorPingManager *m_sensorPingManager; // 0x2FC
    SalvageManager *m_salvageManager; // 0x300
    ShipHold *m_shipHold; // 0x304
    unsigned char m_latchPathID; // 0x308
    ShipController *m_shipController; // 0x30C
    PlayerResourceType m_lastResourceTypeCollected; // 0x310
    Fixed<10> m_resources; // 0x314
    Formation *m_pFormation; // 0x318
    Squadron *m_pSquadron; // 0x31C
    ParadeFormation *m_paradeFormation; // 0x320
    ParadeFormation *m_rallyPointParadeFormation; // 0x324
    float m_shields[2]; // 0x328
    float m_shieldDamageTimers[2]; // 0x330
    float m_disabledTime; // 0x338
    bool m_weaponsFiredLastTurn; // 0x33C
    float m_idleTime; // 0x340
    unsigned __int32 m_numberOfBlockedShots; // 0x344
    bool m_overrideDock; // 0x348
protected:
    float m_disabledSteeringTime; // 0x34C
private:
    bool m_frozen; // 0x350
    bool m_fowVisible; // 0x351
    bool m_abilityActive[30]; // 0x352
    bool m_tempAbilityActive[30]; // 0x370
    bool m_tempAbilityDisabled[30]; // 0x38E
protected:
    MultiplierContainer m_multiplierContainer; // 0x3AC
public:
    virtual void setSleepingFlag(bool) override;
    virtual float getMainEngineUsage() override;
    virtual float getHorizontalRotationalThrusterUsage();
    virtual float getVerticalRotationalThrusterUsage();
    _inline void modifySpeedMultiplier(float const);
    _inline float getSpeedMultiplier() const;
    void getSubSystems(std::vector<SubSystem *,std::allocator<SubSystem *> > &) const;
    SubSystem *getSubSystem(char const *) const;
    unsigned __int32 getNumberOfFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfFreeFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfSubSystemsFitted(unsigned __int32) const;
    unsigned __int32 getNumberOfSubSystems(unsigned __int32) const;
    void getFreeHardpoints(std::vector<HardPoint *,std::allocator<HardPoint *> > &);
    bool canRetrofitSubSystem(unsigned __int32) const;
    float getHyperspaceTransitTime() const;
    float getGateTransitTime() const;
    float getHyperspaceRecoveryTime() const;
    float getHyperspaceCost(float) const;
    float getSensorPingCost() const;
    void takeDamageFromGateAbort();
    virtual void setInHyperspace(bool) override;
    bool isSubSystemTypePresentOnShip(unsigned __int32);
    bool isSubSystemTypePresentOnShip(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool availableSpaceForSubSystem(unsigned __int32);
    bool instantlyBuildSubSystem(unsigned __int32);
    _inline SubSystem *buildSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesAvailableForSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesCompatibleWithSubSystem(unsigned __int32);
    _inline Weapon *getWeapon(__int32);
    Weapon *getWeaponWithID(__int32);
    _inline unsigned __int32 getNumWeapons() const;
    void setEnableDisableWeapon(char const *, bool);
    void flushWeaponTargets();
    void fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &);
    void fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
    void weaponUpdate(float);
    void setupWeapons();
    void cleanUpWeapons();
    _inline bool weaponsFiredLastTurn() const;
    float getPerSecondDamageRating() const;
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const override;
    _inline bool isFOWVisible() const;
    void setFOWVisible(bool);
    _inline CloakManager *getCloakManager() const;
    bool doingCloakIncompatibleAction() const;
    float getCloakDetectionLevel() const;
    virtual void clearCloaking() override;
    BuildQueue *getBuildQueue() const;
    _inline CaptureManager *getCaptureManager() const;
    _inline RepairManager *getRepairManager() const;
    _inline SensorPingManager *getSensorPingManager() const;
    _inline ShipHold *getShipHold() const;
    void setShipHold(ShipHold *);
    _inline SalvageManager *getSalvageManager() const;
    virtual void setPlayerOwner(Player *) override;
    float getMinActiveWeaponRange() const;
    float getMaxActiveWeaponRange() const;
    unsigned __int32 getNumberOfWeaponsWithActivation(WeaponActivate) const;
    WeaponActivate getWeaponActivation() const;
    _inline float getWeaponAccuracy() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    float getMaxSensorRange() const;
    bool isVisHyperspacing() const;
    bool isVisHyperspacingClipped() const;
    Ship::eShadowType shouldDrawShadow(Camera const *) const;
    bool isDockingOrLaunching() const;
    bool inHyperspace() const;
    virtual void render(Camera const *);
    bool needsDirectRendering() const;
    void adjustShader();
private:
    bool renderHelper(Camera const *, bool const);
    void resetShaderVars(vector4 const &);
public:
    void renderSection(Camera const *, Ship::RenderStyle const, MeshRenderProxy &, bool const, __int32);
    void renderOnPlane(Camera const *, MeshRenderProxy &, vector3 const &, vector4 const &, bool const, bool const);
    void renderSMShadow(Camera const *, MeshRenderProxy &);
    ShipStatic const *getStatic() const;
    virtual void spawnDebris() override;
    virtual void spawnSkeleton() override;
    _inline bool isDisabled() const;
    void reenable();
    _inline void disable(float);
    virtual bool isInGodMode() override;
protected:
    void spawnSalvage();
    float getTotalSalvagePercentage();
    void spawnDustClouds();
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    void addAttacker(Ship *);
    void purgeFriendliesFromAttackingList();
    _inline Selection const &getAttackers() const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    bool isInCombat() const;
    bool enemyAttackingUs(Ship const *) const;
    void clearAttackingMeList();
    bool isAttackingPlayer(unsigned __int32) const;
    void attackingPlayer(unsigned __int32);
    bool blockedLineOfFire() const;
    void registerBlockedLineOfFire();
    void registerClearLineOfFire();
    void updateTimers(float);
    void updateShipControllerState(float);
    void updateSounds(float);
    void updateManagers(float);
    void updateDamageAssesment(float);
    void updateBattleTracker(float);
    bool isSensorsHidden() const;
    void setSensorsHidden();
    bool isInRadiation() const;
    void setInRadiation();
    bool isInChargedDustCloud() const;
    void setInChargedDustCloud();
    _inline __int32 getResources();
    _inline Fixed<10> const &getResourcesFixedPoint();
    void decreaseResources(Fixed<10> const &);
    void increaseResources(Fixed<10> const &, PlayerResourceType);
    float getResourceCollectionRate() const;
    __int32 getResourceCapacity() const;
    float getResourceDropOffRate() const;
    void flyShipToIntersectionPoint(Sob *, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, vector3, vector3, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, float);
    void flyShipToPoint(__int32, vector3 const &, float);
    void stopShip();
    bool finishedMovementGoals();
    bool IsShipNearPosition(vector3 *, float);
    enum PointToBehaviour
    {
        PointInDirFlying = 0,
        PointAtTarget,
        PointInHeadingGoal,
    };
    void setPointToBehaviour(Ship::PointToBehaviour);
    void setPointToTarget(DynamicPoint const &, float);
    void setEnforceMaximumAngles(bool);
    void flyShipToDynamicPosition(DynamicPoint const &, float const);
    _inline ShipController *getShipController();
    _inline ParadeFormation *getParadeFormation();
    _inline ParadeFormation *getRallyPointParadeFormation();
    _inline DefenseFieldManager *getDefenseFieldManager() const;
    static float ATTACKING_ME_LIST_STALE_TIME;
    void shipDidDamage(float);
    _inline float getBattleStatus();
    _inline float getRecentHealthChange();
    _inline unsigned __int32 getDisplayedHotkeyGroup() const;
    _inline void setDisplayedHotkeyGroup(unsigned __int32);
protected:
    virtual void onHealthChange(float) override;
    void updateController();
    void initialUpdateController();
    void setupHardPoints();
    virtual float getSobDieTime() override;
private:
    virtual void doDeathEffects(char const *) override;
    void tumble(vector3 const &);
    void setupShipController();
    void regenerateShields(float);
    void enforceShieldBounds(ShieldType);
public:
    _inline void SetOverrideDock(bool);
    _inline bool GetOverrideDock() const;
    void updateAnimations(float);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    _inline bool getFrozen() const;
    void setFrozen(bool);
    bool needsToAvoid(Sob *) const;
    void avoid(Sob *);
    _inline void disableSteering(float);
    void enableControllerSteering(bool);
    bool isSteeringDisabled();
private:
    SoundEntityHandle internalShipPlaySound(__int32);
    void internalShipStopSound(__int32);
public:
    _inline MultiplierContainer const &getMultiplierContainer() const;
    _inline MultiplierContainer &getMultiplierContainer();
    virtual float getMaxHealth() const override;
    virtual float getHealthRegenMultiplier() const override;
    Ship &operator=(Ship &); /* compiler_generated() */
};
static_assert(sizeof(Ship) == 1180, "Invalid Ship size");

class Ship :
    public SobWithMesh
{
public:
    enum RenderStyle
    {
        Render_Extras = 0,
        Render_Normal,
        Render_SM_Shadow,
        Render_Debug,
    };
    enum eShadowType
    {
        eNoShadow = 0,
        eHasShadow,
        eAlreadyDrawn,
    };
    typedef SobWithMesh SuperClass;
    Ship(Ship &); /* compiler_generated() */
    Ship(SaveGameData *);
    Ship(char const *, Player *);
    virtual ~Ship() override;
    virtual void sobVisInit() override;
    virtual bool update(float) override;
    BaseCommandStaticInfo *getActiveCommandDataStatic();
    Command *getActiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    bool canBeInterrupted(CommandType) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    bool isCurrentlyAble(AbilityType) const;
    bool isCurrentAbility(AbilityType) const;
    _inline void setAbilityEnabled(AbilityType, bool);
    _inline void temporarilyEnableAbility(AbilityType);
    _inline void temporarilyDisableAbility(AbilityType);
    void removeTemporaryAbilities();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    BaseCommandStaticInfo *getCommandDataStatic(CommandType) const;
    __int32 getSpecialAttackIndex() const;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getSpecialAttackName() const;
    void setFormation(Formation *);
    _inline Formation *getFormation() const;
    void setSquadron(Squadron *);
    _inline Squadron *getSquadron() const;
    unsigned __int32 getShipTypeId() const;
    float getMaxShield(ShieldType) const;
    float getShield(ShieldType) const;
    void takeDamageToShield(ShieldType, float const);
    bool getRecentDamageToShield(ShieldType) const;
    void upgradeHealth(float);
    void staticInit();
    virtual void reloadStats() override;
    _inline void setLatchPathID(unsigned char);
    unsigned char getLatchPathID();
    float getMaxSpeedWithFormation() const;
    float getThrusterAccel() const;
    float getMainEngineAccel() const;
    float getRotationAccel() const;
    float getThrusterBrake() const;
    float getMainEngineBrake() const;
    float getRotationBrake() const;
    float getThrusterMaxSpeed() const;
    float getMainEngineMaxSpeed() const;
    float getRotationMaxSpeed() const;
    float getBuildSpeedMultiplier() const;
    float getShipHoldRepairSpeedMultiplier() const;
    float getCosAccelerationAngle() const;
    float getCosMirrorAngle() const;
    float getCosSpecialTurnAngle() const;
    float getVisualRange() const;
    float getPrimarySensorsRange() const;
    float getSecondarySensorsRange() const;
    void applyMultipliersAndAbilities();
    bool isPartiallyTransparent() const;
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    _inline void setNbRestrictedHardpoints(unsigned __int32);
    _inline unsigned __int32 getNbRestrictedHardpoints() const;
private:
    ModifierTargetCache m_modifierTargets; // 0x24C
    unsigned __int32 m_nbRestrictedHardpoints; // 0x25C
protected:
    WeaponInfo m_weaponInfo; // 0x260
private:
    float m_inBattleTime; // 0x26C
    std::vector<float,std::allocator<float> > m_firedAtPlayerTime; // 0x270
protected:
    float m_sensorsHiddenTime; // 0x27C
    float m_radiationTime; // 0x280
    float m_inChargedDustCloudTime; // 0x284
private:
    unsigned __int32 m_displayedHotkeyGroup; // 0x288
protected:
    float m_recentHealthChanges; // 0x28C
    float m_damageDone; // 0x290
    HardPointManager m_hardPointManager; // 0x294
private:
    bool m_doingSpecialDeath; // 0x2A8
    Selection m_shipsAttacking; // 0x2AC
    float m_shipsAttackingUpdateTime; // 0x2E0
    BuildQueue *m_buildQueue; // 0x2E4
    CaptureManager *m_captureManager; // 0x2E8
    RepairManager *m_repairManager; // 0x2EC
    CloakManager *m_cloakManager; // 0x2F0
    DefenseFieldManager *m_defenseFieldManager; // 0x2F4
    HyperspaceInhibitorManager *m_hyperspaceInhibitorManager; // 0x2F8
    SensorPingManager *m_sensorPingManager; // 0x2FC
    SalvageManager *m_salvageManager; // 0x300
    ShipHold *m_shipHold; // 0x304
    unsigned char m_latchPathID; // 0x308
    ShipController *m_shipController; // 0x30C
    PlayerResourceType m_lastResourceTypeCollected; // 0x310
    Fixed<10> m_resources; // 0x314
    Formation *m_pFormation; // 0x318
    Squadron *m_pSquadron; // 0x31C
    ParadeFormation *m_paradeFormation; // 0x320
    ParadeFormation *m_rallyPointParadeFormation; // 0x324
    float m_shields[2]; // 0x328
    float m_shieldDamageTimers[2]; // 0x330
    float m_disabledTime; // 0x338
    bool m_weaponsFiredLastTurn; // 0x33C
    float m_idleTime; // 0x340
    unsigned __int32 m_numberOfBlockedShots; // 0x344
    bool m_overrideDock; // 0x348
protected:
    float m_disabledSteeringTime; // 0x34C
private:
    bool m_frozen; // 0x350
    bool m_fowVisible; // 0x351
    bool m_abilityActive[30]; // 0x352
    bool m_tempAbilityActive[30]; // 0x370
    bool m_tempAbilityDisabled[30]; // 0x38E
protected:
    MultiplierContainer m_multiplierContainer; // 0x3AC
public:
    virtual void setSleepingFlag(bool) override;
    virtual float getMainEngineUsage() override;
    virtual float getHorizontalRotationalThrusterUsage();
    virtual float getVerticalRotationalThrusterUsage();
    _inline void modifySpeedMultiplier(float const);
    _inline float getSpeedMultiplier() const;
    void getSubSystems(std::vector<SubSystem *,std::allocator<SubSystem *> > &) const;
    SubSystem *getSubSystem(char const *) const;
    unsigned __int32 getNumberOfFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfFreeFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfSubSystemsFitted(unsigned __int32) const;
    unsigned __int32 getNumberOfSubSystems(unsigned __int32) const;
    void getFreeHardpoints(std::vector<HardPoint *,std::allocator<HardPoint *> > &);
    bool canRetrofitSubSystem(unsigned __int32) const;
    float getHyperspaceTransitTime() const;
    float getGateTransitTime() const;
    float getHyperspaceRecoveryTime() const;
    float getHyperspaceCost(float) const;
    float getSensorPingCost() const;
    void takeDamageFromGateAbort();
    virtual void setInHyperspace(bool) override;
    bool isSubSystemTypePresentOnShip(unsigned __int32);
    bool isSubSystemTypePresentOnShip(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool availableSpaceForSubSystem(unsigned __int32);
    bool instantlyBuildSubSystem(unsigned __int32);
    _inline SubSystem *buildSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesAvailableForSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesCompatibleWithSubSystem(unsigned __int32);
    _inline Weapon *getWeapon(__int32);
    Weapon *getWeaponWithID(__int32);
    _inline unsigned __int32 getNumWeapons() const;
    void setEnableDisableWeapon(char const *, bool);
    void flushWeaponTargets();
    void fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &);
    void fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
    void weaponUpdate(float);
    void setupWeapons();
    void cleanUpWeapons();
    _inline bool weaponsFiredLastTurn() const;
    float getPerSecondDamageRating() const;
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const override;
    _inline bool isFOWVisible() const;
    void setFOWVisible(bool);
    _inline CloakManager *getCloakManager() const;
    bool doingCloakIncompatibleAction() const;
    float getCloakDetectionLevel() const;
    virtual void clearCloaking() override;
    BuildQueue *getBuildQueue() const;
    _inline CaptureManager *getCaptureManager() const;
    _inline RepairManager *getRepairManager() const;
    _inline SensorPingManager *getSensorPingManager() const;
    _inline ShipHold *getShipHold() const;
    void setShipHold(ShipHold *);
    _inline SalvageManager *getSalvageManager() const;
    virtual void setPlayerOwner(Player *) override;
    float getMinActiveWeaponRange() const;
    float getMaxActiveWeaponRange() const;
    unsigned __int32 getNumberOfWeaponsWithActivation(WeaponActivate) const;
    WeaponActivate getWeaponActivation() const;
    _inline float getWeaponAccuracy() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    float getMaxSensorRange() const;
    bool isVisHyperspacing() const;
    bool isVisHyperspacingClipped() const;
    Ship::eShadowType shouldDrawShadow(Camera const *) const;
    bool isDockingOrLaunching() const;
    bool inHyperspace() const;
    virtual void render(Camera const *);
    bool needsDirectRendering() const;
    void adjustShader();
private:
    bool renderHelper(Camera const *, bool const);
    void resetShaderVars(vector4 const &);
public:
    void renderSection(Camera const *, Ship::RenderStyle const, MeshRenderProxy &, bool const, __int32);
    void renderOnPlane(Camera const *, MeshRenderProxy &, vector3 const &, vector4 const &, bool const, bool const);
    void renderSMShadow(Camera const *, MeshRenderProxy &);
    ShipStatic const *getStatic() const;
    virtual void spawnDebris() override;
    virtual void spawnSkeleton() override;
    _inline bool isDisabled() const;
    void reenable();
    _inline void disable(float);
    virtual bool isInGodMode() override;
protected:
    void spawnSalvage();
    float getTotalSalvagePercentage();
    void spawnDustClouds();
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    void addAttacker(Ship *);
    void purgeFriendliesFromAttackingList();
    _inline Selection const &getAttackers() const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    bool isInCombat() const;
    bool enemyAttackingUs(Ship const *) const;
    void clearAttackingMeList();
    bool isAttackingPlayer(unsigned __int32) const;
    void attackingPlayer(unsigned __int32);
    bool blockedLineOfFire() const;
    void registerBlockedLineOfFire();
    void registerClearLineOfFire();
    void updateTimers(float);
    void updateShipControllerState(float);
    void updateSounds(float);
    void updateManagers(float);
    void updateDamageAssesment(float);
    void updateBattleTracker(float);
    bool isSensorsHidden() const;
    void setSensorsHidden();
    bool isInRadiation() const;
    void setInRadiation();
    bool isInChargedDustCloud() const;
    void setInChargedDustCloud();
    _inline __int32 getResources();
    _inline Fixed<10> const &getResourcesFixedPoint();
    void decreaseResources(Fixed<10> const &);
    void increaseResources(Fixed<10> const &, PlayerResourceType);
    float getResourceCollectionRate() const;
    __int32 getResourceCapacity() const;
    float getResourceDropOffRate() const;
    void flyShipToIntersectionPoint(Sob *, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, vector3, vector3, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, float);
    void flyShipToPoint(__int32, vector3 const &, float);
    void stopShip();
    bool finishedMovementGoals();
    bool IsShipNearPosition(vector3 *, float);
    enum PointToBehaviour
    {
        PointInDirFlying = 0,
        PointAtTarget,
        PointInHeadingGoal,
    };
    void setPointToBehaviour(Ship::PointToBehaviour);
    void setPointToTarget(DynamicPoint const &, float);
    void setEnforceMaximumAngles(bool);
    void flyShipToDynamicPosition(DynamicPoint const &, float const);
    _inline ShipController *getShipController();
    _inline ParadeFormation *getParadeFormation();
    _inline ParadeFormation *getRallyPointParadeFormation();
    _inline DefenseFieldManager *getDefenseFieldManager() const;
    static float ATTACKING_ME_LIST_STALE_TIME;
    void shipDidDamage(float);
    _inline float getBattleStatus();
    _inline float getRecentHealthChange();
    _inline unsigned __int32 getDisplayedHotkeyGroup() const;
    _inline void setDisplayedHotkeyGroup(unsigned __int32);
protected:
    virtual void onHealthChange(float) override;
    void updateController();
    void initialUpdateController();
    void setupHardPoints();
    virtual float getSobDieTime() override;
private:
    virtual void doDeathEffects(char const *) override;
    void tumble(vector3 const &);
    void setupShipController();
    void regenerateShields(float);
    void enforceShieldBounds(ShieldType);
public:
    _inline void SetOverrideDock(bool);
    _inline bool GetOverrideDock() const;
    void updateAnimations(float);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    _inline bool getFrozen() const;
    void setFrozen(bool);
    bool needsToAvoid(Sob *) const;
    void avoid(Sob *);
    _inline void disableSteering(float);
    void enableControllerSteering(bool);
    bool isSteeringDisabled();
private:
    SoundEntityHandle internalShipPlaySound(__int32);
    void internalShipStopSound(__int32);
public:
    _inline MultiplierContainer const &getMultiplierContainer() const;
    _inline MultiplierContainer &getMultiplierContainer();
    virtual float getMaxHealth() const override;
    virtual float getHealthRegenMultiplier() const override;
    Ship &operator=(Ship &); /* compiler_generated() */
};
static_assert(sizeof(Ship) == 1180, "Invalid Ship size");

class Ship :
    public SobWithMesh
{
public:
    enum RenderStyle
    {
        Render_Extras = 0,
        Render_Normal,
        Render_SM_Shadow,
        Render_Debug,
    };
    enum eShadowType
    {
        eNoShadow = 0,
        eHasShadow,
        eAlreadyDrawn,
    };
    typedef SobWithMesh SuperClass;
    Ship(Ship &); /* compiler_generated() */
    Ship(SaveGameData *);
    Ship(char const *, Player *);
    virtual ~Ship() override;
    virtual void sobVisInit() override;
    virtual bool update(float) override;
    BaseCommandStaticInfo *getActiveCommandDataStatic();
    Command *getActiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    bool canBeInterrupted(CommandType) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    bool isCurrentlyAble(AbilityType) const;
    bool isCurrentAbility(AbilityType) const;
    _inline void setAbilityEnabled(AbilityType, bool);
    _inline void temporarilyEnableAbility(AbilityType);
    _inline void temporarilyDisableAbility(AbilityType);
    void removeTemporaryAbilities();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    BaseCommandStaticInfo *getCommandDataStatic(CommandType) const;
    __int32 getSpecialAttackIndex() const;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getSpecialAttackName() const;
    void setFormation(Formation *);
    _inline Formation *getFormation() const;
    void setSquadron(Squadron *);
    _inline Squadron *getSquadron() const;
    unsigned __int32 getShipTypeId() const;
    float getMaxShield(ShieldType) const;
    float getShield(ShieldType) const;
    void takeDamageToShield(ShieldType, float const);
    bool getRecentDamageToShield(ShieldType) const;
    void upgradeHealth(float);
    void staticInit();
    virtual void reloadStats() override;
    _inline void setLatchPathID(unsigned char);
    unsigned char getLatchPathID();
    float getMaxSpeedWithFormation() const;
    float getThrusterAccel() const;
    float getMainEngineAccel() const;
    float getRotationAccel() const;
    float getThrusterBrake() const;
    float getMainEngineBrake() const;
    float getRotationBrake() const;
    float getThrusterMaxSpeed() const;
    float getMainEngineMaxSpeed() const;
    float getRotationMaxSpeed() const;
    float getBuildSpeedMultiplier() const;
    float getShipHoldRepairSpeedMultiplier() const;
    float getCosAccelerationAngle() const;
    float getCosMirrorAngle() const;
    float getCosSpecialTurnAngle() const;
    float getVisualRange() const;
    float getPrimarySensorsRange() const;
    float getSecondarySensorsRange() const;
    void applyMultipliersAndAbilities();
    bool isPartiallyTransparent() const;
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    _inline void setNbRestrictedHardpoints(unsigned __int32);
    _inline unsigned __int32 getNbRestrictedHardpoints() const;
private:
    ModifierTargetCache m_modifierTargets; // 0x24C
    unsigned __int32 m_nbRestrictedHardpoints; // 0x25C
protected:
    WeaponInfo m_weaponInfo; // 0x260
private:
    float m_inBattleTime; // 0x26C
    std::vector<float,std::allocator<float> > m_firedAtPlayerTime; // 0x270
protected:
    float m_sensorsHiddenTime; // 0x27C
    float m_radiationTime; // 0x280
    float m_inChargedDustCloudTime; // 0x284
private:
    unsigned __int32 m_displayedHotkeyGroup; // 0x288
protected:
    float m_recentHealthChanges; // 0x28C
    float m_damageDone; // 0x290
    HardPointManager m_hardPointManager; // 0x294
private:
    bool m_doingSpecialDeath; // 0x2A8
    Selection m_shipsAttacking; // 0x2AC
    float m_shipsAttackingUpdateTime; // 0x2E0
    BuildQueue *m_buildQueue; // 0x2E4
    CaptureManager *m_captureManager; // 0x2E8
    RepairManager *m_repairManager; // 0x2EC
    CloakManager *m_cloakManager; // 0x2F0
    DefenseFieldManager *m_defenseFieldManager; // 0x2F4
    HyperspaceInhibitorManager *m_hyperspaceInhibitorManager; // 0x2F8
    SensorPingManager *m_sensorPingManager; // 0x2FC
    SalvageManager *m_salvageManager; // 0x300
    ShipHold *m_shipHold; // 0x304
    unsigned char m_latchPathID; // 0x308
    ShipController *m_shipController; // 0x30C
    PlayerResourceType m_lastResourceTypeCollected; // 0x310
    Fixed<10> m_resources; // 0x314
    Formation *m_pFormation; // 0x318
    Squadron *m_pSquadron; // 0x31C
    ParadeFormation *m_paradeFormation; // 0x320
    ParadeFormation *m_rallyPointParadeFormation; // 0x324
    float m_shields[2]; // 0x328
    float m_shieldDamageTimers[2]; // 0x330
    float m_disabledTime; // 0x338
    bool m_weaponsFiredLastTurn; // 0x33C
    float m_idleTime; // 0x340
    unsigned __int32 m_numberOfBlockedShots; // 0x344
    bool m_overrideDock; // 0x348
protected:
    float m_disabledSteeringTime; // 0x34C
private:
    bool m_frozen; // 0x350
    bool m_fowVisible; // 0x351
    bool m_abilityActive[30]; // 0x352
    bool m_tempAbilityActive[30]; // 0x370
    bool m_tempAbilityDisabled[30]; // 0x38E
protected:
    MultiplierContainer m_multiplierContainer; // 0x3AC
public:
    virtual void setSleepingFlag(bool) override;
    virtual float getMainEngineUsage() override;
    virtual float getHorizontalRotationalThrusterUsage();
    virtual float getVerticalRotationalThrusterUsage();
    _inline void modifySpeedMultiplier(float const);
    _inline float getSpeedMultiplier() const;
    void getSubSystems(std::vector<SubSystem *,std::allocator<SubSystem *> > &) const;
    SubSystem *getSubSystem(char const *) const;
    unsigned __int32 getNumberOfFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfFreeFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfSubSystemsFitted(unsigned __int32) const;
    unsigned __int32 getNumberOfSubSystems(unsigned __int32) const;
    void getFreeHardpoints(std::vector<HardPoint *,std::allocator<HardPoint *> > &);
    bool canRetrofitSubSystem(unsigned __int32) const;
    float getHyperspaceTransitTime() const;
    float getGateTransitTime() const;
    float getHyperspaceRecoveryTime() const;
    float getHyperspaceCost(float) const;
    float getSensorPingCost() const;
    void takeDamageFromGateAbort();
    virtual void setInHyperspace(bool) override;
    bool isSubSystemTypePresentOnShip(unsigned __int32);
    bool isSubSystemTypePresentOnShip(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool availableSpaceForSubSystem(unsigned __int32);
    bool instantlyBuildSubSystem(unsigned __int32);
    _inline SubSystem *buildSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesAvailableForSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesCompatibleWithSubSystem(unsigned __int32);
    _inline Weapon *getWeapon(__int32);
    Weapon *getWeaponWithID(__int32);
    _inline unsigned __int32 getNumWeapons() const;
    void setEnableDisableWeapon(char const *, bool);
    void flushWeaponTargets();
    void fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &);
    void fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
    void weaponUpdate(float);
    void setupWeapons();
    void cleanUpWeapons();
    _inline bool weaponsFiredLastTurn() const;
    float getPerSecondDamageRating() const;
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const override;
    _inline bool isFOWVisible() const;
    void setFOWVisible(bool);
    _inline CloakManager *getCloakManager() const;
    bool doingCloakIncompatibleAction() const;
    float getCloakDetectionLevel() const;
    virtual void clearCloaking() override;
    BuildQueue *getBuildQueue() const;
    _inline CaptureManager *getCaptureManager() const;
    _inline RepairManager *getRepairManager() const;
    _inline SensorPingManager *getSensorPingManager() const;
    _inline ShipHold *getShipHold() const;
    void setShipHold(ShipHold *);
    _inline SalvageManager *getSalvageManager() const;
    virtual void setPlayerOwner(Player *) override;
    float getMinActiveWeaponRange() const;
    float getMaxActiveWeaponRange() const;
    unsigned __int32 getNumberOfWeaponsWithActivation(WeaponActivate) const;
    WeaponActivate getWeaponActivation() const;
    _inline float getWeaponAccuracy() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    float getMaxSensorRange() const;
    bool isVisHyperspacing() const;
    bool isVisHyperspacingClipped() const;
    Ship::eShadowType shouldDrawShadow(Camera const *) const;
    bool isDockingOrLaunching() const;
    bool inHyperspace() const;
    virtual void render(Camera const *);
    bool needsDirectRendering() const;
    void adjustShader();
private:
    bool renderHelper(Camera const *, bool const);
    void resetShaderVars(vector4 const &);
public:
    void renderSection(Camera const *, Ship::RenderStyle const, MeshRenderProxy &, bool const, __int32);
    void renderOnPlane(Camera const *, MeshRenderProxy &, vector3 const &, vector4 const &, bool const, bool const);
    void renderSMShadow(Camera const *, MeshRenderProxy &);
    ShipStatic const *getStatic() const;
    virtual void spawnDebris() override;
    virtual void spawnSkeleton() override;
    _inline bool isDisabled() const;
    void reenable();
    _inline void disable(float);
    virtual bool isInGodMode() override;
protected:
    void spawnSalvage();
    float getTotalSalvagePercentage();
    void spawnDustClouds();
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    void addAttacker(Ship *);
    void purgeFriendliesFromAttackingList();
    _inline Selection const &getAttackers() const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    bool isInCombat() const;
    bool enemyAttackingUs(Ship const *) const;
    void clearAttackingMeList();
    bool isAttackingPlayer(unsigned __int32) const;
    void attackingPlayer(unsigned __int32);
    bool blockedLineOfFire() const;
    void registerBlockedLineOfFire();
    void registerClearLineOfFire();
    void updateTimers(float);
    void updateShipControllerState(float);
    void updateSounds(float);
    void updateManagers(float);
    void updateDamageAssesment(float);
    void updateBattleTracker(float);
    bool isSensorsHidden() const;
    void setSensorsHidden();
    bool isInRadiation() const;
    void setInRadiation();
    bool isInChargedDustCloud() const;
    void setInChargedDustCloud();
    _inline __int32 getResources();
    _inline Fixed<10> const &getResourcesFixedPoint();
    void decreaseResources(Fixed<10> const &);
    void increaseResources(Fixed<10> const &, PlayerResourceType);
    float getResourceCollectionRate() const;
    __int32 getResourceCapacity() const;
    float getResourceDropOffRate() const;
    void flyShipToIntersectionPoint(Sob *, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, vector3, vector3, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, float);
    void flyShipToPoint(__int32, vector3 const &, float);
    void stopShip();
    bool finishedMovementGoals();
    bool IsShipNearPosition(vector3 *, float);
    enum PointToBehaviour
    {
        PointInDirFlying = 0,
        PointAtTarget,
        PointInHeadingGoal,
    };
    void setPointToBehaviour(Ship::PointToBehaviour);
    void setPointToTarget(DynamicPoint const &, float);
    void setEnforceMaximumAngles(bool);
    void flyShipToDynamicPosition(DynamicPoint const &, float const);
    _inline ShipController *getShipController();
    _inline ParadeFormation *getParadeFormation();
    _inline ParadeFormation *getRallyPointParadeFormation();
    _inline DefenseFieldManager *getDefenseFieldManager() const;
    static float ATTACKING_ME_LIST_STALE_TIME;
    void shipDidDamage(float);
    _inline float getBattleStatus();
    _inline float getRecentHealthChange();
    _inline unsigned __int32 getDisplayedHotkeyGroup() const;
    _inline void setDisplayedHotkeyGroup(unsigned __int32);
protected:
    virtual void onHealthChange(float) override;
    void updateController();
    void initialUpdateController();
    void setupHardPoints();
    virtual float getSobDieTime() override;
private:
    virtual void doDeathEffects(char const *) override;
    void tumble(vector3 const &);
    void setupShipController();
    void regenerateShields(float);
    void enforceShieldBounds(ShieldType);
public:
    _inline void SetOverrideDock(bool);
    _inline bool GetOverrideDock() const;
    void updateAnimations(float);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    _inline bool getFrozen() const;
    void setFrozen(bool);
    bool needsToAvoid(Sob *) const;
    void avoid(Sob *);
    _inline void disableSteering(float);
    void enableControllerSteering(bool);
    bool isSteeringDisabled();
private:
    SoundEntityHandle internalShipPlaySound(__int32);
    void internalShipStopSound(__int32);
public:
    _inline MultiplierContainer const &getMultiplierContainer() const;
    _inline MultiplierContainer &getMultiplierContainer();
    virtual float getMaxHealth() const override;
    virtual float getHealthRegenMultiplier() const override;
    Ship &operator=(Ship &); /* compiler_generated() */
};
static_assert(sizeof(Ship) == 1180, "Invalid Ship size");

class Ship :
    public SobWithMesh
{
public:
    enum RenderStyle
    {
        Render_Extras = 0,
        Render_Normal,
        Render_SM_Shadow,
        Render_Debug,
    };
    enum eShadowType
    {
        eNoShadow = 0,
        eHasShadow,
        eAlreadyDrawn,
    };
    typedef SobWithMesh SuperClass;
    Ship(Ship &); /* compiler_generated() */
    Ship(SaveGameData *);
    Ship(char const *, Player *);
    virtual ~Ship() override;
    virtual void sobVisInit() override;
    virtual bool update(float) override;
    BaseCommandStaticInfo *getActiveCommandDataStatic();
    Command *getActiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    bool canBeInterrupted(CommandType) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    bool isCurrentlyAble(AbilityType) const;
    bool isCurrentAbility(AbilityType) const;
    _inline void setAbilityEnabled(AbilityType, bool);
    _inline void temporarilyEnableAbility(AbilityType);
    _inline void temporarilyDisableAbility(AbilityType);
    void removeTemporaryAbilities();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    BaseCommandStaticInfo *getCommandDataStatic(CommandType) const;
    __int32 getSpecialAttackIndex() const;
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &getSpecialAttackName() const;
    void setFormation(Formation *);
    _inline Formation *getFormation() const;
    void setSquadron(Squadron *);
    _inline Squadron *getSquadron() const;
    unsigned __int32 getShipTypeId() const;
    float getMaxShield(ShieldType) const;
    float getShield(ShieldType) const;
    void takeDamageToShield(ShieldType, float const);
    bool getRecentDamageToShield(ShieldType) const;
    void upgradeHealth(float);
    void staticInit();
    virtual void reloadStats() override;
    _inline void setLatchPathID(unsigned char);
    unsigned char getLatchPathID();
    float getMaxSpeedWithFormation() const;
    float getThrusterAccel() const;
    float getMainEngineAccel() const;
    float getRotationAccel() const;
    float getThrusterBrake() const;
    float getMainEngineBrake() const;
    float getRotationBrake() const;
    float getThrusterMaxSpeed() const;
    float getMainEngineMaxSpeed() const;
    float getRotationMaxSpeed() const;
    float getBuildSpeedMultiplier() const;
    float getShipHoldRepairSpeedMultiplier() const;
    float getCosAccelerationAngle() const;
    float getCosMirrorAngle() const;
    float getCosSpecialTurnAngle() const;
    float getVisualRange() const;
    float getPrimarySensorsRange() const;
    float getSecondarySensorsRange() const;
    void applyMultipliersAndAbilities();
    bool isPartiallyTransparent() const;
    virtual bool isMoving() const override;
    virtual bool isRotating() const override;
    _inline void setNbRestrictedHardpoints(unsigned __int32);
    _inline unsigned __int32 getNbRestrictedHardpoints() const;
private:
    ModifierTargetCache m_modifierTargets; // 0x24C
    unsigned __int32 m_nbRestrictedHardpoints; // 0x25C
protected:
    WeaponInfo m_weaponInfo; // 0x260
private:
    float m_inBattleTime; // 0x26C
    std::vector<float,std::allocator<float> > m_firedAtPlayerTime; // 0x270
protected:
    float m_sensorsHiddenTime; // 0x27C
    float m_radiationTime; // 0x280
    float m_inChargedDustCloudTime; // 0x284
private:
    unsigned __int32 m_displayedHotkeyGroup; // 0x288
protected:
    float m_recentHealthChanges; // 0x28C
    float m_damageDone; // 0x290
    HardPointManager m_hardPointManager; // 0x294
private:
    bool m_doingSpecialDeath; // 0x2A8
    Selection m_shipsAttacking; // 0x2AC
    float m_shipsAttackingUpdateTime; // 0x2E0
    BuildQueue *m_buildQueue; // 0x2E4
    CaptureManager *m_captureManager; // 0x2E8
    RepairManager *m_repairManager; // 0x2EC
    CloakManager *m_cloakManager; // 0x2F0
    DefenseFieldManager *m_defenseFieldManager; // 0x2F4
    HyperspaceInhibitorManager *m_hyperspaceInhibitorManager; // 0x2F8
    SensorPingManager *m_sensorPingManager; // 0x2FC
    SalvageManager *m_salvageManager; // 0x300
    ShipHold *m_shipHold; // 0x304
    unsigned char m_latchPathID; // 0x308
    ShipController *m_shipController; // 0x30C
    PlayerResourceType m_lastResourceTypeCollected; // 0x310
    Fixed<10> m_resources; // 0x314
    Formation *m_pFormation; // 0x318
    Squadron *m_pSquadron; // 0x31C
    ParadeFormation *m_paradeFormation; // 0x320
    ParadeFormation *m_rallyPointParadeFormation; // 0x324
    float m_shields[2]; // 0x328
    float m_shieldDamageTimers[2]; // 0x330
    float m_disabledTime; // 0x338
    bool m_weaponsFiredLastTurn; // 0x33C
    float m_idleTime; // 0x340
    unsigned __int32 m_numberOfBlockedShots; // 0x344
    bool m_overrideDock; // 0x348
protected:
    float m_disabledSteeringTime; // 0x34C
private:
    bool m_frozen; // 0x350
    bool m_fowVisible; // 0x351
    bool m_abilityActive[30]; // 0x352
    bool m_tempAbilityActive[30]; // 0x370
    bool m_tempAbilityDisabled[30]; // 0x38E
protected:
    MultiplierContainer m_multiplierContainer; // 0x3AC
public:
    virtual void setSleepingFlag(bool) override;
    virtual float getMainEngineUsage() override;
    virtual float getHorizontalRotationalThrusterUsage();
    virtual float getVerticalRotationalThrusterUsage();
    _inline void modifySpeedMultiplier(float const);
    _inline float getSpeedMultiplier() const;
    void getSubSystems(std::vector<SubSystem *,std::allocator<SubSystem *> > &) const;
    SubSystem *getSubSystem(char const *) const;
    unsigned __int32 getNumberOfFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfFreeFamilyHardpoints(SubSystemFamily) const;
    unsigned __int32 getNumberOfSubSystemsFitted(unsigned __int32) const;
    unsigned __int32 getNumberOfSubSystems(unsigned __int32) const;
    void getFreeHardpoints(std::vector<HardPoint *,std::allocator<HardPoint *> > &);
    bool canRetrofitSubSystem(unsigned __int32) const;
    float getHyperspaceTransitTime() const;
    float getGateTransitTime() const;
    float getHyperspaceRecoveryTime() const;
    float getHyperspaceCost(float) const;
    float getSensorPingCost() const;
    void takeDamageFromGateAbort();
    virtual void setInHyperspace(bool) override;
    bool isSubSystemTypePresentOnShip(unsigned __int32);
    bool isSubSystemTypePresentOnShip(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool availableSpaceForSubSystem(unsigned __int32);
    bool instantlyBuildSubSystem(unsigned __int32);
    _inline SubSystem *buildSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesAvailableForSubSystem(unsigned __int32);
    unsigned __int32 NumberOfSpacesCompatibleWithSubSystem(unsigned __int32);
    _inline Weapon *getWeapon(__int32);
    Weapon *getWeaponWithID(__int32);
    _inline unsigned __int32 getNumWeapons() const;
    void setEnableDisableWeapon(char const *, bool);
    void flushWeaponTargets();
    void fireWeaponsAtTarget(WeaponTargetInfo const &, Selection const &);
    void fireDroppables(vector3 const &, std::list<Sob *,std::allocator<Sob *> > &);
    void weaponUpdate(float);
    void setupWeapons();
    void cleanUpWeapons();
    _inline bool weaponsFiredLastTurn() const;
    float getPerSecondDamageRating() const;
    virtual void getTargetOnSob(vector3 const &, vector3 &, vector3 &, float) const override;
    _inline bool isFOWVisible() const;
    void setFOWVisible(bool);
    _inline CloakManager *getCloakManager() const;
    bool doingCloakIncompatibleAction() const;
    float getCloakDetectionLevel() const;
    virtual void clearCloaking() override;
    BuildQueue *getBuildQueue() const;
    _inline CaptureManager *getCaptureManager() const;
    _inline RepairManager *getRepairManager() const;
    _inline SensorPingManager *getSensorPingManager() const;
    _inline ShipHold *getShipHold() const;
    void setShipHold(ShipHold *);
    _inline SalvageManager *getSalvageManager() const;
    virtual void setPlayerOwner(Player *) override;
    float getMinActiveWeaponRange() const;
    float getMaxActiveWeaponRange() const;
    unsigned __int32 getNumberOfWeaponsWithActivation(WeaponActivate) const;
    WeaponActivate getWeaponActivation() const;
    _inline float getWeaponAccuracy() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    float getMaxSensorRange() const;
    bool isVisHyperspacing() const;
    bool isVisHyperspacingClipped() const;
    Ship::eShadowType shouldDrawShadow(Camera const *) const;
    bool isDockingOrLaunching() const;
    bool inHyperspace() const;
    virtual void render(Camera const *);
    bool needsDirectRendering() const;
    void adjustShader();
private:
    bool renderHelper(Camera const *, bool const);
    void resetShaderVars(vector4 const &);
public:
    void renderSection(Camera const *, Ship::RenderStyle const, MeshRenderProxy &, bool const, __int32);
    void renderOnPlane(Camera const *, MeshRenderProxy &, vector3 const &, vector4 const &, bool const, bool const);
    void renderSMShadow(Camera const *, MeshRenderProxy &);
    ShipStatic const *getStatic() const;
    virtual void spawnDebris() override;
    virtual void spawnSkeleton() override;
    _inline bool isDisabled() const;
    void reenable();
    _inline void disable(float);
    virtual bool isInGodMode() override;
protected:
    void spawnSalvage();
    float getTotalSalvagePercentage();
    void spawnDustClouds();
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
public:
    void addAttacker(Ship *);
    void purgeFriendliesFromAttackingList();
    _inline Selection const &getAttackers() const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    bool isInCombat() const;
    bool enemyAttackingUs(Ship const *) const;
    void clearAttackingMeList();
    bool isAttackingPlayer(unsigned __int32) const;
    void attackingPlayer(unsigned __int32);
    bool blockedLineOfFire() const;
    void registerBlockedLineOfFire();
    void registerClearLineOfFire();
    void updateTimers(float);
    void updateShipControllerState(float);
    void updateSounds(float);
    void updateManagers(float);
    void updateDamageAssesment(float);
    void updateBattleTracker(float);
    bool isSensorsHidden() const;
    void setSensorsHidden();
    bool isInRadiation() const;
    void setInRadiation();
    bool isInChargedDustCloud() const;
    void setInChargedDustCloud();
    _inline __int32 getResources();
    _inline Fixed<10> const &getResourcesFixedPoint();
    void decreaseResources(Fixed<10> const &);
    void increaseResources(Fixed<10> const &, PlayerResourceType);
    float getResourceCollectionRate() const;
    __int32 getResourceCapacity() const;
    float getResourceDropOffRate() const;
    void flyShipToIntersectionPoint(Sob *, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, vector3, vector3, float);
    void flyShipToSpaceObject(Sob *, vector3 const &, float);
    void flyShipToPoint(__int32, vector3 const &, float);
    void stopShip();
    bool finishedMovementGoals();
    bool IsShipNearPosition(vector3 *, float);
    enum PointToBehaviour
    {
        PointInDirFlying = 0,
        PointAtTarget,
        PointInHeadingGoal,
    };
    void setPointToBehaviour(Ship::PointToBehaviour);
    void setPointToTarget(DynamicPoint const &, float);
    void setEnforceMaximumAngles(bool);
    void flyShipToDynamicPosition(DynamicPoint const &, float const);
    _inline ShipController *getShipController();
    _inline ParadeFormation *getParadeFormation();
    _inline ParadeFormation *getRallyPointParadeFormation();
    _inline DefenseFieldManager *getDefenseFieldManager() const;
    static float ATTACKING_ME_LIST_STALE_TIME;
    void shipDidDamage(float);
    _inline float getBattleStatus();
    _inline float getRecentHealthChange();
    _inline unsigned __int32 getDisplayedHotkeyGroup() const;
    _inline void setDisplayedHotkeyGroup(unsigned __int32);
protected:
    virtual void onHealthChange(float) override;
    void updateController();
    void initialUpdateController();
    void setupHardPoints();
    virtual float getSobDieTime() override;
private:
    virtual void doDeathEffects(char const *) override;
    void tumble(vector3 const &);
    void setupShipController();
    void regenerateShields(float);
    void enforceShieldBounds(ShieldType);
public:
    _inline void SetOverrideDock(bool);
    _inline bool GetOverrideDock() const;
    void updateAnimations(float);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    _inline bool getFrozen() const;
    void setFrozen(bool);
    bool needsToAvoid(Sob *) const;
    void avoid(Sob *);
    _inline void disableSteering(float);
    void enableControllerSteering(bool);
    bool isSteeringDisabled();
private:
    SoundEntityHandle internalShipPlaySound(__int32);
    void internalShipStopSound(__int32);
public:
    _inline MultiplierContainer const &getMultiplierContainer() const;
    _inline MultiplierContainer &getMultiplierContainer();
    virtual float getMaxHealth() const override;
    virtual float getHealthRegenMultiplier() const override;
    Ship &operator=(Ship &); /* compiler_generated() */
};
static_assert(sizeof(Ship) == 1180, "Invalid Ship size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void Ship::setAbilityEnabled(AbilityType, bool) // 0x48F62E
{
    mangled_assert("?setAbilityEnabled@Ship@@QAEXW4AbilityType@@_N@Z");
    todo("implement");
}

_inline void Ship::temporarilyEnableAbility(AbilityType) // 0x56DF9E
{
    mangled_assert("?temporarilyEnableAbility@Ship@@QAEXW4AbilityType@@@Z");
    todo("implement");
}

_inline void Ship::temporarilyDisableAbility(AbilityType) // 0x4847B0
{
    mangled_assert("?temporarilyDisableAbility@Ship@@QAEXW4AbilityType@@@Z");
    todo("implement");
}

_inline Formation *Ship::getFormation() const // 0x4864B8
{
    mangled_assert("?getFormation@Ship@@QBEPAVFormation@@XZ");
    todo("implement");
}

_inline Squadron *Ship::getSquadron() const // 0x45096B
{
    mangled_assert("?getSquadron@Ship@@QBEPAVSquadron@@XZ");
    todo("implement");
}

_inline void Ship::setLatchPathID(unsigned char) // 0x4AFB20
{
    mangled_assert("?setLatchPathID@Ship@@QAEXE@Z");
    todo("implement");
}

_inline void Ship::setNbRestrictedHardpoints(unsigned __int32) // 0x723BE9
{
    mangled_assert("?setNbRestrictedHardpoints@Ship@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 Ship::getNbRestrictedHardpoints() const // 0x5855C1
{
    mangled_assert("?getNbRestrictedHardpoints@Ship@@QBEIXZ");
    todo("implement");
}

_inline void Ship::modifySpeedMultiplier(float const) // 0x4B9BBF
{
    mangled_assert("?modifySpeedMultiplier@Ship@@QAEXM@Z");
    todo("implement");
}

_inline float Ship::getSpeedMultiplier() const // 0x4B97D1
{
    mangled_assert("?getSpeedMultiplier@Ship@@QBEMXZ");
    todo("implement");
}

_inline SubSystem *Ship::buildSubSystem(unsigned __int32) // 0x5CF8A5
{
    mangled_assert("?buildSubSystem@Ship@@QAEPAVSubSystem@@I@Z");
    todo("implement");
}

_inline Weapon *Ship::getWeapon(__int32) // 0x48D59E
{
    mangled_assert("?getWeapon@Ship@@QAEPAVWeapon@@H@Z");
    todo("implement");
}

_inline unsigned __int32 Ship::getNumWeapons() const // 0x48C877
{
    mangled_assert("?getNumWeapons@Ship@@QBEIXZ");
    todo("implement");
}

_inline bool Ship::weaponsFiredLastTurn() const // 0x65A909
{
    mangled_assert("?weaponsFiredLastTurn@Ship@@QBE_NXZ");
    todo("implement");
}

_inline bool Ship::isFOWVisible() const // 0x53344B
{
    mangled_assert("?isFOWVisible@Ship@@QBE_NXZ");
    todo("implement");
}

_inline CloakManager *Ship::getCloakManager() const // 0x458DE3
{
    mangled_assert("?getCloakManager@Ship@@QBEPAVCloakManager@@XZ");
    todo("implement");
}

_inline CaptureManager *Ship::getCaptureManager() const // 0x48C0C6
{
    mangled_assert("?getCaptureManager@Ship@@QBEPAVCaptureManager@@XZ");
    todo("implement");
}

_inline RepairManager *Ship::getRepairManager() const // 0x6315C5
{
    mangled_assert("?getRepairManager@Ship@@QBEPAVRepairManager@@XZ");
    todo("implement");
}

_inline SensorPingManager *Ship::getSensorPingManager() const // 0x48CC05
{
    mangled_assert("?getSensorPingManager@Ship@@QBEPAVSensorPingManager@@XZ");
    todo("implement");
}

_inline ShipHold *Ship::getShipHold() const // 0x48CC1A
{
    mangled_assert("?getShipHold@Ship@@QBEPAVShipHold@@XZ");
    todo("implement");
}

_inline SalvageManager *Ship::getSalvageManager() const // 0x6AE8BE
{
    mangled_assert("?getSalvageManager@Ship@@QBEPAVSalvageManager@@XZ");
    todo("implement");
}

_inline float Ship::getWeaponAccuracy() const // 0x49DE74
{
    mangled_assert("?getWeaponAccuracy@Ship@@QBEMXZ");
    todo("implement");
}

_inline bool Ship::isDisabled() const // 0x48DE2E
{
    mangled_assert("?isDisabled@Ship@@QBE_NXZ");
    todo("implement");
}

_inline void Ship::disable(float) // 0x4A2ED3
{
    mangled_assert("?disable@Ship@@QAEXM@Z");
    todo("implement");
}

_inline Selection const &Ship::getAttackers() const // 0x4B93BC
{
    mangled_assert("?getAttackers@Ship@@QBEABVSelection@@XZ");
    todo("implement");
}

_inline __int32 Ship::getResources() // 0x48CAF8
{
    mangled_assert("?getResources@Ship@@QAEHXZ");
    todo("implement");
}

_inline Fixed<10> const &Ship::getResourcesFixedPoint() // 0x4AE6F8
{
    mangled_assert("?getResourcesFixedPoint@Ship@@QAEABV?$Fixed@$09@@XZ");
    todo("implement");
}

_inline ShipController *Ship::getShipController() // 0x4846A0
{
    mangled_assert("?getShipController@Ship@@QAEPAVShipController@@XZ");
    todo("implement");
}

_inline ParadeFormation *Ship::getParadeFormation() // 0x4AE577
{
    mangled_assert("?getParadeFormation@Ship@@QAEPAVParadeFormation@@XZ");
    todo("implement");
}

_inline ParadeFormation *Ship::getRallyPointParadeFormation() // 0x6A7340
{
    mangled_assert("?getRallyPointParadeFormation@Ship@@QAEPAVParadeFormation@@XZ");
    todo("implement");
}

_inline DefenseFieldManager *Ship::getDefenseFieldManager() const // 0x458DEA
{
    mangled_assert("?getDefenseFieldManager@Ship@@QBEPAVDefenseFieldManager@@XZ");
    todo("implement");
}

_inline float Ship::getBattleStatus() // 0x635205
{
    mangled_assert("?getBattleStatus@Ship@@QAEMXZ");
    todo("implement");
}

_inline float Ship::getRecentHealthChange() // 0x63520C
{
    mangled_assert("?getRecentHealthChange@Ship@@QAEMXZ");
    todo("implement");
}

_inline unsigned __int32 Ship::getDisplayedHotkeyGroup() const // 0x5E4667
{
    mangled_assert("?getDisplayedHotkeyGroup@Ship@@QBEIXZ");
    todo("implement");
}

_inline void Ship::setDisplayedHotkeyGroup(unsigned __int32) // 0x632D5A
{
    mangled_assert("?setDisplayedHotkeyGroup@Ship@@QAEXI@Z");
    todo("implement");
}

_inline void Ship::SetOverrideDock(bool) // 0x7133B1
{
    mangled_assert("?SetOverrideDock@Ship@@QAEX_N@Z");
    todo("implement");
}

_inline bool Ship::GetOverrideDock() const // 0x630283
{
    mangled_assert("?GetOverrideDock@Ship@@QBE_NXZ");
    todo("implement");
}

_inline bool Ship::isDeterministic() // 0x48DE2B
{
    mangled_assert("?isDeterministic@Ship@@UAE_NXZ");
    todo("implement");
}

_inline char const *Ship::saveToken() // 0x48F628
{
    mangled_assert("?saveToken@Ship@@UAEPBDXZ");
    todo("implement");
}

_inline bool Ship::getFrozen() const // 0x48C161
{
    mangled_assert("?getFrozen@Ship@@QBE_NXZ");
    todo("implement");
}

_inline void Ship::disableSteering(float) // 0x4E4098
{
    mangled_assert("?disableSteering@Ship@@QAEXM@Z");
    todo("implement");
}

_inline MultiplierContainer &Ship::getMultiplierContainer() // 0x484688
{
    mangled_assert("?getMultiplierContainer@Ship@@QAEAAVMultiplierContainer@@XZ");
    todo("implement");
}

_inline MultiplierContainer const &Ship::getMultiplierContainer() const // 0x48C865
{
    mangled_assert("?getMultiplierContainer@Ship@@QBEABVMultiplierContainer@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SHIP_H__
#endif
