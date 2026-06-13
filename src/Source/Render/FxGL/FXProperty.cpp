#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <algorithm>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <list>
#include <xfunctional>
#include <Render\FxGL\FXProperty.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool FXProp2Property_List(std::vector<FXProp *,std::allocator<FXProp *> > const &in, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &out);
extern bool FXProp2Property_Get(std::vector<FXProp *,std::allocator<FXProp *> > const &in, char const *nameOfProp, VarMulti &out);
extern bool FXProp2Property_Set(std::vector<FXProp *,std::allocator<FXProp *> > &out, char const *nameOfProp, VarMulti v);
extern bool FXProp2Property_At(std::vector<FXProp *,std::allocator<FXProp *> > const &in, unsigned __int32 const ndx, FXManager::Type::Property &out);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6F88C1(FXManager::Type::Property *const, FXManager::Type::Property const &);
_inline FXManager::Type::Property::Property(FXManager::Type::Property const &) // 0x6F88C1
{
    mangled_assert("??0Property@Type@FXManager@@QAE@ABU012@@Z");
    compiler_generated();
    todo("implement");
    _sub_6F88C1(this, arg);
}

_extern _sub_6F890E(FXManager::Type::Property *const);
_inline FXManager::Type::Property::Property() // 0x6F890E
{
    mangled_assert("??0Property@Type@FXManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_6F890E(this);
}

_extern bool _sub_6F8AB1(std::vector<FXProp *,std::allocator<FXProp *> > const &, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &);
bool FXProp2Property_List(std::vector<FXProp *,std::allocator<FXProp *> > const &in, std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &out) // 0x6F8AB1
{
    mangled_assert("?FXProp2Property_List@@YG_NABV?$vector@PAVFXProp@@V?$allocator@PAVFXProp@@@std@@@std@@AAV?$list@UProperty@Type@FXManager@@V?$allocator@UProperty@Type@FXManager@@@std@@@2@@Z");
    todo("implement");
    bool __result = _sub_6F8AB1(in, out);
    return __result;
}

_extern bool _sub_6F8A53(std::vector<FXProp *,std::allocator<FXProp *> > const &, char const *, VarMulti &);
bool FXProp2Property_Get(std::vector<FXProp *,std::allocator<FXProp *> > const &in, char const *nameOfProp, VarMulti &out) // 0x6F8A53
{
    mangled_assert("?FXProp2Property_Get@@YG_NABV?$vector@PAVFXProp@@V?$allocator@PAVFXProp@@@std@@@std@@PBDAAVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6F8A53(in, nameOfProp, out);
    return __result;
}

_extern bool _sub_6F8B94(std::vector<FXProp *,std::allocator<FXProp *> > &, char const *, VarMulti);
bool FXProp2Property_Set(std::vector<FXProp *,std::allocator<FXProp *> > &out, char const *nameOfProp, VarMulti v) // 0x6F8B94
{
    mangled_assert("?FXProp2Property_Set@@YG_NAAV?$vector@PAVFXProp@@V?$allocator@PAVFXProp@@@std@@@std@@PBDVVarMulti@@@Z");
    todo("implement");
    bool __result = _sub_6F8B94(out, nameOfProp, v);
    return __result;
}

_extern bool _sub_6F89B6(std::vector<FXProp *,std::allocator<FXProp *> > const &, unsigned __int32 const, FXManager::Type::Property &);
bool FXProp2Property_At(std::vector<FXProp *,std::allocator<FXProp *> > const &in, unsigned __int32 const ndx, FXManager::Type::Property &out) // 0x6F89B6
{
    mangled_assert("?FXProp2Property_At@@YG_NABV?$vector@PAVFXProp@@V?$allocator@PAVFXProp@@@std@@@std@@IAAUProperty@Type@FXManager@@@Z");
    todo("implement");
    bool __result = _sub_6F89B6(in, ndx, out);
    return __result;
}

/* ---------- private code */
#endif
