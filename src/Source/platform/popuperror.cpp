#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Platform\pch.h>
#include <xstddef>
#include <iosfwd>
#include <localizer\localizer.h>
#include <assist\typemagic.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool PopUpError(unsigned __int32 id);

_static void CheckLastError();

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_10006D83(unsigned __int32);
bool PopUpError(unsigned __int32 id) // 0x10006D83
{
    mangled_assert("?PopUpError@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_10006D83(id);
    return __result;
}

/* ---------- private code */

_extern void _sub_10006D42();
_static void CheckLastError() // 0x10006D42
{
    mangled_assert("CheckLastError");
    todo("implement");
    _sub_10006D42();
}
#endif
