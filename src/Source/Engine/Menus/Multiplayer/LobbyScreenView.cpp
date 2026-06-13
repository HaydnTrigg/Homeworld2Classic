#if 0
/* ---------- headers */

#include "decomp.h"
#include <Menus\Multiplayer\LobbyScreen.h>
#include <assist\stlexsmallvector.h>
#include <FrontEnd\lobbyevent.h>
#include <Render\objects\textureproxy.h>
#include <xstring>
#include <FrontEnd\lobbydefines.h>
#include <region.h>
#include <platform\osdef.h>
#include <prim.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <memory\memorylib.h>
#include <Mathlib\mathutil.h>
#include <UserInterface\Table.h>
#include <crtdefs.h>
#include <UserInterface\TableCell.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matrix3.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <UserInterface\NewButton.h>
#include <new>
#include <xstddef>
#include <Render\gl\lotypes.h>
#include <type_traits>
#include <Render\gl\r_types.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\objects\cliprect.h>
#include <KeyBindings.h>
#include <config.h>
#include <compiler\compilerconfig.h>
#include <Menus\Multiplayer\LobbyScreenDoc.h>
#include <localizer\localizer.h>
#include <FrontEnd\LobbySessionDesc.h>
#include <list>
#include <platform\keydefines.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <lua.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\glext.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\uitypes.h>
#include <Mathlib\vector2.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\StyleSheet.h>
#include <task.h>
#include <UserInterface\pch.h>
#include <stack>
#include <assist\typemagic.h>
#include <Render\objects\compiledtext.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <xhash>
#include <debug\db.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <GameRulesLibrary.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Menus\Multiplayer\LobbyScreenView.h>
#include <Menus\Multiplayer\GameFilter.h>
#include <wchar.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>

/* ---------- constants */

enum `anonymous-namespace'::CellIndex
{
    CI_Name = 0,
    CI_Map,
    CI_Mode,
    CI_Players,
    CI_Ping,
    CI_Version,
};

/* ---------- definitions */

typedef std::map<unsigned __int64,LobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LobbySessionDesc> > > SessionMap;
typedef std::vector<LobbySessionDesc::Param,std::allocator<LobbySessionDesc::Param> > ParamCont;
typedef `anonymous-namespace'::CellIndex ?A0x66e2c5d0::CellIndex;

/* ---------- prototypes */


_static void UI::BuildPlayersString(unsigned __int32 numPlayers, unsigned __int32 maxPlayers, wchar_t *text, unsigned __int32 textSize);
_static void UI::BuildPingString(__int32 ping, wchar_t *text, unsigned __int32 textSize);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5B7468(UI::LobbyScreenView *const, UI::LobbyScreenDoc *);
UI::LobbyScreenView::LobbyScreenView(UI::LobbyScreenDoc *) // 0x5B7468
{
    mangled_assert("??0LobbyScreenView@UI@@QAE@PAVLobbyScreenDoc@1@@Z");
    todo("implement");
    _sub_5B7468(this, arg);
}

_extern void _sub_5B7487(UI::LobbyScreenView *const);
UI::LobbyScreenView::~LobbyScreenView() // 0x5B7487
{
    mangled_assert("??1LobbyScreenView@UI@@QAE@XZ");
    todo("implement");
    _sub_5B7487(this);
}

_extern UI::GameFilter const &_sub_5B75C9(UI::LobbyScreenView const *const);
UI::GameFilter const &UI::LobbyScreenView::GetFilter() const // 0x5B75C9
{
    mangled_assert("?GetFilter@LobbyScreenView@UI@@QBEABVGameFilter@2@XZ");
    todo("implement");
    UI::GameFilter const & __result = _sub_5B75C9(this);
    return __result;
}

_extern unsigned long long _sub_5B75CD(UI::LobbyScreenView const *const);
unsigned long long UI::LobbyScreenView::GetSelectedID() const // 0x5B75CD
{
    mangled_assert("?GetSelectedID@LobbyScreenView@UI@@QBE_KXZ");
    todo("implement");
    unsigned long long __result = _sub_5B75CD(this);
    return __result;
}

