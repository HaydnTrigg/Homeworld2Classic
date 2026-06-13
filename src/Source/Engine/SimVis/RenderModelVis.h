#if 0
#ifndef __RENDERMODELVIS_H__
#define __RENDERMODELVIS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RenderModelVis :
    public SobVis
{
public:
    RenderModelVis(RenderModelVis const &); /* compiler_generated() */
    RenderModelVis(Sob const *, SaveGameData *);
    RenderModelVis(Sob const *);
    virtual ~RenderModelVis() override;
    virtual void init() override;
    virtual void setHierarchy(HierarchyDynamic const *) override;
    virtual void update(Camera const &, float, float, __int32) override;
    virtual bool hasEffectEvent(char const *) const override;
    virtual void startEffectEvent(char const *, float) override;
    virtual void stopEffectEvent(char const *) override;
    virtual void setEffectVariable(char const *, float, float) override;
    virtual _inline EffectContainer const *getEffectContainer() const override;
    virtual _inline EffectContainer *getEffectContainer() override;
    virtual _inline RenderModelScars *getRenderModelScars() override;
    virtual _inline EmitterContainer const *getEmitterContainer() const override;
    virtual _inline EmitterContainer *getEmitterContainer() override;
    virtual void onHealthChange() override;
    enum AdditiveColourMode
    {
        ACM_Constant = 0,
        ACM_Pulse,
        ACM_COUNT,
    };
    void setBaseAlpha(float);
    float getAlpha() const;
    _inline void hintFowReveal();
    void setAdditiveColour(vector4 const &, RenderModelVis::AdditiveColourMode, unsigned __int32);
    bool hasAdditiveColour() const;
    __int32 getMarkerID(char const *) const;
    bool getMarkerPosition(__int32, vector3 &) const;
    virtual bool save(SaveGameData *) override;
    virtual bool restore(SaveGameData *) override;
    virtual void postRestore() override;
private:
    void updateAlpha(float, __int32);
    void postDeathUpdate(float);
    void updateAdditiveColour(float);
protected:
    RenderModelInstance m_rmInstance; // 0x8
    EffectContainer *m_pEffectContainer; // 0x54
    EmitterContainer *m_pEmitterContainer; // 0x58
    VisibilityLevel m_prevLocalVis; // 0x5C
    Visibility const *m_visibility; // 0x60
    float m_baseAlpha; // 0x64
    LinearInterp m_visAlpha; // 0x68
    LinearInterp m_lifeAlpha; // 0x74
    bool m_bDead; // 0x80
    float m_deadTime; // 0x84
    float m_deadTimeToStartFade; // 0x88
    bool m_bFowReveal; // 0x8C
    boost::scoped_ptr<RenderModelScars> m_rmScars; // 0x90
    RenderModelVis::AdditiveColourInfo m_addColourInfo; // 0x94
    struct AdditiveColourInfo
    {
        _inline AdditiveColourInfo();
        RenderModelVis::AdditiveColourMode m_mode; // 0x0
        bool m_bActive; // 0x4
        vector4 m_addColour; // 0x8
        unsigned __int32 m_expiryCount; // 0x18
        float m_time; // 0x1C
    };
    static_assert(sizeof(AdditiveColourInfo) == 32, "Invalid AdditiveColourInfo size");
public:
    RenderModelVis &operator=(RenderModelVis const &); /* compiler_generated() */
};
static_assert(sizeof(RenderModelVis) == 180, "Invalid RenderModelVis size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern EffectContainer *_sub_522C95(RenderModelVis *const);
_inline EffectContainer *RenderModelVis::getEffectContainer() // 0x522C95
{
    mangled_assert("?getEffectContainer@RenderModelVis@@UAEPAVEffectContainer@@XZ");
    todo("implement");
    EffectContainer * __result = _sub_522C95(this);
    return __result;
}

_extern EffectContainer const *_sub_522C99(RenderModelVis const *const);
_inline EffectContainer const *RenderModelVis::getEffectContainer() const // 0x522C99
{
    mangled_assert("?getEffectContainer@RenderModelVis@@UBEPBVEffectContainer@@XZ");
    todo("implement");
    EffectContainer const * __result = _sub_522C99(this);
    return __result;
}

_extern RenderModelScars *_sub_522DEC(RenderModelVis *const);
_inline RenderModelScars *RenderModelVis::getRenderModelScars() // 0x522DEC
{
    mangled_assert("?getRenderModelScars@RenderModelVis@@UAEPAVRenderModelScars@@XZ");
    todo("implement");
    RenderModelScars * __result = _sub_522DEC(this);
    return __result;
}

_extern EmitterContainer *_sub_522C9D(RenderModelVis *const);
_inline EmitterContainer *RenderModelVis::getEmitterContainer() // 0x522C9D
{
    mangled_assert("?getEmitterContainer@RenderModelVis@@UAEPAVEmitterContainer@@XZ");
    todo("implement");
    EmitterContainer * __result = _sub_522C9D(this);
    return __result;
}

_extern EmitterContainer const *_sub_522CA1(RenderModelVis const *const);
_inline EmitterContainer const *RenderModelVis::getEmitterContainer() const // 0x522CA1
{
    mangled_assert("?getEmitterContainer@RenderModelVis@@UBEPBVEmitterContainer@@XZ");
    todo("implement");
    EmitterContainer const * __result = _sub_522CA1(this);
    return __result;
}

_extern void _sub_48D633(RenderModelVis *const);
_inline void RenderModelVis::hintFowReveal() // 0x48D633
{
    mangled_assert("?hintFowReveal@RenderModelVis@@QAEXXZ");
    todo("implement");
    _sub_48D633(this);
}

_extern _sub_5226CB(RenderModelVis::AdditiveColourInfo *const);
_inline RenderModelVis::AdditiveColourInfo::AdditiveColourInfo() // 0x5226CB
{
    mangled_assert("??0AdditiveColourInfo@RenderModelVis@@QAE@XZ");
    todo("implement");
    _sub_5226CB(this);
}

/* ---------- private code */

#endif // __RENDERMODELVIS_H__
#endif
