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

FogInterpolator::FogInterpolator(float *, float, float) // 0x5EE209
{
    mangled_assert("??0FogInterpolator@@QAE@PAMMM@Z");
    todo("implement");
}

bool FogInterpolator::updateValue(float) // 0x5EE833
{
    mangled_assert("?updateValue@FogInterpolator@@QAE_NM@Z");
    todo("implement");
}

void FogManager::addInterpolator(FogInterpParam, float, float) // 0x5EE43E
{
    mangled_assert("?addInterpolator@FogManager@@QAEXW4FogInterpParam@@MM@Z");
    todo("implement");
}

void FogManager::updateFog(float) // 0x5EE7EF
{
    mangled_assert("?updateFog@FogManager@@QAEXM@Z");
    todo("implement");
}

bool fogManagerStartup() // 0x5EE678
{
    mangled_assert("?fogManagerStartup@@YG_NXZ");
    todo("implement");
}

bool fogManagerShutdown() // 0x5EE66C
{
    mangled_assert("?fogManagerShutdown@@YG_NXZ");
    todo("implement");
}

FogManager::FogManager() // 0x5EE236
{
    mangled_assert("??0FogManager@@QAE@XZ");
    todo("implement");
}

_inline std::_List_buy<FogInterpolator *,std::allocator<FogInterpolator *> >::~_List_buy<FogInterpolator *,std::allocator<FogInterpolator *> >() // 0x5EE2E5
{
    mangled_assert("??1?$_List_buy@PAVFogInterpolator@@V?$allocator@PAVFogInterpolator@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

FogManager::~FogManager() // 0x5EE300
{
    mangled_assert("??1FogManager@@QAE@XZ");
    todo("implement");
}

void FogManager::applyFog(rndTable *) // 0x5EE4B3
{
    mangled_assert("?applyFog@FogManager@@QAEXPAUrndTable@@@Z");
    todo("implement");
}

void FogManager::setFogDensity(float) // 0x5EE7BB
{
    mangled_assert("?setFogDensity@FogManager@@QAEXM@Z");
    todo("implement");
}

void FogManager::setFogEnd(float) // 0x5EE7C9
{
    mangled_assert("?setFogEnd@FogManager@@QAEXM@Z");
    todo("implement");
}

void FogManager::setFogStart(float) // 0x5EE7D7
{
    mangled_assert("?setFogStart@FogManager@@QAEXM@Z");
    todo("implement");
}

void FogManager::setFogType(FogType) // 0x5EE7E5
{
    mangled_assert("?setFogType@FogManager@@QAEXW4FogType@@@Z");
    todo("implement");
}

void FogManager::setFogColour(vector4 &) // 0x5EE7A9
{
    mangled_assert("?setFogColour@FogManager@@QAEXAAVvector4@@@Z");
    todo("implement");
}

bool FogManager::setFogActive(bool) // 0x5EE783
{
    mangled_assert("?setFogActive@FogManager@@QAE_N_N@Z");
    todo("implement");
}

bool FogManager::setFogCanActivate(bool) // 0x5EE79C
{
    mangled_assert("?setFogCanActivate@FogManager@@QAE_N_N@Z");
    todo("implement");
}

FogManager *FogManager::i() // 0x5EE6F3
{
    mangled_assert("?i@FogManager@@SGPAV1@XZ");
    todo("implement");
}

bool FogManager::release() // 0x5EE75B
{
    mangled_assert("?release@FogManager@@QAE_NXZ");
    todo("implement");
}

void FogManager::evalFog(vector4 &, float) // 0x5EE5DB
{
    mangled_assert("?evalFog@FogManager@@QAEXAAVvector4@@M@Z");
    todo("implement");
}

float FogManager::getFogAlpha(float const) // 0x5EE683
{
    mangled_assert("?getFogAlpha@FogManager@@QAEMM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
