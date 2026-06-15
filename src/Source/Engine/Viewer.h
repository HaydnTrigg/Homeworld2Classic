#if 0
#ifndef __VIEWER_H__
#define __VIEWER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CameraDistanceTask :
    public Task
{
public:
    CameraDistanceTask(CameraDistanceTask const &); /* compiler_generated() */
    CameraDistanceTask();
    virtual _inline ~CameraDistanceTask() override;
    _inline void attachCamera(CameraOrbitTarget *);
    virtual __int32 taskFunction(float) override;
private:
    void computeDistanceToCamera(Selection const &);
    CameraOrbitTarget *m_pCamera; // 0x30
public:
    CameraDistanceTask &operator=(CameraDistanceTask const &); /* compiler_generated() */
};
static_assert(sizeof(CameraDistanceTask) == 52, "Invalid CameraDistanceTask size");

class Viewer :
    public Task,
    private Saveable
{
public:
    Viewer(Viewer const &); /* compiler_generated() */
private:
    Viewer(SaveGameData *);
public:
    Viewer();
    virtual ~Viewer() override;
    _inline void attachCamera(CameraOrbitTarget *);
    _inline void attachPlayer(Player *);
    virtual __int32 taskFunction(float) override;
    _inline Selection *getRenderList();
    _inline Selection *getRetiredRenderList();
    Selection &getRenderListType(SobType);
    CameraOrbitTarget *getCamera();
    void getUpdateStats(unsigned __int32 *, unsigned __int32 *);
    void removeFromRenderList(Sob *);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual _inline char const *saveToken() override;
private:
    void clearRenderList();
    void updateRenderListSob(Sob *, bool);
    void viewerDefaults();
    virtual void postRestore() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    SobID m_closestSobID; // 0x34
    CameraOrbitTarget *camera; // 0x40
    Player *player; // 0x44
    Selection renderlist; // 0x48
    Selection retiredRenderList; // 0x7C
    Selection renderListType[15]; // 0xB0
    unsigned __int32 numAddedToRenderList; // 0x3BC
    unsigned __int32 numRemovedFromRenderList; // 0x3C0
public:
    Viewer &operator=(Viewer const &); /* compiler_generated() */
};
static_assert(sizeof(Viewer) == 964, "Invalid Viewer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline CameraDistanceTask::~CameraDistanceTask() // 0x652514
{
    mangled_assert("??1CameraDistanceTask@@UAE@XZ");
    todo("implement");
}

_inline void CameraDistanceTask::attachCamera(CameraOrbitTarget *) // 0x6529E8
{
    mangled_assert("?attachCamera@CameraDistanceTask@@QAEXPAVCameraOrbitTarget@@@Z");
    todo("implement");
}

_inline void Viewer::attachCamera(CameraOrbitTarget *) // 0x6529F2
{
    mangled_assert("?attachCamera@Viewer@@QAEXPAVCameraOrbitTarget@@@Z");
    todo("implement");
}

_inline void Viewer::attachPlayer(Player *) // 0x4FA875
{
    mangled_assert("?attachPlayer@Viewer@@QAEXPAVPlayer@@@Z");
    todo("implement");
}

_inline Selection *Viewer::getRenderList() // 0x44977A
{
    mangled_assert("?getRenderList@Viewer@@QAEPAVSelection@@XZ");
    todo("implement");
}

_inline Selection *Viewer::getRetiredRenderList() // 0x523D22
{
    mangled_assert("?getRetiredRenderList@Viewer@@QAEPAVSelection@@XZ");
    todo("implement");
}

_inline bool Viewer::isDeterministic() // 0x652B97
{
    mangled_assert("?isDeterministic@Viewer@@UAE_NXZ");
    // __shifted(Viewer, 48);
    todo("implement");
}

_inline char const *Viewer::saveToken() // 0x652C7C
{
    mangled_assert("?saveToken@Viewer@@UAEPBDXZ");
    // __shifted(Viewer, 48);
    todo("implement");
}

/* ---------- private code */

#endif // __VIEWER_H__
#endif
