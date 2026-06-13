#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\gl\glext.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <memory\memorylib.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <crtdefs.h>
#include <fileio\md5.h>
#include <UserInterface\NewUIScreen.h>
#include <UserInterface\NewFrame.h>
#include <UserInterface\InterfaceElement.h>
#include <UserInterface\SharedGraphicFactory.h>
#include <gamestructimpl.h>
#include <UserInterface\Graphic.h>
#include <Badge.h>
#include <Render\objects\texture.h>
#include <Render\objects\core.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <campaign.h>
#include <KeyBindings.h>
#include <scripting.h>
#include <new>
#include <scriptaccess.h>
#include <Menus\MenuSupport.h>
#include <scripttypedef.h>
#include <UserInterface\uitypes.h>
#include <xstddef>
#include <platform\inputinterface.h>
#include <type_traits>
#include <Render\gl\lotypes.h>
#include <platform\platformexports.h>
#include <Render\objects\cliprect.h>
#include <platform\keydefines.h>
#include <lua.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <platform\osdef.h>
#include <UserInterface\StyleSheet.h>
#include <localizer\localizer.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <UserInterface\pch.h>
#include <boost\static_assert.hpp>
#include <compiler\compilerconfig.h>
#include <Render\objects\textureproxy.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Render\objects\textureregistry.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\objects.h>
#include <hash_map>
#include <xhash>
#include <Render\gl\r_types.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <cassert>
#include <assert.h>
#include <Render\objects\compiledtext.h>
#include <gameSettings.h>
#include <stack>
#include <config.h>
#include <syncChecking.h>
#include <assist\typemagic.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <fileio\filepath.h>
#include <UserInterface\NewText.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\bitmapfont.h>
#include <debug\db.h>
#include <deque>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <savegamedef.h>
#include <UserInterface\ProgressBar.h>
#include <boost\detail\shared_count.hpp>
#include <Mathlib\mathutil.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\NewUIScreenManager.h>
#include <task.h>
#include <UserInterface\signals.h>
#include <Menus\LoadingScreenRenderer.h>
#include <wchar.h>
#include <region.h>
#include <luaconfig\luabinding.h>
#include <prim.h>
#include <luaconfig\luaconfig.h>
#include <Render\gl\r_defines.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const *kLoadingScreenName; // 0x83A190
extern char const *kBackgroundImgName; // 0x83A194
extern char const *kLoadingProgressName; // 0x83A198
extern char const *kModuleLabelName; // 0x83A19C
extern char const *kTitleLabelName1; // 0x83A1A0
extern char const *kTitleLabelName2; // 0x83A1A4
extern UI::ProgressBar *LoadingScreenRenderer::ms_progress; // 0x846CD4
extern UI::NewTextLabel *LoadingScreenRenderer::ms_txtLabel; // 0x846CD8
extern UI::NewTextLabel *LoadingScreenRenderer::ms_titleLabel1; // 0x846CDC
extern UI::NewTextLabel *LoadingScreenRenderer::ms_titleLabel2; // 0x846CE0

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_58CA20(char const *, wchar_t const *, wchar_t const *);
void LoadingScreenRenderer::ShowScreenWithTitle(char const *levelFilePath, wchar_t const *titleText1, wchar_t const *titleText2) // 0x58CA20
{
    mangled_assert("?ShowScreenWithTitle@LoadingScreenRenderer@@SGXPBDPB_W1@Z");
    todo("implement");
    _sub_58CA20(levelFilePath, titleText1, titleText2);
}

_extern void _sub_58C7AA(char const *);
void LoadingScreenRenderer::ShowScreen(char const *levelFilePath) // 0x58C7AA
{
    mangled_assert("?ShowScreen@LoadingScreenRenderer@@SGXPBD@Z");
    todo("implement");
    _sub_58C7AA(levelFilePath);
}

_extern void _sub_58C71B();
void LoadingScreenRenderer::HideScreen() // 0x58C71B
{
    mangled_assert("?HideScreen@LoadingScreenRenderer@@SGXXZ");
    todo("implement");
    _sub_58C71B();
}

_extern void _sub_58CAE7(__int32, __int32, wchar_t const *);
void LoadingScreenRenderer::UpdateCallback(__int32 currentCount, __int32 totalCount, wchar_t const *text) // 0x58CAE7
{
    mangled_assert("?UpdateCallback@LoadingScreenRenderer@@SGXHHPB_W@Z");
    todo("implement");
    _sub_58CAE7(currentCount, totalCount, text);
}

/* ---------- private code */
#endif
