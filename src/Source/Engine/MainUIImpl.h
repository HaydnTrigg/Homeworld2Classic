#if 0
#ifndef __MAINUIIMPL_H__
#define __MAINUIIMPL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MUI_States
{
    MUI_STATE_MOVE = 0,
    MUI_STATE_SELECTION,
    MUI_STATE_WAYPOINT,
    MUI_STATE_ATTACK,
    MUI_STATE_WAYPOINT_MOVE,
    MUI_STATE_HYPERSPACE,
    MUI_STATE_SET_RALLY_POINT,
    MUI_STATE_MINE_RADIUS,
    MUI_STATE_MOVEATTACK,
    MUI_STATE_TEMP_WAYPOINT,
    MUI_STATE_NONE,
};

enum MUI_Screens
{
    MUI_MAIN_SCREEN = 0,
    MUI_SENSOR_SCREEN,
};

enum MUI_WideScreenState
{
    MUI_WS_Off = 0,
    MUI_WS_On,
    MUI_WS_FadeIn,
    MUI_WS_FadeOut,
};

enum MUI_FadeState
{
    MUI_FS_Off = 0,
    MUI_FS_On,
    MUI_FS_FadeOn,
    MUI_FS_FadeOff,
};

/* ---------- definitions */

class MainUIImpl :
    private Selection::Observer
{
private:
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
public:
    MainUIImpl(MainUIImpl const &); /* compiler_generated() */
    MainUIImpl(Pieplate *, Selector *, SensorsManager *);
    ~MainUIImpl();
    void updateSelTargs();
    void attachCurrentPlayer(Player *);
    _inline bool inCameraMotion() const;
    void pressLeft();
    void doublePressLeft();
    void doubleReleaseLeft();
    void holdLeft();
    void releaseLeft();
    void pressRight();
    void holdRight();
    void releaseRight();
    void pressMiddle();
    void onClickLeft();
    void onDragStartLeft();
    void onDragEndLeft(bool);
    void onDragLeft();
    void resetKeys();
    void onClickRight();
    void onDragStartRight();
    void onDragEndRight(bool);
    void onDragRight();
    void onClickMiddle();
    void onDragStartMiddle();
    void onDragEndMiddle(bool);
    void onDragMiddle();
    void onClickLeft_SELECTION();
    void onClickLeft_SELECTION_ADD();
    void onClickLeft_SELECTION_EYE();
    void onClickLeft_MOVE();
    void onClickLeft_MOVEATTACK();
    void onClickLeft_WAYPOINT();
    void onClickLeft_WAYPOINT_MOVE();
    void onClickLeft_HYPERSPACE();
    void onClickLeft_RALLYPOINT();
    void onClickLeft_MINERADIUS();
    void onClickLeft_TEMP_WAYPOINT();
    void onClickRight_SELECTION();
    void onClickRight_MOVE();
    void onClickRight_MOVEATTACK();
    void onClickRight_WAYPOINT();
    void onClickRight_WAYPOINT_MOVE(bool);
    void onClickRight_HYPERSPACE();
    void onClickRight_RALLYPOINT();
    void onClickRight_MINERADIUS();
    void onClickRight_TEMP_WAYPOINT();
    bool commandModeTransition(unsigned __int32, bool, bool);
    CommandType CommandModeToCommand();
    _inline void commandModeSetParam(__int32);
    _inline __int32 commandModeGetParam() const;
    _inline void commandModal(bool);
    _inline MUI_CommandModes getCommandMode() const;
    void detectMouseOver(float, float);
    void enterCameraMode();
    void leaveCameraMode();
    void enterPieplateHeightMode();
    bool leavePieplateHeightMode();
    void tryToSnapToSquadFoot();
    void handleAtDrawTime(float &, float &);
    void sensorsStateThink(Camera *, float);
    void issueHotkeyGroupCommand(Selection *, unsigned __int32);
    void issueMoveCommand(Selection const &, vector3 const &, vector3 const &, vector3 const *);
    void issueMoveAttackCommand(Selection const &, vector3 const &, vector3 const &, vector3 const *);
    void issueMoveWaypointCommand(Selection const &, std::vector<vector3,std::allocator<vector3> > &, SobID const &);
    void issueHyperspaceCommand(Selection const &, vector3 const &, vector3 const &);
    void issueFormHyperspaceGateCommand(Selection const &, Selection const &);
    void issueHyperspaceViaGateCommand(Selection const &, SobID const &);
    void issueRelativeMoveCommand(Selection const &, SobID const &);
    void issueAttackCommand(Selection const &, Selection const &, bool);
    void issueGuardCommand(Selection const &, Selection const &);
    void issueDockCommand(Selection const &);
    void issueDockCommand(Selection const &, Selection const &);
    void issueLiftoffCommand(Selection const &);
    void issueWaypointMoveCommand(Selection const &, std::vector<vector3,std::allocator<vector3> > *, vector3 const &, __int32, bool, bool);
    void issueHarvestCommand(Selection const &);
    void issueHarvestCommand(Selection const &, Selection const &);
    void issueHaltCommand(Selection const &);
    void issueCaptureCommand(Selection const &, Ship *);
    void issueParadeCommand(Selection const &);
    void issueRepairCommand(Selection const &, Selection const &);
    void issueCloakCommand(Selection const &);
    void issueDefenseFieldCommand(Selection const &);
    void setRallyPoint(Selection const &, SobID const &);
    void setRallyPoint(Selection const &, vector3 const &, vector3 const &);
    void issueRetireCommand(Selection const &);
    void issueDropMinesCommand(Selection const &, vector3 const &, vector3 const &, vector3 const &);
    void issueSalvageCommand(Selection const &, Ship *);
    void issueLeaveStrikeGroupCommand(Selection const &);
    void setupSelection();
    bool isSelectionBox(float, float);
    MUI_CommandModes bestCommandMode(Selection const &, float, float);
    MUI_CommandModes bestCommandModeForShip(Ship const *, Selection const &, bool, bool);
    void evaluateMouseOver(float, float);
    void groupifyMouseOver();
    void selectionProcess(Selection const &, bool);
    void selectionChanged();
    void selectedControllableShips();
    void selectedControllableSubsystems();
    void doBandbox();
    void wideScreenInWithSound(float, float);
    void wideScreenIn(float, float, bool);
    void wideScreenIn(float);
    void wideScreenOutWithSound(float);
    void wideScreenOut(float);
    bool wideScreenUpdate(float);
    void fadeOut(float, float);
    void fadeSet(float);
    bool fadeUpdate(float);
    void fadeColour(vector4 const &);
    void pieplateHandleDrawTime(float &, float &);
    bool isCursorOverWaypointPath(float, float, vector3 *, std::vector<vector3,std::allocator<vector3> > **);
    void buildSelectionRectangle();
    void updateSensorsBlobs(bool);
    Cursor::Type_t mapCommandToCursor();
    enum MouseButton_t
    {
        LMB = 0,
        MMB,
        RMB,
        NUM_MOUSE_BUTTONS,
    };
    enum MouseOverStates_t
    {
        FRIENDLY = 0,
        ALLY,
        ENEMY,
        NEUTRAL,
        RESOURCE,
        NONE,
    };
    void setUIState(MUI_States);
    _inline MUI_States getUIState();
    MUI_Screens uiScreen; // 0x4
    Pieplate *pPieplate; // 0x8
    Selector *pSelector; // 0xC
    SensorsManager *pSensorsManager; // 0x10
    __int32 m_sensorsBlobsFrameCount; // 0x14
    SensorsBlobArray m_sensorsBlobs; // 0x18
    Player *pPlayer; // 0x38
    MUI_WideScreenState m_wideScreenState; // 0x3C
    float m_wideScreenCurrentTime; // 0x40
    float m_wideScreenTime; // 0x44
    bool m_wideScreenDisable; // 0x48
    MUI_FadeState m_fadeState; // 0x4C
    vector4 m_fadeColour; // 0x50
    float m_fadeRate; // 0x60
    float m_fadeValue; // 0x64
    float m_fadeDest; // 0x68
    float m_fadeTime; // 0x6C
    float currentMouseX; // 0x70
    float currentMouseY; // 0x74
    float m_downX[3]; // 0x78
    float m_downY[3]; // 0x84
    Timer m_downTime[3]; // 0x90
    Timer m_keyCommandTime; // 0xF0
    unsigned __int32 m_keyCommandTimeID; // 0x110
    bool m_bDragging[3]; // 0x114
    bool m_bDown[3]; // 0x117
    bool m_bExplicitCommandMode; // 0x11A
    bool m_bSelectionEnabled; // 0x11B
    bool m_bPanEnabled; // 0x11C
    bool m_bSavedPanningFlag; // 0x11D
    bool m_bMousePanEnabled; // 0x11E
    bool m_bMouseOverEnabled; // 0x11F
    bool m_bRightClickMenuEnabled; // 0x120
    MainUIImpl::PanningState m_panningState; // 0x124
    bool m_bClickEnabled[3]; // 0x128
    bool m_bDragEnabled[3]; // 0x12B
private:
    MUI_CommandModes m_commandMode; // 0x130
    bool m_bOverridable; // 0x134
    MUI_CommandModes m_commandModeOverride; // 0x138
public:
    float commandTime; // 0x13C
    MainUIImpl::MouseOverStates_t m_mouseOverState; // 0x140
    std::bitset<42> m_enabledCommands; // 0x148
    std::bitset<24> m_enabledCommandModes; // 0x150
    __int32 m_commandModeParam; // 0x154
    __int32 m_commandArgData; // 0x158
    __int32 m_commandArgData2; // 0x15C
    PrimRectangle selectionRect; // 0x160
    bool m_bBandBoxing; // 0x170
    std::bitset<9> m_rightClickActions; // 0x174
    bool m_bMainScreenDraw; // 0x178
    bool m_bDrawGUI; // 0x179
    __int32 m_hideCursor; // 0x17C
    bool m_bInCameraMode; // 0x180
    bool m_bWasInHeightMode; // 0x181
    bool m_bWasInOffsetFromOriginMode; // 0x182
    bool m_bIgnoreLeftDrag; // 0x183
    bool m_bRightClickMenu; // 0x184
    bool m_visibleATI; // 0x185
    bool m_bIsMousedOverSS; // 0x186
    float m_scissorBarState; // 0x188
    vector4 m_scissorBarColour; // 0x18C
    float m_scissorBarAspect; // 0x19C
    float m_fullscreenFadeValue; // 0x1A0
    vector4 m_fullscreenFadeColour; // 0x1A4
    WaypointManager *pWaypointManager; // 0x1B4
    bool m_bWaypointMode; // 0x1B8
    bool m_bEditingWaypointPath; // 0x1B9
    vector3 m_closestPointOnWaypointPath; // 0x1BC
    std::vector<vector3,std::allocator<vector3> > *m_currentWaypointMovePath; // 0x1C8
    void (*uiHoldLeft)(MainUIImpl *); // 0x1CC
    void (*uiHoldRight)(MainUIImpl *); // 0x1D0
    vector3 m_hyperspaceGateStartPoint; // 0x1D4
    vector3 m_terrainPoint; // 0x1E0
    vector3 m_relativeDir; // 0x1EC
    float m_sensorsDimStartDistance; // 0x1F8
    float m_sensorsDimEndDistance; // 0x1FC
    float m_backgroundBrightness; // 0x200
    float m_sensorsThreshold; // 0x204
    float m_sensorsOnValue; // 0x208
    MainUIImpl::SensorsFadeState_t m_sensorsFadeState; // 0x20C
    Selector::PriorityModifiers m_mouseOverModifiersByMode[24]; // 0x210
    Selector::PriorityModifiers m_bandBoxModifiersByMode[24]; // 0x1470
    Selector::MixModifiers m_mixingModifiers[2]; // 0x26D0
    std::vector<enum MUI_CommandModes,std::allocator<enum MUI_CommandModes> > m_modeOrder; // 0x26F0
protected:
    MUI_States m_uiState; // 0x26FC
private:
    PatchID m_discOnPatch; // 0x2700
    PatchID m_discOffPatch; // 0x2704
    PatchID m_bordersOnPatch; // 0x2708
    PatchID m_bordersOffPatch; // 0x270C
    PatchID m_badClickPatch; // 0x2710
    bool m_commandModal; // 0x2714
    enum PanningState
    {
        Pan_None = 0,
        Pan_Left,
        Pan_Up,
        Pan_Right,
        Pan_Down,
    };
    enum RightClickActions_t
    {
        RC_Attacker = 0,
        RC_Guarder,
        RC_Docker,
        RC_Repairer,
        RC_Capturer,
        RC_Harvester,
        RC_Hyperspace,
        RC_FormGate,
        RC_Salvage,
        NUMBER_RightClickActions,
    };
    enum SensorsFadeState_t
    {
        SS_FullOn = 0,
        SS_FullOff,
        SS_Transition,
    };
    void appendShipGroup(Sob *, Selection &) const;
    void doRelativeMoveForNonAble(Selection const &, AbilityType, Selection const &, bool);
    void doAttackForNonAble(Selection const &, AbilityType, Selection const &, bool);
    void doRelativeMove(Selection const &, Selection const &, bool);
    void doAttackCommand(Selection const &, Selection const &, bool, bool);
    void parseSelectionPriorities();
    void IssueAttackCommand(Selection const &);
    void IssueForceAttackCommand(Selection const &);
    void IssueCaptureCommand(Selection const &);
    void IssueRepairCommand(Selection const &);
    void IssueSpecialAttackCommand(Selection const &);
    void IssueGuardCommand(Selection const &);
    void IssueHyperspaceCommand(Selection const &);
    void IssueDockCommand(Selection const &);
public:
    MainUIImpl &operator=(MainUIImpl const &); /* compiler_generated() */
};
static_assert(sizeof(MainUIImpl) == 10008, "Invalid MainUIImpl size");

