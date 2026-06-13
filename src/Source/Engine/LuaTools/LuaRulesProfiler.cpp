#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <xfunctional>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <platform\osdef.h>
#include <xutility>
#include <iosfwd>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <list>
#include <Render\gl\lotypes.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Render\gl\r_types.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <util\colour.h>
#include <LuaTools\LuaRulesProfiler.h>
#include <platform\timer.h>
#include <algorithm>
#include <platform\platformexports.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::list<LuaRulesProfiler::LuaRulesProfilerElement,std::allocator<LuaRulesProfiler::LuaRulesProfilerElement> > LuaRulesProfilerContainer;

/* ---------- prototypes */

/* ---------- globals */

extern std::list<LuaRulesProfiler::LuaRulesProfilerElement,std::allocator<LuaRulesProfiler::LuaRulesProfilerElement> > LuaRulesProfiler::m_listofitems; // 0x84764C
extern LuaRulesProfilerType LuaRulesProfiler::m_activetype; // 0x847644
extern bool LuaRulesProfiler::m_running; // 0x847648

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5CBADA(LuaRulesProfiler::LuaRulesProfilerElement *const, LuaRulesProfiler::LuaRulesProfilerElement const &);
_inline LuaRulesProfiler::LuaRulesProfilerElement::LuaRulesProfilerElement(LuaRulesProfiler::LuaRulesProfilerElement const &) // 0x5CBADA
{
    mangled_assert("??0LuaRulesProfilerElement@LuaRulesProfiler@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
    _sub_5CBADA(this, arg);
}

_extern void _sub_5CBB86(std::_List_buy<LuaRulesProfiler::LuaRulesProfilerElement,std::allocator<LuaRulesProfiler::LuaRulesProfilerElement> > *const);
_inline std::_List_buy<LuaRulesProfiler::LuaRulesProfilerElement,std::allocator<LuaRulesProfiler::LuaRulesProfilerElement> >::~_List_buy<LuaRulesProfiler::LuaRulesProfilerElement,std::allocator<LuaRulesProfiler::LuaRulesProfilerElement> >() // 0x5CBB86
{
    mangled_assert("??1?$_List_buy@ULuaRulesProfilerElement@LuaRulesProfiler@@V?$allocator@ULuaRulesProfilerElement@LuaRulesProfiler@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CBB86(this);
}

_extern void _sub_5CBBA1(LuaRulesProfiler::LuaRulesProfilerElement *const);
_inline LuaRulesProfiler::LuaRulesProfilerElement::~LuaRulesProfilerElement() // 0x5CBBA1
{
    mangled_assert("??1LuaRulesProfilerElement@LuaRulesProfiler@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5CBBA1(this);
}

_extern void _sub_5CBEC9();
void LuaRulesProfiler::PreUpdate() // 0x5CBEC9
{
    mangled_assert("?PreUpdate@LuaRulesProfiler@@SGXXZ");
    todo("implement");
    _sub_5CBEC9();
}

_extern void _sub_5CBF11(char const *, float);
void LuaRulesProfiler::Update(char const *ruleName, float timer) // 0x5CBF11
{
    mangled_assert("?Update@LuaRulesProfiler@@SGXPBDM@Z");
    todo("implement");
    _sub_5CBF11(ruleName, timer);
}

_extern void _sub_5CBDD2(float);
void LuaRulesProfiler::PostUpdate(float totalTime) // 0x5CBDD2
{
    mangled_assert("?PostUpdate@LuaRulesProfiler@@SGXM@Z");
    todo("implement");
    _sub_5CBDD2(totalTime);
}

_extern void _sub_5CBC92();
void LuaRulesProfiler::Display() // 0x5CBC92
{
    mangled_assert("?Display@LuaRulesProfiler@@SGXXZ");
    todo("implement");
    _sub_5CBC92();
}

/* ---------- private code */
#endif
