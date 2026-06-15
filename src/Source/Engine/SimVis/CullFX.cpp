#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <sobid.h>
#include <task.h>
#include <xutility>
#include <stack>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <debug\ctassert.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Camera\OrbitParameters.h>
#include <profile\profile.h>
#include <iostream>
#include <CameraCommand.h>
#include <CameraHW.h>
#include <Camera\CameraOrbitTarget.h>
#include <Camera\Camera.h>
#include <Camera\Frustum.h>
#include <Camera\Plane3.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <SimVis\CullFX.h>
#include <Render\FxGL\FXManager.h>
#include <Render\FxGL\VarMulti.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::SimpleCull :
    public CullFX::CullPred
{
public:
    virtual bool Test(FXManager::Type const *, vector3 const &, float const) const override;
    SimpleCull(`anonymous-namespace'::SimpleCull const &); /* compiler_generated() */
    SimpleCull(); /* compiler_generated() */
    `anonymous-namespace'::SimpleCull &operator=(`anonymous-namespace'::SimpleCull const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::SimpleCull) == 4, "Invalid `anonymous-namespace'::SimpleCull size");

class `anonymous-namespace'::CullFX_StatsReset :
    public Task
{
private:
    virtual __int32 taskFunction(float) override;
public:
    CullFX_StatsReset(`anonymous-namespace'::CullFX_StatsReset const &); /* compiler_generated() */
    CullFX_StatsReset(); /* compiler_generated() */
    virtual ~CullFX_StatsReset() override; /* compiler_generated() */
    `anonymous-namespace'::CullFX_StatsReset &operator=(`anonymous-namespace'::CullFX_StatsReset const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::CullFX_StatsReset) == 48, "Invalid `anonymous-namespace'::CullFX_StatsReset size");

typedef std::vector<CullFX::CullPred const *,std::allocator<CullFX::CullPred const *> > CullPredCont;
typedef `anonymous-namespace'::SimpleCull ?A0x2482cd7e::SimpleCull;
typedef `anonymous-namespace'::CullFX_StatsReset ?A0x2482cd7e::CullFX_StatsReset;

/* ---------- prototypes */

/* ---------- globals */

extern CullFX *CullFX::s_instance; // 0x844754

/* ---------- private variables */

/* ---------- public code */

bool CullFX::Startup() // 0x519488
{
    mangled_assert("?Startup@CullFX@@SG_NXZ");
    todo("implement");
}

bool CullFX::Shutdown() // 0x519464
{
    mangled_assert("?Shutdown@CullFX@@SG_NXZ");
    todo("implement");
}

CullFX *CullFX::Instance() // 0x51942B
{
    mangled_assert("?Instance@CullFX@@SGPAV1@XZ");
    todo("implement");
}

CullFX::CullFX() // 0x519251
{
    mangled_assert("??0CullFX@@IAE@XZ");
    todo("implement");
}

_inline CullFX::CullPred::CullPred() // 0x5192C8
{
    mangled_assert("??0CullPred@CullFX@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline CullFX::Data::Data() // 0x5192D1
{
    mangled_assert("??0Data@CullFX@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

CullFX::~CullFX() // 0x51931E
{
    mangled_assert("??1CullFX@@IAE@XZ");
    todo("implement");
}

_inline CullFX::Data::~Data() // 0x51935F
{
    mangled_assert("??1Data@CullFX@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void CullFX::ResetStats() // 0x51944A
{
    mangled_assert("?ResetStats@CullFX@@QAEXXZ");
    todo("implement");
}

float CullFX::GetStat(unsigned __int32) // 0x519416
{
    mangled_assert("?GetStat@CullFX@@QAEMI@Z");
    todo("implement");
}

void CullFX::RegisterCullPred(CullFX::CullPred *) // 0x519431
{
    mangled_assert("?RegisterCullPred@CullFX@@QAEXPAVCullPred@1@@Z");
    todo("implement");
}

bool CullFX::Test(char const *, vector3 const &, float const) // 0x5194EA
{
    mangled_assert("?Test@CullFX@@QAE_NPBDABVvector3@@M@Z");
    todo("implement");
}

/* ---------- private code */
#endif
