#if 0
#ifndef __ATI_H__
#define __ATI_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct ATIPlacement2D
{
    float factorX; // 0x0
    float factorY; // 0x4
    float plusX; // 0x8
    float plusY; // 0xC
    float factorWidth; // 0x10
    float factorHeight; // 0x14
    float plusWidth; // 0x18
    float plusHeight; // 0x1C
    float minWidth; // 0x20
    float minHeight; // 0x24
    float maxWidth; // 0x28
    float maxHeight; // 0x2C
    float maxATIArea; // 0x30
    float minATIArea; // 0x34
    unsigned __int32 visibilityMask[4]; // 0x38
    unsigned __int32 invisibilityMask[4]; // 0x48
    unsigned __int32 placementFlags; // 0x58
    bool getPlacement(PrimRectangle *, PrimRectangle const *, vector2 const *, vector2 const *, unsigned __int32);
    void parse(LuaConfig &);
};
static_assert(sizeof(ATIPlacement2D) == 92, "Invalid ATIPlacement2D size");

struct ATIPlacement3D
{
    vector3 position; // 0x0
    vector3 scale; // 0xC
    float minArea; // 0x18
    float maxArea; // 0x1C
    unsigned __int32 visibilityMask[4]; // 0x20
    unsigned __int32 invisibilityMask[4]; // 0x30
    unsigned __int32 placementFlags; // 0x40
    bool getPlacement(matrix4 *, Camera const *, float, vector3 const *, vector3 const *, unsigned __int32);
    void parse(LuaConfig &);
    _inline ATIPlacement3D(); /* compiler_generated() */
};
static_assert(sizeof(ATIPlacement3D) == 68, "Invalid ATIPlacement3D size");

struct ATIParameter
{
    _inline ATIParameter();
    enum Type
    {
        typeGarbage = 0,
        typeFloat,
        typeColour,
        typeString,
        typePosition,
        typeScale,
        typeGraphic2D,
        typeGraphic3D,
    };
    ATIParameter::Type m_type; // 0x0
    union
    {
        float m_float; // 0x4
        vector4 const *m_colour; // 0x4
        wchar_t const *m_string; // 0x4
        vector3 *m_position; // 0x4
        vector3 *m_scale; // 0x4
        UIGraphic2D *m_graphic2D; // 0x4
        UIGraphic3D *m_graphic3D; // 0x4
    };
};
static_assert(sizeof(ATIParameter) == 8, "Invalid ATIParameter size");

class ATIItem
{
public:
    ATIItem(ATIItem const &); /* compiler_generated() */
    ATIItem(LuaConfig &, char const *);
    ~ATIItem();
    static unsigned __int32 parsePlacementFlags(LuaConfig &lc);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    __int32 m_iFloatParam; // 0x18
    __int32 m_iColourParam; // 0x1C
    __int32 m_iStringParam; // 0x20
    __int32 m_iPositionParam; // 0x24
    __int32 m_iScaleParam; // 0x28
    __int32 m_iGraphicParam; // 0x2C
    ATIItem &operator=(ATIItem const &); /* compiler_generated() */
};
static_assert(sizeof(ATIItem) == 48, "Invalid ATIItem size");

class ATIItem2D :
    public ATIItem
{
public:
    ATIItem2D(ATIItem2D const &); /* compiler_generated() */
    ATIItem2D(LuaConfig &, char const *);
    ~ATIItem2D();
    UIGraphic2D *m_graphic; // 0x30
    ATIPlacement2D m_placement; // 0x34
    ATIItem2D &operator=(ATIItem2D const &); /* compiler_generated() */
};
static_assert(sizeof(ATIItem2D) == 144, "Invalid ATIItem2D size");

class ATIItem3D :
    public ATIItem
{
public:
    ATIItem3D(ATIItem3D const &); /* compiler_generated() */
    ATIItem3D(LuaConfig &, char const *);
    ~ATIItem3D();
    UIGraphic3D *m_graphic; // 0x30
    ATIPlacement3D m_placement; // 0x34
    ATIItem3D &operator=(ATIItem3D const &); /* compiler_generated() */
};
static_assert(sizeof(ATIItem3D) == 120, "Invalid ATIItem3D size");

class ATITemplate
{
public:
    ATITemplate(ATITemplate const &); /* compiler_generated() */
    ATITemplate(LuaConfig &, char const *);
    ~ATITemplate();
    ATIItem2D *findItem2D(char const *) const;
    ATIItem3D *findItem3D(char const *) const;
    void display2D(PrimRectangle const *, ATIParameter *, __int32, unsigned __int32, float);
    void display3D(Camera const *, vector3 const *, vector3 const *, float, ATIParameter *, __int32, unsigned __int32, float);
protected:
    std::vector<ATIItem2D *,std::allocator<ATIItem2D *> > m_items2D; // 0x0
    std::vector<ATIItem3D *,std::allocator<ATIItem3D *> > m_items3D; // 0xC
public:
    ATITemplate &operator=(ATITemplate const &); /* compiler_generated() */
};
static_assert(sizeof(ATITemplate) == 24, "Invalid ATITemplate size");

struct ATIPossibleVisFlag
{
    char *name; // 0x0
    unsigned __int32 flag; // 0x4
};
static_assert(sizeof(ATIPossibleVisFlag) == 8, "Invalid ATIPossibleVisFlag size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline ATIParameter::ATIParameter() // 0x5E26A8
{
    mangled_assert("??0ATIParameter@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ATI_H__
#endif
