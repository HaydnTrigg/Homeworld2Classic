#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Platform\pch.h>
#include <new>
#include <xstddef>
#include <util\types.h>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <list>
#include <Platform\namedinterfaceimpl.h>
#include <Platform\NamedInterface.h>
#include <Platform\platformexports.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern NamedInterfaceImpl *NamedInterfaceImpl::s_instance; // 0x10010CAC

/* ---------- private variables */

/* ---------- public code */

_inline NamedInterfaceImpl::NamedFactoryAtom::NamedFactoryAtom(NamedInterfaceImpl::NamedFactoryAtom const &) // 0x10004570
{
    mangled_assert("??0NamedFactoryAtom@NamedInterfaceImpl@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline NamedInterfaceImpl::NamedFactoryAtom::NamedFactoryAtom() // 0x1000458D
{
    mangled_assert("??0NamedFactoryAtom@NamedInterfaceImpl@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NamedInterfaceImpl::NamedInterfaceAtom::NamedInterfaceAtom(NamedInterfaceImpl::NamedInterfaceAtom const &) // 0x1000459F
{
    mangled_assert("??0NamedInterfaceAtom@NamedInterfaceImpl@@QAE@ABU01@@Z");
    compiler_generated();
    todo("implement");
}

_inline NamedInterfaceImpl::NamedInterfaceAtom::NamedInterfaceAtom() // 0x100045BC
{
    mangled_assert("??0NamedInterfaceAtom@NamedInterfaceImpl@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

NamedInterface *NamedInterface::i() // 0x10004C81
{
    mangled_assert("?i@NamedInterface@@SGPAV1@XZ");
    todo("implement");
}

bool NamedInterfaceImpl::startup() // 0x10004E4C
{
    mangled_assert("?startup@NamedInterfaceImpl@@SG_NXZ");
    todo("implement");
}

bool NamedInterfaceImpl::shutdown() // 0x10004E31
{
    mangled_assert("?shutdown@NamedInterfaceImpl@@SG_NXZ");
    todo("implement");
}

NamedInterfaceImpl *NamedInterfaceImpl::i() // 0x10004C87
{
    mangled_assert("?i@NamedInterfaceImpl@@SGPAV1@XZ");
    todo("implement");
}

NamedInterfaceImpl::NamedInterfaceImpl() // 0x100045CE
{
    mangled_assert("??0NamedInterfaceImpl@@IAE@XZ");
    todo("implement");
}

_inline std::_List_buy<NamedInterfaceImpl::NamedFactoryAtom,std::allocator<NamedInterfaceImpl::NamedFactoryAtom> >::~_List_buy<NamedInterfaceImpl::NamedFactoryAtom,std::allocator<NamedInterfaceImpl::NamedFactoryAtom> >() // 0x1000466B
{
    mangled_assert("??1?$_List_buy@UNamedFactoryAtom@NamedInterfaceImpl@@V?$allocator@UNamedFactoryAtom@NamedInterfaceImpl@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<NamedInterfaceImpl::NamedInterfaceAtom,std::allocator<NamedInterfaceImpl::NamedInterfaceAtom> >::~_List_buy<NamedInterfaceImpl::NamedInterfaceAtom,std::allocator<NamedInterfaceImpl::NamedInterfaceAtom> >() // 0x10004674
{
    mangled_assert("??1?$_List_buy@UNamedInterfaceAtom@NamedInterfaceImpl@@V?$allocator@UNamedInterfaceAtom@NamedInterfaceImpl@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NamedInterfaceImpl::NamedFactoryAtom::~NamedFactoryAtom() // 0x100046A1
{
    mangled_assert("??1NamedFactoryAtom@NamedInterfaceImpl@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline NamedInterfaceImpl::NamedInterfaceAtom::~NamedInterfaceAtom() // 0x100046A9
{
    mangled_assert("??1NamedInterfaceAtom@NamedInterfaceImpl@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

NamedInterfaceImpl::~NamedInterfaceImpl() // 0x100046B1
{
    mangled_assert("??1NamedInterfaceImpl@@MAE@XZ");
    todo("implement");
}

void *NamedInterfaceImpl::interfaceGet(char const *) // 0x10004C8D
{
    mangled_assert("?interfaceGet@NamedInterfaceImpl@@UAEPAXPBD@Z");
    todo("implement");
}

NamedFactory *NamedInterfaceImpl::factoryGet(char const *) // 0x10004B42
{
    mangled_assert("?factoryGet@NamedInterfaceImpl@@UAEPAVNamedFactory@@PBD@Z");
    todo("implement");
}

bool NamedInterfaceImpl::interfaceRegister(char const *, void *) // 0x10004CEC
{
    mangled_assert("?interfaceRegister@NamedInterfaceImpl@@UAE_NPBDPAX@Z");
    todo("implement");
}

bool NamedInterfaceImpl::factoryRegister(char const *, NamedFactory *) // 0x10004BA1
{
    mangled_assert("?factoryRegister@NamedInterfaceImpl@@UAE_NPBDPAVNamedFactory@@@Z");
    todo("implement");
}

bool NamedInterfaceImpl::interfaceUnregister(char const *) // 0x10004D81
{
    mangled_assert("?interfaceUnregister@NamedInterfaceImpl@@UAE_NPBD@Z");
    todo("implement");
}

bool NamedInterfaceImpl::factoryUnregister(char const *) // 0x10004C36
{
    mangled_assert("?factoryUnregister@NamedInterfaceImpl@@UAE_NPBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
