#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <region.h>
#include <prim.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <App\AppObj.h>
#include <platform\appinterface.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <App\PlayerProfileGameOptions.h>
#include <platform\cmdline.h>
#include <KeyBindings.h>
#include <platform\keydefines.h>
#include <assist\fileobj.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <SquadronList.h>
#include <LevelManager.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <App\CampaignMan.h>
#include <fileio\md5.h>
#include <util\statmonitor.h>
#include <xutility>
#include <util\utilexports.h>
#include <utility>
#include <iosfwd>
#include <platform\timer.h>
#include <vector>
#include <platform\platformexports.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <list>
#include <campaign.h>
#include <assist\fixedstring.h>
#include <scripting.h>
#include <recorder.h>
#include <UserInterface\uitypes.h>
#include <Mathlib\vector3.h>
#include <scriptaccess.h>
#include <orders.h>
#include <platform\inputinterface.h>
#include <Mathlib\vector4.h>
#include <scripttypedef.h>
#include <orders_base.h>
#include <gameSettings.h>
#include <sobid.h>
#include <syncChecking.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <localizer\localizer.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Menus\MenuSupport.h>
#include <luaconfig\luabinding.h>
#include <UserInterface\signals.h>
#include <GameOptions.h>
#include <boost\cstdint.hpp>
#include <boost\config.hpp>
#include <commandtype.h>
#include <savegame.h>
#include <assist\typemagic.h>
#include <gamemsg.h>
#include <debug\db.h>
#include <deque>
#include <GameObj.h>
#include <feFlow.h>
#include <config.h>
#include <UserInterface\NewUIScreenManager.h>
#include <luaconfig\luaconfig.h>
#include <task.h>
#include <util\colour.h>
#include <boost\shared_ptr.hpp>
#include <hash_map>
#include <lua.h>
#include <stack>
#include <sobtypes.h>
#include <xhash>
#include <gamestructimpl.h>
#include <savegamedef.h>
#include <Badge.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <FrontEnd\ScriptedFE\ScriptedFE.h>
#include <FrontEnd\frontend.h>
#include <wchar.h>
#include <Mathlib\mathutil.h>
#include <Race.h>
#include <GameRulesLibrary.h>
#include <boost\static_assert.hpp>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern ScriptedFE *s_instance; // 0x843B3C
}

/* ---------- public code */

