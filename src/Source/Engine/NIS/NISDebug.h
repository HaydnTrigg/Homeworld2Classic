#if 0
#ifndef __NISDEBUG_H__
#define __NISDEBUG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NISDebug
{
public:
    enum Vis2D
    {
        V2D_Followers = 0,
        V2D_Leaders,
        V2D_Cameras,
        V2D_Paths,
        V2D_MotionNode,
        V2D_Number,
    };
    enum Vis3D
    {
        V3D_Paths = 0,
        V3D_Leaders,
        V3D_Cameras,
        V3D_Number,
    };
    class SelectedNodePred
    {
    public:
        virtual bool Test(MotionNode const *) const = 0;
        SelectedNodePred(NISDebug::SelectedNodePred const &); /* compiler_generated() */
        _inline SelectedNodePred(); /* compiler_generated() */
        NISDebug::SelectedNodePred &operator=(NISDebug::SelectedNodePred const &); /* compiler_generated() */
    };
    static_assert(sizeof(SelectedNodePred) == 4, "Invalid SelectedNodePred size");
    class SelectedMotionPathPred
    {
    public:
        SelectedMotionPathPred(NISDebug::SelectedMotionPathPred const &); /* compiler_generated() */
        SelectedMotionPathPred(MotionFollower const *);
        virtual bool Test(MotionPath const *) const;
    private:
        MotionFollower const *m_pSelectedFollower; // 0x4
    public:
        NISDebug::SelectedMotionPathPred &operator=(NISDebug::SelectedMotionPathPred const &); /* compiler_generated() */
    };
    static_assert(sizeof(SelectedMotionPathPred) == 8, "Invalid SelectedMotionPathPred size");
    static void enable2DAll(bool bOn);
    static void enable3DAll(bool bOn);
    static void enable2D(unsigned __int32 bit, bool bOn);
    static void enable3D(unsigned __int32 bit, bool bOn);
    static void visualize2D(NIS const *pNIS);
    static void visualize3D(NIS const *pNIS);
    static void play();
    static void playRelative();
    static void rewind();
    static void rewindLots();
    static void cameraRelease();
    static void pauseToggle();
    static void showInfo();
    static void keyPress(unsigned __int32 key);
private:
    static void visualizePaths3D(NIS const *pNIS, NISDebug::SelectedMotionPathPred const *pred);
    static void visualizeLeaders3D(NIS const *pNIS, NISDebug::SelectedNodePred const *pred);
    static void visualizeCameras3D(NIS const *pNIS);
    static void visualizeFollowers2D(NIS const *pNIS);
    static void visualizeLeaders2D(NIS const *pNIS, NISDebug::SelectedNodePred const *pred);
    static void visualizeCameras2D(NIS const *pNIS);
    static void visualizePaths2D(NIS const *pNIS, NISDebug::SelectedMotionPathPred const *pred);
    static void visualizeMotionNode2D(NIS const *pNIS, MotionNode *pNode, float x, float y, float width, float height);
    static MotionFollower const *findSelectedFollower(NIS const *pNIS);
    static std::bitset<5> m_visualize2D;
    static std::bitset<3> m_visualize3D;
};
static_assert(sizeof(NISDebug) == 1, "Invalid NISDebug size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NISDEBUG_H__
#endif
