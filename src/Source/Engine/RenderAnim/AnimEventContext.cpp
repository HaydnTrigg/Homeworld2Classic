#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <assist\stlexvector.h>
#include <debug\db.h>
#include <RenderAnim\AnimEventContext.h>
#include <assist\callback.h>
#include <memory\memorysmall.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_51352F(AnimEventContext *const, Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const &);
void AnimEventContext::Bind(Callback::Obj1wRet<bool,enum AnimEventContext::ModeChange> const &) // 0x51352F
{
    mangled_assert("?Bind@AnimEventContext@@QAEXABV?$Obj1wRet@_NW4ModeChange@AnimEventContext@@@Callback@@@Z");
    todo("implement");
    _sub_51352F(this, arg);
}

_extern void _sub_513534(AnimEventContext *const);
void AnimEventContext::Clear() // 0x513534
{
    mangled_assert("?Clear@AnimEventContext@@QAEXXZ");
    todo("implement");
    _sub_513534(this);
}

_extern void _sub_513544(AnimEventContext *const, AnimEventContext::ModeChange);
void AnimEventContext::Post(AnimEventContext::ModeChange) // 0x513544
{
    mangled_assert("?Post@AnimEventContext@@QAEXW4ModeChange@1@@Z");
    todo("implement");
    _sub_513544(this, arg);
}

_extern bool _sub_513539(AnimEventContext const *const);
bool AnimEventContext::IsEmpty() const // 0x513539
{
    mangled_assert("?IsEmpty@AnimEventContext@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_513539(this);
    return __result;
}

/* ---------- private code */
#endif
