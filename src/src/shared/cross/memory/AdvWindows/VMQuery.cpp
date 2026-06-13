#if 0
/* ---------- headers */

#include "decomp.h"
#include <.h>
#include <Memory\AdvWindows\VMQuery.h>

/* ---------- constants */

/* ---------- definitions */

struct VMQUERY_HELP
{
    unsigned long RgnSize; // 0x0
    unsigned long dwRgnStorage; // 0x4
    unsigned long dwRgnBlocks; // 0x8
    unsigned long dwRgnGuardBlks; // 0xC
    __int32 fRgnIsAStack; // 0x10
};
static_assert(sizeof(VMQUERY_HELP) == 20, "Invalid VMQUERY_HELP size");

typedef VMQUERY *PVMQUERY;

/* ---------- prototypes */

extern __int32 VMQuery(void *hProcess, void const *pvAddress, VMQUERY *pVMQ);

_static __int32 VMQueryHelp(void *hProcess, void const *pvAddress, VMQUERY_HELP *pVMQHelp);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned long gs_dwAllocGran; // 0x1000D2D0
}

/* ---------- public code */

_extern __int32 _sub_10006240(void *, void const *, VMQUERY *);
__int32 VMQuery(void *hProcess, void const *pvAddress, VMQUERY *pVMQ) // 0x10006240
{
    mangled_assert("?VMQuery@@YGHPAXPBXPAUVMQUERY@@@Z");
    todo("implement");
    __int32 __result = _sub_10006240(hProcess, pvAddress, pVMQ);
    return __result;
}

/* ---------- private code */

_extern __int32 _sub_10006400(void *, void const *, VMQUERY_HELP *);
_static __int32 VMQueryHelp(void *hProcess, void const *pvAddress, VMQUERY_HELP *pVMQHelp) // 0x10006400
{
    mangled_assert("VMQueryHelp");
    todo("implement");
    __int32 __result = _sub_10006400(hProcess, pvAddress, pVMQHelp);
    return __result;
}
#endif
