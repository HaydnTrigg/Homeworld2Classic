#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <Menus\Multiplayer\ChatUI.h>
#include <UserInterface\Graphic.h>
#include <xstring>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <Render\objects\core.h>
#include <memory\memorylib.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <FrontEnd\lobbyroomdesc.h>
#include <Mathlib\matvec.h>
#include <crtdefs.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\matrix3.h>
#include <FrontEnd\Lobby.h>
#include <Render\objects\cliprect.h>
#include <new>
#include <Render\gl\r_types.h>
#include <xstddef>
#include <type_traits>
#include <Menus\Multiplayer\LobbyScreen.h>
#include <KeyBindings.h>
#include <localizer\localizer.h>
#include <config.h>
#include <Menus\MessageUtil.h>
#include <UserInterface\Table.h>
#include <xutility>
#include <UserInterface\TableCell.h>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Menus\WaitMessage.h>
#include <compiler\compilerconfig.h>
#include <platform\keydefines.h>
#include <UserInterface\NewButton.h>
#include <list>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Mathlib\vector3.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Mathlib\vector4.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <map>
#include <platform\platformexports.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <UserInterface\ListBoxItem.h>
#include <boost\cstdint.hpp>
#include <UserInterface\TextButton.h>
#include <Render\objects\compiledtext.h>
#include <cassert>
#include <UserInterface\NewUIScreen.h>
#include <assert.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>
#include <Menus\ErrorMessage.h>
#include <UserInterface\DestinationTextInput.h>
#include <Render\objects\textureregistry.h>
#include <assist\typemagic.h>
#include <UserInterface\NewTextInput.h>
#include <hash_map>
#include <UserInterface\NewTextLabel.h>
#include <xhash>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\NewUIScreenManager.h>
#include <debug\db.h>
#include <deque>
#include <UserInterface\NewListBox.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Menus\Multiplayer\LobbyTitleRoom.h>
#include <FrontEnd\lobbyevent.h>
#include <wchar.h>
#include <FrontEnd\lobbydefines.h>
#include <swprintf.inl>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\mathutil.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>

/* ---------- constants */

