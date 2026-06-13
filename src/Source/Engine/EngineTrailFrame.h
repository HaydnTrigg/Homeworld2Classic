#if 0
#ifndef __ENGINETRAILFRAME_H__
#define __ENGINETRAILFRAME_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EngineTrailFrame
{
public:
    EngineTrailFrame();
    ~EngineTrailFrame();
    void update(float, matrix3 const &, vector3 const &, vector3 const &);
    float m_time; // 0x0
    vector3 m_position; // 0x4
    vector3 m_positionOffset; // 0x10
    matrix3 m_orientation; // 0x1C
    vector2 m_scale; // 0x40
    float m_bulgeFactor; // 0x48
    vector3 m_direction; // 0x4C
    float m_length; // 0x58
};
static_assert(sizeof(EngineTrailFrame) == 92, "Invalid EngineTrailFrame size");

class EngineTrailFrameBlock
{
public:
    enum
    {
        NUM_FRAMES = 16, // 0x0010
    };
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    __int32 m_startFrame; // 0x0
    __int32 m_endFrame; // 0x4
    EngineTrailFrame m_frames[16]; // 0x8
    EngineTrailFrameBlock *m_pPrev; // 0x5C8
    EngineTrailFrameBlock *m_pNext; // 0x5CC
    _inline EngineTrailFrameBlock(); /* compiler_generated() */
    _inline ~EngineTrailFrameBlock(); /* compiler_generated() */
};
static_assert(sizeof(EngineTrailFrameBlock) == 1488, "Invalid EngineTrailFrameBlock size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ENGINETRAILFRAME_H__
#endif
