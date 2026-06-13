#if 0
#ifndef __NEBULA_H__
#define __NEBULA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Nebula :
    public SobWithMesh
{
public:
    static Nebula *Spawn(char const *nebulaGroupName, char const *resourcename, vector3 const &position, vector4 const &color, float rotationDegrees, float radius);
    static void SetAmbientOverride(bool bOverride, vector4 const &col);
    static bool GetAmbientOverride(vector4 &ambient);
    typedef SobWithMesh SuperClass;
    Nebula(Nebula &); /* compiler_generated() */
    Nebula(SaveGameData *);
    Nebula(char const *, char const *);
    virtual void customRender(Camera const *, MeshRenderProxy &) override;
    _inline NebulaStatic const *getStatic() const;
    float getRadius() const;
    void setRadius(float);
    _inline vector4 getColour() const;
    _inline void setColour(vector4 const &);
    _inline void setFading(float);
    void updateEmissiveColour(float);
    vector4 getEmissiveColour() const;
    void doCollision(Sob *);
    void setRotation(float);
    virtual bool update(float) override;
    void applyMultipliersAndAbilities(Ship *);
protected:
    float m_radius; // 0x24C
    vector4 m_colour; // 0x250
    BillboardRender m_billboardRender; // 0x260
    NebulaGroup *m_nebulaGroup; // 0x278
    float m_fading; // 0x27C
private:
    ModifierTargetCache m_modifierTargets; // 0x280
protected:
    static bool s_bOverrideLevelLighting;
    static vector4 s_ambientColour;
    virtual void UpdateCollisionProxies() override;
    void randomizeVisual();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    virtual _inline ~Nebula() override; /* compiler_generated() */
    Nebula &operator=(Nebula &); /* compiler_generated() */
};
static_assert(sizeof(Nebula) == 656, "Invalid Nebula size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern NebulaStatic const *_sub_4C1042(Nebula const *const);
_inline NebulaStatic const *Nebula::getStatic() const // 0x4C1042
{
    mangled_assert("?getStatic@Nebula@@QBEPBVNebulaStatic@@XZ");
    todo("implement");
    NebulaStatic const * __result = _sub_4C1042(this);
    return __result;
}

_extern vector4 _sub_4C0FF0(Nebula const *const);
_inline vector4 Nebula::getColour() const // 0x4C0FF0
{
    mangled_assert("?getColour@Nebula@@QBE?AVvector4@@XZ");
    todo("implement");
    vector4 __result = _sub_4C0FF0(this);
    return __result;
}

_extern void _sub_4C1189(Nebula *const, vector4 const &);
_inline void Nebula::setColour(vector4 const &) // 0x4C1189
{
    mangled_assert("?setColour@Nebula@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_4C1189(this, arg);
}

_extern void _sub_4C1491(Nebula *const, float);
_inline void Nebula::setFading(float) // 0x4C1491
{
    mangled_assert("?setFading@Nebula@@QAEXM@Z");
    todo("implement");
    _sub_4C1491(this, arg);
}

_extern bool _sub_4C1049(Nebula *const);
_inline bool Nebula::isDeterministic() // 0x4C1049
{
    mangled_assert("?isDeterministic@Nebula@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4C1049(this);
    return __result;
}

_extern char const *_sub_4C1183(Nebula *const);
_inline char const *Nebula::saveToken() // 0x4C1183
{
    mangled_assert("?saveToken@Nebula@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4C1183(this);
    return __result;
}

/* ---------- private code */

#endif // __NEBULA_H__
#endif
