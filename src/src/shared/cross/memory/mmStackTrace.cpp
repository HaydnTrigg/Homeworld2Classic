#if 0
/* ---------- headers */

#include "decomp.h"
#include <.h>
#include <Memory\mmStackTrace.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool mmStackTraceFast(long *FuncAddrArray, long maxDepth, long numSkip);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_10006150(long *, long, long);
bool mmStackTraceFast(long *FuncAddrArray, long maxDepth, long numSkip) // 0x10006150
{
    mangled_assert("?mmStackTraceFast@@YG_NPAJJJ@Z");
    todo("implement");
    bool __result = _sub_10006150(FuncAddrArray, maxDepth, numSkip);
    return __result;
}

/* ---------- private code */
#endif
