#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <Render\objects\stateblock\stateblockmanager.h>
#include <Render\objects\objects.h>
#include <boost\shared_ptr.hpp>
#include <ShaderVariables.h>
#include <util\dictionary.h>
#include <util\utilexports.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool ShaderVariablesStartup();

/* ---------- globals */

extern Internal::VariableNameKey Internal::g_nameKeys[45]; // 0x83D240

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_6379D7();
bool ShaderVariablesStartup() // 0x6379D7
{
    mangled_assert("?ShaderVariablesStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_6379D7();
    return __result;
}

/* ---------- private code */
#endif
