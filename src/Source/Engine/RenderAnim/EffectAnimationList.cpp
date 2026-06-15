#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <limits>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <list>
#include <RenderAnim\EffectAnimation.h>
#include <memory\memorypool.h>
#include <xtr1common>
#include <memory\memoryalloc.h>
#include <debug\db.h>
#include <RenderAnim\EffectAnimationList.h>
#include <RenderAnim\AnimEventContext.h>
#include <assist\callback.h>
#include <memory\memorysmall.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void findChildrenInRange(EffectAnimation const *pParent, float value, EffectAnimation const **children, unsigned __int32 max, unsigned __int32 &count);
_static void FindDifference(EffectAnimation const **searchee, unsigned __int32 searcheeSize, EffectAnimation const **pred, unsigned __int32 predSize, EffectAnimation const **output, unsigned __int32 &outputSize);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern MemoryPoolObj s_effectAnimationPool; // 0x844748
}

/* ---------- public code */

_inline AnimEventContext::AnimEventContext(AnimEventContext const &) // 0x515CDB
{
    mangled_assert("??0AnimEventContext@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline AnimEventContext::AnimEventContext() // 0x515CED
{
    mangled_assert("??0AnimEventContext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline EffectAnimationList::AnimationInstance::AnimationInstance(EffectAnimationList::AnimationInstance const &) // 0x515CFA
{
    mangled_assert("??0AnimationInstance@EffectAnimationList@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

EffectAnimationList::EffectAnimationList() // 0x515D49
{
    mangled_assert("??0EffectAnimationList@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<EffectAnimationList::AnimationInstance,mempool_alloc<EffectAnimationList::AnimationInstance> >::~_List_buy<EffectAnimationList::AnimationInstance,mempool_alloc<EffectAnimationList::AnimationInstance> >() // 0x515D87
{
    mangled_assert("??1?$_List_buy@UAnimationInstance@EffectAnimationList@@V?$mempool_alloc@UAnimationInstance@EffectAnimationList@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Wrap_alloc<mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> > >::~_Wrap_alloc<mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> > >() // 0x515D98
{
    mangled_assert("??1?$_Wrap_alloc@V?$mempool_alloc@U?$_List_node@UAnimationInstance@EffectAnimationList@@PAX@std@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline AnimEventContext::~AnimEventContext() // 0x515DBF
{
    mangled_assert("??1AnimEventContext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline EffectAnimationList::AnimationInstance::~AnimationInstance() // 0x515DC4
{
    mangled_assert("??1AnimationInstance@EffectAnimationList@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

EffectAnimationList::~EffectAnimationList() // 0x515DCC
{
    mangled_assert("??1EffectAnimationList@@QAE@XZ");
    todo("implement");
}

void EffectAnimationList::stopPlayingAnimations() // 0x516780
{
    mangled_assert("?stopPlayingAnimations@EffectAnimationList@@AAEXXZ");
    todo("implement");
}

void EffectAnimationList::addStateUpdate(EffectAnimationList::StateUpdate *) // 0x516197
{
    mangled_assert("?addStateUpdate@EffectAnimationList@@QAEXPAVStateUpdate@1@@Z");
    todo("implement");
}

void EffectAnimationList::startEffectAnimation(EffectAnimation const *, float) // 0x5166D6
{
    mangled_assert("?startEffectAnimation@EffectAnimationList@@QAEXPBVEffectAnimation@@M@Z");
    todo("implement");
}

void EffectAnimationList::stopEffectAnimation(EffectAnimation const *) // 0x516743
{
    mangled_assert("?stopEffectAnimation@EffectAnimationList@@QAEXPBVEffectAnimation@@@Z");
    todo("implement");
}

void EffectAnimationList::findPlayingChildren(EffectAnimation const *, EffectAnimation const **, unsigned __int32, unsigned __int32 &) // 0x5163B9
{
    mangled_assert("?findPlayingChildren@EffectAnimationList@@AAEXPBVEffectAnimation@@QAPBV2@IAAI@Z");
    todo("implement");
}

void EffectAnimationList::setEffectVariable(EffectAnimation const *, float, float) // 0x5165B9
{
    mangled_assert("?setEffectVariable@EffectAnimationList@@QAEXPBVEffectAnimation@@MM@Z");
    todo("implement");
}

std::_List_iterator<std::_List_val<std::_List_simple_types<EffectAnimationList::AnimationInstance> > > EffectAnimationList::findAnimation(EffectAnimation const *) // 0x516337
{
    mangled_assert("?findAnimation@EffectAnimationList@@AAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@UAnimationInstance@EffectAnimationList@@@std@@@std@@@std@@PBVEffectAnimation@@@Z");
    todo("implement");
}

void EffectAnimationList::update(float, float) // 0x5167A4
{
    mangled_assert("?update@EffectAnimationList@@QAEXMM@Z");
    todo("implement");
}

void EffectAnimationList::onStartAnimation(EffectAnimationList::AnimationInstance &) // 0x51649C
{
    mangled_assert("?onStartAnimation@EffectAnimationList@@AAEXAAUAnimationInstance@1@@Z");
    todo("implement");
}

void EffectAnimationList::onStopAnimation(EffectAnimationList::AnimationInstance &) // 0x5164E7
{
    mangled_assert("?onStopAnimation@EffectAnimationList@@AAEXAAUAnimationInstance@1@@Z");
    todo("implement");
}

bool EffectAnimationList::updateAnimation(EffectAnimationList::AnimationInstance &, float, float) // 0x516800
{
    mangled_assert("?updateAnimation@EffectAnimationList@@AAE_NAAUAnimationInstance@1@MM@Z");
    todo("implement");
}

/* ---------- private code */

_static void findChildrenInRange(EffectAnimation const *pParent, float value, EffectAnimation const **children, unsigned __int32 max, unsigned __int32 &count) // 0x516361
{
    mangled_assert("findChildrenInRange");
    todo("implement");
}

_static void FindDifference(EffectAnimation const **searchee, unsigned __int32 searcheeSize, EffectAnimation const **pred, unsigned __int32 predSize, EffectAnimation const **output, unsigned __int32 &outputSize) // 0x515EC7
{
    mangled_assert("FindDifference");
    todo("implement");
}
#endif
