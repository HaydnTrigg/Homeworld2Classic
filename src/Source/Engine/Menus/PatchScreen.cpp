#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <Mathlib\matrix4.h>
#include <hash_map>
#include <xmemory0>
#include <pch.h>
#include <xhash>
#include <memory\memorylib.h>
#include <luaconfig\luabinding.h>
#include <UserInterface\NewUIScreenManager.h>
#include <crtdefs.h>
#include <Render\objects\compiledtext.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <UserInterface\NewTextLabel.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\NewText.h>
#include <App\AppObj.h>
#include <Render\objects\fontsystem.h>
#include <platform\appinterface.h>
#include <Render\objects\bitmapfont.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <compiler\compilerconfig.h>
#include <list>
#include <region.h>
#include <Render\objects\textureproxy.h>
#include <App\GameSpyID.h>
#include <prim.h>
#include <platform\osdef.h>
#include <Mathlib\vector3.h>
#include <platform\sysutilinterface.h>
#include <Mathlib\mathutil.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <UserInterface\SharedGraphicFactory.h>
#include <Menus\PatchInfoDialog.h>
#include <UserInterface\Graphic.h>
#include <boost\scoped_ptr.hpp>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <platform\maininterface.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <platform\sysinputinterface.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\lotypes.h>
#include <boost\cstdint.hpp>
#include <cassert>
#include <assert.h>
#include <UserInterface\StringTable.h>
#include <Render\gl\r_types.h>
#include <gslobby\gspatcher.h>
#include <gslobby\gslobbyexport.h>
#include <Menus\MessageUtil.h>
#include <KeyBindings.h>
#include <Menus\WaitMessage.h>
#include <config.h>
#include <assist\typemagic.h>
#include <gslobby\gshttp.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Menus\MenuSupport.h>
#include <Render\objects\cliprect.h>
#include <assist\faststring.h>
#include <platform\keydefines.h>
#include <fileio\filepath.h>
#include <debug\db.h>
#include <UserInterface\NewButton.h>
#include <luaconfig\luaconfig.h>
#include <localizer\localizer.h>
#include <deque>
#include <lua.h>
#include <UserInterface\NewFrame.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <platform\platformexports.h>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <UserInterface\ListBoxItem.h>
#include <boost\detail\lwm_win32.hpp>
#include <UserInterface\TextButton.h>
#include <UserInterface\ProgressBar.h>
#include <Menus\PatchScreen.h>
#include <UserInterface\NewUIScreen.h>
#include <wchar.h>
#include <task.h>
#include <UserInterface\StyleSheet.h>
#include <stack>
#include <UserInterface\pch.h>
#include <UserInterface\NewListBox.h>

/* ---------- constants */

enum `anonymous-namespace'::PatchState
{
    PS_Invalid = 0,
    PS_CheckingForPatch,
    PS_PatchAvailable,
    PS_PatchUnavailable,
    PS_DownloadGettingSize,
    PS_DownloadGettingMirrors,
    PS_DownloadStarting,
    PS_DownloadStartFailed,
    PS_DownloadSuccess,
    PS_DownloadFailure,
    PS_DownloadCancelled,
};

enum `anonymous-namespace'::LocalizedMessages
{
    LM_CheckingForPatch = 0,
    LM_PatchAvailable,
    LM_PatchUnavailable,
    LM_ChooseLocation,
    LM_Downloading,
    LM_DownloadingPatchInfo,
    LM_DeterminingPatchSize,
    LM_DownloadStartFailed,
    LM_DownloadComplete,
    LM_Cancelled,
    LM_CouldNotStartOp,
    LM_GettingExtraInfo,
    LM_ErrorMirrorList,
    LM_NoMirrors,
    LM_BadPatchURL,
    LM_Number,
};

