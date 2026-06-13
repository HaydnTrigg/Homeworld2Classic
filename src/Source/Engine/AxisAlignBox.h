#if 0
#ifndef __AXISALIGNBOX_H__
#define __AXISALIGNBOX_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AxisAlignBox :
    public Volume
{
public:
    AxisAlignBox(AxisAlignBox &); /* compiler_generated() */
    AxisAlignBox(SaveGameData *);
    AxisAlignBox(char const *, float, float, float, float, float, float, bool);
    _inline float getX0() const;
    _inline float getX1() const;
    _inline float getY0() const;
    _inline float getY1() const;
    _inline float getZ0() const;
    _inline float getZ1() const;
    _inline vector3 getMin() const;
    _inline vector3 getMax() const;
    void setExtents(float, float, float, float, float, float);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    void staticInit();
private:
    float m_x0; // 0x230
    float m_x1; // 0x234
    float m_y0; // 0x238
    float m_y1; // 0x23C
    float m_z0; // 0x240
    float m_z1; // 0x244
    static SaveData const m_saveData[0];
public:
    virtual _inline ~AxisAlignBox() override; /* compiler_generated() */
    AxisAlignBox &operator=(AxisAlignBox &); /* compiler_generated() */
};
static_assert(sizeof(AxisAlignBox) == 584, "Invalid AxisAlignBox size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern float _sub_4B2654(AxisAlignBox const *const);
_inline float AxisAlignBox::getX0() const // 0x4B2654
{
    mangled_assert("?getX0@AxisAlignBox@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B2654(this);
    return __result;
}

_extern float _sub_4B265B(AxisAlignBox const *const);
_inline float AxisAlignBox::getX1() const // 0x4B265B
{
    mangled_assert("?getX1@AxisAlignBox@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B265B(this);
    return __result;
}

_extern float _sub_4B2662(AxisAlignBox const *const);
_inline float AxisAlignBox::getY0() const // 0x4B2662
{
    mangled_assert("?getY0@AxisAlignBox@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B2662(this);
    return __result;
}

_extern float _sub_4B2669(AxisAlignBox const *const);
_inline float AxisAlignBox::getY1() const // 0x4B2669
{
    mangled_assert("?getY1@AxisAlignBox@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B2669(this);
    return __result;
}

_extern float _sub_4B2670(AxisAlignBox const *const);
_inline float AxisAlignBox::getZ0() const // 0x4B2670
{
    mangled_assert("?getZ0@AxisAlignBox@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B2670(this);
    return __result;
}

_extern float _sub_4B2677(AxisAlignBox const *const);
_inline float AxisAlignBox::getZ1() const // 0x4B2677
{
    mangled_assert("?getZ1@AxisAlignBox@@QBEMXZ");
    todo("implement");
    float __result = _sub_4B2677(this);
    return __result;
}

_extern vector3 _sub_4B262C(AxisAlignBox const *const);
_inline vector3 AxisAlignBox::getMin() const // 0x4B262C
{
    mangled_assert("?getMin@AxisAlignBox@@QBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_4B262C(this);
    return __result;
}

_extern vector3 _sub_4B260B(AxisAlignBox const *const);
_inline vector3 AxisAlignBox::getMax() const // 0x4B260B
{
    mangled_assert("?getMax@AxisAlignBox@@QBE?AVvector3@@XZ");
    todo("implement");
    vector3 __result = _sub_4B260B(this);
    return __result;
}

_extern bool _sub_4B1D73(AxisAlignBox *const);
_inline bool AxisAlignBox::isDeterministic() // 0x4B1D73
{
    mangled_assert("?isDeterministic@AxisAlignBox@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4B1D73(this);
    return __result;
}

_extern char const *_sub_4B1E0F(AxisAlignBox *const);
_inline char const *AxisAlignBox::saveToken() // 0x4B1E0F
{
    mangled_assert("?saveToken@AxisAlignBox@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B1E0F(this);
    return __result;
}

/* ---------- private code */

#endif // __AXISALIGNBOX_H__
#endif
