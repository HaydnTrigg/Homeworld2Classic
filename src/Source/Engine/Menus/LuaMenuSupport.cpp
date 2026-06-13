#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Collision\Primitives\capsule.h>
#include <orders.h>
#include <xstring>
#include <Collision\Primitives\segment.h>
#include <orders_base.h>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <Collision\BVH\profiling.h>
#include <commandtype.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <GameObj.h>
#include <crtdefs.h>
#include <util\statmonitor.h>
#include <GameRulesLibrary.h>
#include <util\utilexports.h>
#include <Menus\NewMainMenu.h>
#include <BuildData.h>
#include <LevelManager.h>
#include <DependencyData.h>
#include <LevelDesc.h>
#include <Mathlib\matrix3.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <Render\objects\textureregistry.h>
#include <sob.h>
#include <new>
#include <sobstatic.h>
#include <Menus\EventsScreen.h>
#include <Collision\Primitives\sphere.h>
#include <xstddef>
#include <type_traits>
#include <playerresourcetype.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <xutility>
#include <SOBGroupManager.h>
#include <utility>
#include <iosfwd>
#include <gamestructimpl.h>
#include <vector>
#include <Badge.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <UserInterface\StringTable.h>
#include <fixedpoint.h>
#include <Render\objects\cliprect.h>
#include <util\fixed.h>
#include <luaconfig\luaconfig.h>
#include <compiler\compilerconfig.h>
#include <SelTarg.h>
#include <boost\noncopyable.hpp>
#include <lua.h>
#include <GameOptions.h>
#include <Menus\NewTaskbar.h>
#include <GameEventSys.h>
#include <luaconfig\lualibman.h>
#include <list>
#include <localizer\localizer.h>
#include <assist\fixedstring.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <platform\timer.h>
#include <Collision\Primitives\obb.h>
#include <map>
#include <boost\static_assert.hpp>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <sobid.h>
#include <Mathlib\vector2.h>
#include <platform\osdef.h>
#include <App\AppObj.h>
#include <util\types.h>
#include <platform\appinterface.h>
#include <UserInterface\StyleSheet.h>
#include <luaconfig\luabinding.h>
#include <UserInterface\pch.h>
#include <TeamColourRegistry.h>
#include <boost\cstdint.hpp>
#include <UserInterface\SharedGraphicFactory.h>
#include <savegame.h>
#include <stack>
#include <UserInterface\Graphic.h>
#include <boost\config.hpp>
#include <Mathlib\mathutil.h>
#include <Render\objects\texture.h>
#include <cassert>
#include <Render\objects\objects.h>
#include <assert.h>
#include <UserInterface\NewTextLabel.h>
#include <Render\objects\core.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\types.h>
#include <UserInterface\signals.h>
#include <Mathlib\matvec.h>
#include <UserInterface\UIDialog.h>
#include <subtitle.h>
#include <UserInterface\NewUIScreen.h>
#include <App\PlayerProfileMan.h>
#include <UserInterface\NewFrame.h>
#include <Mathlib\quat.h>
#include <App\PlayerProfile.h>
#include <App\PlayerProfileGameOptions.h>
#include <BuildManager.h>
#include <task.h>
#include <Selector.h>
#include <Render\gl\lotypes.h>
#include <Collision\BVH\octree.h>
#include <MetaSelTarg.h>
#include <fileio\filepath.h>
#include <SquadronList.h>
#include <Menus\MenuSupport.h>
#include <Collision\BVH\span.h>
#include <Universe.h>
#include <assist\typemagic.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Waypoint.h>
#include <Collision\BVH\proxy.h>
#include <SobUnmoveable.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Render\gl\r_types.h>
#include <Render\objects\compiledtext.h>
#include <region.h>
#include <Mathlib\mathlibdll.h>
#include <prim.h>
#include <Mathlib\fastmath.h>
#include <Menus\SaveLoadDialog.h>
#include <Interpolation.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <gamemsg.h>
#include <seInterface2\PatchID.h>
#include <App\CampaignMan.h>
#include <seInterface2\PatchBase.h>
#include <Collision\Primitives\aabb.h>
#include <Menus\FinalBuildMenu.h>
#include <seInterface2\SoundParams.h>
#include <deque>
#include <UserInterface\ListBoxItem.h>
#include <HyperspaceManager.h>
#include <UserInterface\TextButton.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewButton.h>
#include <gameSettings.h>
#include <UserInterface\NewText.h>
#include <syncChecking.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <Render\objects\fontsystem.h>
#include <boost\throw_exception.hpp>
#include <Render\objects\bitmapfont.h>
#include <sobtypes.h>
#include <Player.h>
#include <selection.h>
#include <ResearchManager.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <KeyBindings.h>
#include <campaign.h>
#include <config.h>
#include <boost\detail\lwm_win32.hpp>
#include <scripting.h>
#include <scriptaccess.h>
#include <UserInterface\uitypes.h>
#include <scripttypedef.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <Render\gl\r_defines.h>
#include <platform\keydefines.h>
#include <Render\gl\glext.h>
#include <Render\objects\textureproxy.h>
#include <Menus\SubtitleScreen.h>
#include <Menus\LuaMenuSupport.h>
#include <feFlow.h>
#include <wchar.h>
#include <FrontEnd\frontend.h>
#include <Race.h>
#include <string>
#include <UserInterface\NewUIScreenManager.h>
#include <hash_map>
#include <xhash>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <abilities.h>

