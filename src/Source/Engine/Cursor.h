#if 0
#ifndef __CURSOR_H__
#define __CURSOR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Cursor
{
public:
    Cursor(Cursor const &); /* compiler_generated() */
    Cursor();
    ~Cursor();
    _inline bool isHardwareCursor() const;
    void enableHardwareCursor(bool);
    void freeTextures();
    bool addImage(char const *, __int32);
    void setType(__int32);
    __int32 getType();
    void setScale(float, float);
    bool setVisible(bool);
    void draw(float, float);
    void draw();
    PrimRectangle const *getMouseRectangle();
    enum Type_t
    {
        eNormal = 0,
        eAttack,
        eForceAttack,
        eAdd,
        eEye,
        eShield,
        eSupport,
        eDock,
        eCloak,
        eMine,
        eWaypoint,
        eResource,
        eMove,
        eRelativeMove,
        eHand,
        eCapture,
        eHyperspace,
        eFormGate,
        eSpecialAttack,
        eRallyPoint,
        eDefenseField,
        eMoveAttack,
        eMilitary,
        eSalvage,
        ePanLeft,
        ePanRight,
        ePanUp,
        ePanDown,
        eNumCursors,
    };
    struct CursorImage
    {
        _inline CursorImage();
        Texture *texture; // 0x0
        unsigned __int32 hardwareHandle; // 0x4
        __int32 m_hotspotx; // 0x8
        __int32 m_hotspoty; // 0xC
    };
    static_assert(sizeof(CursorImage) == 16, "Invalid CursorImage size");
    typedef std::map<int,Cursor::CursorImage,std::less<int>,std::allocator<std::pair<int const ,Cursor::CursorImage> > > Images;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<int const ,Cursor::CursorImage> > > > ImagesI;
private:
    std::map<int,Cursor::CursorImage,std::less<int>,std::allocator<std::pair<int const ,Cursor::CursorImage> > > m_images; // 0x0
    PrimRectangle m_rectangle; // 0x8
    bool m_bVisible; // 0x18
    __int32 m_currentType; // 0x1C
    bool m_bHardwareCursor; // 0x20
public:
    Cursor &operator=(Cursor const &); /* compiler_generated() */
};
static_assert(sizeof(Cursor) == 36, "Invalid Cursor size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool Cursor::isHardwareCursor() const // 0x4F6107
{
    mangled_assert("?isHardwareCursor@Cursor@@QBE_NXZ");
    todo("implement");
}

_inline Cursor::CursorImage::CursorImage() // 0x5EA7E6
{
    mangled_assert("??0CursorImage@Cursor@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CURSOR_H__
#endif
