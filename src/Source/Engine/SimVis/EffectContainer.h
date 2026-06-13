#if 0
#ifndef __EFFECTCONTAINER_H__
#define __EFFECTCONTAINER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EffectContainer
{
public:
    enum Flags
    {
        FLAG_NlipsFromParent = 0,
        FLAG_NlipsStatic,
        FLAG_NlipsDynamic,
    };
    typedef unsigned __int32 EffectHandle;
    EffectContainer(EffectContainer const &); /* compiler_generated() */
    EffectContainer(SobVis *, RenderModelInstance *);
    ~EffectContainer();
    void addVisUpdate(EffectContainerVisUpdate *);
    unsigned __int32 attachEffect(char const *, char const *, unsigned long, float, vector3 const &, matrix3 const &);
    bool isEffectDead(unsigned __int32) const;
    void setEffectLength(unsigned __int32, float);
    void setEffectScale(unsigned __int32, float);
    void setEffectHeight(unsigned __int32, float);
    void setEffectFadeT(unsigned __int32, float);
    void setEffectTransform(unsigned __int32, matrix4 const &);
    void setEffectVisible(unsigned __int32, bool);
    bool getEffectOffset(unsigned __int32, vector3 &) const;
    bool getEffectTransform(unsigned __int32, matrix4 &) const;
    void stopEffect(unsigned __int32);
    void deleteEffect(unsigned __int32);
    void setEffectVisibility(unsigned __int32, bool);
    void addEffectFlag(unsigned __int32, unsigned __int32);
    void removeEffectFlag(unsigned __int32, unsigned __int32);
    void setEffectNlips(unsigned __int32, float);
    void setEffectFarMode(unsigned __int32, bool);
    void update(Camera const &, float, float, bool);
    enum Location
    {
        LOC_Unattached = 0,
        LOC_Root,
        LOC_Centre,
        LOC_Random,
        LOC_Marker,
        LOC_Relative,
    };
    struct Effect
    {
        enum
        {
            k_numHandle = 4, // 0x0004
        };
        FXManager::Handle handle[4]; // 0x0
        __int32 marker[4]; // 0x20
        EffectContainer::Location location; // 0x30
        bool bActive; // 0x34
        bool bVisible; // 0x35
        unsigned __int32 flags; // 0x38
        float nlips; // 0x3C
        vector3 position; // 0x40
        matrix3 orientation; // 0x4C
        _inline Effect(); /* compiler_generated() */
    };
    static_assert(sizeof(Effect) == 112, "Invalid Effect size");
    typedef std::vector<EffectContainer::Effect,std::allocator<EffectContainer::Effect> > EffectList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<EffectContainer::Effect> > > EffectListI;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<EffectContainer::Effect> > > EffectListCI;
    typedef std::vector<EffectContainerVisUpdate *,std::allocator<EffectContainerVisUpdate *> > VisUpdateCont;
protected:
    _inline SobVis *getSobVis();
    void updateEffect(Camera const *, EffectContainer::Effect &, bool);
    _inline bool isFlagSet(EffectContainer::Effect const &, unsigned __int32) const;
    bool effectVisible(Sob const *);
private:
    SobVis *m_sobVis; // 0x0
    RenderModelInstance *m_rmInstance; // 0x4
    std::vector<EffectContainer::Effect,std::allocator<EffectContainer::Effect> > m_effects; // 0x8
    std::vector<EffectContainerVisUpdate *,std::allocator<EffectContainerVisUpdate *> > m_visUpdate; // 0x14
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    EffectContainer &operator=(EffectContainer const &); /* compiler_generated() */
};
static_assert(sizeof(EffectContainer) == 32, "Invalid EffectContainer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern SobVis *_sub_51A5ED(EffectContainer *const);
_inline SobVis *EffectContainer::getSobVis() // 0x51A5ED
{
    mangled_assert("?getSobVis@EffectContainer@@IAEPAVSobVis@@XZ");
    todo("implement");
    SobVis * __result = _sub_51A5ED(this);
    return __result;
}

_extern bool _sub_51A61D(EffectContainer const *const, EffectContainer::Effect const &, unsigned __int32);
_inline bool EffectContainer::isFlagSet(EffectContainer::Effect const &, unsigned __int32) const // 0x51A61D
{
    mangled_assert("?isFlagSet@EffectContainer@@IBE_NABUEffect@1@I@Z");
    todo("implement");
    bool __result = _sub_51A61D(this, arg, arg);
    return __result;
}

/* ---------- private code */

#endif // __EFFECTCONTAINER_H__
#endif
