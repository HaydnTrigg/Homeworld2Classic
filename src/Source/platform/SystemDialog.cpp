#if 0
/* ---------- headers */

#include "decomp.h"
#include <Platform\pch.h>
#include <Platform\NamedInterface.h>
#include <util\types.h>
#include <Platform\WindowManage.h>
#include <Platform\windowinterface.h>
#include <Platform\SystemDialog.h>
#include <Platform\sysdialoginterface.h>
#include <Platform\resource.h>
#include <Platform\main.h>
#include <Platform\maininterface.h>
#include <Platform\platformexports.h>
#include <Platform\osdef.h>
#include <Platform\sysinputinterface.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern __int32 sysDialogFunction(HWND__ *hDlg, unsigned __int32 uMsg, unsigned __int32 wParam, long lParam);

/* ---------- globals */

extern SysDialogImpl *SysDialogImpl::s_instance; // 0x10010ECC

/* ---------- private variables */

_static
{
    extern char const *k_InterfaceName; // 0x100105AC
}

/* ---------- public code */

SysDialogInterface *SysDialogInterface::i() // 0x100079B8
{
    mangled_assert("?i@SysDialogInterface@@QAEPAV1@XZ");
    todo("implement");
}

__int32 sysDialogFunction(HWND__ *hDlg, unsigned __int32 uMsg, unsigned __int32 wParam, long lParam) // 0x10007A29
{
    mangled_assert("?sysDialogFunction@@YGHPAUHWND__@@IIJ@Z");
    todo("implement");
}

bool SysDialogImpl::startup() // 0x100079EB
{
    mangled_assert("?startup@SysDialogImpl@@SG_NXZ");
    todo("implement");
}

bool SysDialogImpl::shutdown() // 0x100079BE
{
    mangled_assert("?shutdown@SysDialogImpl@@SG_NXZ");
    todo("implement");
}

SysDialogImpl *SysDialogImpl::i() // 0x100079B2
{
    mangled_assert("?i@SysDialogImpl@@SGPAV1@XZ");
    todo("implement");
}

SysDialogImpl::SysDialogImpl() // 0x10007836
{
    mangled_assert("??0SysDialogImpl@@IAE@XZ");
    todo("implement");
}

_inline SysDialogInterface::SysDialogInterface() // 0x10007847
{
    mangled_assert("??0SysDialogInterface@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SysDialogImpl::~SysDialogImpl() // 0x10007850
{
    mangled_assert("??1SysDialogImpl@@MAE@XZ");
    todo("implement");
}

void SysDialogImpl::Simple(char const *, char const *) // 0x1000798A
{
    mangled_assert("?Simple@SysDialogImpl@@UAEXPBD0@Z");
    todo("implement");
}

__int32 SysDialogImpl::Complex(__int32, char const *, __int32) // 0x10007898
{
    mangled_assert("?Complex@SysDialogImpl@@UAEHHPBDH@Z");
    todo("implement");
}

void SysDialogImpl::FatalErrorWait(__int32, char const *, bool) // 0x100078EC
{
    mangled_assert("?FatalErrorWait@SysDialogImpl@@UAEXHPBD_N@Z");
    todo("implement");
}

/* ---------- private code */
#endif
