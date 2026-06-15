#if 0
#ifndef __EFFECTANIMATIONLIST_H__
#define __EFFECTANIMATIONLIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EffectAnimationList
{
public:
    class StateUpdate
    {
    public:
        virtual _inline ~StateUpdate();
        virtual _inline bool start(EffectAnimation const &, AnimEventContext *);
        virtual _inline bool stop(EffectAnimation const &, AnimEventContext *);
        virtual _inline bool update(EffectAnimation const &, AnimEventContext *, float, float);
        StateUpdate(EffectAnimationList::StateUpdate const &); /* compiler_generated() */
    protected:
        _inline StateUpdate();
    public:
        EffectAnimationList::StateUpdate &operator=(EffectAnimationList::StateUpdate const &); /* compiler_generated() */
    };
    static_assert(sizeof(StateUpdate) == 4, "Invalid StateUpdate size");
    EffectAnimationList(EffectAnimationList const &); /* compiler_generated() */
    EffectAnimationList();
    ~EffectAnimationList();
    void addStateUpdate(EffectAnimationList::StateUpdate *);
    void startEffectAnimation(EffectAnimation const *, float);
    void stopEffectAnimation(EffectAnimation const *);
    void setEffectVariable(EffectAnimation const *, float, float);
    void update(float, float);
    struct AnimationInstance
    {
        _inline AnimationInstance(EffectAnimationList::AnimationInstance const &); /* compiler_generated() */
        _inline AnimationInstance(float, EffectAnimation const *);
        float startTime; // 0x0
        float lastUpdate; // 0x4
        EffectAnimation const *pAnimation; // 0x8
        AnimEventContext pContext; // 0xC
        _inline ~AnimationInstance(); /* compiler_generated() */
        EffectAnimationList::AnimationInstance &operator=(EffectAnimationList::AnimationInstance const &); /* compiler_generated() */
    };
    static_assert(sizeof(AnimationInstance) == 24, "Invalid AnimationInstance size");
    typedef std::vector<EffectAnimationList::StateUpdate *,std::allocator<EffectAnimationList::StateUpdate *> > StateUpdateCont;
    typedef std::list<EffectAnimationList::AnimationInstance,mempool_alloc<EffectAnimationList::AnimationInstance> > EffectAnimationCont;
private:
    void onStartAnimation(EffectAnimationList::AnimationInstance &);
    void onStopAnimation(EffectAnimationList::AnimationInstance &);
    bool updateAnimation(EffectAnimationList::AnimationInstance &, float, float);
    std::_List_iterator<std::_List_val<std::_List_simple_types<EffectAnimationList::AnimationInstance> > > findAnimation(EffectAnimation const *);
    void findPlayingChildren(EffectAnimation const *, EffectAnimation const **, unsigned __int32, unsigned __int32 &);
    void stopPlayingAnimations();
    std::list<EffectAnimationList::AnimationInstance,mempool_alloc<EffectAnimationList::AnimationInstance> > m_animations; // 0x0
    std::vector<EffectAnimationList::StateUpdate *,std::allocator<EffectAnimationList::StateUpdate *> > m_stateUpdate; // 0xC
public:
    EffectAnimationList &operator=(EffectAnimationList const &); /* compiler_generated() */
};
static_assert(sizeof(EffectAnimationList) == 24, "Invalid EffectAnimationList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline EffectAnimationList::StateUpdate::~StateUpdate() // 0x5185E5
{
    mangled_assert("??1StateUpdate@EffectAnimationList@@UAE@XZ");
    todo("implement");
}

_inline bool EffectAnimationList::StateUpdate::start(EffectAnimation const &, AnimEventContext *) // 0x518EBA
{
    mangled_assert("?start@StateUpdate@EffectAnimationList@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@@Z");
    todo("implement");
}

_inline bool EffectAnimationList::StateUpdate::stop(EffectAnimation const &, AnimEventContext *) // 0x518F1A
{
    mangled_assert("?stop@StateUpdate@EffectAnimationList@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@@Z");
    todo("implement");
}

_inline bool EffectAnimationList::StateUpdate::update(EffectAnimation const &, AnimEventContext *, float, float) // 0x518FF2
{
    mangled_assert("?update@StateUpdate@EffectAnimationList@@UAE_NABVEffectAnimation@@PAVAnimEventContext@@MM@Z");
    todo("implement");
}

_inline EffectAnimationList::StateUpdate::StateUpdate() // 0x518539
{
    mangled_assert("??0StateUpdate@EffectAnimationList@@IAE@XZ");
    todo("implement");
}

_inline EffectAnimationList::AnimationInstance::AnimationInstance(float, EffectAnimation const *) // 0x515D23
{
    mangled_assert("??0AnimationInstance@EffectAnimationList@@QAE@MPBVEffectAnimation@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __EFFECTANIMATIONLIST_H__
#endif