class MainUIImpl :
    private Selection::Observer
{
private:
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
public:
    MainUIImpl(MainUIImpl const &); /* compiler_generated() */
    MainUIImpl(Pieplate *, Selector *, SensorsManager *);
    ~MainUIImpl();
    void updateSelTargs();
    void attachCurrentPlayer(Player *);
    _inline bool inCameraMotion() const;
    void pressLeft();
    void doublePressLeft();
    void doubleReleaseLeft();
    void holdLeft();
    void releaseLeft();
    void pressRight();
    void holdRight();
    void releaseRight();
    void pressMiddle();
    void onClickLeft();
    void onDragStartLeft();
    void onDragEndLeft(bool);
    void onDragLeft();
    void resetKeys();
    void onClickRight();
    void onDragStartRight();
    void onDragEndRight(bool);
    void onDragRight();
    void onClickMiddle();
    void onDragStartMiddle();
    void onDragEndMiddle(bool);
    void onDragMiddle();
    void onClickLeft_SELECTION();
    void onClickLeft_SELECTION_ADD();
    void onClickLeft_SELECTION_EYE();
    void onClickLeft_MOVE();
    void onClickLeft_MOVEATTACK();
    void onClickLeft_WAYPOINT();
    void onClickLeft_WAYPOINT_MOVE();
    void onClickLeft_HYPERSPACE();
    void onClickLeft_RALLYPOINT();
    void onClickLeft_MINERADIUS();
    void onClickLeft_TEMP_WAYPOINT();
    void onClickRight_SELECTION();
    void onClickRight_MOVE();
    void onClickRight_MOVEATTACK();
    void onClickRight_WAYPOINT();
    void onClickRight_WAYPOINT_MOVE(bool);
    void onClickRight_HYPERSPACE();
    void onClickRight_RALLYPOINT();
    void onClickRight_MINERADIUS();
    void onClickRight_TEMP_WAYPOINT();
    bool commandModeTransition(unsigned __int32, bool, bool);
    CommandType CommandModeToCommand();
    _inline void commandModeSetParam(__int32);
    _inline __int32 commandModeGetParam() const;
    _inline void commandModal(bool);
    _inline MUI_CommandModes getCommandMode() const;
    void detectMouseOver(float, float);
    void enterCameraMode();
    void leaveCameraMode();
    void enterPieplateHeightMode();
    bool leavePieplateHeightMode();
    void tryToSnapToSquadFoot();
    void handleAtDrawTime(float &, float &);
    void sensorsStateThink(Camera *, float);
    void issueHotkeyGroupCommand(Selection *, unsigned __int32);
    void issueMoveCommand(Selection const &, vector3 const &, vector3 const &, vector3 const *);
    void issueMoveAttackCommand(Selection const &, vector3 const &, vector3 const &, vector3 const *);
    void issueMoveWaypointCommand(Selection const &, std::vector<vector3,std::allocator<vector3> > &, SobID const &);
    void issueHyperspaceCommand(Selection const &, vector3 const &, vector3 const &);
    void issueFormHyperspaceGateCommand(Selection const &, Selection const &);
    void issueHyperspaceViaGateCommand(Selection const &, SobID const &);
    void issueRelativeMoveCommand(Selection const &, SobID const &);
    void issueAttackCommand(Selection const &, Selection const &, bool);
    void issueGuardCommand(Selection const &, Selection const &);
    void issueDockCommand(Selection const &);
    void issueDockCommand(Selection const &, Selection const &);
    void issueLiftoffCommand(Selection const &);
    void issueWaypointMoveCommand(Selection const &, std::vector<vector3,std::allocator<vector3> > *, vector3 const &, __int32, bool, bool);
    void issueHarvestCommand(Selection const &);
    void issueHarvestCommand(Selection const &, Selection const &);
    void issueHaltCommand(Selection const &);
    void issueCaptureCommand(Selection const &, Ship *);
    void issueParadeCommand(Selection const &);
    void issueRepairCommand(Selection const &, Selection const &);
    void issueCloakCommand(Selection const &);
    void issueDefenseFieldCommand(Selection const &);
    void setRallyPoint(Selection const &, SobID const &);
    void setRallyPoint(Selection const &, vector3 const &, vector3 const &);
    void issueRetireCommand(Selection const &);
    void issueDropMinesCommand(Selection const &, vector3 const &, vector3 const &, vector3 const &);
    void issueSalvageCommand(Selection const &, Ship *);
    void issueLeaveStrikeGroupCommand(Selection const &);
    void setupSelection();
    bool isSelectionBox(float, float);
    MUI_CommandModes bestCommandMode(Selection const &, float, float);
    MUI_CommandModes bestCommandModeForShip(Ship const *, Selection const &, bool, bool);
    void evaluateMouseOver(float, float);
    void groupifyMouseOver();
    void selectionProcess(Selection const &, bool);
    void selectionChanged();
    void selectedControllableShips();
    void selectedControllableSubsystems();
    void doBandbox();
    void wideScreenInWithSound(float, float);
    void wideScreenIn(float, float, bool);
    void wideScreenIn(float);
    void wideScreenOutWithSound(float);
    void wideScreenOut(float);
    bool wideScreenUpdate(float);
    void fadeOut(float, float);
    void fadeSet(float);
    bool fadeUpdate(float);
    void fadeColour(vector4 const &);
    void pieplateHandleDrawTime(float &, float &);
    bool isCursorOverWaypointPath(float, float, vector3 *, std::vector<vector3,std::allocator<vector3> > **);
    void buildSelectionRectangle();
    void updateSensorsBlobs(bool);
    Cursor::Type_t mapCommandToCursor();
    enum MouseButton_t
    {
        LMB = 0,
        MMB,
        RMB,
        NUM_MOUSE_BUTTONS,
    };
    enum MouseOverStates_t
    {
        FRIENDLY = 0,
        ALLY,
        ENEMY,
        NEUTRAL,
        RESOURCE,
        NONE,
    };
    void setUIState(MUI_States);
    _inline MUI_States getUIState();
    MUI_Screens uiScreen; // 0x4
    Pieplate *pPieplate; // 0x8
    Selector *pSelector; // 0xC
    SensorsManager *pSensorsManager; // 0x10
    __int32 m_sensorsBlobsFrameCount; // 0x14
    SensorsBlobArray m_sensorsBlobs; // 0x18
    Player *pPlayer; // 0x38
    MUI_WideScreenState m_wideScreenState; // 0x3C
    float m_wideScreenCurrentTime; // 0x40
    float m_wideScreenTime; // 0x44
    bool m_wideScreenDisable; // 0x48
    MUI_FadeState m_fadeState; // 0x4C
    vector4 m_fadeColour; // 0x50
    float m_fadeRate; // 0x60
    float m_fadeValue; // 0x64
    float m_fadeDest; // 0x68
    float m_fadeTime; // 0x6C
    float currentMouseX; // 0x70
    float currentMouseY; // 0x74
    float m_downX[3]; // 0x78
    float m_downY[3]; // 0x84
    Timer m_downTime[3]; // 0x90
    Timer m_keyCommandTime; // 0xF0
    unsigned __int32 m_keyCommandTimeID; // 0x110
    bool m_bDragging[3]; // 0x114
    bool m_bDown[3]; // 0x117
    bool m_bExplicitCommandMode; // 0x11A
    bool m_bSelectionEnabled; // 0x11B
    bool m_bPanEnabled; // 0x11C
    bool m_bSavedPanningFlag; // 0x11D
    bool m_bMousePanEnabled; // 0x11E
    bool m_bMouseOverEnabled; // 0x11F
    bool m_bRightClickMenuEnabled; // 0x120
    MainUIImpl::PanningState m_panningState; // 0x124
    bool m_bClickEnabled[3]; // 0x128
    bool m_bDragEnabled[3]; // 0x12B
private:
    MUI_CommandModes m_commandMode; // 0x130
    bool m_bOverridable; // 0x134
    MUI_CommandModes m_commandModeOverride; // 0x138
public:
    float commandTime; // 0x13C
    MainUIImpl::MouseOverStates_t m_mouseOverState; // 0x140
    std::bitset<42> m_enabledCommands; // 0x148
    std::bitset<24> m_enabledCommandModes; // 0x150
    __int32 m_commandModeParam; // 0x154
    __int32 m_commandArgData; // 0x158
    __int32 m_commandArgData2; // 0x15C
    PrimRectangle selectionRect; // 0x160
    bool m_bBandBoxing; // 0x170
    std::bitset<9> m_rightClickActions; // 0x174
    bool m_bMainScreenDraw; // 0x178
    bool m_bDrawGUI; // 0x179
    __int32 m_hideCursor; // 0x17C
    bool m_bInCameraMode; // 0x180
    bool m_bWasInHeightMode; // 0x181
    bool m_bWasInOffsetFromOriginMode; // 0x182
    bool m_bIgnoreLeftDrag; // 0x183
    bool m_bRightClickMenu; // 0x184
    bool m_visibleATI; // 0x185
    bool m_bIsMousedOverSS; // 0x186
    float m_scissorBarState; // 0x188
    vector4 m_scissorBarColour; // 0x18C
    float m_scissorBarAspect; // 0x19C
    float m_fullscreenFadeValue; // 0x1A0
    vector4 m_fullscreenFadeColour; // 0x1A4
    WaypointManager *pWaypointManager; // 0x1B4
    bool m_bWaypointMode; // 0x1B8
    bool m_bEditingWaypointPath; // 0x1B9
    vector3 m_closestPointOnWaypointPath; // 0x1BC
    std::vector<vector3,std::allocator<vector3> > *m_currentWaypointMovePath; // 0x1C8
    void (*uiHoldLeft)(MainUIImpl *); // 0x1CC
    void (*uiHoldRight)(MainUIImpl *); // 0x1D0
    vector3 m_hyperspaceGateStartPoint; // 0x1D4
    vector3 m_terrainPoint; // 0x1E0
    vector3 m_relativeDir; // 0x1EC
    float m_sensorsDimStartDistance; // 0x1F8
    float m_sensorsDimEndDistance; // 0x1FC
    float m_backgroundBrightness; // 0x200
    float m_sensorsThreshold; // 0x204
    float m_sensorsOnValue; // 0x208
    MainUIImpl::SensorsFadeState_t m_sensorsFadeState; // 0x20C
    Selector::PriorityModifiers m_mouseOverModifiersByMode[24]; // 0x210
    Selector::PriorityModifiers m_bandBoxModifiersByMode[24]; // 0x1470
    Selector::MixModifiers m_mixingModifiers[2]; // 0x26D0
    std::vector<enum MUI_CommandModes,std::allocator<enum MUI_CommandModes> > m_modeOrder; // 0x26F0
protected:
    MUI_States m_uiState; // 0x26FC
private:
    PatchID m_discOnPatch; // 0x2700
    PatchID m_discOffPatch; // 0x2704
    PatchID m_bordersOnPatch; // 0x2708
    PatchID m_bordersOffPatch; // 0x270C
    PatchID m_badClickPatch; // 0x2710
    bool m_commandModal; // 0x2714
    enum PanningState
    {
        Pan_None = 0,
        Pan_Left,
        Pan_Up,
        Pan_Right,
        Pan_Down,
    };
    enum RightClickActions_t
    {
        RC_Attacker = 0,
        RC_Guarder,
        RC_Docker,
        RC_Repairer,
        RC_Capturer,
        RC_Harvester,
        RC_Hyperspace,
        RC_FormGate,
        RC_Salvage,
        NUMBER_RightClickActions,
    };
    enum SensorsFadeState_t
    {
        SS_FullOn = 0,
        SS_FullOff,
        SS_Transition,
    };
    void appendShipGroup(Sob *, Selection &) const;
    void doRelativeMoveForNonAble(Selection const &, AbilityType, Selection const &, bool);
    void doAttackForNonAble(Selection const &, AbilityType, Selection const &, bool);
    void doRelativeMove(Selection const &, Selection const &, bool);
    void doAttackCommand(Selection const &, Selection const &, bool, bool);
    void parseSelectionPriorities();
    void IssueAttackCommand(Selection const &);
    void IssueForceAttackCommand(Selection const &);
    void IssueCaptureCommand(Selection const &);
    void IssueRepairCommand(Selection const &);
    void IssueSpecialAttackCommand(Selection const &);
    void IssueGuardCommand(Selection const &);
    void IssueHyperspaceCommand(Selection const &);
    void IssueDockCommand(Selection const &);
public:
    MainUIImpl &operator=(MainUIImpl const &); /* compiler_generated() */
};
static_assert(sizeof(MainUIImpl) == 10008, "Invalid MainUIImpl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_451549(MainUIImpl const *const);
_inline bool MainUIImpl::inCameraMotion() const // 0x451549
{
    mangled_assert("?inCameraMotion@MainUIImpl@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_451549(this);
    return __result;
}

_extern void _sub_453F66(MainUIImpl *const, __int32);
_inline void MainUIImpl::commandModeSetParam(__int32) // 0x453F66
{
    mangled_assert("?commandModeSetParam@MainUIImpl@@QAEXH@Z");
    todo("implement");
    _sub_453F66(this, arg);
}

_extern __int32 _sub_458A28(MainUIImpl const *const);
_inline __int32 MainUIImpl::commandModeGetParam() const // 0x458A28
{
    mangled_assert("?commandModeGetParam@MainUIImpl@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_458A28(this);
    return __result;
}

_extern void _sub_453F59(MainUIImpl *const, bool);
_inline void MainUIImpl::commandModal(bool) // 0x453F59
{
    mangled_assert("?commandModal@MainUIImpl@@QAEX_N@Z");
    todo("implement");
    _sub_453F59(this, arg);
}

_extern MUI_CommandModes _sub_453FB2(MainUIImpl const *const);
_inline MUI_CommandModes MainUIImpl::getCommandMode() const // 0x453FB2
{
    mangled_assert("?getCommandMode@MainUIImpl@@QBE?AW4MUI_CommandModes@@XZ");
    todo("implement");
    MUI_CommandModes __result = _sub_453FB2(this);
    return __result;
}

_extern MUI_States _sub_4514DF(MainUIImpl *const);
_inline MUI_States MainUIImpl::getUIState() // 0x4514DF
{
    mangled_assert("?getUIState@MainUIImpl@@QAE?AW4MUI_States@@XZ");
    todo("implement");
    MUI_States __result = _sub_4514DF(this);
    return __result;
}

/* ---------- private code */

#endif // __MAINUIIMPL_H__
#endif
