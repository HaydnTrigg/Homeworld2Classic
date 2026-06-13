#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <pch.h>
#include <RenderAnim\AnimEventData.h>
#include <util\dictionary.h>
#include <util\utilexports.h>
#include <xstddef>
#include <RenderAnim\AnimEventSink.h>
#include <bitset>
#include <RenderAnim\AnimEvent.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5108AD(AnimEvent *const, AnimEventSink const *, AnimEventData const &);
AnimEvent::AnimEvent(AnimEventSink const *, AnimEventData const &) // 0x5108AD
{
    mangled_assert("??0AnimEvent@@QAE@PBVAnimEventSink@@ABVAnimEventData@@@Z");
    todo("implement");
    _sub_5108AD(this, arg, arg);
}

_extern void _sub_5108C7(AnimEvent *const);
AnimEvent::~AnimEvent() // 0x5108C7
{
    mangled_assert("??1AnimEvent@@QAE@XZ");
    todo("implement");
    _sub_5108C7(this);
}

_extern char const *_sub_510911(AnimEvent const *const);
char const *AnimEvent::getName() const // 0x510911
{
    mangled_assert("?getName@AnimEvent@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_510911(this);
    return __result;
}

_extern char const *_sub_5108CD(AnimEvent const *const, char const *);
char const *AnimEvent::findParam(char const *) const // 0x5108CD
{
    mangled_assert("?findParam@AnimEvent@@QBEPBDPBD@Z");
    todo("implement");
    char const * __result = _sub_5108CD(this, arg);
    return __result;
}

_extern void _sub_510950(AnimEvent *const);
void AnimEvent::resetParams() // 0x510950
{
    mangled_assert("?resetParams@AnimEvent@@QAEXXZ");
    todo("implement");
    _sub_510950(this);
}

_extern void _sub_510928(AnimEvent *const, char const *);
void AnimEvent::invalidateParam(char const *) // 0x510928
{
    mangled_assert("?invalidateParam@AnimEvent@@QAEXPBD@Z");
    todo("implement");
    _sub_510928(this, arg);
}

/* ---------- private code */
#endif
