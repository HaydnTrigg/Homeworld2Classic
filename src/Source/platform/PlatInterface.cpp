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

PlatInterface::PlatInterface() // 0x10006BCB
{
    mangled_assert("??0PlatInterface@@QAE@XZ");
    todo("implement");
}

_inline SharedLibraryInterface::SharedLibraryInterface(SharedLibraryInterface const &) // 0x10006BD7
{
    mangled_assert("??0SharedLibraryInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SharedLibraryInterface::SharedLibraryInterface() // 0x10006BE2
{
    mangled_assert("??0SharedLibraryInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SysUtilInterface::SysUtilInterface(SysUtilInterface const &) // 0x10006BEB
{
    mangled_assert("??0SysUtilInterface@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SysUtilInterface::SysUtilInterface() // 0x10006BF6
{
    mangled_assert("??0SysUtilInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

PlatInterface::~PlatInterface() // 0x10006BFF
{
    mangled_assert("??1PlatInterface@@QAE@XZ");
    todo("implement");
}

_inline SharedLibraryInterface &SharedLibraryInterface::operator=(SharedLibraryInterface const &) // 0x10006C12
{
    mangled_assert("??4SharedLibraryInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

_inline SysUtilInterface &SysUtilInterface::operator=(SysUtilInterface const &) // 0x10006C17
{
    mangled_assert("??4SysUtilInterface@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void PlatInterface::startup() // 0x10006D07
{
    mangled_assert("?startup@PlatInterface@@SGXXZ");
    todo("implement");
}

void PlatInterface::shutdown() // 0x10006CEA
{
    mangled_assert("?shutdown@PlatInterface@@SGXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
