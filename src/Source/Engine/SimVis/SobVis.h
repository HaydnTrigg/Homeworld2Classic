#if 0
#ifndef __SOBVIS_H__
#define __SOBVIS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobVis
{
public:
    typedef unsigned __int32 EventHandle;
    typedef unsigned __int32 EffectHandle;
    SobVis(SobVis const &); /* compiler_generated() */
    SobVis(Sob const *, SaveGameData *);
    SobVis(Sob const *);
    virtual ~SobVis();
    _inline Sob const *getSob() const;
    virtual void init() = 0;
    virtual void setHierarchy(HierarchyDynamic const *) = 0;
    virtual void update(Camera const &, float, float, __int32) = 0;
    virtual bool hasEffectEvent(char const *) const = 0;
    virtual void startEffectEvent(char const *, float) = 0;
    virtual void stopEffectEvent(char const *) = 0;
    virtual void setEffectVariable(char const *, float, float) = 0;
    virtual EffectContainer const *getEffectContainer() const = 0;
    virtual EffectContainer *getEffectContainer() = 0;
    virtual RenderModelScars *getRenderModelScars() = 0;
    virtual void onHealthChange() = 0;
    virtual EmitterContainer const *getEmitterContainer() const = 0;
    virtual EmitterContainer *getEmitterContainer() = 0;
    virtual bool save(SaveGameData *) = 0;
    virtual bool restore(SaveGameData *) = 0;
    virtual void postRestore() = 0;
protected:
    Sob const *m_sob; // 0x4
public:
    SobVis &operator=(SobVis const &); /* compiler_generated() */
};
static_assert(sizeof(SobVis) == 8, "Invalid SobVis size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Sob const *_sub_51A5E9(SobVis const *const);
_inline Sob const *SobVis::getSob() const // 0x51A5E9
{
    mangled_assert("?getSob@SobVis@@QBEPBVSob@@XZ");
    todo("implement");
    Sob const * __result = _sub_51A5E9(this);
    return __result;
}

/* ---------- private code */

#endif // __SOBVIS_H__
#endif