enum `anonymous-namespace'::PatchAction
{
    ACTION_Invalid = 0,
    ACTION_MirrorList,
    ACTION_DownloadExecute,
    ACTION_Execute,
};

/* ---------- definitions */

typedef void (*ActivateAppCallback)(unsigned __int32);
typedef std::vector<`anonymous namespace'::PatchInfo,std::allocator<`anonymous namespace'::PatchInfo> > PatchInfoCont;
typedef `anonymous-namespace'::LocalizedMessages ?A0x33620a92::LocalizedMessages;
typedef `anonymous-namespace'::PatchState ?A0x33620a92::PatchState;
typedef `anonymous-namespace'::PatchInfo ?A0x33620a92::PatchInfo;
typedef `anonymous-namespace'::PatchAction ?A0x33620a92::PatchAction;

struct `anonymous-namespace'::PatchInfo
{
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_url; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_localAlias; // 0x30
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_localFullpath; // 0x48
    unsigned __int32 m_patchSize; // 0x60
    PatchInfo(`anonymous-namespace'::PatchInfo const &); /* compiler_generated() */
    PatchInfo(); /* compiler_generated() */
    ~PatchInfo(); /* compiler_generated() */
    `anonymous-namespace'::PatchInfo &operator=(`anonymous-namespace'::PatchInfo const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::PatchInfo) == 100, "Invalid `anonymous-namespace'::PatchInfo size");

class UI::DownloadPatch :
    public GSHTTP
{
public:
    DownloadPatch(UI::DownloadPatch const &); /* compiler_generated() */
    _inline DownloadPatch(UI::PatchScreen *, char const *, char const *);
    virtual _inline void OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32) override;
    virtual _inline void OnDownloadComplete(GSHTTP::CompletionResult) override;
private:
    UI::PatchScreen *m_screen; // 0x8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_url; // 0xC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_localFullPath; // 0x24
public:
    _inline ~DownloadPatch(); /* compiler_generated() */
    UI::DownloadPatch &operator=(UI::DownloadPatch const &); /* compiler_generated() */
};
static_assert(sizeof(UI::DownloadPatch) == 60, "Invalid UI::DownloadPatch size");

class UI::ExtraInfoGetFileSize :
    public GSHTTP
{
public:
    ExtraInfoGetFileSize(UI::ExtraInfoGetFileSize const &); /* compiler_generated() */
    _inline ExtraInfoGetFileSize(UI::PatchScreen *, char const *, unsigned __int32);
    virtual _inline void OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32) override;
    virtual _inline void OnDownloadComplete(GSHTTP::CompletionResult) override;
private:
    UI::PatchScreen *m_screen; // 0x8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_url; // 0xC
    unsigned __int32 m_index; // 0x24
    unsigned __int32 m_fileSize; // 0x28
public:
    _inline ~ExtraInfoGetFileSize(); /* compiler_generated() */
    UI::ExtraInfoGetFileSize &operator=(UI::ExtraInfoGetFileSize const &); /* compiler_generated() */
};
static_assert(sizeof(UI::ExtraInfoGetFileSize) == 44, "Invalid UI::ExtraInfoGetFileSize size");

class UI::DownloadMirrorList :
    public GSHTTP
{
public:
    DownloadMirrorList(UI::DownloadMirrorList const &); /* compiler_generated() */
    _inline DownloadMirrorList(UI::PatchScreen *, char const *, char const *);
    virtual _inline void OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32) override;
    virtual _inline void OnDownloadComplete(GSHTTP::CompletionResult) override;
private:
    UI::PatchScreen *m_screen; // 0x8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_url; // 0xC
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_localAlias; // 0x24
public:
    _inline ~DownloadMirrorList(); /* compiler_generated() */
    UI::DownloadMirrorList &operator=(UI::DownloadMirrorList const &); /* compiler_generated() */
};
static_assert(sizeof(UI::DownloadMirrorList) == 60, "Invalid UI::DownloadMirrorList size");

/* ---------- prototypes */


_static void UI::GetLocalPatchLocation(char const *url, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &localAlias, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &localFullPath);
_static void UI::GetPatchExtension(char const *url, char *extension, unsigned __int32 extSize);
_static bool UI::GetStringResultFromExtension(LuaConfig &lc, char const *extension, char const *key, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &output);
_static char const *UI::GetTieDllName();
_static void UI::OnPatchApply_No(UI::InterfaceElement *e);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *k_PatchInstructions; // 0x83A5B4
}

