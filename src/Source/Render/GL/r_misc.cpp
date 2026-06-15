#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\r_macros.h>
#include <profile\profile.h>
#include <iostream>
#include <list>
#include <Render\GL\pch.h>
#include <xmemory0>
#include <new>
#include <Render\GL\types.h>
#include <xstddef>
#include <util\types.h>
#include <debug\debug.h>
#include <debug\filter.h>
#include <Mathlib\vector4.h>
#include <type_traits>
#include <xstring>
#include <map>
#include <xtree>
#include <xutility>
#include <utility>
#include <iosfwd>

/* ---------- constants */

/* ---------- definitions */

struct DumpEntry
{
    unsigned __int32 value; // 0x0
    char *name; // 0x4
};
static_assert(sizeof(DumpEntry) == 8, "Invalid DumpEntry size");

/* ---------- prototypes */

extern void CheckForOpenGLErrors();
extern void rglSetDefaultState();
extern void rglCaptureState(glState *state);
extern void rglDumpState(char const *name, _iobuf *stateFile);
extern void rglClearBuffers(unsigned __int32 mask);
extern void rglDisplayFrame();
extern void rglBeginFrame();
extern void rglEndFrame();
extern void rglClipPlane(ClipPlane plane, float *equation);
extern void rglScissor(__int32 x, __int32 y, unsigned __int32 width, unsigned __int32 height);
extern unsigned __int32 mapSettingToOpenGL(SystemSetting const s);
extern void rglGetInteger(SystemSetting const s, __int32 &v);
extern void rglCheckDefaultState(char const *const stage, DefaultOpenGLState state);
extern void rglReapplyState();
extern void rglSetLastWindowsError(unsigned __int32 error);
extern char const *rglGetLastWindowsError();

_static void printVector4(char const *name, vector4 const &v);
_static void printReal32(char const *name, float v);
_static void printReal64(char const *name, double const &v);
_static void printUint(char const *name, unsigned __int32 v);
_static void printInt(char const *name, __int32 v);
_static void printBool(char const *name, bool v);
_static void printEnum(char const *name, unsigned __int32 v, DumpEntry *array);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool swappedLastFrame; // 0x10020340
    extern _iobuf *g_stateDumpFile; // 0x10021B60
    extern DumpEntry MatrixModeDumpEntries[4]; // 0x10020344
    extern DumpEntry BlendFuncDumpEntries[12]; // 0x10020368
    extern DumpEntry ComparisonFuncDumpEntries[9]; // 0x100203C8
    extern DumpEntry TextureTargetDumpEntries[9]; // 0x10020410
    extern DumpEntry TexgenModeDumpEntries[7]; // 0x10020458
    extern DumpEntry TextureModeDumpEntries[6]; // 0x10020490
    extern DumpEntry PolyfillModeDumpEntries[3]; // 0x100204C0
    extern DumpEntry CullModeDumpEntries[5]; // 0x100204D8
    extern DumpEntry StencilOpDumpEntries[7]; // 0x10020500
    extern DumpEntry FogTypeDumpEntries[4]; // 0x10020538
    extern char windowsLastError[1024]; // 0x10021B68
}

/* ---------- public code */

void CheckForOpenGLErrors() // 0x1000EB89
{
    mangled_assert("?CheckForOpenGLErrors@@YGXXZ");
    todo("implement");
}

void rglSetDefaultState() // 0x1000FC99
{
    mangled_assert("?rglSetDefaultState@@YGXXZ");
    todo("implement");
}

void rglCaptureState(glState *state) // 0x1000EDA5
{
    mangled_assert("?rglCaptureState@@YGXPAUglState@@@Z");
    todo("implement");
}

void rglDumpState(char const *name, _iobuf *stateFile) // 0x1000EEA1
{
    mangled_assert("?rglDumpState@@YGXPBDPAU_iobuf@@@Z");
    todo("implement");
}

void rglClearBuffers(unsigned __int32 mask) // 0x1000EDC4
{
    mangled_assert("?rglClearBuffers@@YGXI@Z");
    todo("implement");
}

void rglDisplayFrame() // 0x1000EE4D
{
    mangled_assert("?rglDisplayFrame@@YGXXZ");
    todo("implement");
}

void rglBeginFrame() // 0x1000ED88
{
    mangled_assert("?rglBeginFrame@@YGXXZ");
    todo("implement");
}

void rglEndFrame() // 0x1000F774
{
    mangled_assert("?rglEndFrame@@YGXXZ");
    todo("implement");
}

void rglClipPlane(ClipPlane plane, float *equation) // 0x1000EE00
{
    mangled_assert("?rglClipPlane@@YGXW4ClipPlane@@PAM@Z");
    todo("implement");
}

void rglScissor(__int32 x, __int32 y, unsigned __int32 width, unsigned __int32 height) // 0x1000FC93
{
    mangled_assert("?rglScissor@@YGXHHII@Z");
    todo("implement");
}

unsigned __int32 mapSettingToOpenGL(SystemSetting const s) // 0x1000EB9D
{
    mangled_assert("?mapSettingToOpenGL@@YGIW4SystemSetting@@@Z");
    todo("implement");
}

void rglGetInteger(SystemSetting const s, __int32 &v) // 0x1000F782
{
    mangled_assert("?rglGetInteger@@YGXW4SystemSetting@@AAH@Z");
    todo("implement");
}

void rglCheckDefaultState(char const *const stage, DefaultOpenGLState state) // 0x1000EDC1
{
    mangled_assert("?rglCheckDefaultState@@YGXQBDW4DefaultOpenGLState@@@Z");
    todo("implement");
}

void rglReapplyState() // 0x1000F7DF
{
    mangled_assert("?rglReapplyState@@YGXXZ");
    todo("implement");
}

void rglSetLastWindowsError(unsigned __int32 error) // 0x100102D7
{
    mangled_assert("?rglSetLastWindowsError@@YGXI@Z");
    todo("implement");
}

char const *rglGetLastWindowsError() // 0x1000F79B
{
    mangled_assert("?rglGetLastWindowsError@@YGPBDXZ");
    todo("implement");
}

/* ---------- private code */

_static void printVector4(char const *name, vector4 const &v) // 0x1000ED29
{
    mangled_assert("printVector4");
    todo("implement");
}

_static void printReal32(char const *name, float v) // 0x1000EC98
{
    mangled_assert("printReal32");
    todo("implement");
}

_static void printReal64(char const *name, double const &v) // 0x1000ECC9
{
    mangled_assert("printReal64");
    todo("implement");
}

_static void printUint(char const *name, unsigned __int32 v) // 0x1000ECFF
{
    mangled_assert("printUint");
    todo("implement");
}

_static void printInt(char const *name, __int32 v) // 0x1000EC6E
{
    mangled_assert("printInt");
    todo("implement");
}

_static void printBool(char const *name, bool v) // 0x1000EBDD
{
    mangled_assert("printBool");
    todo("implement");
}

_static void printEnum(char const *name, unsigned __int32 v, DumpEntry *array) // 0x1000EC12
{
    mangled_assert("printEnum");
    todo("implement");
}
#endif
