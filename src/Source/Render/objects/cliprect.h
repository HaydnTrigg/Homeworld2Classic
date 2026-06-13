#if 0
#ifndef __CLIPRECT_H__
#define __CLIPRECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ClipRect :
    public Core
{
public:
    ClipRect(ClipRect const &); /* compiler_generated() */
    ClipRect();
    void Set(float, float, float, float);
    void ClipBegin();
    void ClipEnd();
    enum ClipCoordTypes
    {
        CCT_Left = 0,
        CCT_Top,
        CCT_Right,
        CCT_Bottom,
        CCT_COUNT,
    };
private:
    float m_clipCoords[4]; // 0x4
    bool m_oldScissorCap; // 0x14
    bool m_bInit; // 0x15
public:
    virtual ~ClipRect() override; /* compiler_generated() */
    ClipRect &operator=(ClipRect const &); /* compiler_generated() */
};
static_assert(sizeof(ClipRect) == 24, "Invalid ClipRect size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CLIPRECT_H__
/* combined */
#ifndef __CLIPRECT_H__
#define __CLIPRECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ClipRect :
    public Core
{
public:
    _inline ClipRect(ClipRect const &); /* compiler_generated() */
    ClipRect();
    void Set(float, float, float, float);
    void ClipBegin();
    void ClipEnd();
    enum ClipCoordTypes
    {
        CCT_Left = 0,
        CCT_Top,
        CCT_Right,
        CCT_Bottom,
        CCT_COUNT,
    };
private:
    float m_clipCoords[4]; // 0x4
    bool m_oldScissorCap; // 0x14
    bool m_bInit; // 0x15
public:
    virtual _inline ~ClipRect() override; /* compiler_generated() */
    _inline ClipRect &operator=(ClipRect const &); /* compiler_generated() */
};
static_assert(sizeof(ClipRect) == 24, "Invalid ClipRect size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CLIPRECT_H__
#endif
