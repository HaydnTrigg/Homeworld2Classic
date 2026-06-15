#if 0
#ifndef __SQUADRON_H__
#define __SQUADRON_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

class Squadron :
    public SaveObject,
    private Selection::Observer
{
public:
    Squadron(Squadron const &); /* compiler_generated() */
    Squadron(SaveGameData *);
    Squadron(Selection const &, char const *);
    virtual ~Squadron() override;
    void cleanUpSquadron();
    _inline void RegisterObserver(SquadronList *);
    void RemoveObserver(SquadronList *);
    unsigned __int32 ObserverCount() const;
    void addObserver(Selection::Observer *);
    void removeObserver(Selection::Observer *);
    void updateHyperspace(float);
    void update(float);
    static void convertSelectionIntoSquadrons(Selection const &selection, std::vector<Squadron *,std::allocator<Squadron *> > &squadronList);
    _inline unsigned __int32 getID() const;
    void setID(unsigned __int32);
    _inline unsigned __int32 getShipTypeId() const;
    _inline Selection const &getShips() const;
    _inline Selection &getShips();
    vector3 const &getPositionDtrm() const;
    vector3 const &getPositionVis() const;
    matrix3 const &getOrientationDtrm() const;
    vector3 const &getDestinationDtrm() const;
    vector3 const &getDestinationVis() const;
    Ship *getLeadShip() const;
    void getShipsInRetaliationRange(Selection &, unsigned __int32) const;
    void getRetaliationTargets(Selection &, SquadronTactics) const;
    void getRetaliationTargets(Selection &) const;
    bool canBeInterrupted(CommandType, Command *) const;
    bool allowPassiveActions() const;
    bool canExecuteOrder(OrderType) const;
    _inline Command *getActiveCommand() const;
    _inline Command *getInactiveCommand() const;
    Command *tryToGetCommand(CommandType) const;
    _inline Command *getFrustratedCommand() const;
    void killAllCommands();
    void disableCommands();
    void setPlayerOwner(Player *);
    Player *getPlayerOwner() const;
    _inline char const *getName() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getFormationType();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsBegin();
    _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd() const;
    _inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > getFormationsEnd();
    _inline Formation *getMainFormation();
    _inline Formation const *getMainFormation() const;
    _inline bool isFormationsEmtpy() const;
    bool FormationsFinishedMovementGoals(bool, float) const;
    bool FormationFinishedMovementCommands() const;
    void FormFormations(unsigned __int32 const);
    void ReformFormation(Ship *);
    void stopFormations();
    _inline SquadronTactics const getTactics() const;
    void setTactics(SquadronTactics const);
    _inline SquadronTactics const getUITactics() const;
    _inline void setUITactics(SquadronTactics const) const;
    bool isAttacking() const;
    bool isBeingAttacked() const;
    _inline bool isInCombat() const;
    bool isInHyperspace() const;
    void setInHyperspace(bool);
    _inline float getHyperspaceProgress() const;
    _inline bool getHyperspaceIsExiting() const;
    _inline void setHyperspaceProgress(float const);
    _inline void setHyperspaceIsEntering(bool const);
    _inline bool isSleeping() const;
    bool isNISSquad() const;
    void rouse();
    void anesthetize();
    void setHidden(bool);
    void anesthetizeFormation(Formation *);
    void rouseFormation(Formation *);
    void anesthetizeSquadronOnly();
    void rouseSquadronOnly();
private:
    void anesthetizeSingleShip(Ship *);
    void rouseSingleShip(Ship *);
    bool m_sleeping; // 0x10
    StrikeGroup *m_strikeGroup; // 0x14
    Selection m_Ships; // 0x18
    std::list<Formation *,std::allocator<Formation *> > m_Formations; // 0x4C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x54
    Command *m_pActiveCommand; // 0x6C
    Command *m_pInactiveCommand; // 0x70
    Command *m_pFrustratedCommand; // 0x74
    SquadronTactics m_tactics; // 0x78
    SquadronTactics m_UITactics; // 0x7C
    PrimRectangle m_rectangle; // 0x80
    float m_displayedTime; // 0x90
    vector3 m_boundCentre; // 0x94
    vector3 m_boundMin; // 0xA0
    vector3 m_boundMax; // 0xAC
    float m_boundRadius; // 0xB8
    unsigned __int32 m_id; // 0xBC
    unsigned __int32 m_typeid; // 0xC0
    float m_hyperspaceProgress; // 0xC4
    bool m_hyperspaceEntering; // 0xC8
    bool m_allowPassiveActionsEvenIfTurnedOff; // 0xC9
    bool m_canHyperspace; // 0xCA
    std::vector<float,std::allocator<float> > m_everSpottedByPlayer; // 0xCC
    std::vector<SquadronList *,std::allocator<SquadronList *> > m_ObservingGroups; // 0xD8
    bool m_hasBeenInWorldBoundsDesignerHack; // 0xE4
protected:
    Squadron *m_squadNotToAvoid; // 0xE8
private:
    std::queue<OrderFeedbackInfo,std::deque<OrderFeedbackInfo,std::allocator<OrderFeedbackInfo> > > m_UIFeedback; // 0xEC
    void updateCommand(float);
    enum PeelOffType
    {
        PeelOff_Back = 0,
        PeelOff_Front,
        NUMBER_OF_PEEL_OFF_TYPES,
    };
public:
    Formation *PeelOffShips(Formation *, unsigned __int32, Squadron::PeelOffType);
    _inline unsigned __int32 getNumberOfFormations() const;
    void addShip(Ship *);
    void orderMoveCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveCommand(vector3 const &, unsigned __int32, bool, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderMoveToSobCommand(SobID const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderIdleCommand(unsigned __int32, Command::CommandOrigin);
    void orderLaunchCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderResourceCommand(Selection const &, unsigned __int32, Command::CommandOrigin);
    void orderDockCommand(SobID const &, unsigned __int32, Command::CommandOrigin, bool);
    void instantDockWith(SobID const &, bool);
    void orderAttackCommand(Selection const &, unsigned __int32, Command::CommandOrigin, bool, bool, vector3 const &);
    void orderWaypointMoveCommand(unsigned __int32, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    void orderParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin, ParadeCommand::ParadeMode);
    void orderRallyParadeCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderGuardCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderCaptureCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, vector3 const &, vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceCommand(vector3 const &, unsigned __int32, Command::CommandOrigin);
    void orderOffMapHyperspaceCommand(unsigned __int32, Command::CommandOrigin, bool);
    void orderFormHyperspaceGateCommand(Squadron *, unsigned __int32, Command::CommandOrigin);
    void orderHyperspaceViaGateCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void orderRepairCommand(Selection const &, unsigned __int32, Command::CommandOrigin, vector3 const &);
    void orderRetireCommand(unsigned __int32, Command::CommandOrigin);
    void orderDespawnCommand(unsigned __int32, Command::CommandOrigin);
    void orderLayMinesCommand(std::list<vector3,std::allocator<vector3> > const &, unsigned __int32, Command::CommandOrigin);
    void orderSalvageCommand(SobID const &, unsigned __int32, Command::CommandOrigin);
    void resetCommand();
    void makeCurrentCommandInactive(Command *);
    void makeCurrentCommandInactive();
    void removeInactiveCommand();
    __int32 getDockFamilyID();
    void displayATI(OrderFeedbackValue const *, unsigned __int32);
    bool alreadyDisplayedATI();
    void clearRectangle();
    void addShipToSelection(Ship *);
    _inline PrimRectangle const *getRectangle() const;
    void computeBounds();
    _inline vector3 const &getNDCentre() const;
    void getNDMinMax(vector3 &, vector3 &) const;
    _inline float getNDRadius() const;
    float getTotalHealth() const;
    float getTotalMaxHealth() const;
    float getMaxHealth() const;
    float getSpeedMultiplier() const;
    float getResources() const;
    SubSystem *getSubSystem(char const *) const;
    bool instantlyBuildSubSystem(unsigned __int32);
    void setHealth(float);
    void takeDamage(float);
    void setAutoLaunch(AutoLaunchSetting);
    void setEnableDisableWeapon(char const *, bool);
    void setSpeedMultiplier(float const);
    void setMaxSpeedMultiplier(float const);
    void setFOWVisible(bool);
    void unsetStrikeGroupPointer(StrikeGroup *);
    void removeFromStrikeGroup();
    void addToStrikeGroup(StrikeGroup *);
    _inline StrikeGroup const *getStrikeGroup() const;
    _inline StrikeGroup *getStrikeGroup();
    static void removeAllFromTheirStrikeGroup(std::list<Squadron *,std::allocator<Squadron *> > const &squadrons);
    void checkAgainstWorldBounds();
    bool inWorldBoundInner() const;
    bool inWorldBoundOuter() const;
    void retire();
    void getListOfAllUpgrades(std::list<ResearchData *,std::allocator<ResearchData *> > &);
    _inline void setAllowPassiveActionsEvenIfTurnedOff(bool);
    _inline bool getAllowPassiveActionsEvenIfTurnedOff() const;
private:
    void clearAttackingMeList();
    bool addCommand(Command *);
    bool isFormationInFormationsList(Formation *);
    typedef std::list<Formation *,std::allocator<Formation *> > FormationList;
    bool haveWeEverBeenSpottedByPlayer(unsigned __int32) const;
    void setAsSpotted(unsigned __int32);
    typedef std::vector<SquadronList *,std::allocator<SquadronList *> > ObserverList;
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void AnalCheck();
public:
    _inline void resetSquadronNotToAvoid();
    _inline void setSquadronNotToAvoid(Squadron *);
    _inline Squadron *getSquadronNotToAvoid();
    _inline void AddUIFeedback(OrderFeedbackInfo const &) const;
    _inline void PopUIFeedback() const;
    void GetUIFeedback(OrderFeedbackInfo &) const;
    _inline bool HasUIFeedback() const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    Squadron &operator=(Squadron const &); /* compiler_generated() */
};
static_assert(sizeof(Squadron) == 256, "Invalid Squadron size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 Squadron::getID() const // 0x47894B
{
    mangled_assert("?getID@Squadron@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 Squadron::getShipTypeId() const // 0x48CC53
{
    mangled_assert("?getShipTypeId@Squadron@@QBEIXZ");
    todo("implement");
}

_inline Selection &Squadron::getShips() // 0x4514D7
{
    mangled_assert("?getShips@Squadron@@QAEAAVSelection@@XZ");
    todo("implement");
}

_inline Selection const &Squadron::getShips() const // 0x4B9794
{
    mangled_assert("?getShips@Squadron@@QBEABVSelection@@XZ");
    todo("implement");
}

_inline Command *Squadron::getActiveCommand() const // 0x4864AD
{
    mangled_assert("?getActiveCommand@Squadron@@QBEPAVCommand@@XZ");
    todo("implement");
}

_inline Command *Squadron::getInactiveCommand() const // 0x48C3CB
{
    mangled_assert("?getInactiveCommand@Squadron@@QBEPAVCommand@@XZ");
    todo("implement");
}

_inline Command *Squadron::getFrustratedCommand() const // 0x6A292D
{
    mangled_assert("?getFrustratedCommand@Squadron@@QBEPAVCommand@@XZ");
    todo("implement");
}

_inline char const *Squadron::getName() const // 0x6159AC
{
    mangled_assert("?getName@Squadron@@QBEPBDXZ");
    todo("implement");
}

_inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > Squadron::getFormationsBegin() // 0x4AE4B0
{
    mangled_assert("?getFormationsBegin@Squadron@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVFormation@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_iterator<std::_List_val<std::_List_simple_types<Formation *> > > Squadron::getFormationsEnd() // 0x4AE4BE
{
    mangled_assert("?getFormationsEnd@Squadron@@QAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PAVFormation@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > Squadron::getFormationsBegin() const // 0x5EF1F5
{
    mangled_assert("?getFormationsBegin@Squadron@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVFormation@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<Formation *> > > Squadron::getFormationsEnd() const // 0x5EF203
{
    mangled_assert("?getFormationsEnd@Squadron@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVFormation@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline Formation const *Squadron::getMainFormation() const // 0x5080D9
{
    mangled_assert("?getMainFormation@Squadron@@QBEPBVFormation@@XZ");
    todo("implement");
}

_inline Formation *Squadron::getMainFormation() // 0x50A909
{
    mangled_assert("?getMainFormation@Squadron@@QAEPAVFormation@@XZ");
    todo("implement");
}

_inline bool Squadron::isFormationsEmtpy() const // 0x6A2974
{
    mangled_assert("?isFormationsEmtpy@Squadron@@QBE_NXZ");
    todo("implement");
}

_inline SquadronTactics const Squadron::getTactics() const // 0x450972
{
    mangled_assert("?getTactics@Squadron@@QBE?BW4SquadronTactics@@XZ");
    todo("implement");
}

_inline SquadronTactics const Squadron::getUITactics() const // 0x5E468E
{
    mangled_assert("?getUITactics@Squadron@@QBE?BW4SquadronTactics@@XZ");
    todo("implement");
}

_inline void Squadron::setUITactics(SquadronTactics const) const // 0x697886
{
    mangled_assert("?setUITactics@Squadron@@QBEXW4SquadronTactics@@@Z");
    todo("implement");
}

_inline bool Squadron::isInCombat() const // 0x533452
{
    mangled_assert("?isInCombat@Squadron@@QBE_NXZ");
    todo("implement");
}

_inline float Squadron::getHyperspaceProgress() const // 0x48C356
{
    mangled_assert("?getHyperspaceProgress@Squadron@@QBEMXZ");
    todo("implement");
}

_inline bool Squadron::getHyperspaceIsExiting() const // 0x48C348
{
    mangled_assert("?getHyperspaceIsExiting@Squadron@@QBE_NXZ");
    todo("implement");
}

_inline void Squadron::setHyperspaceProgress(float const) // 0x5FAC42
{
    mangled_assert("?setHyperspaceProgress@Squadron@@QAEXM@Z");
    todo("implement");
}

_inline void Squadron::setHyperspaceIsEntering(bool const) // 0x5FAC35
{
    mangled_assert("?setHyperspaceIsEntering@Squadron@@QAEX_N@Z");
    todo("implement");
}

_inline bool Squadron::isSleeping() const // 0x4AF327
{
    mangled_assert("?isSleeping@Squadron@@QBE_NXZ");
    todo("implement");
}

_inline unsigned __int32 Squadron::getNumberOfFormations() const // 0x5E4680
{
    mangled_assert("?getNumberOfFormations@Squadron@@QBEIXZ");
    todo("implement");
}

_inline PrimRectangle const *Squadron::getRectangle() const // 0x45A887
{
    mangled_assert("?getRectangle@Squadron@@QBEPBUPrimRectangle@@XZ");
    todo("implement");
}

_inline vector3 const &Squadron::getNDCentre() const // 0x618D9F
{
    mangled_assert("?getNDCentre@Squadron@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline float Squadron::getNDRadius() const // 0x618DA6
{
    mangled_assert("?getNDRadius@Squadron@@QBEMXZ");
    todo("implement");
}

_inline StrikeGroup *Squadron::getStrikeGroup() // 0x456AB8
{
    mangled_assert("?getStrikeGroup@Squadron@@QAEPAVStrikeGroup@@XZ");
    todo("implement");
}

_inline StrikeGroup const *Squadron::getStrikeGroup() const // 0x61267F
{
    mangled_assert("?getStrikeGroup@Squadron@@QBEPBVStrikeGroup@@XZ");
    todo("implement");
}

_inline void Squadron::setAllowPassiveActionsEvenIfTurnedOff(bool) // 0x723BD2
{
    mangled_assert("?setAllowPassiveActionsEvenIfTurnedOff@Squadron@@QAEX_N@Z");
    todo("implement");
}

_inline bool Squadron::getAllowPassiveActionsEvenIfTurnedOff() const // 0x6A7E0F
{
    mangled_assert("?getAllowPassiveActionsEvenIfTurnedOff@Squadron@@QBE_NXZ");
    todo("implement");
}

_inline void Squadron::resetSquadronNotToAvoid() // 0x723BCA
{
    mangled_assert("?resetSquadronNotToAvoid@Squadron@@QAEXXZ");
    todo("implement");
}

_inline void Squadron::setSquadronNotToAvoid(Squadron *) // 0x723C00
{
    mangled_assert("?setSquadronNotToAvoid@Squadron@@QAEXPAV1@@Z");
    todo("implement");
}

_inline Squadron *Squadron::getSquadronNotToAvoid() // 0x48CD02
{
    mangled_assert("?getSquadronNotToAvoid@Squadron@@QAEPAV1@XZ");
    todo("implement");
}

_inline void Squadron::AddUIFeedback(OrderFeedbackInfo const &) const // 0x5C0A3A
{
    mangled_assert("?AddUIFeedback@Squadron@@QBEXABUOrderFeedbackInfo@@@Z");
    todo("implement");
}

_inline void Squadron::PopUIFeedback() const // 0x5C0F8C
{
    mangled_assert("?PopUIFeedback@Squadron@@QBEXXZ");
    todo("implement");
}

_inline bool Squadron::HasUIFeedback() const // 0x611461
{
    mangled_assert("?HasUIFeedback@Squadron@@QBE_NXZ");
    todo("implement");
}

_inline bool Squadron::isDeterministic() // 0x4B9A45
{
    mangled_assert("?isDeterministic@Squadron@@UAE_NXZ");
    todo("implement");
}

_inline char const *Squadron::saveToken() // 0x4BB191
{
    mangled_assert("?saveToken@Squadron@@UAEPBDXZ");
    todo("implement");
}

_inline void Squadron::RegisterObserver(SquadronList *) // 0x4BC0BF
{
    mangled_assert("?RegisterObserver@Squadron@@QAEXPAVSquadronList@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SQUADRON_H__
#endif
