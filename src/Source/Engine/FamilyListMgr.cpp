#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <localizer\localizer.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <profile\profile.h>
#include <iostream>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <luaconfig\luautils.h>
#include <list>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <boost\cstdint.hpp>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <assist\typemagic.h>
#include <FamilyListMgr.h>
#include <FamilyList.h>
#include <wchar.h>
#include <Family.h>

/* ---------- constants */

/* ---------- definitions */

struct familyLoadData
{
    FamilyList *familyList; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x4
    familyLoadData(familyLoadData const &); /* compiler_generated() */
    _inline familyLoadData(); /* compiler_generated() */
    _inline ~familyLoadData(); /* compiler_generated() */
    familyLoadData &operator=(familyLoadData const &); /* compiler_generated() */
};
static_assert(sizeof(familyLoadData) == 28, "Invalid familyLoadData size");

/* ---------- prototypes */

/* ---------- globals */

extern FamilyListMgr *FamilyListMgr::s_instance; // 0x8440F8

/* ---------- private variables */

/* ---------- public code */

_extern _sub_4F2ED0(FamilyList *const);
_inline FamilyList::FamilyList() // 0x4F2ED0
{
    mangled_assert("??0FamilyList@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F2ED0(this);
}

_extern _sub_4F2EDD(FamilyListMgr *const);
FamilyListMgr::FamilyListMgr() // 0x4F2EDD
{
    mangled_assert("??0FamilyListMgr@@QAE@XZ");
    todo("implement");
    _sub_4F2EDD(this);
}

_extern _sub_4F3327(familyLoadData *const);
_inline familyLoadData::familyLoadData() // 0x4F3327
{
    mangled_assert("??0familyLoadData@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F3327(this);
}

_extern void _sub_4F333E(FamilyList *const);
_inline FamilyList::~FamilyList() // 0x4F333E
{
    mangled_assert("??1FamilyList@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F333E(this);
}

_extern void _sub_4F3343(FamilyListMgr *const);
FamilyListMgr::~FamilyListMgr() // 0x4F3343
{
    mangled_assert("??1FamilyListMgr@@QAE@XZ");
    todo("implement");
    _sub_4F3343(this);
}

_extern void _sub_4F3396(familyLoadData *const);
_inline familyLoadData::~familyLoadData() // 0x4F3396
{
    mangled_assert("??1familyLoadData@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F3396(this);
}

_extern FamilyListMgr *_sub_4F33FB();
FamilyListMgr *FamilyListMgr::instance() // 0x4F33FB
{
    mangled_assert("?instance@FamilyListMgr@@SGPAV1@XZ");
    todo("implement");
    FamilyListMgr * __result = _sub_4F33FB();
    return __result;
}

_extern void _sub_4F343B();
void FamilyListMgr::release() // 0x4F343B
{
    mangled_assert("?release@FamilyListMgr@@SGXXZ");
    todo("implement");
    _sub_4F343B();
}

_extern bool _sub_4F3465();
bool FamilyListMgr::startup() // 0x4F3465
{
    mangled_assert("?startup@FamilyListMgr@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F3465();
    return __result;
}

_extern bool _sub_4F345D();
bool FamilyListMgr::shutdown() // 0x4F345D
{
    mangled_assert("?shutdown@FamilyListMgr@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F345D();
    return __result;
}

/* ---------- private code */
#endif
