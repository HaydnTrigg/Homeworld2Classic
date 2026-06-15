#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Render\objects\image.h>
#include <Mathlib\matrix4.h>
#include <Render\objects\texture.h>
#include <xmemory0>
#include <pch.h>
#include <Render\objects\core.h>
#include <platform\cmdline.h>
#include <scripting.h>
#include <platform\windowinterface.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <Mathlib\matrix3.h>
#include <lua.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <string.h>
#include <Mathlib\vector3.h>
#include <platform\osdef.h>
#include <fileio\filestream.h>
#include <Interface.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <renderer.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <Render\gl\lotypes.h>
#include <stack>
#include <Render\gl\r_types.h>
#include <fileio\filepath.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <fileio\filepathhd.h>
#include <platform\sysutilinterface.h>
#include <Render\gl\r_defines.h>
#include <platform\platformexports.h>
#include <Render\gl\glext.h>
#include <util\colour.h>
#include <Render\objects\hw2ddraw.h>
#include <task.h>
#include <MovieRecorder.h>
#include <Render\objects\screenshot.h>
#include <Render\objects\objects.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool movieRecorderStartup();
extern bool movieRecorderShutdown();
extern void movieRecorderFrameCallback();
extern void movieRecorderStart(char const *movieName, float fps);
extern void movieRecorderStop();
extern void movieFileType(unsigned __int32 type);
extern void movieOverExpose(bool bOver);
extern void movieOutputDirectory(char const *dirName);

_static __int32 getFirstFreeNumber(char const *dir, char const *ext);

/* ---------- globals */

extern MovieRecorder *MovieRecorder::s_instance; // 0x8497F0
extern char const *MOVIE_Directory; // 0x83C660
extern char g_dirName[255]; // 0x8497F8
extern bool g_pathSet; // 0x8497F4

/* ---------- private variables */

_static
{
    extern char const *k_BaseAlias; // 0x83C664
    extern char const *k_BaseName; // 0x83C668
    extern char const *k_BaseNameWild; // 0x83C66C
}

/* ---------- public code */

bool movieRecorderStartup() // 0x609086
{
    mangled_assert("?movieRecorderStartup@@YG_NXZ");
    todo("implement");
}

bool movieRecorderShutdown() // 0x60905F
{
    mangled_assert("?movieRecorderShutdown@@YG_NXZ");
    todo("implement");
}

void movieRecorderFrameCallback() // 0x609053
{
    mangled_assert("?movieRecorderFrameCallback@@YGXXZ");
    todo("implement");
}

MovieRecorder::MovieRecorder() // 0x608C2E
{
    mangled_assert("??0MovieRecorder@@QAE@XZ");
    todo("implement");
}

MovieRecorder::~MovieRecorder() // 0x608C5B
{
    mangled_assert("??1MovieRecorder@@QAE@XZ");
    todo("implement");
}

MovieRecorder *MovieRecorder::i() // 0x608F49
{
    mangled_assert("?i@MovieRecorder@@SGPAV1@XZ");
    todo("implement");
}

void MovieRecorder::release() // 0x609120
{
    mangled_assert("?release@MovieRecorder@@SGXXZ");
    todo("implement");
}

void MovieRecorder::setFileType(unsigned __int32) // 0x609142
{
    mangled_assert("?setFileType@MovieRecorder@@QAEXI@Z");
    todo("implement");
}

void MovieRecorder::setOverExposure(bool) // 0x60915E
{
    mangled_assert("?setOverExposure@MovieRecorder@@QAEX_N@Z");
    todo("implement");
}

void MovieRecorder::makeMovieFrameName(char *, char const *, unsigned __int32) // 0x608F6F
{
    mangled_assert("?makeMovieFrameName@MovieRecorder@@AAEXPADPBDI@Z");
    todo("implement");
}

bool MovieRecorder::start(char const *, float) // 0x609168
{
    mangled_assert("?start@MovieRecorder@@QAE_NPBDM@Z");
    todo("implement");
}

bool MovieRecorder::stop() // 0x6092AB
{
    mangled_assert("?stop@MovieRecorder@@QAE_NXZ");
    todo("implement");
}

void MovieRecorder::frameCapture() // 0x608CB2
{
    mangled_assert("?frameCapture@MovieRecorder@@QAEXXZ");
    todo("implement");
}

void movieRecorderStart(char const *movieName, float fps) // 0x609067
{
    mangled_assert("?movieRecorderStart@@YGXPBDM@Z");
    todo("implement");
}

void movieRecorderStop() // 0x609114
{
    mangled_assert("?movieRecorderStop@@YGXXZ");
    todo("implement");
}

void movieFileType(unsigned __int32 type) // 0x608FCC
{
    mangled_assert("?movieFileType@@YGXI@Z");
    todo("implement");
}

void movieOverExpose(bool bOver) // 0x609044
{
    mangled_assert("?movieOverExpose@@YGX_N@Z");
    todo("implement");
}

void movieOutputDirectory(char const *dirName) // 0x608FDF
{
    mangled_assert("?movieOutputDirectory@@YGXPBD@Z");
    todo("implement");
}

/* ---------- private code */

_static __int32 getFirstFreeNumber(char const *dir, char const *ext) // 0x608E9A
{
    mangled_assert("getFirstFreeNumber");
    todo("implement");
}
#endif
