#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <iosfwd>
#include <boost\scoped_ptr.hpp>
#include <assist\typemagic.h>
#include <localizer\localizer.h>
#include <Menus\MessageUtil.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_59013F(LuaConfig &, char const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > *, unsigned __int32);
void MessageUtil::LoadMessages(LuaConfig &lc, char const *tableName, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > *messages, unsigned __int32 maxMessages) // 0x59013F
{
    mangled_assert("?LoadMessages@MessageUtil@@SGXAAVLuaConfig@@PBDQAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@I@Z");
    todo("implement");
    _sub_59013F(lc, tableName, messages, maxMessages);
}

/* ---------- private code */
#endif
