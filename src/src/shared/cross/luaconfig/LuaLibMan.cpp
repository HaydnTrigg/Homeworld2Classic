#if 0
/* ---------- headers */

#include "decomp.h"
#include <LuaConfig\LuaBinding.h>
#include <algorithm>
#include <xmemory>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include "src\src\Shared\PC\LuaConfig\pch.h"
#include <LuaConfig\LuaLibMan.h>
#include <LuaConfig\LuaConfig.h>
#include <lua\lua.h>
#include <boost\scoped_ptr.hpp>
#include <xstring>
#include <xfunctional>
#include <assist\typemagic.h>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::LibEntry
{
    char name[24]; // 0x0
    LuaLibrary *pLib; // 0x18
};
static_assert(sizeof(`anonymous-namespace'::LibEntry) == 28, "Invalid `anonymous-namespace'::LibEntry size");

typedef std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > BindInfoList;
typedef std::vector<`anonymous namespace'::LibEntry,std::allocator<`anonymous namespace'::LibEntry> > LibList;
typedef `anonymous-namespace'::LibEntry ?A0x34b1b52d::LibEntry;
typedef __int32 difference_type;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<`anonymous namespace'::LibEntry> > > iterator;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<`anonymous namespace'::LibEntry> > > const_iterator;
typedef `anonymous-namespace'::EqualLuaConfig ?A0x34b1b52d::EqualLuaConfig;

class `anonymous-namespace'::EqualLuaConfig :
    public std::binary_function<LuaLibrary::BindInfo,LuaConfig const *,bool>
{
public:
    bool operator()(LuaLibrary::BindInfo const &, LuaConfig const *) const;
};
static_assert(sizeof(`anonymous-namespace'::EqualLuaConfig) == 1, "Invalid `anonymous-namespace'::EqualLuaConfig size");

typedef std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > BindObjList;
typedef `anonymous-namespace'::EqualLibName ?A0x34b1b52d::EqualLibName;
typedef `anonymous-namespace'::LibEntry *_Tptr;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<`anonymous namespace'::LibEntry> > > _Myiter;
typedef `anonymous-namespace'::LibEntry const *_Unchecked_type;
typedef `anonymous-namespace'::LibEntry argument_type;
typedef bool result_type;
typedef char const *second_argument_type;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<LuaLibrary::BindInfo> > > _Mybase;
typedef void *void_pointer;

class `anonymous-namespace'::EqualLibName :
    public std::binary_function<`anonymous namespace'::LibEntry,char const *,bool>
{
public:
    bool operator()(`anonymous-namespace'::LibEntry const &, char const *) const;
};
static_assert(sizeof(`anonymous-namespace'::EqualLibName) == 1, "Invalid `anonymous-namespace'::EqualLibName size");

typedef void const *const_void_pointer;
typedef std::integral_constant<bool,0> propagate_on_container_copy_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_move_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_swap;
typedef `anonymous-namespace'::LibEntry const &_Reftype;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline LuaLibrary::BindInfo::~BindInfo() // 0x10006025
{
    mangled_assert("??1BindInfo@LuaLibrary@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LuaLibrary::~LuaLibrary() // 0x1000602D
{
    mangled_assert("??1LuaLibrary@@UAE@XZ");
    todo("implement");
}

void LuaLibrary::StoreLuaBindingObj(LuaConfig &, LuaBinding::Obj const &) // 0x1000639D
{
    mangled_assert("?StoreLuaBindingObj@LuaLibrary@@QAEXAAVLuaConfig@@ABVObj@LuaBinding@@@Z");
    todo("implement");
}

void LuaLibrary::ClearLuaBindingObj(LuaConfig &) // 0x100061DA
{
    mangled_assert("?ClearLuaBindingObj@LuaLibrary@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void LuaLibMan::AddLibrary(char const *name, LuaLibrary *pLib) // 0x100061AE
{
    mangled_assert("?AddLibrary@LuaLibMan@@SGXPBDPAVLuaLibrary@@@Z");
    todo("implement");
}

void LuaLibMan::RemLibrary(char const *name, LuaLibrary *) // 0x10006363
{
    mangled_assert("?RemLibrary@LuaLibMan@@SGXPBDPAVLuaLibrary@@@Z");
    todo("implement");
}

LuaLibrary *LuaLibMan::GetLibrary(char const *name) // 0x100062A0
{
    mangled_assert("?GetLibrary@LuaLibMan@@CGPAVLuaLibrary@@PBD@Z");
    todo("implement");
}

bool LuaLibMan::RegisterLib(LuaLibrary *pLibrary, LuaConfig &lc) // 0x100062D6
{
    mangled_assert("?RegisterLib@LuaLibMan@@CG_NPAVLuaLibrary@@AAVLuaConfig@@@Z");
    todo("implement");
}

bool LuaLibMan::DeRegisterLib(LuaLibrary *pLibrary, LuaConfig &lc) // 0x1000620B
{
    mangled_assert("?DeRegisterLib@LuaLibMan@@CG_NPAVLuaLibrary@@AAVLuaConfig@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