_extern _sub_46B500(FrontEnd *const);
_inline FrontEnd::FrontEnd() // 0x46B500
{
    mangled_assert("??0FrontEnd@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B500(this);
}

_extern void _sub_46CB8F(char const *);
void ScriptedFE::startup(char const *scriptfile) // 0x46CB8F
{
    mangled_assert("?startup@ScriptedFE@@SGXPBD@Z");
    todo("implement");
    _sub_46CB8F(scriptfile);
}

_extern void _sub_46CB5C();
void ScriptedFE::shutdown() // 0x46CB5C
{
    mangled_assert("?shutdown@ScriptedFE@@SGXXZ");
    todo("implement");
    _sub_46CB5C();
}

_extern ScriptedFE *_sub_46CA86();
ScriptedFE *ScriptedFE::i() // 0x46CA86
{
    mangled_assert("?i@ScriptedFE@@SGPAV1@XZ");
    todo("implement");
    ScriptedFE * __result = _sub_46CA86();
    return __result;
}

_extern _sub_46B509(ScriptedFE *const, char const *);
ScriptedFE::ScriptedFE(char const *) // 0x46B509
{
    mangled_assert("??0ScriptedFE@@AAE@PBD@Z");
    todo("implement");
    _sub_46B509(this, arg);
}

_extern void _sub_46B59F(LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,ScriptedFE> > *const);
_inline LuaBinding::ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,ScriptedFE> >::~ObjInternal0<unsigned int,LuaBinding::Functor0MemberConst<unsigned int,ScriptedFE> >() // 0x46B59F
{
    mangled_assert("??1?$ObjInternal0@IV?$Functor0MemberConst@IVScriptedFE@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B59F(this);
}

_extern void _sub_46B5A5(LuaBinding::ObjInternal1<unsigned int,char const *,LuaBinding::Functor1MemberConst<unsigned int,char const *,ScriptedFE> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,char const *,LuaBinding::Functor1MemberConst<unsigned int,char const *,ScriptedFE> >::~ObjInternal1<unsigned int,char const *,LuaBinding::Functor1MemberConst<unsigned int,char const *,ScriptedFE> >() // 0x46B5A5
{
    mangled_assert("??1?$ObjInternal1@IPBDV?$Functor1MemberConst@IPBDVScriptedFE@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B5A5(this);
}

_extern void _sub_46B5AB(LuaBinding::ObjInternal1<unsigned int,void,LuaBinding::Functor1MemberNonConst<unsigned int,void,ScriptedFE> > *const);
_inline LuaBinding::ObjInternal1<unsigned int,void,LuaBinding::Functor1MemberNonConst<unsigned int,void,ScriptedFE> >::~ObjInternal1<unsigned int,void,LuaBinding::Functor1MemberNonConst<unsigned int,void,ScriptedFE> >() // 0x46B5AB
{
    mangled_assert("??1?$ObjInternal1@IXV?$Functor1MemberNonConst@IXVScriptedFE@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B5AB(this);
}

_extern void _sub_46B5B1(LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,ScriptedFE> > *const);
_inline LuaBinding::ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,ScriptedFE> >::~ObjInternal1<char const *,void,LuaBinding::Functor1MemberNonConst<char const *,void,ScriptedFE> >() // 0x46B5B1
{
    mangled_assert("??1?$ObjInternal1@PBDXV?$Functor1MemberNonConst@PBDXVScriptedFE@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B5B1(this);
}

_extern void _sub_46B5B7(LuaBinding::ObjInternal2<unsigned int,int,void,LuaBinding::Functor2MemberNonConst<unsigned int,int,void,ScriptedFE> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,int,void,LuaBinding::Functor2MemberNonConst<unsigned int,int,void,ScriptedFE> >::~ObjInternal2<unsigned int,int,void,LuaBinding::Functor2MemberNonConst<unsigned int,int,void,ScriptedFE> >() // 0x46B5B7
{
    mangled_assert("??1?$ObjInternal2@IHXV?$Functor2MemberNonConst@IHXVScriptedFE@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B5B7(this);
}

_extern void _sub_46B5BD(LuaBinding::ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,void,ScriptedFE> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,void,ScriptedFE> >::~ObjInternal2<unsigned int,unsigned int,void,LuaBinding::Functor2MemberNonConst<unsigned int,unsigned int,void,ScriptedFE> >() // 0x46B5BD
{
    mangled_assert("??1?$ObjInternal2@IIXV?$Functor2MemberNonConst@IIXVScriptedFE@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B5BD(this);
}

_extern void _sub_46B5F7(ScriptedFE *const);
ScriptedFE::~ScriptedFE() // 0x46B5F7
{
    mangled_assert("??1ScriptedFE@@EAE@XZ");
    todo("implement");
    _sub_46B5F7(this);
}

_extern void _sub_46B5C3(LuaBinding::ObjInternal2<unsigned int,char const *,void,LuaBinding::Functor2MemberNonConst<unsigned int,char const *,void,ScriptedFE> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,char const *,void,LuaBinding::Functor2MemberNonConst<unsigned int,char const *,void,ScriptedFE> >::~ObjInternal2<unsigned int,char const *,void,LuaBinding::Functor2MemberNonConst<unsigned int,char const *,void,ScriptedFE> >() // 0x46B5C3
{
    mangled_assert("??1?$ObjInternal2@IPBDXV?$Functor2MemberNonConst@IPBDXVScriptedFE@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B5C3(this);
}

_extern void _sub_46B5C9(LuaBinding::ObjInternal2<char const *,int,void,LuaBinding::Functor2MemberNonConst<char const *,int,void,ScriptedFE> > *const);
_inline LuaBinding::ObjInternal2<char const *,int,void,LuaBinding::Functor2MemberNonConst<char const *,int,void,ScriptedFE> >::~ObjInternal2<char const *,int,void,LuaBinding::Functor2MemberNonConst<char const *,int,void,ScriptedFE> >() // 0x46B5C9
{
    mangled_assert("??1?$ObjInternal2@PBDHXV?$Functor2MemberNonConst@PBDHXVScriptedFE@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B5C9(this);
}

_extern void _sub_46B5CF(LuaBinding::ObjInternal2<char const *,char const *,void,LuaBinding::Functor2MemberNonConst<char const *,char const *,void,ScriptedFE> > *const);
_inline LuaBinding::ObjInternal2<char const *,char const *,void,LuaBinding::Functor2MemberNonConst<char const *,char const *,void,ScriptedFE> >::~ObjInternal2<char const *,char const *,void,LuaBinding::Functor2MemberNonConst<char const *,char const *,void,ScriptedFE> >() // 0x46B5CF
{
    mangled_assert("??1?$ObjInternal2@PBDPBDXV?$Functor2MemberNonConst@PBDPBDXVScriptedFE@@@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_46B5CF(this);
}

_extern bool _sub_46CA8C();
bool ScriptedFE::isActive() // 0x46CA8C
{
    mangled_assert("?isActive@ScriptedFE@@SG_NXZ");
    todo("implement");
    bool __result = _sub_46CA8C();
    return __result;
}

_extern void _sub_46C7DE(ScriptedFE *const, FrontEnd::FEStartupCode);
void ScriptedFE::StartFrontEnd(FrontEnd::FEStartupCode) // 0x46C7DE
{
    mangled_assert("?StartFrontEnd@ScriptedFE@@UAEXW4FEStartupCode@FrontEnd@@@Z");
    todo("implement");
    _sub_46C7DE(this, arg);
}

_extern void _sub_46C7D1(ScriptedFE *const);
void ScriptedFE::ShutdownFrontEnd() // 0x46C7D1
{
    mangled_assert("?ShutdownFrontEnd@ScriptedFE@@UAEXXZ");
    todo("implement");
    _sub_46C7D1(this);
}

_extern bool _sub_46C406(ScriptedFE *const);
bool ScriptedFE::OnBefore() // 0x46C406
{
    mangled_assert("?OnBefore@ScriptedFE@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_46C406(this);
    return __result;
}

_extern bool _sub_46C488(ScriptedFE *const);
bool ScriptedFE::OnConnect() // 0x46C488
{
    mangled_assert("?OnConnect@ScriptedFE@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_46C488(this);
    return __result;
}

_extern bool _sub_46C3A0(ScriptedFE *const);
bool ScriptedFE::OnAfter() // 0x46C3A0
{
    mangled_assert("?OnAfter@ScriptedFE@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_46C3A0(this);
    return __result;
}

_extern void _sub_46BC77(ScriptedFE *const);
void ScriptedFE::GameStart() // 0x46BC77
{
    mangled_assert("?GameStart@ScriptedFE@@AAEXXZ");
    todo("implement");
    _sub_46BC77(this);
}

_extern void _sub_46C539(ScriptedFE *const);
void ScriptedFE::Quit() // 0x46C539
{
    mangled_assert("?Quit@ScriptedFE@@AAEXXZ");
    todo("implement");
    _sub_46C539(this);
}

_extern bool _sub_46C2F5(ScriptedFE *const);
bool ScriptedFE::Initialize() // 0x46C2F5
{
    mangled_assert("?Initialize@ScriptedFE@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_46C2F5(this);
    return __result;
}

_extern bool _sub_46C2D9(ScriptedFE *const);
bool ScriptedFE::InitScenarios() // 0x46C2D9
{
    mangled_assert("?InitScenarios@ScriptedFE@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_46C2D9(this);
    return __result;
}

_extern bool _sub_46BCDD(ScriptedFE *const);
bool ScriptedFE::InitLua() // 0x46BCDD
{
    mangled_assert("?InitLua@ScriptedFE@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_46BCDD(this);
    return __result;
}

_extern unsigned __int32 _sub_46BCA3(ScriptedFE const *const);
unsigned __int32 ScriptedFE::GetMPScenarioCount() const // 0x46BCA3
{
    mangled_assert("?GetMPScenarioCount@ScriptedFE@@ABEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46BCA3(this);
    return __result;
}

_extern char const *_sub_46BCB0(ScriptedFE const *const, unsigned __int32);
char const *ScriptedFE::GetMPScenarioName(unsigned __int32) const // 0x46BCB0
{
    mangled_assert("?GetMPScenarioName@ScriptedFE@@ABEPBDI@Z");
    todo("implement");
    char const * __result = _sub_46BCB0(this, arg);
    return __result;
}

_extern void _sub_46C773(ScriptedFE *const, char const *);
void ScriptedFE::SetSkirmishLevel(char const *) // 0x46C773
{
    mangled_assert("?SetSkirmishLevel@ScriptedFE@@AAEXPBD@Z");
    todo("implement");
    _sub_46C773(this, arg);
}

_extern void _sub_46C548(ScriptedFE *const, char const *, char const *);
void ScriptedFE::SetCampaignLevel(char const *, char const *) // 0x46C548
{
    mangled_assert("?SetCampaignLevel@ScriptedFE@@AAEXPBD0@Z");
    todo("implement");
    _sub_46C548(this, arg, arg);
}

_extern void _sub_46C5AB(ScriptedFE *const, char const *, __int32);
void ScriptedFE::SetCampaignLevelIndex(char const *, __int32) // 0x46C5AB
{
    mangled_assert("?SetCampaignLevelIndex@ScriptedFE@@AAEXPBDH@Z");
    todo("implement");
    _sub_46C5AB(this, arg, arg);
}

_extern void _sub_46C7AE(ScriptedFE *const, char const *);
void ScriptedFE::SetSkirmishLoad(char const *) // 0x46C7AE
{
    mangled_assert("?SetSkirmishLoad@ScriptedFE@@AAEXPBD@Z");
    todo("implement");
    _sub_46C7AE(this, arg);
}

_extern void _sub_46C60E(ScriptedFE *const, char const *);
void ScriptedFE::SetCampaignLoad(char const *) // 0x46C60E
{
    mangled_assert("?SetCampaignLoad@ScriptedFE@@AAEXPBD@Z");
    todo("implement");
    _sub_46C60E(this, arg);
}

_extern void _sub_46C75E(ScriptedFE *const, char const *);
void ScriptedFE::SetRecordedGame(char const *) // 0x46C75E
{
    mangled_assert("?SetRecordedGame@ScriptedFE@@AAEXPBD@Z");
    todo("implement");
    _sub_46C75E(this, arg);
}

_extern unsigned __int32 _sub_46BCD1(ScriptedFE const *const);
unsigned __int32 ScriptedFE::GetPlayerLocalIndex() const // 0x46BCD1
{
    mangled_assert("?GetPlayerLocalIndex@ScriptedFE@@ABEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46BCD1(this);
    return __result;
}

_extern unsigned __int32 _sub_46BCC5(ScriptedFE const *const);
unsigned __int32 ScriptedFE::GetPlayerCount() const // 0x46BCC5
{
    mangled_assert("?GetPlayerCount@ScriptedFE@@ABEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_46BCC5(this);
    return __result;
}

_extern void _sub_46C742(ScriptedFE *const, unsigned __int32);
void ScriptedFE::SetPlayerToHuman(unsigned __int32) // 0x46C742
{
    mangled_assert("?SetPlayerToHuman@ScriptedFE@@AAEXI@Z");
    todo("implement");
    _sub_46C742(this, arg);
}

_extern void _sub_46C712(ScriptedFE *const, unsigned __int32);
void ScriptedFE::SetPlayerToAI(unsigned __int32) // 0x46C712
{
    mangled_assert("?SetPlayerToAI@ScriptedFE@@AAEXI@Z");
    todo("implement");
    _sub_46C712(this, arg);
}

_extern void _sub_46C6F3(ScriptedFE *const, unsigned __int32, __int32);
void ScriptedFE::SetPlayerTeam(unsigned __int32, __int32) // 0x46C6F3
{
    mangled_assert("?SetPlayerTeam@ScriptedFE@@AAEXIH@Z");
    todo("implement");
    _sub_46C6F3(this, arg, arg);
}

_extern void _sub_46C677(ScriptedFE *const, unsigned __int32, __int32);
void ScriptedFE::SetPlayerColour(unsigned __int32, __int32) // 0x46C677
{
    mangled_assert("?SetPlayerColour@ScriptedFE@@AAEXIH@Z");
    todo("implement");
    _sub_46C677(this, arg, arg);
}

_extern void _sub_46C67F(ScriptedFE *const, unsigned __int32, char const *);
void ScriptedFE::SetPlayerName(unsigned __int32, char const *) // 0x46C67F
{
    mangled_assert("?SetPlayerName@ScriptedFE@@AAEXIPBD@Z");
    todo("implement");
    _sub_46C67F(this, arg, arg);
}

_extern void _sub_46C6CC(ScriptedFE *const, unsigned __int32, unsigned __int32);
void ScriptedFE::SetPlayerRaceID(unsigned __int32, unsigned __int32) // 0x46C6CC
{
    mangled_assert("?SetPlayerRaceID@ScriptedFE@@AAEXII@Z");
    todo("implement");
    _sub_46C6CC(this, arg, arg);
}

_extern void _sub_46C6EB(ScriptedFE *const, unsigned __int32);
void ScriptedFE::SetPlayerReady(unsigned __int32) // 0x46C6EB
{
    mangled_assert("?SetPlayerReady@ScriptedFE@@AAEXI@Z");
    todo("implement");
    _sub_46C6EB(this, arg);
}

_extern void _sub_46C643(ScriptedFE *const, char const *);
void ScriptedFE::SetGameType(char const *) // 0x46C643
{
    mangled_assert("?SetGameType@ScriptedFE@@AAEXPBD@Z");
    todo("implement");
    _sub_46C643(this, arg);
}

_extern void _sub_46C62C(ScriptedFE *const, char const *, char const *);
void ScriptedFE::SetGameOption(char const *, char const *) // 0x46C62C
{
    mangled_assert("?SetGameOption@ScriptedFE@@AAEXPBD0@Z");
    todo("implement");
    _sub_46C62C(this, arg, arg);
}

/* ---------- private code */
#endif
