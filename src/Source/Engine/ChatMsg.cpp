#if 0
/* ---------- headers */

#include "decomp.h"
#include <stack>
#include <sobid.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <boost\static_assert.hpp>
#include <new>
#include <commandtype.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <gamemsg.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <util\statmonitor.h>
#include <util\utilexports.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <gameSettings.h>
#include <syncChecking.h>
#include <util\types.h>
#include <localizer\localizer.h>
#include <boost\config.hpp>
#include <assist\typemagic.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <SquadronList.h>
#include <sobtypes.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <config.h>
#include <ChatMsg.h>
#include <wchar.h>
#include <gamestructimpl.h>
#include <Badge.h>
#include <GameObj.h>
#include <orders.h>
#include <task.h>
#include <orders_base.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern ChatMsg *ChatMsg::s_instance; // 0x84872C

/* ---------- private variables */

/* ---------- public code */

ChatMsg::ChatMsg() // 0x5E9B4C
{
    mangled_assert("??0ChatMsg@@AAE@XZ");
    todo("implement");
}

_inline GameMsg_Chat::GameMsg_Chat() // 0x5E9BB1
{
    mangled_assert("??0GameMsg_Chat@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline GameMsg_Chat::~GameMsg_Chat() // 0x5E9BD8
{
    mangled_assert("??1GameMsg_Chat@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

ChatMsg *ChatMsg::instance() // 0x5E9CB4
{
    mangled_assert("?instance@ChatMsg@@SGPAV1@XZ");
    todo("implement");
}

bool ChatMsg::shutdown() // 0x5E9DFF
{
    mangled_assert("?shutdown@ChatMsg@@SG_NXZ");
    todo("implement");
}

void ChatMsg::initMessage(ChatMsgType) // 0x5E9C98
{
    mangled_assert("?initMessage@ChatMsg@@QAEXW4ChatMsgType@@@Z");
    todo("implement");
}

void ChatMsg::initMessage(char) // 0x5E9C88
{
    mangled_assert("?initMessage@ChatMsg@@QAEXD@Z");
    todo("implement");
}

void ChatMsg::onAccept(wchar_t const *) // 0x5E9CF7
{
    mangled_assert("?onAccept@ChatMsg@@QAEXPB_W@Z");
    todo("implement");
}

void ChatMsg::receiveMessage(GameMsg_Chat const *) // 0x5E9D7A
{
    mangled_assert("?receiveMessage@ChatMsg@@QAEXPBUGameMsg_Chat@@@Z");
    todo("implement");
}

bool ChatMsg::getReceivedMessage(wchar_t const **, char *, ChatMsgType *, char *) // 0x5E9C0E
{
    mangled_assert("?getReceivedMessage@ChatMsg@@QAE_NPAPB_WPADPAW4ChatMsgType@@1@Z");
    todo("implement");
}

/* ---------- private code */
#endif
