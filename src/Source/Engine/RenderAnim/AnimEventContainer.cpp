#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <assist\asciictype.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <RenderAnim\AnimEvent.h>
#include <boost\scoped_ptr.hpp>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <RenderAnim\AnimEventSink.h>
#include <RenderAnim\AnimEventContainer.h>
#include <RenderAnim\AnimEventData.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::LessEvent :
    public std::binary_function<AnimEventContainer::Animation,char const *,bool>
{
    bool operator()(AnimEventContainer::Animation const &, char const *const &) const;
};
static_assert(sizeof(`anonymous-namespace'::LessEvent) == 1, "Invalid `anonymous-namespace'::LessEvent size");

struct `anonymous-namespace'::Less2P<AnimEventContainer::Event,float> :
    public std::binary_function<AnimEventContainer::Event,float,bool>
{
    bool operator()(AnimEventContainer::Event const &, float const &) const;
};
static_assert(sizeof(`anonymous-namespace'::Less2P<AnimEventContainer::Event,float>) == 1, "Invalid `anonymous-namespace'::Less2P<AnimEventContainer::Event,float> size");

typedef `anonymous-namespace'::LessEvent ?A0x4f5704d9::LessEvent;
typedef `anonymous-namespace'::Less2P<AnimEventContainer::Event,float> ?A0x4f5704d9::Less2P<AnimEventContainer::Event,float>;

/* ---------- prototypes */

/* ---------- globals */

extern unsigned __int32 const AnimEventContainer::InvalidID; // 0x79CC28

/* ---------- private variables */

/* ---------- public code */

AnimEventContainer::AnimEventContainer() // 0x511FD0
{
    mangled_assert("??0AnimEventContainer@@QAE@XZ");
    todo("implement");
}

_inline AnimEventData::AnimEventData(AnimEventData const &) // 0x511FDD
{
    mangled_assert("??0AnimEventData@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline AnimEventContainer::Animation::Animation(AnimEventContainer::Animation const &) // 0x51201A
{
    mangled_assert("??0Animation@AnimEventContainer@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline AnimEventContainer::Event::Event(AnimEventContainer::Event const &) // 0x512074
{
    mangled_assert("??0Event@AnimEventContainer@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

AnimEventContainer::~AnimEventContainer() // 0x5120BF
{
    mangled_assert("??1AnimEventContainer@@QAE@XZ");
    todo("implement");
}

_inline AnimEventContainer::Animation::~Animation() // 0x5120C4
{
    mangled_assert("??1Animation@AnimEventContainer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AnimEventContainer::Event::~Event() // 0x5120D7
{
    mangled_assert("??1Event@AnimEventContainer@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AnimEventData &AnimEventData::operator=(AnimEventData const &) // 0x5122FB
{
    mangled_assert("??4AnimEventData@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline AnimEventContainer::Animation &AnimEventContainer::Animation::operator=(AnimEventContainer::Animation const &) // 0x51231C
{
    mangled_assert("??4Animation@AnimEventContainer@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline AnimEventContainer::Event &AnimEventContainer::Event::operator=(AnimEventContainer::Event const &) // 0x51233D
{
    mangled_assert("??4Event@AnimEventContainer@@QAEAAU01@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

void AnimEventContainer::reset() // 0x512F97
{
    mangled_assert("?reset@AnimEventContainer@@QAEXXZ");
    todo("implement");
}

unsigned __int32 AnimEventContainer::getEventCount() const // 0x512E89
{
    mangled_assert("?getEventCount@AnimEventContainer@@QBEIXZ");
    todo("implement");
}

AnimEventData const &AnimEventContainer::getEvent(unsigned __int32) const // 0x512E29
{
    mangled_assert("?getEvent@AnimEventContainer@@QBEABVAnimEventData@@I@Z");
    todo("implement");
}

unsigned __int32 AnimEventContainer::findEvent(char const *) // 0x512DBF
{
    mangled_assert("?findEvent@AnimEventContainer@@QAEIPBD@Z");
    todo("implement");
}

void AnimEventContainer::deleteAllEvents() // 0x512C73
{
    mangled_assert("?deleteAllEvents@AnimEventContainer@@QAEXXZ");
    todo("implement");
}

void AnimEventContainer::deleteEvent(unsigned __int32) // 0x512C78
{
    mangled_assert("?deleteEvent@AnimEventContainer@@QAEXI@Z");
    todo("implement");
}

std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<AnimEventContainer::Animation> > > AnimEventContainer::findEvent(char const *) const // 0x512D4B
{
    mangled_assert("?findEvent@AnimEventContainer@@ABE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAnimation@AnimEventContainer@@@std@@@std@@@std@@PBD@Z");
    todo("implement");
}

void AnimEventContainer::triggerEvents(char const *, float, float, AnimEventSink *, AnimEventContext *) const // 0x5130B0
{
    mangled_assert("?triggerEvents@AnimEventContainer@@QBEXPBDMMPAVAnimEventSink@@PAVAnimEventContext@@@Z");
    todo("implement");
}

void AnimEventContainer::triggerAmbientEvents(char const *, AnimEventSink *, AnimEventContext *) const // 0x513069
{
    mangled_assert("?triggerAmbientEvents@AnimEventContainer@@QBEXPBDPAVAnimEventSink@@PAVAnimEventContext@@@Z");
    todo("implement");
}

void AnimEventContainer::triggerAllEvents(AnimEventSink *, AnimEventContext *) const // 0x512FE7
{
    mangled_assert("?triggerAllEvents@AnimEventContainer@@QBEXPAVAnimEventSink@@PAVAnimEventContext@@@Z");
    todo("implement");
}

void AnimEventContainer::triggerRange(std::vector<AnimEventContainer::Event,std::allocator<AnimEventContainer::Event> > const &, float, float, AnimEventSink *, AnimEventContext *) const // 0x513155
{
    mangled_assert("?triggerRange@AnimEventContainer@@ABEXABV?$vector@UEvent@AnimEventContainer@@V?$allocator@UEvent@AnimEventContainer@@@std@@@std@@MMPAVAnimEventSink@@PAVAnimEventContext@@@Z");
    todo("implement");
}

void AnimEventContainer::addEvent(AnimEventData const &) // 0x512995
{
    mangled_assert("?addEvent@AnimEventContainer@@QAEXABVAnimEventData@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
