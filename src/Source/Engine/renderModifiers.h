#if 0
#ifndef __RENDERMODIFIERS_H__
#define __RENDERMODIFIERS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FlashModifier :
    public Modifier
{
public:
    FlashModifier(FlashModifier const &); /* compiler_generated() */
    FlashModifier();
    void setOn(bool);
    virtual void modify(VertexArray *, unsigned __int32 *, bool) override;
private:
    bool m_bOn; // 0x4
    bool m_bLit; // 0x5
public:
    virtual _inline ~FlashModifier() override; /* compiler_generated() */
    FlashModifier &operator=(FlashModifier const &); /* compiler_generated() */
};
static_assert(sizeof(FlashModifier) == 8, "Invalid FlashModifier size");

class OutlineModifier :
    public Modifier
{
public:
    OutlineModifier(OutlineModifier const &); /* compiler_generated() */
    OutlineModifier();
    virtual ~OutlineModifier() override;
    void setColour(vector4 const &);
    virtual void modify(VertexArray *, unsigned __int32 *, bool) override;
private:
    Material *m_pMat; // 0x4
    unsigned __int32 m_allow; // 0x8
    bool m_offset; // 0xC
    unsigned __int32 m_polyfill; // 0x10
    unsigned __int32 m_cullMode; // 0x14
    float m_lineWidth; // 0x18
public:
    OutlineModifier &operator=(OutlineModifier const &); /* compiler_generated() */
};
static_assert(sizeof(OutlineModifier) == 28, "Invalid OutlineModifier size");

class SolidColourModifier :
    public Modifier
{
public:
    SolidColourModifier(SolidColourModifier const &); /* compiler_generated() */
    SolidColourModifier();
    virtual ~SolidColourModifier() override;
    void setColour(vector4 const &);
    virtual void modify(VertexArray *, unsigned __int32 *, bool) override;
private:
    Material *m_pMat; // 0x4
    unsigned __int32 m_allow; // 0x8
    bool m_bLit; // 0xC
public:
    SolidColourModifier &operator=(SolidColourModifier const &); /* compiler_generated() */
};
static_assert(sizeof(SolidColourModifier) == 16, "Invalid SolidColourModifier size");

class NebulaModifier :
    public Modifier
{
public:
    NebulaModifier(NebulaModifier const &); /* compiler_generated() */
    NebulaModifier();
    void setCameraDir(vector3 const &);
    virtual void modify(VertexArray *, unsigned __int32 *, bool) override;
private:
    vector3 m_cameraDir; // 0x4
public:
    virtual _inline ~NebulaModifier() override; /* compiler_generated() */
    NebulaModifier &operator=(NebulaModifier const &); /* compiler_generated() */
};
static_assert(sizeof(NebulaModifier) == 16, "Invalid NebulaModifier size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RENDERMODIFIERS_H__
#endif
