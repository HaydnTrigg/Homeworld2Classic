#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <xtree>
#include <xstring>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\MathHelp.h>
#include <Render\FxGL\VarMulti.h>
#include <profile\profile.h>
#include <util\colour.h>
#include <iostream>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <Mathlib\matrix4.h>
#include <Render\FxGL\FXMemory.h>
#include <memory\memorypool.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <list>
#include <Render\FxGL\FXDynamicsPlanar.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6F4273(FXDynamicsPlanar *const);
FXDynamicsPlanar::FXDynamicsPlanar() // 0x6F4273
{
    mangled_assert("??0FXDynamicsPlanar@@QAE@XZ");
    todo("implement");
    _sub_6F4273(this);
}

_extern _sub_6F4239(FXDynamicsPlanar *const, FXDynamicsPlanar const &);
FXDynamicsPlanar::FXDynamicsPlanar(FXDynamicsPlanar const &) // 0x6F4239
{
    mangled_assert("??0FXDynamicsPlanar@@AAE@ABV0@@Z");
    todo("implement");
    _sub_6F4239(this, arg);
}

_extern void _sub_6F42A7(FXDynamicsPlanar *const);
FXDynamicsPlanar::~FXDynamicsPlanar() // 0x6F42A7
{
    mangled_assert("??1FXDynamicsPlanar@@UAE@XZ");
    todo("implement");
    _sub_6F42A7(this);
}

_extern FXManager::Dynamics *_sub_6F42D5(FXDynamicsPlanar const *const);
FXManager::Dynamics *FXDynamicsPlanar::Clone() const // 0x6F42D5
{
    mangled_assert("?Clone@FXDynamicsPlanar@@UBEPAVDynamics@FXManager@@XZ");
    todo("implement");
    FXManager::Dynamics * __result = _sub_6F42D5(this);
    return __result;
}

_extern void _sub_6F42F4(FXDynamicsPlanar *const, vector3 const &);
void FXDynamicsPlanar::InitialPosition(vector3 const &) // 0x6F42F4
{
    mangled_assert("?InitialPosition@FXDynamicsPlanar@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_6F42F4(this, arg);
}

_extern void _sub_6F4386(FXDynamicsPlanar *const, vector3 const &);
void FXDynamicsPlanar::InitialVelocity(vector3 const &) // 0x6F4386
{
    mangled_assert("?InitialVelocity@FXDynamicsPlanar@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_6F4386(this, arg);
}

_extern bool _sub_6F441F(FXDynamicsPlanar *const, FXManager::Object *, float);
bool FXDynamicsPlanar::MoveObject(FXManager::Object *, float) // 0x6F441F
{
    mangled_assert("?MoveObject@FXDynamicsPlanar@@UAE_NPAVObject@FXManager@@M@Z");
    todo("implement");
    bool __result = _sub_6F441F(this, arg, arg);
    return __result;
}

_extern void _sub_6F4461(FXDynamicsPlanar *const, bool);
void FXDynamicsPlanar::SetMoveable(bool) // 0x6F4461
{
    mangled_assert("?SetMoveable@FXDynamicsPlanar@@UAEX_N@Z");
    todo("implement");
    _sub_6F4461(this, arg);
}

/* ---------- private code */
#endif