/* ---------- constants */

/* ---------- definitions */

struct UI::LuaScopedGuard
{
    _inline LuaScopedGuard();
    _inline ~LuaScopedGuard();
};
static_assert(sizeof(UI::LuaScopedGuard) == 1, "Invalid UI::LuaScopedGuard size");

class UI::LuaMenuSupportLib :
    public LuaLibrary
{
public:
    LuaMenuSupportLib(UI::LuaMenuSupportLib const &); /* compiler_generated() */
    _inline LuaMenuSupportLib();
    virtual _inline ~LuaMenuSupportLib() override;
    virtual _inline bool Register(LuaConfig &) override;
    virtual _inline bool DeRegister(LuaConfig &) override;
    UI::LuaMenuSupportLib &operator=(UI::LuaMenuSupportLib const &); /* compiler_generated() */
};
static_assert(sizeof(UI::LuaMenuSupportLib) == 16, "Invalid UI::LuaMenuSupportLib size");

/* ---------- prototypes */


_static bool UI::Profile_SetMissionsComplete(char const *campaign, __int32 mission);
_static bool UI::Profile_SetSingleMissionComplete(char const *campaign, __int32 mission);
_static bool UI::Profile_UnlockMovies();
_static bool UI::Profile_UnlockAll();
_static void UI::FE_ExitToMainMenu_Yes(UI::InterfaceElement *yes);
_static void UI::FE_ExitToMainMenu();
_static void UI::FE_ExitToWindows_Yes(UI::InterfaceElement *btn);
_static void UI::FE_ExitToWindows();
_static void UI::FE_RestartGame_Yes(UI::InterfaceElement *e);
_static void UI::FE_RestartGame(bool confirm);
_static void UI::FE_SaveGameScreen();
_static void UI::FE_LoadGameScreen();
_static void UI::FE_SaveGameScreen_Campaign();
_static void UI::FE_LoadGameScreen_Campaign();
_static void UI::FE_LoadGameScreen_RecordedGame();
_static void UI::FE_Retire_Yes(UI::InterfaceElement *yesButton);
_static void UI::FE_Retire(char const *luaOnAccept);
_static void UI::FE_FinalTutorial_Yes(UI::InterfaceElement *e);
_static void UI::FE_NextTutorial();
_static __int32 UI::FE_GetCurrentPlayerIndex();
_static void UI::FE_TaskbarIgnoreProfilePhase(bool b);
_static void UI::UI_StartGameWithSelectedLevel();
_static void UI::FE_FocusOnLastEvent();
_static void UI::UI_SubtitleNarrow();
_static void UI::UI_SubtitleWide();

/* ---------- globals */

extern char const *LUALIB_MENUSUPPORT; // 0x83A1B8
extern UI::LuaMenuSupportLib UI::s_LuaMenuSupportLib; // 0x846CE4

/* ---------- private variables */

_static
{
    extern float subtitleTwkScrollDwellStart; // 0x83A1A8
    extern float subtitleTwkScrollDwellEnd; // 0x83A1AC
    extern float subtitleTwkScrollShortest; // 0x83A1B0
    extern float subtitleTwkTitleShortest; // 0x83A1B4
    extern char const *QUICKSTART_GAMETYPE; // 0x83A1BC
}

/* ---------- public code */

_extern _sub_58CCA0(UI::LuaScopedGuard *const);
_inline UI::LuaScopedGuard::LuaScopedGuard() // 0x58CCA0
{
    mangled_assert("??0LuaScopedGuard@UI@@QAE@XZ");
    todo("implement");
    _sub_58CCA0(this);
}

