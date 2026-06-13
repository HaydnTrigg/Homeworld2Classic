#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <memory\memoryalloc.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <fileio\logfile.h>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <assist\fixedstring.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <assist\fileobj.h>
#include <fileio\filepath.h>
#include <memory\memorypool.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <platform\osdef.h>
#include <memory\mmwriteheap.h>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <util\colour.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <memory\mmctswitches.h>
#include <platform\cmdline.h>
#include <Render\gl\lotypes.h>
#include <platform\platformexports.h>
#include <Render\gl\r_types.h>
#include <App\AppMem.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool s_bRecording; // 0x84434C
}

/* ---------- public code */

_extern bool _sub_4F6222();
bool AppMem::Startup() // 0x4F6222
{
    mangled_assert("?Startup@AppMem@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F6222();
    return __result;
}

_extern bool _sub_4F621F();
bool AppMem::Shutdown() // 0x4F621F
{
    mangled_assert("?Shutdown@AppMem@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F621F();
    return __result;
}

_extern void _sub_4F622E();
void AppMem::StatsReset() // 0x4F622E
{
    mangled_assert("?StatsReset@AppMem@@SGXXZ");
    todo("implement");
    _sub_4F622E();
}

_extern void _sub_4F622F();
void AppMem::StatsStartRecording() // 0x4F622F
{
    mangled_assert("?StatsStartRecording@AppMem@@SGXXZ");
    todo("implement");
    _sub_4F622F();
}

_extern void _sub_4F6237();
void AppMem::StatsStopRecording() // 0x4F6237
{
    mangled_assert("?StatsStopRecording@AppMem@@SGXXZ");
    todo("implement");
    _sub_4F6237();
}

_extern void _sub_4F6228(unsigned __int32, char const *);
void AppMem::StatsLogAllocs(unsigned __int32 maxstackdepth, char const *filename) // 0x4F6228
{
    mangled_assert("?StatsLogAllocs@AppMem@@SGXIPBD@Z");
    todo("implement");
    _sub_4F6228(maxstackdepth, filename);
}

_extern void _sub_4F6225(unsigned __int32, char const *);
void AppMem::StatsLogActiveAllocs(unsigned __int32 maxstackdepth, char const *filename) // 0x4F6225
{
    mangled_assert("?StatsLogActiveAllocs@AppMem@@SGXIPBD@Z");
    todo("implement");
    _sub_4F6225(maxstackdepth, filename);
}

_extern void _sub_4F622B(unsigned __int32, char const *);
void AppMem::StatsLogTempAllocs(unsigned __int32 maxstackdepth, char const *filename) // 0x4F622B
{
    mangled_assert("?StatsLogTempAllocs@AppMem@@SGXIPBD@Z");
    todo("implement");
    _sub_4F622B(maxstackdepth, filename);
}

_extern void _sub_4F621B(unsigned __int32, char const *);
void AppMem::Analysis(unsigned __int32 maxstackdepth, char const *filename) // 0x4F621B
{
    mangled_assert("?Analysis@AppMem@@SGXIPBD@Z");
    todo("implement");
    _sub_4F621B(maxstackdepth, filename);
}

_extern void _sub_4F621E();
void AppMem::OnScreenMemTracker() // 0x4F621E
{
    mangled_assert("?OnScreenMemTracker@AppMem@@SGXXZ");
    todo("implement");
    _sub_4F621E();
}

/* ---------- private code */
#endif
