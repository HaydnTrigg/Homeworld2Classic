#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <Address2UdwordMapper.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<Address2UdwordMapper::Pair,std::allocator<Address2UdwordMapper::Pair> > PairContainer;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5DB9C9(Address2UdwordMapper *const, __int32);
Address2UdwordMapper::Address2UdwordMapper(__int32) // 0x5DB9C9
{
    mangled_assert("??0Address2UdwordMapper@@QAE@H@Z");
    todo("implement");
    _sub_5DB9C9(this, arg);
}

_extern void _sub_5DBA0A(Address2UdwordMapper *const);
Address2UdwordMapper::~Address2UdwordMapper() // 0x5DBA0A
{
    mangled_assert("??1Address2UdwordMapper@@QAE@XZ");
    todo("implement");
    _sub_5DBA0A(this);
}

_extern unsigned __int32 _sub_5DBD68(Address2UdwordMapper *const);
unsigned __int32 Address2UdwordMapper::size() // 0x5DBD68
{
    mangled_assert("?size@Address2UdwordMapper@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5DBD68(this);
    return __result;
}

_extern bool _sub_5DBC5D(Address2UdwordMapper *const, void *, unsigned __int32 *);
bool Address2UdwordMapper::lookup(void *, unsigned __int32 *) // 0x5DBC5D
{
    mangled_assert("?lookup@Address2UdwordMapper@@QAE_NPAXPAI@Z");
    todo("implement");
    bool __result = _sub_5DBC5D(this, arg, arg);
    return __result;
}

_extern bool _sub_5DBB93(Address2UdwordMapper *const, void *, unsigned __int32);
bool Address2UdwordMapper::add(void *, unsigned __int32) // 0x5DBB93
{
    mangled_assert("?add@Address2UdwordMapper@@QAE_NPAXI@Z");
    todo("implement");
    bool __result = _sub_5DBB93(this, arg, arg);
    return __result;
}

_extern void _sub_5DBD74(Address2UdwordMapper *const, __int32);
void Address2UdwordMapper::update(__int32) // 0x5DBD74
{
    mangled_assert("?update@Address2UdwordMapper@@QAEXH@Z");
    todo("implement");
    _sub_5DBD74(this, arg);
}

/* ---------- private code */
#endif
