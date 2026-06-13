#if 0
#ifndef __DUSTCLOUD_H__
#define __DUSTCLOUD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DustCloud :
    public Sob
{
public:
    static DustCloud *Spawn(char const *dustcloudGroupName, char const *resourcename, vector3 const &position, vector3 const &speed, vector4 const &color, float rotationDegrees, float radius);
    static void SetAmbientOverride(bool bOverride, vector4 const &col);
    static bool GetAmbientOverride(vector4 &ambient);
    typedef Sob SuperClass;
    DustCloud(DustCloud &); /* compiler_generated() */
    DustCloud(SaveGameData *);
    DustCloud(char const *, char const *);
    virtual void render(Camera const *, MeshRenderProxy &);
    virtual bool update(float) override;
    _inline bool getIsChargeable() const;
    void charge(float);
    bool isCharged() const;
    _inline float getCharge() const;
    void setCharge(float, bool);
    float getChargedFactor() const;
    _inline DustCloudStatic const *getStatic() const;
    _inline float getRadius() const;
    void setRadius(float);
    _inline void setColour(vector4 const &);
    vector4 getColour() const;
    vector4 getEmissiveColour() const;
    void doCollision(Sob *);
    void setRotation(float);
    virtual _inline SelTarg *getSelTarg() const override;
    virtual void computeSelTarg(Camera const *) override;
protected:
    float m_currentCharge; // 0x1CC
    float m_radius; // 0x1D0
    bool m_hitByLightning; // 0x1D4
    float m_lastTimeLightning; // 0x1D8
    SelTarg m_selTarg; // 0x1DC
    vector3 m_lightningPoint; // 0x1F4
    vector4 m_colour; // 0x200
    bool m_chargedInLastFrame; // 0x210
    BillboardRender m_billboardRender; // 0x214
    float m_lastChargedLightning; // 0x22C
    float m_emissiveFactor; // 0x230
    DustCloudGroup *m_dustCloudGroup; // 0x234
    vector3 m_position; // 0x238
    static bool s_bOverrideLevelLighting;
    static vector4 s_ambientColour;
    virtual void UpdateCollisionProxies() override;
    void randomizeVisual();
    void updateCharging(float);
    void enforceBounds();
    void jumpCharge(float);
    bool jumpChargeToNeighbours(float, bool);
    vector3 generateRandomPointInside();
    vector3 const &generateLightningPoint();
    void generateNonDeterministicLightning(DustCloud *, bool);
    void generateNonDeterministicEffects(float);
    virtual _inline vector3 const &getPosition() const override;
    virtual void setPosition(vector3 const &) override;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    virtual _inline ~DustCloud() override; /* compiler_generated() */
    DustCloud &operator=(DustCloud &); /* compiler_generated() */
};
static_assert(sizeof(DustCloud) == 580, "Invalid DustCloud size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4C51AE(DustCloud const *const);
_inline bool DustCloud::getIsChargeable() const // 0x4C51AE
{
    mangled_assert("?getIsChargeable@DustCloud@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_4C51AE(this);
    return __result;
}

_extern float _sub_4C5030(DustCloud const *const);
_inline float DustCloud::getCharge() const // 0x4C5030
{
    mangled_assert("?getCharge@DustCloud@@QBEMXZ");
    todo("implement");
    float __result = _sub_4C5030(this);
    return __result;
}

_extern DustCloudStatic const *_sub_4C51D0(DustCloud const *const);
_inline DustCloudStatic const *DustCloud::getStatic() const // 0x4C51D0
{
    mangled_assert("?getStatic@DustCloud@@QBEPBVDustCloudStatic@@XZ");
    todo("implement");
    DustCloudStatic const * __result = _sub_4C51D0(this);
    return __result;
}

_extern float _sub_4C51C2(DustCloud const *const);
_inline float DustCloud::getRadius() const // 0x4C51C2
{
    mangled_assert("?getRadius@DustCloud@@QBEMXZ");
    todo("implement");
    float __result = _sub_4C51C2(this);
    return __result;
}

_extern void _sub_4C584E(DustCloud *const, vector4 const &);
_inline void DustCloud::setColour(vector4 const &) // 0x4C584E
{
    mangled_assert("?setColour@DustCloud@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_4C584E(this, arg);
}

_extern SelTarg *_sub_4C51C9(DustCloud const *const);
_inline SelTarg *DustCloud::getSelTarg() const // 0x4C51C9
{
    mangled_assert("?getSelTarg@DustCloud@@UBEPAVSelTarg@@XZ");
    todo("implement");
    SelTarg * __result = _sub_4C51C9(this);
    return __result;
}

_extern vector3 const &_sub_4C51BB(DustCloud const *const);
_inline vector3 const &DustCloud::getPosition() const // 0x4C51BB
{
    mangled_assert("?getPosition@DustCloud@@MBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_4C51BB(this);
    return __result;
}

_extern bool _sub_4C5217(DustCloud *const);
_inline bool DustCloud::isDeterministic() // 0x4C5217
{
    mangled_assert("?isDeterministic@DustCloud@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4C5217(this);
    return __result;
}

_extern char const *_sub_4C5815(DustCloud *const);
_inline char const *DustCloud::saveToken() // 0x4C5815
{
    mangled_assert("?saveToken@DustCloud@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4C5815(this);
    return __result;
}

/* ---------- private code */

#endif // __DUSTCLOUD_H__
#endif
