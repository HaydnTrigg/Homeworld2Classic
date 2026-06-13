#if 0
#ifndef __WEAPONFIREVIS_H__
#define __WEAPONFIREVIS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WeaponFireVis :
    public SobVis
{
public:
    WeaponFireVis(WeaponFireVis const &); /* compiler_generated() */
    WeaponFireVis(Sob const *, SaveGameData *);
    WeaponFireVis(Sob const *);
    virtual ~WeaponFireVis() override;
    virtual void init() override;
    virtual void setHierarchy(HierarchyDynamic const *) override;
    virtual void update(Camera const &, float, float, __int32) override;
    virtual void onHealthChange() override;
    virtual bool hasEffectEvent(char const *) const override;
    virtual void startEffectEvent(char const *, float) override;
    virtual void stopEffectEvent(char const *) override;
    virtual void setEffectVariable(char const *, float, float) override;
    virtual _inline EffectContainer const *getEffectContainer() const override;
    virtual _inline EffectContainer *getEffectContainer() override;
    virtual _inline RenderModelScars *getRenderModelScars() override;
    virtual _inline EmitterContainer const *getEmitterContainer() const override;
    virtual _inline EmitterContainer *getEmitterContainer() override;
    virtual bool save(SaveGameData *) override;
    virtual bool restore(SaveGameData *) override;
    virtual void postRestore() override;
    class ECVisUpdate :
        public EffectContainerVisUpdate
    {
    public:
        ECVisUpdate(WeaponFireVis::ECVisUpdate const &); /* compiler_generated() */
        ECVisUpdate();
        virtual bool IsVisible(Sob const *) override;
    private:
        bool m_lastVisibility; // 0x4
    public:
        WeaponFireVis::ECVisUpdate &operator=(WeaponFireVis::ECVisUpdate const &); /* compiler_generated() */
    };
    static_assert(sizeof(ECVisUpdate) == 8, "Invalid ECVisUpdate size");
protected:
    EffectContainer *m_pEffectContainer; // 0x8
    WeaponFireVis::ECVisUpdate m_ecVisUpdate; // 0xC
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    WeaponFireVis &operator=(WeaponFireVis const &); /* compiler_generated() */
};
static_assert(sizeof(WeaponFireVis) == 20, "Invalid WeaponFireVis size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern EffectContainer *_sub_524327(WeaponFireVis *const);
_inline EffectContainer *WeaponFireVis::getEffectContainer() // 0x524327
{
    mangled_assert("?getEffectContainer@WeaponFireVis@@UAEPAVEffectContainer@@XZ");
    todo("implement");
    EffectContainer * __result = _sub_524327(this);
    return __result;
}

_extern EffectContainer const *_sub_52432B(WeaponFireVis const *const);
_inline EffectContainer const *WeaponFireVis::getEffectContainer() const // 0x52432B
{
    mangled_assert("?getEffectContainer@WeaponFireVis@@UBEPBVEffectContainer@@XZ");
    todo("implement");
    EffectContainer const * __result = _sub_52432B(this);
    return __result;
}

_extern RenderModelScars *_sub_524335(WeaponFireVis *const);
_inline RenderModelScars *WeaponFireVis::getRenderModelScars() // 0x524335
{
    mangled_assert("?getRenderModelScars@WeaponFireVis@@UAEPAVRenderModelScars@@XZ");
    todo("implement");
    RenderModelScars * __result = _sub_524335(this);
    return __result;
}

_extern EmitterContainer *_sub_52432F(WeaponFireVis *const);
_inline EmitterContainer *WeaponFireVis::getEmitterContainer() // 0x52432F
{
    mangled_assert("?getEmitterContainer@WeaponFireVis@@UAEPAVEmitterContainer@@XZ");
    todo("implement");
    EmitterContainer * __result = _sub_52432F(this);
    return __result;
}

_extern EmitterContainer const *_sub_524332(WeaponFireVis const *const);
_inline EmitterContainer const *WeaponFireVis::getEmitterContainer() const // 0x524332
{
    mangled_assert("?getEmitterContainer@WeaponFireVis@@UBEPBVEmitterContainer@@XZ");
    todo("implement");
    EmitterContainer const * __result = _sub_524332(this);
    return __result;
}

/* ---------- private code */

#endif // __WEAPONFIREVIS_H__
#endif
