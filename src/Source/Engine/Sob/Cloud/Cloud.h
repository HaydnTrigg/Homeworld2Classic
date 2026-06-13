#if 0
#ifndef __CLOUD_H__
#define __CLOUD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Cloud :
    public Sob
{
public:
    static Cloud *Spawn(char const *meshname, vector3 const &position, vector4 const &color, float rotationDegrees, float radius);
    typedef Sob SuperClass;
    Cloud(Cloud &); /* compiler_generated() */
    Cloud(char const *);
    virtual void render(Camera const *, MeshRenderProxy &);
    _inline CloudStatic const *getStatic() const;
    virtual _inline vector3 const &getPosition() const override;
    virtual void setPosition(vector3 const &) override;
    _inline float getRadius() const;
    void setRadius(float);
    _inline void setColour(vector4 const &);
    _inline vector4 getColour() const;
    void setRotation(float);
    virtual _inline bool isDeterministic() override;
protected:
    vector3 m_position; // 0x1CC
    float m_radius; // 0x1D8
    vector4 m_colour; // 0x1DC
    BillboardRender m_billboardRender; // 0x1EC
    void randomizeVisual();
public:
    virtual _inline ~Cloud() override; /* compiler_generated() */
    Cloud &operator=(Cloud &); /* compiler_generated() */
};
static_assert(sizeof(Cloud) == 516, "Invalid Cloud size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern CloudStatic const *_sub_4C44AC(Cloud const *const);
_inline CloudStatic const *Cloud::getStatic() const // 0x4C44AC
{
    mangled_assert("?getStatic@Cloud@@QBEPBVCloudStatic@@XZ");
    todo("implement");
    CloudStatic const * __result = _sub_4C44AC(this);
    return __result;
}

_extern vector3 const &_sub_4C449E(Cloud const *const);
_inline vector3 const &Cloud::getPosition() const // 0x4C449E
{
    mangled_assert("?getPosition@Cloud@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4C449E(this);
    return __result;
}

_extern float _sub_4C44A5(Cloud const *const);
_inline float Cloud::getRadius() const // 0x4C44A5
{
    mangled_assert("?getRadius@Cloud@@QBEMXZ");
    todo("implement");
    float __result = _sub_4C44A5(this);
    return __result;
}

_extern void _sub_4C45E9(Cloud *const, vector4 const &);
_inline void Cloud::setColour(vector4 const &) // 0x4C45E9
{
    mangled_assert("?setColour@Cloud@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_4C45E9(this, arg);
}

_extern vector4 _sub_4C4487(Cloud const *const);
_inline vector4 Cloud::getColour() const // 0x4C4487
{
    mangled_assert("?getColour@Cloud@@QBE?AVvector4@@XZ");
    todo("implement");
    vector4 __result = _sub_4C4487(this);
    return __result;
}

_extern bool _sub_4C44B3(Cloud *const);
_inline bool Cloud::isDeterministic() // 0x4C44B3
{
    mangled_assert("?isDeterministic@Cloud@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4C44B3(this);
    return __result;
}

/* ---------- private code */

#endif // __CLOUD_H__
#endif