enum `anonymous-namespace'::LocalizedMessages
{
    LM_Joining = 0,
    LM_CouldNotJoinRoom,
    LM_Disconnected,
    LM_Number,
};

/* ---------- definitions */

typedef std::list<UI::TableCell *,std::allocator<UI::TableCell *> > TableCellList;
typedef std::list<UI::TableRow *,std::allocator<UI::TableRow *> > TableRowList;
typedef `anonymous-namespace'::LocalizedMessages ?A0xec8010b3::LocalizedMessages;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_inline UI::LobbyTitleRoom::Data::Data() // 0x5B7B06
{
    mangled_assert("??0Data@LobbyTitleRoom@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LobbyRoomDesc::LobbyRoomDesc() // 0x5B7B4F
{
    mangled_assert("??0LobbyRoomDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::LobbyTitleRoom::LobbyTitleRoom(char const *) // 0x5B7B62
{
    mangled_assert("??0LobbyTitleRoom@UI@@QAE@PBD@Z");
    todo("implement");
}

_inline UI::LobbyTitleRoom::Data::~Data() // 0x5B7C29
{
    mangled_assert("??1Data@LobbyTitleRoom@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LobbyRoomDesc::~LobbyRoomDesc() // 0x5B7C47
{
    mangled_assert("??1LobbyRoomDesc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

UI::LobbyTitleRoom::~LobbyTitleRoom() // 0x5B7C51
{
    mangled_assert("??1LobbyTitleRoom@UI@@UAE@XZ");
    todo("implement");
}

void UI::LobbyTitleRoom::Update(unsigned __int32) // 0x5B8846
{
    mangled_assert("?Update@LobbyTitleRoom@UI@@UAEXI@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnPreLoadFile(LuaConfig &) // 0x5B874C
{
    mangled_assert("?OnPreLoadFile@LobbyTitleRoom@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnLoad(LuaConfig &) // 0x5B80DD
{
    mangled_assert("?OnLoad@LobbyTitleRoom@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnPostLoad() // 0x5B8437
{
    mangled_assert("?OnPostLoad@LobbyTitleRoom@UI@@MAEXXZ");
    todo("implement");
}

void UI::LobbyTitleRoom::OnActivate(bool) // 0x5B7EAE
{
    mangled_assert("?OnActivate@LobbyTitleRoom@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnPostActivate(bool) // 0x5B8414
{
    mangled_assert("?OnPostActivate@LobbyTitleRoom@UI@@MAEX_N@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnSendClicked(UI::InterfaceElement *sender) // 0x5B87DB
{
    mangled_assert("?OnSendClicked@LobbyTitleRoom@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::DoRefreshRooms() // 0x5B7E1C
{
    mangled_assert("?DoRefreshRooms@LobbyTitleRoom@UI@@AAEXXZ");
    todo("implement");
}

void UI::LobbyTitleRoom::OnJoinClicked(UI::InterfaceElement *sender) // 0x5B7F99
{
    mangled_assert("?OnJoinClicked@LobbyTitleRoom@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnRefreshClicked(UI::InterfaceElement *sender) // 0x5B87A5
{
    mangled_assert("?OnRefreshClicked@LobbyTitleRoom@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnBackClicked(UI::InterfaceElement *sender) // 0x5B7F1A
{
    mangled_assert("?OnBackClicked@LobbyTitleRoom@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnErrorClicked_BackToMainMenu(UI::InterfaceElement *sender) // 0x5B7F62
{
    mangled_assert("?OnErrorClicked_BackToMainMenu@LobbyTitleRoom@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnSortRooms(UI::InterfaceElement *sender) // 0x5B880B
{
    mangled_assert("?OnSortRooms@LobbyTitleRoom@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnRowDoubleClicked(UI::InterfaceElement *sender, __int32 x, __int32 y, unsigned __int32 b) // 0x5B87CF
{
    mangled_assert("?OnRowDoubleClicked@LobbyTitleRoom@UI@@CGXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnLobbyPlayerConnect(wchar_t const *, bool) // 0x5B829D
{
    mangled_assert("?OnLobbyPlayerConnect@LobbyTitleRoom@UI@@EAEXPB_W_N@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
}

void UI::LobbyTitleRoom::OnLobbyPlayerDisconnect(wchar_t const *) // 0x5B82C9
{
    mangled_assert("?OnLobbyPlayerDisconnect@LobbyTitleRoom@UI@@EAEXPB_W@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
}

void UI::LobbyTitleRoom::OnLobbyPlayerChanged(wchar_t const *) // 0x5B8293
{
    mangled_assert("?OnLobbyPlayerChanged@LobbyTitleRoom@UI@@EAEXPB_W@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
}

void UI::LobbyTitleRoom::OnLobbyChat(LobbyChatType, wchar_t const *, wchar_t const *) // 0x5B8186
{
    mangled_assert("?OnLobbyChat@LobbyTitleRoom@UI@@EAEXW4LobbyChatType@@PB_W1@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
}

void UI::LobbyTitleRoom::OnLobbyDisconnected(wchar_t const *) // 0x5B81A4
{
    mangled_assert("?OnLobbyDisconnected@LobbyTitleRoom@UI@@EAEXPB_W@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
}

void UI::LobbyTitleRoom::UpdateRoomRow(unsigned __int32, wchar_t const *, unsigned __int32, unsigned __int32) // 0x5B884B
{
    mangled_assert("?UpdateRoomRow@LobbyTitleRoom@UI@@AAEXIPB_WII@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::AddRoomRow(unsigned __int32, wchar_t const *, unsigned __int32, unsigned __int32) // 0x5B7D0A
{
    mangled_assert("?AddRoomRow@LobbyTitleRoom@UI@@AAEXIPB_WII@Z");
    todo("implement");
}

void UI::LobbyTitleRoom::OnLobbyRoomAdded(unsigned long long) // 0x5B82EE
{
    mangled_assert("?OnLobbyRoomAdded@LobbyTitleRoom@UI@@EAEX_K@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
}

void UI::LobbyTitleRoom::OnLobbyRoomJoinedResult(LobbyRoomType, bool) // 0x5B8381
{
    mangled_assert("?OnLobbyRoomJoinedResult@LobbyTitleRoom@UI@@EAEXW4LobbyRoomType@@_N@Z");
    // __shifted(UI::LobbyTitleRoom, 412);
    todo("implement");
}

unsigned __int32 UI::LobbyTitleRoom::FindRoomIndex(unsigned __int32) // 0x5B7E53
{
    mangled_assert("?FindRoomIndex@LobbyTitleRoom@UI@@AAEII@Z");
    todo("implement");
}

/* ---------- private code */
#endif
