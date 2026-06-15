#if 0
#ifndef __MAINUI_H__
#define __MAINUI_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MainUI
{
public:
    MainUI(MainUI const &); /* compiler_generated() */
    MainUI();
    ~MainUI();
    void renderTimeUpdate(float);
    static MainUI *i();
    static _inline MainUI *i_nocreate();
    static bool release();
    static bool isCreated();
    void attachCurrentPlayer(Player *);
    bool isMoveMode();
    vector3 const &getMoveOrigin();
    vector3 const &getModeDest();
    bool isWaypointMode();
    bool isWaypointVisible();
    bool isCommandEnabled(unsigned __int32);
    bool isDrawGUIEnabled();
    SensorsBlobArray const *getSensorsBlobs();
    void pressLeft();
    void doublePressLeft();
    void doubleReleaseLeft();
    void holdLeft();
    void releaseLeft();
    void pressRight();
    void holdRight();
    void releaseRight();
    void pressMiddle();
    void holdMiddle();
    void releaseMiddle();
    void resetKeys();
    bool inCameraMotion() const;
    void drawMainScreen();
    void uiCommand(unsigned __int32, __int32, __int32);
    void enableMainUI(bool);
    void disableCommand(unsigned __int32);
    void enableCommand(unsigned __int32);
    void disableAllCommands();
    void enableAllCommands();
    void resetCommand();
    void enableAllRightClickCommands();
    void disableAllRightClickCommands();
    void enableRightClickCommand(unsigned __int32);
    void disableRightClickCommand(unsigned __int32);
    bool enableMouseSelection(bool);
    bool enablePanning(bool);
    bool enableMousePanning(bool);
    bool enableMouseOver(bool);
    bool enableRightClickMenu(bool);
    bool getSavedPanningFlag() const;
    void setSavedPanningFlag(bool);
    void enableClickLeft(bool);
    void enableClickRight(bool);
    void enableClickMiddle(bool);
    void enableDragLeft(bool);
    void enableDragRight(bool);
    void enableDragMiddle(bool);
    void setWidescreenValue(float);
    void setLetterboxColour(vector4 const &);
    void enableDrawGUI(bool);
    void hideCursor(bool);
    void showCursor(bool);
    void enableATIDisplay(bool);
    void wideScreenIn(float);
    void wideScreenInNoSound(float, float, bool);
    void wideScreenOut(float);
    void wideScreenDisable(bool);
    bool isWideScreenOn();
    void fadeOut(float, float);
    void fadeSet(float);
    void fadeColour(vector4 const &);
    bool fadeBack();
    float fadeGetTime() const;
    _inline bool isAllCommandsDisabled() const;
    void setSensorsThreshold(float, float, float);
    void enableRender(bool);
    _inline SensorsManager *sensorsManager();
    _inline Pieplate *pieplate();
    _inline Selector *selector();
    void addFoot(vector3 &, float);
    void restoreLocalPlayerHotkeys();
protected:
    static MainUI *create();
    SensorsManager *m_pSensorsManager; // 0x0
    Pieplate *m_pPieplate; // 0x4
    Selector m_selector; // 0x8
    bool m_bRender; // 0x794
    bool m_disableAllCommands; // 0x795
private:
    MainUIImpl *m_pImpl; // 0x798
    static MainUI *s_instance;
public:
    MainUI &operator=(MainUI const &); /* compiler_generated() */
};
static_assert(sizeof(MainUI) == 1948, "Invalid MainUI size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline MainUI *MainUI::i_nocreate() // 0x44E970
{
    mangled_assert("?i_nocreate@MainUI@@SGPAV1@XZ");
    todo("implement");
}

_inline bool MainUI::isAllCommandsDisabled() const // 0x450976
{
    mangled_assert("?isAllCommandsDisabled@MainUI@@QBE_NXZ");
    todo("implement");
}

_inline SensorsManager *MainUI::sensorsManager() // 0x45CDEA
{
    mangled_assert("?sensorsManager@MainUI@@QAEPAVSensorsManager@@XZ");
    todo("implement");
}

_inline Pieplate *MainUI::pieplate() // 0x45CC58
{
    mangled_assert("?pieplate@MainUI@@QAEPAVPieplate@@XZ");
    todo("implement");
}

_inline Selector *MainUI::selector() // 0x450C46
{
    mangled_assert("?selector@MainUI@@QAEPAVSelector@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MAINUI_H__
#endif
