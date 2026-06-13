#if 0
/* ---------- headers */

#include "decomp.h"
#include <Platform\osdef.h>
#include <Platform\pch.h>
#include <util\types.h>
#include <Platform\input.h>
#include <Platform\inputinterface.h>
#include <Platform\keydefines.h>
#include <Platform\SystemUtility.h>
#include <Platform\sysutilinterface.h>
#include <Platform\SystemInput.h>
#include <Platform\sysinputinterface.h>
#include <Platform\main.h>
#include <Platform\maininterface.h>
#include <Platform\namedinterfaceimpl.h>
#include <Platform\NamedInterface.h>
#include <Platform\platformexports.h>
#include <Platform\SystemDialog.h>
#include <Platform\sysdialoginterface.h>
#include <Platform\WindowManage.h>
#include <Platform\windowinterface.h>
#include <Platform\SharedLibrary.h>
#include <Platform\sharedlibraryinterface.h>

/* ---------- constants */

/* ---------- definitions */

class PlatInterface
{
public:
    PlatInterface();
    ~PlatInterface();
    static void startup();
    static void shutdown();
};
static_assert(sizeof(PlatInterface) == 1, "Invalid PlatInterface size");

struct InitInterface
{
    char const *name; // 0x0
    bool (*startup)(); // 0x4
    bool (*shutdown)(); // 0x8
};
static_assert(sizeof(InitInterface) == 12, "Invalid InitInterface size");

typedef bool (*InitFunction)();

/* ---------- prototypes */

/* ---------- globals */

extern PlatInterface g_PlatInterfaces; // 0x10010DB5

/* ---------- private variables */

_static
{
    extern InitInterface g_InitInterfaceList[8]; // 0x100104D8
}

/* ---------- public code */

_extern _sub_10006BCB(PlatInterface *const);
PlatInterface::PlatInterface() // 0x10006BCB
{
    mangled_assert("??0PlatInterface@@QAE@XZ");
    todo("implement");
    _sub_10006BCB(this);
}

_extern _sub_10006BD7(SharedLibraryInterface *const, SharedLibraryInterface const &);
_inline SharedLibraryInterface::SharedLibraryInterface(SharedLibraryInterface const &) // 0x10006BD7
{
    mangled_assert("??0SharedLibraryInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10006BD7(this, arg);
}

_extern _sub_10006BE2(SharedLibraryInterface *const);
_inline SharedLibraryInterface::SharedLibraryInterface() // 0x10006BE2
{
    mangled_assert("??0SharedLibraryInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10006BE2(this);
}

_extern _sub_10006BEB(SysUtilInterface *const, SysUtilInterface const &);
_inline SysUtilInterface::SysUtilInterface(SysUtilInterface const &) // 0x10006BEB
{
    mangled_assert("??0SysUtilInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10006BEB(this, arg);
}

_extern _sub_10006BF6(SysUtilInterface *const);
_inline SysUtilInterface::SysUtilInterface() // 0x10006BF6
{
    mangled_assert("??0SysUtilInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10006BF6(this);
}

_extern void _sub_10006BFF(PlatInterface *const);
PlatInterface::~PlatInterface() // 0x10006BFF
{
    mangled_assert("??1PlatInterface@@QAE@XZ");
    todo("implement");
    _sub_10006BFF(this);
}

_extern SharedLibraryInterface &_sub_10006C12(SharedLibraryInterface *const, SharedLibraryInterface const &);
_inline SharedLibraryInterface &SharedLibraryInterface::operator=(SharedLibraryInterface const &) // 0x10006C12
{
    mangled_assert("??4SharedLibraryInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SharedLibraryInterface & __result = _sub_10006C12(this, arg);
    return __result;
}

_extern SysUtilInterface &_sub_10006C17(SysUtilInterface *const, SysUtilInterface const &);
_inline SysUtilInterface &SysUtilInterface::operator=(SysUtilInterface const &) // 0x10006C17
{
    mangled_assert("??4SysUtilInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SysUtilInterface & __result = _sub_10006C17(this, arg);
    return __result;
}

_extern void _sub_10006D07();
void PlatInterface::startup() // 0x10006D07
{
    mangled_assert("?startup@PlatInterface@@SGXXZ");
    todo("implement");
    _sub_10006D07();
}

_extern void _sub_10006CEA();
void PlatInterface::shutdown() // 0x10006CEA
{
    mangled_assert("?shutdown@PlatInterface@@SGXXZ");
    todo("implement");
    _sub_10006CEA();
}

/* ---------- private code */
#endif