_extern bool _sub_5B7601(UI::LobbyScreenView const *const);
bool UI::LobbyScreenView::IsEmpty() const // 0x5B7601
{
    mangled_assert("?IsEmpty@LobbyScreenView@UI@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_5B7601(this);
    return __result;
}

_extern void _sub_5B76ED(UI::LobbyScreenView *const, UI::GameFilter const &);
void UI::LobbyScreenView::SetFilter(UI::GameFilter const &) // 0x5B76ED
{
    mangled_assert("?SetFilter@LobbyScreenView@UI@@QAEXABVGameFilter@2@@Z");
    todo("implement");
    _sub_5B76ED(this, arg);
}

_extern void _sub_5B76D0(UI::LobbyScreenView *const, vector4 const &, vector4 const &);
void UI::LobbyScreenView::SetColours(vector4 const &, vector4 const &) // 0x5B76D0
{
    mangled_assert("?SetColours@LobbyScreenView@UI@@QAEXABVvector4@@0@Z");
    todo("implement");
    _sub_5B76D0(this, arg, arg);
}

_extern void _sub_5B7707(UI::LobbyScreenView *const, UI::LobbyScreenView::GameDisableTest *);
void UI::LobbyScreenView::SetGameDisableTest(UI::LobbyScreenView::GameDisableTest *) // 0x5B7707
{
    mangled_assert("?SetGameDisableTest@LobbyScreenView@UI@@QAEXPAVGameDisableTest@12@@Z");
    todo("implement");
    _sub_5B7707(this, arg);
}

_extern void _sub_5B7711(UI::LobbyScreenView *const, UI::Table *);
void UI::LobbyScreenView::SetGamesTable(UI::Table *) // 0x5B7711
{
    mangled_assert("?SetGamesTable@LobbyScreenView@UI@@QAEXPAVTable@2@@Z");
    todo("implement");
    _sub_5B7711(this, arg);
}

_extern void _sub_5B768B(UI::LobbyScreenView *const);
void UI::LobbyScreenView::OnFilterUpdate() // 0x5B768B
{
    mangled_assert("?OnFilterUpdate@LobbyScreenView@UI@@AAEXXZ");
    todo("implement");
    _sub_5B768B(this);
}

_extern void _sub_5B7609(UI::LobbyScreenView *const);
void UI::LobbyScreenView::OnDocUpdated() // 0x5B7609
{
    mangled_assert("?OnDocUpdated@LobbyScreenView@UI@@QAEXXZ");
    todo("implement");
    _sub_5B7609(this);
}

_extern void _sub_5B7690(UI::InterfaceElement *);
void UI::LobbyScreenView::OnSortGames(UI::InterfaceElement *sender) // 0x5B7690
{
    mangled_assert("?OnSortGames@LobbyScreenView@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_5B7690(sender);
}

_extern void _sub_5B7825(UI::LobbyScreenView *const, UI::Table *, unsigned __int32, unsigned __int32, bool);
void UI::LobbyScreenView::SetRowCellEnabled(UI::Table *, unsigned __int32, unsigned __int32, bool) // 0x5B7825
{
    mangled_assert("?SetRowCellEnabled@LobbyScreenView@UI@@AAEXPAVTable@2@II_N@Z");
    todo("implement");
    _sub_5B7825(this, arg, arg, arg, arg);
}

_extern void _sub_5B7A8A(UI::LobbyScreenView *const, unsigned __int32, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *);
void UI::LobbyScreenView::UpdateGameRowText(unsigned __int32, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *, wchar_t const *) // 0x5B7A8A
{
    mangled_assert("?UpdateGameRowText@LobbyScreenView@UI@@AAEXIPB_W00000@Z");
    todo("implement");
    _sub_5B7A8A(this, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_5B78BF(UI::LobbyScreenView *const, unsigned __int32, LobbySessionDesc const &);
void UI::LobbyScreenView::UpdateGameRow(unsigned __int32, LobbySessionDesc const &) // 0x5B78BF
{
    mangled_assert("?UpdateGameRow@LobbyScreenView@UI@@AAEXIABVLobbySessionDesc@@@Z");
    todo("implement");
    _sub_5B78BF(this, arg, arg);
}

_extern unsigned __int32 _sub_5B749B(UI::LobbyScreenView *const, unsigned long long, wchar_t const *);
unsigned __int32 UI::LobbyScreenView::AddGameRow(unsigned long long, wchar_t const *) // 0x5B749B
{
    mangled_assert("?AddGameRow@LobbyScreenView@UI@@AAEI_KPB_W@Z");
    todo("implement");
    unsigned __int32 __result = _sub_5B749B(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_5B75A8(unsigned __int32, unsigned __int32, wchar_t *, unsigned __int32);
_static void UI::BuildPlayersString(unsigned __int32 numPlayers, unsigned __int32 maxPlayers, wchar_t *text, unsigned __int32 textSize) // 0x5B75A8
{
    mangled_assert("UI::BuildPlayersString");
    todo("implement");
    _sub_5B75A8(numPlayers, maxPlayers, text, textSize);
}

_extern void _sub_5B758B(__int32, wchar_t *, unsigned __int32);
_static void UI::BuildPingString(__int32 ping, wchar_t *text, unsigned __int32 textSize) // 0x5B758B
{
    mangled_assert("UI::BuildPingString");
    todo("implement");
    _sub_5B758B(ping, text, textSize);
}
#endif
