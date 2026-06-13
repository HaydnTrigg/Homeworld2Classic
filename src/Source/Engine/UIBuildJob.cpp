#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <pch.h>
#include <xstddef>
#include <BuildJob.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <sobtypes.h>
#include <savegamedef.h>
#include <BuildJobType.h>
#include <UIBuildJob.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5D0D3A(UIBuildJob *const, BuildJob *);
UIBuildJob::UIBuildJob(BuildJob *) // 0x5D0D3A
{
    mangled_assert("??0UIBuildJob@@QAE@PAVBuildJob@@@Z");
    todo("implement");
    _sub_5D0D3A(this, arg);
}

_extern _sub_5D0D51(UIBuildJob *const, BuildJobType *, unsigned __int32);
UIBuildJob::UIBuildJob(BuildJobType *, unsigned __int32) // 0x5D0D51
{
    mangled_assert("??0UIBuildJob@@QAE@PAVBuildJobType@@I@Z");
    todo("implement");
    _sub_5D0D51(this, arg, arg);
}

_extern void _sub_5D0D67(UIBuildJob *const);
UIBuildJob::~UIBuildJob() // 0x5D0D67
{
    mangled_assert("??1UIBuildJob@@QAE@XZ");
    todo("implement");
    _sub_5D0D67(this);
}

_extern void _sub_5D0D7D(UIBuildJob *const);
void UIBuildJob::initialiseJob() // 0x5D0D7D
{
    mangled_assert("?initialiseJob@UIBuildJob@@QAEXXZ");
    todo("implement");
    _sub_5D0D7D(this);
}

_extern __int32 _sub_5D0D68(UIBuildJob const *const);
__int32 UIBuildJob::getCostLeft() const // 0x5D0D68
{
    mangled_assert("?getCostLeft@UIBuildJob@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_5D0D68(this);
    return __result;
}

/* ---------- private code */
#endif
