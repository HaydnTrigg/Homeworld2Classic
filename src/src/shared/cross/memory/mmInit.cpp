#if 0
/* ---------- headers */

#include "decomp.h"
#include <.h>
#include <Memory\mmInit.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern __int32 DllMain(void *hInstance, unsigned long reason, void *reserved);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern __int32 _sub_100031C0(void *, unsigned long, void *);
__int32 DllMain(void *hInstance, unsigned long reason, void *reserved) // 0x100031C0
{
    mangled_assert("_DllMain@12");
    todo("implement");
    __int32 __result = _sub_100031C0(hInstance, reason, reserved);
    return __result;
}

/* ---------- private code */
#endif
