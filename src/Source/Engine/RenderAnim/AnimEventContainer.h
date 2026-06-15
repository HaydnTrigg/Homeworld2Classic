#if 0
#ifndef __ANIMEVENTCONTAINER_H__
#define __ANIMEVENTCONTAINER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AnimEventContainer
{
public:
    typedef unsigned __int32 EventID;
    static unsigned __int32 const InvalidID;
    AnimEventContainer(AnimEventContainer const &); /* compiler_generated() */
    AnimEventContainer();
    ~AnimEventContainer();
    void reset();
private:
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AnimEventContainer::Animation> > > findEvent(char const *) const;
public:
    unsigned __int32 findEvent(char const *);
    AnimEventData const &getEvent(unsigned __int32) const;
    unsigned __int32 getEventCount() const;
    void addEvent(AnimEventData const &);
    void deleteEvent(unsigned __int32);
    void deleteAllEvents();
    void triggerEvents(char const *, float, float, AnimEventSink *, AnimEventContext *) const;
    void triggerAmbientEvents(char const *, AnimEventSink *, AnimEventContext *) const;
    void triggerAllEvents(AnimEventSink *, AnimEventContext *) const;
    struct Event
    {
        float time; // 0x0
        AnimEventData event; // 0x4
        _inline Event(AnimEventContainer::Event const &); /* compiler_generated() */
        _inline Event(float, AnimEventData const &);
        _inline bool operator<(float const &) const;
        _inline bool operator<(AnimEventContainer::Event const &) const;
        bool operator==(float const &) const;
        _inline ~Event(); /* compiler_generated() */
        _inline AnimEventContainer::Event &operator=(AnimEventContainer::Event const &); /* compiler_generated() */
    };
    static_assert(sizeof(Event) == 40, "Invalid Event size");
    struct Animation
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > animname; // 0x0
        std::vector<AnimEventContainer::Event,std::allocator<AnimEventContainer::Event> > events; // 0x18
        _inline Animation(AnimEventContainer::Animation const &); /* compiler_generated() */
        _inline Animation(char const *);
        _inline ~Animation(); /* compiler_generated() */
        _inline AnimEventContainer::Animation &operator=(AnimEventContainer::Animation const &); /* compiler_generated() */
    };
    static_assert(sizeof(Animation) == 36, "Invalid Animation size");
    typedef std::vector<AnimEventContainer::Animation,std::allocator<AnimEventContainer::Animation> > AnimationCont;
private:
    std::vector<AnimEventContainer::Animation,std::allocator<AnimEventContainer::Animation> > m_animations; // 0x0
    void triggerRange(std::vector<AnimEventContainer::Event,std::allocator<AnimEventContainer::Event> > const &, float, float, AnimEventSink *, AnimEventContext *) const;
public:
    AnimEventContainer &operator=(AnimEventContainer const &); /* compiler_generated() */
};
static_assert(sizeof(AnimEventContainer) == 12, "Invalid AnimEventContainer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline AnimEventContainer::Event::Event(float, AnimEventData const &) // 0x512091
{
    mangled_assert("??0Event@AnimEventContainer@@QAE@MABVAnimEventData@@@Z");
    todo("implement");
}

_inline bool AnimEventContainer::Event::operator<(AnimEventContainer::Event const &) const // 0x512470
{
    mangled_assert("??MEvent@AnimEventContainer@@QBE_NABU01@@Z");
    todo("implement");
}

_inline bool AnimEventContainer::Event::operator<(float const &) const // 0x51245D
{
    mangled_assert("??MEvent@AnimEventContainer@@QBE_NABM@Z");
    todo("implement");
}

_inline AnimEventContainer::Animation::Animation(char const *) // 0x512057
{
    mangled_assert("??0Animation@AnimEventContainer@@QAE@PBD@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __ANIMEVENTCONTAINER_H__
#endif
