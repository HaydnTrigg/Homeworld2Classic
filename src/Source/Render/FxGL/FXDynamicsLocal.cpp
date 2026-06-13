#if 0
/* ---------- headers */

#include "decomp.h"
#include <map>
#include <xtree>
#include <Render\FxGL\FXUtil.h>
#include <xstring>
#include <Mathlib\mathutil.h>
#include <xmemory0>
#include <Render\FxGL\pch.h>
#include <memory\memorylib.h>
#include <Render\FxGL\VarMulti.h>
#include <util\colour.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <Render\FxGL\FXMemory.h>
#include <utility>
#include <memory\memorypool.h>
#include <iosfwd>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <Mathlib\matrix3.h>
#include <Mathlib\vector4.h>
#include <Render\FxGL\MathHelp.h>
#include <profile\profile.h>
#include <iostream>
#include <list>
#include <Render\FxGL\FXDynamicsLocal.h>
#include <Render\FxGL\FXManager.h>
#include <debug\ctassert.h>
#include <vector>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_6F44AE(FXDynamicsLocal *const);
FXDynamicsLocal::FXDynamicsLocal() // 0x6F44AE
{
    mangled_assert("??0FXDynamicsLocal@@QAE@XZ");
    todo("implement");
    _sub_6F44AE(this);
}

_extern _sub_6F446B(FXDynamicsLocal *const, FXDynamicsLocal const &);
FXDynamicsLocal::FXDynamicsLocal(FXDynamicsLocal const &) // 0x6F446B
{
    mangled_assert("??0FXDynamicsLocal@@AAE@ABV0@@Z");
    todo("implement");
    _sub_6F446B(this, arg);
}

_extern void _sub_6F44CF(FXDynamicsLocal *const);
FXDynamicsLocal::~FXDynamicsLocal() // 0x6F44CF
{
    mangled_assert("??1FXDynamicsLocal@@UAE@XZ");
    todo("implement");
    _sub_6F44CF(this);
}

_extern FXManager::Dynamics *_sub_6F44FD(FXDynamicsLocal const *const);
FXManager::Dynamics *FXDynamicsLocal::Clone() const // 0x6F44FD
{
    mangled_assert("?Clone@FXDynamicsLocal@@UBEPAVDynamics@FXManager@@XZ");
    todo("implement");
    FXManager::Dynamics * __result = _sub_6F44FD(this);
    return __result;
}

_extern void _sub_6F4527(FXDynamicsLocal *const, vector3 const &);
void FXDynamicsLocal::InitialPosition(vector3 const &) // 0x6F4527
{
    mangled_assert("?InitialPosition@FXDynamicsLocal@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_6F4527(this, arg);
}

_extern void _sub_6F4538(FXDynamicsLocal *const, vector3 const &);
void FXDynamicsLocal::InitialVelocity(vector3 const &) // 0x6F4538
{
    mangled_assert("?InitialVelocity@FXDynamicsLocal@@UAEXABVvector3@@@Z");
    todo("implement");
    _sub_6F4538(this, arg);
}

_extern void _sub_6F4519(FXDynamicsLocal *const, float const);
void FXDynamicsLocal::InitialDrag(float const) // 0x6F4519
{
    mangled_assert("?InitialDrag@FXDynamicsLocal@@UAEXM@Z");
    todo("implement");
    _sub_6F4519(this, arg);
}

_extern bool _sub_6F4549(FXDynamicsLocal *const, FXManager::Object *, float);
bool FXDynamicsLocal::MoveObject(FXManager::Object *, float) // 0x6F4549
{
    mangled_assert("?MoveObject@FXDynamicsLocal@@UAE_NPAVObject@FXManager@@M@Z");
    todo("implement");
    bool __result = _sub_6F4549(this, arg, arg);
    return __result;
}

/* ---------- private code */
#endif
