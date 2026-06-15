#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <SoundManager\SoundEntityHandle.h>
#include <xmemory0>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <new>
#include <platform\timer.h>
#include <xstddef>
#include <platform\platformexports.h>
#include <type_traits>
#include <seInterface2\PatchID.h>
#include <GameObj.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <config.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <util\statmonitor.h>
#include <vector>
#include <util\utilexports.h>
#include <xmemory>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <seInterface2\sedefinesshared.h>
#include <util\types.h>
#include <debug\debug.h>
#include <debug\filter.h>
#include <boost\scoped_array.hpp>
#include <profile\profile.h>
#include <iostream>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <savegamedef.h>
#include <bitset>
#include <task.h>
#include <stack>
#include <Sound\SoundTask.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\SoundParamManager.h>
#include <assist\gbitset.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool soundTaskStartup();
extern bool soundTaskShutdown();

/* ---------- globals */

extern SoundTask *g_soundTask; // 0x84AF84

/* ---------- private variables */

/* ---------- public code */

_inline SoundTask::SoundTask() // 0x64079F
{
    mangled_assert("??0SoundTask@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SoundTask::~SoundTask() // 0x6407B1
{
    mangled_assert("??1SoundTask@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

bool soundTaskStartup() // 0x6407EC
{
    mangled_assert("?soundTaskStartup@@YG_NXZ");
    todo("implement");
}

bool soundTaskShutdown() // 0x6407D2
{
    mangled_assert("?soundTaskShutdown@@YG_NXZ");
    todo("implement");
}

__int32 SoundTask::taskFunction(float) // 0x640833
{
    mangled_assert("?taskFunction@SoundTask@@EAEHM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
