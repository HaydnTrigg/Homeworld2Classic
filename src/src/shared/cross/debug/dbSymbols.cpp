#if 0
/* ---------- headers */

#include "decomp.h"
#include <crtdefs.h>
#include <Debug\dbCRT.h>
#include <float.h>
#include <crtwrn.h>
#include <.h>
#include <Debug\dbSymbols.h>

/* ---------- constants */

/* ---------- definitions */

typedef __int32 (*PFNSYMGETLINEFROMADDR)(void *, unsigned long, unsigned long *, _IMAGEHLP_LINE *);
typedef __int32 (*PFNSYMGETSYMFROMADDR)(void *, unsigned long, unsigned long *, _IMAGEHLP_SYMBOL *);
typedef __int32 (*PFNSYMINITIALIZE)(void *, char *, __int32);
typedef __int32 (*PFNSYMCLEANUP)(void *);
typedef __int32 (*PFNSTACKWALK)(unsigned long, void *, void *, _tagSTACKFRAME *, void *, __int32 (*)(void *, unsigned long, void *, unsigned long, unsigned long *), void *(*)(void *, unsigned long), unsigned long (*)(void *, unsigned long), unsigned long (*)(void *, void *, _tagADDRESS *));
typedef void *(*PFNSYMFUNCTIONTABLEACCESS)(void *, unsigned long);
typedef unsigned long (*PFNSYMGETMODULEBASE)(void *, unsigned long);
typedef unsigned long (*PFNSYMSETOPTIONS)(unsigned long);
typedef __int32 (*PFNSYMGETMODULEINFO)(void *, unsigned long, _IMAGEHLP_MODULE *);
typedef __int32 (*PFNMINIDUMPWRITEDUMP)(void *, unsigned long, void *, _MINIDUMP_TYPE, _MINIDUMP_EXCEPTION_INFORMATION *, _MINIDUMP_USER_STREAM_INFORMATION *, _MINIDUMP_CALLBACK_INFORMATION *);

/* ---------- prototypes */

extern bool dbSymLoadDll();
extern bool dbSymGetSymFromAddr(long codeAddr, char *codeModl, char *codeFunc, char *codeFile, unsigned long &codeLine);
extern bool dbSymStackWalk(long *callstack, unsigned __int32 callstackMaxDepth);
extern bool dbSymStackWalkException(long *callstack, unsigned __int32 callstackMaxDepth, _EXCEPTION_POINTERS const *data);
extern bool dbSymSaveMiniDump(char const *filename, _EXCEPTION_POINTERS const *data);

_static bool MapFunctions(HINSTANCE__ *h);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern bool s_dbSymInitialized; // 0x100050D8
    extern __int32 (*_SymInitialize)(void *, char *, __int32); // 0x100050DC
    extern __int32 (*_SymCleanup)(void *); // 0x100050E0
    extern __int32 (*_SymGetSymFromAddr)(void *, unsigned long, unsigned long *, _IMAGEHLP_SYMBOL *); // 0x100050E4
    extern __int32 (*_SymGetLineFromAddr)(void *, unsigned long, unsigned long *, _IMAGEHLP_LINE *); // 0x100050E8
    extern void *(*_SymFunctionTableAccess)(void *, unsigned long); // 0x100050EC
    extern unsigned long (*_SymGetModuleBase)(void *, unsigned long); // 0x100050F0
    extern unsigned long (*_SymSetOptions)(unsigned long); // 0x100050F4
    extern __int32 (*_SymGetModuleInfo)(void *, unsigned long, _IMAGEHLP_MODULE *); // 0x100050F8
    extern __int32 (*_StackWalk)(unsigned long, void *, void *, _tagSTACKFRAME *, void *, __int32 (*)(void *, unsigned long, void *, unsigned long, unsigned long *), void *(*)(void *, unsigned long), unsigned long (*)(void *, unsigned long), unsigned long (*)(void *, void *, _tagADDRESS *)); // 0x100050FC
    extern __int32 (*_MiniDumpWriteDump)(void *, unsigned long, void *, _MINIDUMP_TYPE, _MINIDUMP_EXCEPTION_INFORMATION *, _MINIDUMP_USER_STREAM_INFORMATION *, _MINIDUMP_CALLBACK_INFORMATION *); // 0x10005100
}

/* ---------- public code */

bool dbSymLoadDll() // 0x10001E25
{
    mangled_assert("?dbSymLoadDll@@YG_NXZ");
    todo("implement");
}

bool dbSymGetSymFromAddr(long codeAddr, char *codeModl, char *codeFunc, char *codeFile, unsigned long &codeLine) // 0x10001CF4
{
    mangled_assert("?dbSymGetSymFromAddr@@YG_NJQAD00AAK@Z");
    todo("implement");
}

bool dbSymStackWalk(long *callstack, unsigned __int32 callstackMaxDepth) // 0x10001FDC
{
    mangled_assert("?dbSymStackWalk@@YG_NQAJI@Z");
    todo("implement");
}

bool dbSymStackWalkException(long *callstack, unsigned __int32 callstackMaxDepth, _EXCEPTION_POINTERS const *data) // 0x1000201B
{
    mangled_assert("?dbSymStackWalkException@@YG_NQAJIPBU_EXCEPTION_POINTERS@@@Z");
    todo("implement");
}

bool dbSymSaveMiniDump(char const *filename, _EXCEPTION_POINTERS const *data) // 0x10001F25
{
    mangled_assert("?dbSymSaveMiniDump@@YG_NPBDPBU_EXCEPTION_POINTERS@@@Z");
    todo("implement");
}

/* ---------- private code */

_static bool MapFunctions(HINSTANCE__ *h) // 0x10001C10
{
    mangled_assert("MapFunctions");
    todo("implement");
}
#endif
