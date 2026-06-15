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

AnimEvent::AnimEvent(AnimEventSink const *, AnimEventData const &) // 0x5108AD
{
    mangled_assert("??0AnimEvent@@QAE@PBVAnimEventSink@@ABVAnimEventData@@@Z");
    todo("implement");
}

AnimEvent::~AnimEvent() // 0x5108C7
{
    mangled_assert("??1AnimEvent@@QAE@XZ");
    todo("implement");
}

char const *AnimEvent::getName() const // 0x510911
{
    mangled_assert("?getName@AnimEvent@@QBEPBDXZ");
    todo("implement");
}

char const *AnimEvent::findParam(char const *) const // 0x5108CD
{
    mangled_assert("?findParam@AnimEvent@@QBEPBDPBD@Z");
    todo("implement");
}

void AnimEvent::resetParams() // 0x510950
{
    mangled_assert("?resetParams@AnimEvent@@QAEXXZ");
    todo("implement");
}

void AnimEvent::invalidateParam(char const *) // 0x510928
{
    mangled_assert("?invalidateParam@AnimEvent@@QAEXPBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