_extern void _sub_58CCC2(LuaBinding::ObjInternal0<bool,LuaBinding::Functor0Free<bool> > *const);
_inline LuaBinding::ObjInternal0<bool,LuaBinding::Functor0Free<bool> >::~ObjInternal0<bool,LuaBinding::Functor0Free<bool> >() // 0x58CCC2
{
    mangled_assert("??1?$ObjInternal0@_NV?$Functor0Free@_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_58CCC2(this);
}

_extern void _sub_58CCC8(LuaBinding::ObjInternal2<char const *,int,bool,LuaBinding::Functor2Free<char const *,int,bool> > *const);
_inline LuaBinding::ObjInternal2<char const *,int,bool,LuaBinding::Functor2Free<char const *,int,bool> >::~ObjInternal2<char const *,int,bool,LuaBinding::Functor2Free<char const *,int,bool> >() // 0x58CCC8
{
    mangled_assert("??1?$ObjInternal2@PBDH_NV?$Functor2Free@PBDH_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_58CCC8(this);
}

_extern void _sub_58CD0F(UI::LuaScopedGuard *const);
_inline UI::LuaScopedGuard::~LuaScopedGuard() // 0x58CD0F
{
    mangled_assert("??1LuaScopedGuard@UI@@QAE@XZ");
    todo("implement");
    _sub_58CD0F(this);
}

_extern _sub_58CC5F(UI::LuaMenuSupportLib *const);
_inline UI::LuaMenuSupportLib::LuaMenuSupportLib() // 0x58CC5F
{
    mangled_assert("??0LuaMenuSupportLib@UI@@QAE@XZ");
    todo("implement");
    _sub_58CC5F(this);
}

_extern void _sub_58CCCE(UI::LuaMenuSupportLib *const);
_inline UI::LuaMenuSupportLib::~LuaMenuSupportLib() // 0x58CCCE
{
    mangled_assert("??1LuaMenuSupportLib@UI@@UAE@XZ");
    todo("implement");
    _sub_58CCCE(this);
}

_extern bool _sub_58D547(UI::LuaMenuSupportLib *const, LuaConfig &);
_inline bool UI::LuaMenuSupportLib::Register(LuaConfig &) // 0x58D547
{
    mangled_assert("?Register@LuaMenuSupportLib@UI@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_58D547(this, arg);
    return __result;
}

_extern bool _sub_58CDBE(UI::LuaMenuSupportLib *const, LuaConfig &);
_inline bool UI::LuaMenuSupportLib::DeRegister(LuaConfig &) // 0x58CDBE
{
    mangled_assert("?DeRegister@LuaMenuSupportLib@UI@@UAE_NAAVLuaConfig@@@Z");
    todo("implement");
    bool __result = _sub_58CDBE(this, arg);
    return __result;
}

/* ---------- private code */

_extern bool _sub_58D374(char const *, __int32);
_static bool UI::Profile_SetMissionsComplete(char const *campaign, __int32 mission) // 0x58D374
{
    mangled_assert("UI::Profile_SetMissionsComplete");
    todo("implement");
    bool __result = _sub_58D374(campaign, mission);
    return __result;
}

_extern bool _sub_58D3DA(char const *, __int32);
_static bool UI::Profile_SetSingleMissionComplete(char const *campaign, __int32 mission) // 0x58D3DA
{
    mangled_assert("UI::Profile_SetSingleMissionComplete");
    todo("implement");
    bool __result = _sub_58D3DA(campaign, mission);
    return __result;
}

_extern bool _sub_58D437();
_static bool UI::Profile_UnlockMovies() // 0x58D437
{
    mangled_assert("UI::Profile_UnlockMovies");
    todo("implement");
    bool __result = _sub_58D437();
    return __result;
}

_extern bool _sub_58D434();
_static bool UI::Profile_UnlockAll() // 0x58D434
{
    mangled_assert("UI::Profile_UnlockAll");
    todo("implement");
    bool __result = _sub_58D434();
    return __result;
}

_extern void _sub_58CED1(UI::InterfaceElement *);
_static void UI::FE_ExitToMainMenu_Yes(UI::InterfaceElement *yes) // 0x58CED1
{
    mangled_assert("UI::FE_ExitToMainMenu_Yes");
    todo("implement");
    _sub_58CED1(yes);
}

_extern void _sub_58CE66();
_static void UI::FE_ExitToMainMenu() // 0x58CE66
{
    mangled_assert("UI::FE_ExitToMainMenu");
    todo("implement");
    _sub_58CE66();
}

_extern void _sub_58CF79(UI::InterfaceElement *);
_static void UI::FE_ExitToWindows_Yes(UI::InterfaceElement *btn) // 0x58CF79
{
    mangled_assert("UI::FE_ExitToWindows_Yes");
    todo("implement");
    _sub_58CF79(btn);
}

_extern void _sub_58CF0E();
_static void UI::FE_ExitToWindows() // 0x58CF0E
{
    mangled_assert("UI::FE_ExitToWindows");
    todo("implement");
    _sub_58CF0E();
}

_extern void _sub_58D1D8(UI::InterfaceElement *);
_static void UI::FE_RestartGame_Yes(UI::InterfaceElement *e) // 0x58D1D8
{
    mangled_assert("UI::FE_RestartGame_Yes");
    todo("implement");
    _sub_58D1D8(e);
}

_extern void _sub_58D15C(bool);
_static void UI::FE_RestartGame(bool confirm) // 0x58D15C
{
    mangled_assert("UI::FE_RestartGame");
    todo("implement");
    _sub_58D15C(confirm);
}

_extern void _sub_58D307();
_static void UI::FE_SaveGameScreen() // 0x58D307
{
    mangled_assert("UI::FE_SaveGameScreen");
    todo("implement");
    _sub_58D307();
}

_extern void _sub_58D028();
_static void UI::FE_LoadGameScreen() // 0x58D028
{
    mangled_assert("UI::FE_LoadGameScreen");
    todo("implement");
    _sub_58D028();
}

_extern void _sub_58D316();
_static void UI::FE_SaveGameScreen_Campaign() // 0x58D316
{
    mangled_assert("UI::FE_SaveGameScreen_Campaign");
    todo("implement");
    _sub_58D316();
}

_extern void _sub_58D037();
_static void UI::FE_LoadGameScreen_Campaign() // 0x58D037
{
    mangled_assert("UI::FE_LoadGameScreen_Campaign");
    todo("implement");
    _sub_58D037();
}

_extern void _sub_58D05D();
_static void UI::FE_LoadGameScreen_RecordedGame() // 0x58D05D
{
    mangled_assert("UI::FE_LoadGameScreen_RecordedGame");
    todo("implement");
    _sub_58D05D();
}

_extern void _sub_58D2DE(UI::InterfaceElement *);
_static void UI::FE_Retire_Yes(UI::InterfaceElement *yesButton) // 0x58D2DE
{
    mangled_assert("UI::FE_Retire_Yes");
    todo("implement");
    _sub_58D2DE(yesButton);
}

_extern void _sub_58D262(char const *);
_static void UI::FE_Retire(char const *luaOnAccept) // 0x58D262
{
    mangled_assert("UI::FE_Retire");
    todo("implement");
    _sub_58D262(luaOnAccept);
}

_extern void _sub_58CFB6(UI::InterfaceElement *);
_static void UI::FE_FinalTutorial_Yes(UI::InterfaceElement *e) // 0x58CFB6
{
    mangled_assert("UI::FE_FinalTutorial_Yes");
    todo("implement");
    _sub_58CFB6(e);
}

_extern void _sub_58D06C();
_static void UI::FE_NextTutorial() // 0x58D06C
{
    mangled_assert("UI::FE_NextTutorial");
    todo("implement");
    _sub_58D06C();
}

_extern __int32 _sub_58D002();
_static __int32 UI::FE_GetCurrentPlayerIndex() // 0x58D002
{
    mangled_assert("UI::FE_GetCurrentPlayerIndex");
    todo("implement");
    __int32 __result = _sub_58D002();
    return __result;
}

_extern void _sub_58D33C(bool);
_static void UI::FE_TaskbarIgnoreProfilePhase(bool b) // 0x58D33C
{
    mangled_assert("UI::FE_TaskbarIgnoreProfilePhase");
    todo("implement");
    _sub_58D33C(b);
}

_extern void _sub_58DAAC();
_static void UI::UI_StartGameWithSelectedLevel() // 0x58DAAC
{
    mangled_assert("UI::UI_StartGameWithSelectedLevel");
    todo("implement");
    _sub_58DAAC();
}

_extern void _sub_58CFF3();
_static void UI::FE_FocusOnLastEvent() // 0x58CFF3
{
    mangled_assert("UI::FE_FocusOnLastEvent");
    todo("implement");
    _sub_58CFF3();
}

_extern void _sub_58DBA6();
_static void UI::UI_SubtitleNarrow() // 0x58DBA6
{
    mangled_assert("UI::UI_SubtitleNarrow");
    todo("implement");
    _sub_58DBA6();
}

_extern void _sub_58DBB5();
_static void UI::UI_SubtitleWide() // 0x58DBB5
{
    mangled_assert("UI::UI_SubtitleWide");
    todo("implement");
    _sub_58DBB5();
}
#endif
