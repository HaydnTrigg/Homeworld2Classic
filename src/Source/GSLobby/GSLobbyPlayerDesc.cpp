#if 0
/* ---------- headers */

#include "decomp.h"
#include <util\types.h>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <xstring>
#include <pch.h>
#include <GSLobby\GSLobbyPlayerDesc.h>
#include <GSLobby\gslobbyexport.h>
#include <GSLobby\gslobbydefines.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_1000165A(GSLobbyPlayerDesc *const, GSLobbyPlayerDesc const &);
_inline GSLobbyPlayerDesc::GSLobbyPlayerDesc(GSLobbyPlayerDesc const &) // 0x1000165A
{
    mangled_assert("??0GSLobbyPlayerDesc@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000165A(this, arg);
}

_extern _sub_1000169D(GSLobbyPlayerDesc *const);
GSLobbyPlayerDesc::GSLobbyPlayerDesc() // 0x1000169D
{
    mangled_assert("??0GSLobbyPlayerDesc@@QAE@XZ");
    todo("implement");
    _sub_1000169D(this);
}

_extern void _sub_10001AAC(GSLobbyPlayerDesc *const);
_inline GSLobbyPlayerDesc::~GSLobbyPlayerDesc() // 0x10001AAC
{
    _sub_10001AAC(this);
}

_extern GSLobbyPlayerDesc &_sub_10001718(GSLobbyPlayerDesc *const, GSLobbyPlayerDesc const &);
_inline GSLobbyPlayerDesc &GSLobbyPlayerDesc::operator=(GSLobbyPlayerDesc const &) // 0x10001718
{
    mangled_assert("??4GSLobbyPlayerDesc@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    GSLobbyPlayerDesc & __result = _sub_10001718(this, arg);
    return __result;
}

/* ---------- private code */
#endif