/* ---------- public code */

_extern _sub_59CEEC(GSPatcher::CheckCallback *const);
_inline GSPatcher::CheckCallback::CheckCallback() // 0x59CEEC
{
    mangled_assert("??0CheckCallback@GSPatcher@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_59CEEC(this);
}

_extern _sub_59CEF5(UI::PatchScreen::Data *const);
_inline UI::PatchScreen::Data::Data() // 0x59CEF5
{
    mangled_assert("??0Data@PatchScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_59CEF5(this);
}

_extern void _sub_59F3F8(UI::PatchScreen::Data *const, wchar_t const *);
void UI::PatchScreen::Data::PrintAction(wchar_t const *) // 0x59F3F8
{
    mangled_assert("?PrintAction@Data@PatchScreen@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_59F3F8(this, arg);
}

_extern void _sub_59F409(UI::PatchScreen::Data *const, wchar_t const *);
void UI::PatchScreen::Data::PrintProgress(wchar_t const *) // 0x59F409
{
    mangled_assert("?PrintProgress@Data@PatchScreen@UI@@QAEXPB_W@Z");
    todo("implement");
    _sub_59F409(this, arg);
}

_extern void _sub_59DFAA(UI::PatchScreen::Data *const, bool, bool, bool, bool, bool);
void UI::PatchScreen::Data::EnableButtons(bool, bool, bool, bool, bool) // 0x59DFAA
{
    mangled_assert("?EnableButtons@Data@PatchScreen@UI@@QAEX_N0000@Z");
    todo("implement");
    _sub_59DFAA(this, arg, arg, arg, arg, arg);
}

_extern _sub_59D013(UI::DownloadPatch *const, UI::PatchScreen *, char const *, char const *);
_inline UI::DownloadPatch::DownloadPatch(UI::PatchScreen *, char const *, char const *) // 0x59D013
{
    mangled_assert("??0DownloadPatch@UI@@QAE@PAVPatchScreen@1@PBD1@Z");
    todo("implement");
    _sub_59D013(this, arg, arg, arg);
}

_extern void _sub_59ED68(UI::DownloadPatch *const, GSHTTP::DownloadStatus, __int32, __int32);
_inline void UI::DownloadPatch::OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32) // 0x59ED68
{
    mangled_assert("?OnDownloadProgress@DownloadPatch@UI@@UAEXW4DownloadStatus@GSHTTP@@HH@Z");
    todo("implement");
    _sub_59ED68(this, arg, arg, arg);
}

_extern void _sub_59EAD2(UI::DownloadPatch *const, GSHTTP::CompletionResult);
_inline void UI::DownloadPatch::OnDownloadComplete(GSHTTP::CompletionResult) // 0x59EAD2
{
    mangled_assert("?OnDownloadComplete@DownloadPatch@UI@@UAEXW4CompletionResult@GSHTTP@@@Z");
    todo("implement");
    _sub_59EAD2(this, arg);
}

_extern _sub_59D064(UI::ExtraInfoGetFileSize *const, UI::PatchScreen *, char const *, unsigned __int32);
_inline UI::ExtraInfoGetFileSize::ExtraInfoGetFileSize(UI::PatchScreen *, char const *, unsigned __int32) // 0x59D064
{
    mangled_assert("??0ExtraInfoGetFileSize@UI@@QAE@PAVPatchScreen@1@PBDI@Z");
    todo("implement");
    _sub_59D064(this, arg, arg, arg);
}

_extern _sub_59D0B0(GSHTTP *const, GSHTTP const &);
_inline GSHTTP::GSHTTP(GSHTTP const &) // 0x59D0B0
{
    mangled_assert("??0GSHTTP@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_59D0B0(this, arg);
}

_extern void _sub_59ED96(UI::ExtraInfoGetFileSize *const, GSHTTP::DownloadStatus, __int32, __int32);
_inline void UI::ExtraInfoGetFileSize::OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32) // 0x59ED96
{
    mangled_assert("?OnDownloadProgress@ExtraInfoGetFileSize@UI@@UAEXW4DownloadStatus@GSHTTP@@HH@Z");
    todo("implement");
    _sub_59ED96(this, arg, arg, arg);
}

_extern void _sub_59EAF9(UI::ExtraInfoGetFileSize *const, GSHTTP::CompletionResult);
_inline void UI::ExtraInfoGetFileSize::OnDownloadComplete(GSHTTP::CompletionResult) // 0x59EAF9
{
    mangled_assert("?OnDownloadComplete@ExtraInfoGetFileSize@UI@@UAEXW4CompletionResult@GSHTTP@@@Z");
    todo("implement");
    _sub_59EAF9(this, arg);
}

_extern _sub_59CFC2(UI::DownloadMirrorList *const, UI::PatchScreen *, char const *, char const *);
_inline UI::DownloadMirrorList::DownloadMirrorList(UI::PatchScreen *, char const *, char const *) // 0x59CFC2
{
    mangled_assert("??0DownloadMirrorList@UI@@QAE@PAVPatchScreen@1@PBD1@Z");
    todo("implement");
    _sub_59CFC2(this, arg, arg, arg);
}

_extern void _sub_59ED3A(UI::DownloadMirrorList *const, GSHTTP::DownloadStatus, __int32, __int32);
_inline void UI::DownloadMirrorList::OnDownloadProgress(GSHTTP::DownloadStatus, __int32, __int32) // 0x59ED3A
{
    mangled_assert("?OnDownloadProgress@DownloadMirrorList@UI@@UAEXW4DownloadStatus@GSHTTP@@HH@Z");
    todo("implement");
    _sub_59ED3A(this, arg, arg, arg);
}

_extern void _sub_59EAAB(UI::DownloadMirrorList *const, GSHTTP::CompletionResult);
_inline void UI::DownloadMirrorList::OnDownloadComplete(GSHTTP::CompletionResult) // 0x59EAAB
{
    mangled_assert("?OnDownloadComplete@DownloadMirrorList@UI@@UAEXW4CompletionResult@GSHTTP@@@Z");
    todo("implement");
    _sub_59EAAB(this, arg);
}

_extern _sub_59D153(UI::PatchScreen *const, char const *);
UI::PatchScreen::PatchScreen(char const *) // 0x59D153
{
    mangled_assert("??0PatchScreen@UI@@QAE@PBD@Z");
    todo("implement");
    _sub_59D153(this, arg);
}

_extern void _sub_59D233(UI::PatchScreen::Data *const);
_inline UI::PatchScreen::Data::~Data() // 0x59D233
{
    mangled_assert("??1Data@PatchScreen@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_59D233(this);
}

_extern void _sub_59D2A6(UI::DownloadMirrorList *const);
_inline UI::DownloadMirrorList::~DownloadMirrorList() // 0x59D2A6
{
    mangled_assert("??1DownloadMirrorList@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_59D2A6(this);
}

_extern void _sub_59D2C1(UI::DownloadPatch *const);
_inline UI::DownloadPatch::~DownloadPatch() // 0x59D2C1
{
    mangled_assert("??1DownloadPatch@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_59D2C1(this);
}

_extern void _sub_59D2DC(UI::ExtraInfoGetFileSize *const);
_inline UI::ExtraInfoGetFileSize::~ExtraInfoGetFileSize() // 0x59D2DC
{
    mangled_assert("??1ExtraInfoGetFileSize@UI@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_59D2DC(this);
}

_extern void _sub_59D312(UI::PatchScreen *const);
UI::PatchScreen::~PatchScreen() // 0x59D312
{
    mangled_assert("??1PatchScreen@UI@@UAE@XZ");
    todo("implement");
    _sub_59D312(this);
}

_extern GSHTTP &_sub_59D3C6(GSHTTP *const, GSHTTP const &);
_inline GSHTTP &GSHTTP::operator=(GSHTTP const &) // 0x59D3C6
{
    mangled_assert("??4GSHTTP@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    GSHTTP & __result = _sub_59D3C6(this, arg);
    return __result;
}

_extern void _sub_59F4CA(UI::PatchScreen *const, char const *);
void UI::PatchScreen::SetPreviousScreen(char const *) // 0x59F4CA
{
    mangled_assert("?SetPreviousScreen@PatchScreen@UI@@QAEXPBD@Z");
    todo("implement");
    _sub_59F4CA(this, arg);
}

_extern void _sub_59F213(UI::PatchScreen *const, LuaConfig &);
void UI::PatchScreen::OnPreLoadFile(LuaConfig &) // 0x59F213
{
    mangled_assert("?OnPreLoadFile@PatchScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_59F213(this, arg);
}

_extern void _sub_59EF50(UI::PatchScreen *const, LuaConfig &);
void UI::PatchScreen::OnLoad(LuaConfig &) // 0x59EF50
{
    mangled_assert("?OnLoad@PatchScreen@UI@@MAEXAAVLuaConfig@@@Z");
    todo("implement");
    _sub_59EF50(this, arg);
}

_extern void _sub_59F097(UI::PatchScreen *const);
void UI::PatchScreen::OnPostLoad() // 0x59F097
{
    mangled_assert("?OnPostLoad@PatchScreen@UI@@MAEXXZ");
    todo("implement");
    _sub_59F097(this);
}

_extern void _sub_59E8CA(UI::PatchScreen *const, bool);
void UI::PatchScreen::OnActivate(bool) // 0x59E8CA
{
    mangled_assert("?OnActivate@PatchScreen@UI@@MAEX_N@Z");
    todo("implement");
    _sub_59E8CA(this, arg);
}

_extern void _sub_59F4FE(UI::PatchScreen *const, unsigned __int32);
void UI::PatchScreen::Update(unsigned __int32) // 0x59F4FE
{
    mangled_assert("?Update@PatchScreen@UI@@UAEXI@Z");
    todo("implement");
    _sub_59F4FE(this, arg);
}

_extern void _sub_59F427(UI::PatchScreen *const, unsigned __int32);
void UI::PatchScreen::ProgressSetSize(unsigned __int32) // 0x59F427
{
    mangled_assert("?ProgressSetSize@PatchScreen@UI@@QAEXI@Z");
    todo("implement");
    _sub_59F427(this, arg);
}

_extern void _sub_59F41A(UI::PatchScreen *const, unsigned __int32);
void UI::PatchScreen::ProgressSetPosition(unsigned __int32) // 0x59F41A
{
    mangled_assert("?ProgressSetPosition@PatchScreen@UI@@QAEXI@Z");
    todo("implement");
    _sub_59F41A(this, arg);
}

_extern void _sub_59D580(UI::PatchScreen *const, char const *, char const *);
void UI::PatchScreen::AddDownloadLocation(char const *, char const *) // 0x59D580
{
    mangled_assert("?AddDownloadLocation@PatchScreen@UI@@AAEXPBD0@Z");
    todo("implement");
    _sub_59D580(this, arg, arg);
}

_extern void _sub_59D6EC(UI::PatchScreen *const);
void UI::PatchScreen::CreatePatcher() // 0x59D6EC
{
    mangled_assert("?CreatePatcher@PatchScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_59D6EC(this);
}

_extern void _sub_59D735(UI::PatchScreen *const);
void UI::PatchScreen::DestroyPatcher() // 0x59D735
{
    mangled_assert("?DestroyPatcher@PatchScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_59D735(this);
}

_extern unsigned __int32 _sub_59E397(UI::PatchScreen *const, char const *);
unsigned __int32 UI::PatchScreen::GetPatchType(char const *) // 0x59E397
{
    mangled_assert("?GetPatchType@PatchScreen@UI@@AAEIPBD@Z");
    todo("implement");
    unsigned __int32 __result = _sub_59E397(this, arg);
    return __result;
}

_extern void _sub_59F02E(GSPatcher::CheckCallback * const, bool, bool, char const *, __int32, char const *);
void UI::PatchScreen::OnPatchCheckComplete(bool, bool, char const *, __int32, char const *) // 0x59F02E
{
    mangled_assert("?OnPatchCheckComplete@PatchScreen@UI@@MAEX_N0PBDH1@Z");
    // __shifted(UI::PatchScreen, 412);
    todo("implement");
    _sub_59F02E(this, arg, arg, arg, arg, arg);
}

_extern void _sub_59E737(UI::PatchScreen *const, char const *);
void UI::PatchScreen::HandlePatchAvailable(char const *) // 0x59E737
{
    mangled_assert("?HandlePatchAvailable@PatchScreen@UI@@AAEXPBD@Z");
    todo("implement");
    _sub_59E737(this, arg);
}

_extern void _sub_59D6C9(UI::PatchScreen *const);
void UI::PatchScreen::ClearMirrors() // 0x59D6C9
{
    mangled_assert("?ClearMirrors@PatchScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_59D6C9(this);
}

_extern void _sub_59E78D(UI::PatchScreen *const, char const *);
void UI::PatchScreen::HandlePatchURL(char const *) // 0x59E78D
{
    mangled_assert("?HandlePatchURL@PatchScreen@UI@@AAEXPBD@Z");
    todo("implement");
    _sub_59E78D(this, arg);
}

_extern void _sub_59DE1B(UI::PatchScreen *const, char const *);
void UI::PatchScreen::DoGetPatchMirrors(char const *) // 0x59DE1B
{
    mangled_assert("?DoGetPatchMirrors@PatchScreen@UI@@AAEXPBD@Z");
    todo("implement");
    _sub_59DE1B(this, arg);
}

_extern void _sub_59D9ED(UI::PatchScreen *const);
void UI::PatchScreen::DoDownloadStart() // 0x59D9ED
{
    mangled_assert("?DoDownloadStart@PatchScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_59D9ED(this);
}

_extern void _sub_59D967(UI::PatchScreen *const);
void UI::PatchScreen::DoDownloadCancel() // 0x59D967
{
    mangled_assert("?DoDownloadCancel@PatchScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_59D967(this);
}

_extern void _sub_59D897(UI::PatchScreen *const);
void UI::PatchScreen::DoCheckForPatch() // 0x59D897
{
    mangled_assert("?DoCheckForPatch@PatchScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_59D897(this);
}

_extern void _sub_59DBEB(UI::PatchScreen *const, char const *, char const *);
void UI::PatchScreen::DoExecutePatch(char const *, char const *) // 0x59DBEB
{
    mangled_assert("?DoExecutePatch@PatchScreen@UI@@AAEXPBD0@Z");
    todo("implement");
    _sub_59DBEB(this, arg, arg);
}

_extern void _sub_59EA4F(UI::InterfaceElement *);
void UI::PatchScreen::OnCancelClicked(UI::InterfaceElement *sender) // 0x59EA4F
{
    mangled_assert("?OnCancelClicked@PatchScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59EA4F(sender);
}

_extern void _sub_59EA06(UI::InterfaceElement *);
void UI::PatchScreen::OnBackClicked(UI::InterfaceElement *sender) // 0x59EA06
{
    mangled_assert("?OnBackClicked@PatchScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59EA06(sender);
}

_extern void _sub_59E9C0(UI::InterfaceElement *);
void UI::PatchScreen::OnApplyClicked_Yes(UI::InterfaceElement *sender) // 0x59E9C0
{
    mangled_assert("?OnApplyClicked_Yes@PatchScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59E9C0(sender);
}

_extern void _sub_59E955(UI::InterfaceElement *);
void UI::PatchScreen::OnApplyClicked(UI::InterfaceElement *sender) // 0x59E955
{
    mangled_assert("?OnApplyClicked@PatchScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59E955(sender);
}

_extern void _sub_59EA7D(UI::InterfaceElement *);
void UI::PatchScreen::OnDownloadClicked(UI::InterfaceElement *sender) // 0x59EA7D
{
    mangled_assert("?OnDownloadClicked@PatchScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59EA7D(sender);
}

_extern void _sub_59EDA8(UI::InterfaceElement *);
void UI::PatchScreen::OnExtraInfoClicked(UI::InterfaceElement *sender) // 0x59EDA8
{
    mangled_assert("?OnExtraInfoClicked@PatchScreen@UI@@CGXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_59EDA8(sender);
}

_extern void _sub_59EB1D(UI::PatchScreen *const, unsigned __int32, char const *, char const *);
void UI::PatchScreen::OnDownloadMirrorListComplete(unsigned __int32, char const *, char const *) // 0x59EB1D
{
    mangled_assert("?OnDownloadMirrorListComplete@PatchScreen@UI@@QAEXIPBD0@Z");
    todo("implement");
    _sub_59EB1D(this, arg, arg, arg);
}

_extern void _sub_59EEC1(UI::PatchScreen *const, unsigned __int32, char const *, unsigned __int32, unsigned __int32);
void UI::PatchScreen::OnExtraInfoGetFileSizeComplete(unsigned __int32, char const *, unsigned __int32, unsigned __int32) // 0x59EEC1
{
    mangled_assert("?OnExtraInfoGetFileSizeComplete@PatchScreen@UI@@QAEXIPBDII@Z");
    todo("implement");
    _sub_59EEC1(this, arg, arg, arg, arg);
}

_extern void _sub_59D76C(UI::PatchScreen *const, char const *, char const *, char const *, unsigned __int32);
void UI::PatchScreen::DisplayExtraInfo(char const *, char const *, char const *, unsigned __int32) // 0x59D76C
{
    mangled_assert("?DisplayExtraInfo@PatchScreen@UI@@AAEXPBD00I@Z");
    todo("implement");
    _sub_59D76C(this, arg, arg, arg, arg);
}

_extern void _sub_59EBF9(UI::PatchScreen *const, unsigned __int32, char const *, char const *);
void UI::PatchScreen::OnDownloadPatchComplete(unsigned __int32, char const *, char const *) // 0x59EBF9
{
    mangled_assert("?OnDownloadPatchComplete@PatchScreen@UI@@QAEXIPBD0@Z");
    todo("implement");
    _sub_59EBF9(this, arg, arg, arg);
}

_extern void _sub_59E55C(UI::PatchScreen *const, char const *);
void UI::PatchScreen::HandleMirrorList(char const *) // 0x59E55C
{
    mangled_assert("?HandleMirrorList@PatchScreen@UI@@AAEXPBD@Z");
    todo("implement");
    _sub_59E55C(this, arg);
}

_extern void _sub_59F443(UI::PatchScreen *const);
void UI::PatchScreen::ReadyToChooseLocation() // 0x59F443
{
    mangled_assert("?ReadyToChooseLocation@PatchScreen@UI@@AAEXXZ");
    todo("implement");
    _sub_59F443(this);
}

/* ---------- private code */

_extern void _sub_59E19C(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
_static void UI::GetLocalPatchLocation(char const *url, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &localAlias, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &localFullPath) // 0x59E19C
{
    mangled_assert("UI::GetLocalPatchLocation");
    todo("implement");
    _sub_59E19C(url, localAlias, localFullPath);
}

_extern void _sub_59E2CE(char const *, char *, unsigned __int32);
_static void UI::GetPatchExtension(char const *url, char *extension, unsigned __int32 extSize) // 0x59E2CE
{
    mangled_assert("UI::GetPatchExtension");
    todo("implement");
    _sub_59E2CE(url, extension, extSize);
}

_extern bool _sub_59E433(LuaConfig &, char const *, char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
_static bool UI::GetStringResultFromExtension(LuaConfig &lc, char const *extension, char const *key, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &output) // 0x59E433
{
    mangled_assert("UI::GetStringResultFromExtension");
    todo("implement");
    bool __result = _sub_59E433(lc, extension, key, output);
    return __result;
}

_extern char const *_sub_59E556();
_static char const *UI::GetTieDllName() // 0x59E556
{
    mangled_assert("UI::GetTieDllName");
    todo("implement");
    char const * __result = _sub_59E556();
    return __result;
}

_extern void _sub_59F007(UI::InterfaceElement *);
_static void UI::OnPatchApply_No(UI::InterfaceElement *e) // 0x59F007
{
    mangled_assert("UI::OnPatchApply_No");
    todo("implement");
    _sub_59F007(e);
}
#endif
