#if 0
/* ---------- headers */

#include "decomp.h"
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\gl\r_types.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <util\colour.h>
#include <platform\osdef.h>
#include <fog.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Render\gl\lotypes.h>

/* ---------- constants */

/* ---------- definitions */

class FogInterpolator
{
public:
    float *m_value; // 0x0
    float m_curTime; // 0x4
    float m_length; // 0x8
    float m_dv; // 0xC
    FogInterpolator(float *, float, float);
    bool updateValue(float);
};
static_assert(sizeof(FogInterpolator) == 16, "Invalid FogInterpolator size");

/* ---------- prototypes */

extern bool fogManagerStartup();
extern bool fogManagerShutdown();

/* ---------- globals */

extern FogManager *FogManager::m_instance; // 0x848738

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5EE209(FogInterpolator *const, float *, float, float);
FogInterpolator::FogInterpolator(float *, float, float) // 0x5EE209
{
    mangled_assert("??0FogInterpolator@@QAE@PAMMM@Z");
    todo("implement");
    _sub_5EE209(this, arg, arg, arg);
}

_extern bool _sub_5EE833(FogInterpolator *const, float);
bool FogInterpolator::updateValue(float) // 0x5EE833
{
    mangled_assert("?updateValue@FogInterpolator@@QAE_NM@Z");
    todo("implement");
    bool __result = _sub_5EE833(this, arg);
    return __result;
}

_extern void _sub_5EE43E(FogManager *const, FogInterpParam, float, float);
void FogManager::addInterpolator(FogInterpParam, float, float) // 0x5EE43E
{
    mangled_assert("?addInterpolator@FogManager@@QAEXW4FogInterpParam@@MM@Z");
    todo("implement");
    _sub_5EE43E(this, arg, arg, arg);
}

_extern void _sub_5EE7EF(FogManager *const, float);
void FogManager::updateFog(float) // 0x5EE7EF
{
    mangled_assert("?updateFog@FogManager@@QAEXM@Z");
    todo("implement");
    _sub_5EE7EF(this, arg);
}

_extern bool _sub_5EE678();
bool fogManagerStartup() // 0x5EE678
{
    mangled_assert("?fogManagerStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5EE678();
    return __result;
}

_extern bool _sub_5EE66C();
bool fogManagerShutdown() // 0x5EE66C
{
    mangled_assert("?fogManagerShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5EE66C();
    return __result;
}

_extern _sub_5EE236(FogManager *const);
FogManager::FogManager() // 0x5EE236
{
    mangled_assert("??0FogManager@@QAE@XZ");
    todo("implement");
    _sub_5EE236(this);
}

_extern void _sub_5EE2E5(std::_List_buy<FogInterpolator *,std::allocator<FogInterpolator *> > *const);
_inline std::_List_buy<FogInterpolator *,std::allocator<FogInterpolator *> >::~_List_buy<FogInterpolator *,std::allocator<FogInterpolator *> >() // 0x5EE2E5
{
    mangled_assert("??1?$_List_buy@PAVFogInterpolator@@V?$allocator@PAVFogInterpolator@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5EE2E5(this);
}

_extern void _sub_5EE300(FogManager *const);
FogManager::~FogManager() // 0x5EE300
{
    mangled_assert("??1FogManager@@QAE@XZ");
    todo("implement");
    _sub_5EE300(this);
}

_extern void _sub_5EE4B3(FogManager *const, rndTable *);
void FogManager::applyFog(rndTable *) // 0x5EE4B3
{
    mangled_assert("?applyFog@FogManager@@QAEXPAUrndTable@@@Z");
    todo("implement");
    _sub_5EE4B3(this, arg);
}

_extern void _sub_5EE7BB(FogManager *const, float);
void FogManager::setFogDensity(float) // 0x5EE7BB
{
    mangled_assert("?setFogDensity@FogManager@@QAEXM@Z");
    todo("implement");
    _sub_5EE7BB(this, arg);
}

_extern void _sub_5EE7C9(FogManager *const, float);
void FogManager::setFogEnd(float) // 0x5EE7C9
{
    mangled_assert("?setFogEnd@FogManager@@QAEXM@Z");
    todo("implement");
    _sub_5EE7C9(this, arg);
}

_extern void _sub_5EE7D7(FogManager *const, float);
void FogManager::setFogStart(float) // 0x5EE7D7
{
    mangled_assert("?setFogStart@FogManager@@QAEXM@Z");
    todo("implement");
    _sub_5EE7D7(this, arg);
}

_extern void _sub_5EE7E5(FogManager *const, FogType);
void FogManager::setFogType(FogType) // 0x5EE7E5
{
    mangled_assert("?setFogType@FogManager@@QAEXW4FogType@@@Z");
    todo("implement");
    _sub_5EE7E5(this, arg);
}

_extern void _sub_5EE7A9(FogManager *const, vector4 &);
void FogManager::setFogColour(vector4 &) // 0x5EE7A9
{
    mangled_assert("?setFogColour@FogManager@@QAEXAAVvector4@@@Z");
    todo("implement");
    _sub_5EE7A9(this, arg);
}

_extern bool _sub_5EE783(FogManager *const, bool);
bool FogManager::setFogActive(bool) // 0x5EE783
{
    mangled_assert("?setFogActive@FogManager@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_5EE783(this, arg);
    return __result;
}

_extern bool _sub_5EE79C(FogManager *const, bool);
bool FogManager::setFogCanActivate(bool) // 0x5EE79C
{
    mangled_assert("?setFogCanActivate@FogManager@@QAE_N_N@Z");
    todo("implement");
    bool __result = _sub_5EE79C(this, arg);
    return __result;
}

_extern FogManager *_sub_5EE6F3();
FogManager *FogManager::i() // 0x5EE6F3
{
    mangled_assert("?i@FogManager@@SGPAV1@XZ");
    todo("implement");
    FogManager * __result = _sub_5EE6F3();
    return __result;
}

_extern bool _sub_5EE75B(FogManager *const);
bool FogManager::release() // 0x5EE75B
{
    mangled_assert("?release@FogManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_5EE75B(this);
    return __result;
}

_extern void _sub_5EE5DB(FogManager *const, vector4 &, float);
void FogManager::evalFog(vector4 &, float) // 0x5EE5DB
{
    mangled_assert("?evalFog@FogManager@@QAEXAAVvector4@@M@Z");
    todo("implement");
    _sub_5EE5DB(this, arg, arg);
}

_extern float _sub_5EE683(FogManager *const, float const);
float FogManager::getFogAlpha(float const) // 0x5EE683
{
    mangled_assert("?getFogAlpha@FogManager@@QAEMM@Z");
    todo("implement");
    float __result = _sub_5EE683(this, arg);
    return __result;
}

/* ---------- private code */
#endif
