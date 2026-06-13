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

_extern _sub_515CDB(AnimEventContext *const, AnimEventContext const &);
_inline AnimEventContext::AnimEventContext(AnimEventContext const &) // 0x515CDB
{
    mangled_assert("??0AnimEventContext@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_515CDB(this, arg);
}

_extern _sub_515CED(AnimEventContext *const);
_inline AnimEventContext::AnimEventContext() // 0x515CED
{
    mangled_assert("??0AnimEventContext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_515CED(this);
}

_extern _sub_515CFA(EffectAnimationList::AnimationInstance *const, EffectAnimationList::AnimationInstance const &);
_inline EffectAnimationList::AnimationInstance::AnimationInstance(EffectAnimationList::AnimationInstance const &) // 0x515CFA
{
    mangled_assert("??0AnimationInstance@EffectAnimationList@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_515CFA(this, arg);
}

_extern _sub_515D49(EffectAnimationList *const);
EffectAnimationList::EffectAnimationList() // 0x515D49
{
    mangled_assert("??0EffectAnimationList@@QAE@XZ");
    todo("implement");
    _sub_515D49(this);
}

_extern void _sub_515D87(std::_List_buy<EffectAnimationList::AnimationInstance,mempool_alloc<EffectAnimationList::AnimationInstance> > *const);
_inline std::_List_buy<EffectAnimationList::AnimationInstance,mempool_alloc<EffectAnimationList::AnimationInstance> >::~_List_buy<EffectAnimationList::AnimationInstance,mempool_alloc<EffectAnimationList::AnimationInstance> >() // 0x515D87
{
    mangled_assert("??1?$_List_buy@UAnimationInstance@EffectAnimationList@@V?$mempool_alloc@UAnimationInstance@EffectAnimationList@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_515D87(this);
}

_extern void _sub_515D98(std::_Wrap_alloc<mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> > > *const);
_inline std::_Wrap_alloc<mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> > >::~_Wrap_alloc<mempool_alloc<std::_List_node<EffectAnimationList::AnimationInstance,void *> > >() // 0x515D98
{
    mangled_assert("??1?$_Wrap_alloc@V?$mempool_alloc@U?$_List_node@UAnimationInstance@EffectAnimationList@@PAX@std@@@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_515D98(this);
}

_extern void _sub_515DBF(AnimEventContext *const);
_inline AnimEventContext::~AnimEventContext() // 0x515DBF
{
    mangled_assert("??1AnimEventContext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_515DBF(this);
}

_extern void _sub_515DC4(EffectAnimationList::AnimationInstance *const);
_inline EffectAnimationList::AnimationInstance::~AnimationInstance() // 0x515DC4
{
    mangled_assert("??1AnimationInstance@EffectAnimationList@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_515DC4(this);
}

_extern void _sub_515DCC(EffectAnimationList *const);
EffectAnimationList::~EffectAnimationList() // 0x515DCC
{
    mangled_assert("??1EffectAnimationList@@QAE@XZ");
    todo("implement");
    _sub_515DCC(this);
}

_extern void _sub_516780(EffectAnimationList *const);
void EffectAnimationList::stopPlayingAnimations() // 0x516780
{
    mangled_assert("?stopPlayingAnimations@EffectAnimationList@@AAEXXZ");
    todo("implement");
    _sub_516780(this);
}

_extern void _sub_516197(EffectAnimationList *const, EffectAnimationList::StateUpdate *);
void EffectAnimationList::addStateUpdate(EffectAnimationList::StateUpdate *) // 0x516197
{
    mangled_assert("?addStateUpdate@EffectAnimationList@@QAEXPAVStateUpdate@1@@Z");
    todo("implement");
    _sub_516197(this, arg);
}

_extern void _sub_5166D6(EffectAnimationList *const, EffectAnimation const *, float);
void EffectAnimationList::startEffectAnimation(EffectAnimation const *, float) // 0x5166D6
{
    mangled_assert("?startEffectAnimation@EffectAnimationList@@QAEXPBVEffectAnimation@@M@Z");
    todo("implement");
    _sub_5166D6(this, arg, arg);
}

_extern void _sub_516743(EffectAnimationList *const, EffectAnimation const *);
void EffectAnimationList::stopEffectAnimation(EffectAnimation const *) // 0x516743
{
    mangled_assert("?stopEffectAnimation@EffectAnimationList@@QAEXPBVEffectAnimation@@@Z");
    todo("implement");
    _sub_516743(this, arg);
}

_extern void _sub_5163B9(EffectAnimationList *const, EffectAnimation const *, EffectAnimation const **, unsigned __int32, unsigned __int32 &);
void EffectAnimationList::findPlayingChildren(EffectAnimation const *, EffectAnimation const **, unsigned __int32, unsigned __int32 &) // 0x5163B9
{
    mangled_assert("?findPlayingChildren@EffectAnimationList@@AAEXPBVEffectAnimation@@QAPBV2@IAAI@Z");
    todo("implement");
    _sub_5163B9(this, arg, arg, arg, arg);
}

_extern void _sub_5165B9(EffectAnimationList *const, EffectAnimation const *, float, float);
void EffectAnimationList::setEffectVariable(EffectAnimation const *, float, float) // 0x5165B9
{
    mangled_assert("?setEffectVariable@EffectAnimationList@@QAEXPBVEffectAnimation@@MM@Z");
    todo("implement");
    _sub_5165B9(this, arg, arg, arg);
}

_extern std::_List_iterator<std::_List_val<std::_List_simple_types<EffectAnimationList::AnimationInstance> > > _sub_516337(EffectAnimationList *const, EffectAnimation const *);
std::_List_iterator<std::_List_val<std::_List_simple_types<EffectAnimationList::AnimationInstance> > > EffectAnimationList::findAnimation(EffectAnimation const *) // 0x516337
{
    mangled_assert("?findAnimation@EffectAnimationList@@AAE?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@UAnimationInstance@EffectAnimationList@@@std@@@std@@@std@@PBVEffectAnimation@@@Z");
    todo("implement");
    std::_List_iterator<std::_List_val<std::_List_simple_types<EffectAnimationList::AnimationInstance> > > __result = _sub_516337(this, arg);
    return __result;
}

_extern void _sub_5167A4(EffectAnimationList *const, float, float);
void EffectAnimationList::update(float, float) // 0x5167A4
{
    mangled_assert("?update@EffectAnimationList@@QAEXMM@Z");
    todo("implement");
    _sub_5167A4(this, arg, arg);
}

_extern void _sub_51649C(EffectAnimationList *const, EffectAnimationList::AnimationInstance &);
void EffectAnimationList::onStartAnimation(EffectAnimationList::AnimationInstance &) // 0x51649C
{
    mangled_assert("?onStartAnimation@EffectAnimationList@@AAEXAAUAnimationInstance@1@@Z");
    todo("implement");
    _sub_51649C(this, arg);
}

_extern void _sub_5164E7(EffectAnimationList *const, EffectAnimationList::AnimationInstance &);
void EffectAnimationList::onStopAnimation(EffectAnimationList::AnimationInstance &) // 0x5164E7
{
    mangled_assert("?onStopAnimation@EffectAnimationList@@AAEXAAUAnimationInstance@1@@Z");
    todo("implement");
    _sub_5164E7(this, arg);
}

_extern bool _sub_516800(EffectAnimationList *const, EffectAnimationList::AnimationInstance &, float, float);
bool EffectAnimationList::updateAnimation(EffectAnimationList::AnimationInstance &, float, float) // 0x516800
{
    mangled_assert("?updateAnimation@EffectAnimationList@@AAE_NAAUAnimationInstance@1@MM@Z");
    todo("implement");
    bool __result = _sub_516800(this, arg, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_516361(EffectAnimation const *, float, EffectAnimation const **, unsigned __int32, unsigned __int32 &);
_static void findChildrenInRange(EffectAnimation const *pParent, float value, EffectAnimation const **children, unsigned __int32 max, unsigned __int32 &count) // 0x516361
{
    mangled_assert("findChildrenInRange");
    todo("implement");
    _sub_516361(pParent, value, children, max, count);
}

_extern void _sub_515EC7(EffectAnimation const **, unsigned __int32, EffectAnimation const **, unsigned __int32, EffectAnimation const **, unsigned __int32 &);
_static void FindDifference(EffectAnimation const **searchee, unsigned __int32 searcheeSize, EffectAnimation const **pred, unsigned __int32 predSize, EffectAnimation const **output, unsigned __int32 &outputSize) // 0x515EC7
{
    mangled_assert("FindDifference");
    todo("implement");
    _sub_515EC7(searchee, searcheeSize, pred, predSize, output, outputSize);
}
#endif
