#if 0
/* ---------- headers */

#include "decomp.h"
#include <gameSettings.h>
#include <assist\stlexsmallvector.h>
#include <config.h>
#include <xstring>
#include <syncChecking.h>
#include <xmemory0>
#include <pch.h>
#include <App\LuaGameSettings.h>
#include <GameOptions.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <fileio\md5.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <fileio\fileioexports.h>
#include <list>
#include <assist\fixedstring.h>
#include <boost\scoped_ptr.hpp>
#include <gamestructimpl.h>
#include <Badge.h>
#include <App\PlayerProfile.h>
#include <App\PlayerProfileGameOptions.h>
#include <KeyBindings.h>
#include <platform\keydefines.h>
#include <boost\config.hpp>
#include <boost\static_assert.hpp>
#include <luaconfig\luabinding.h>
#include <savegamedef.h>
#include <App\PlayerProfileMan.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luaconfig.h>
#include <wchar.h>
#include <lua.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaGameSettings :
    public LuaLibrary
{
public:
    LuaGameSettings(`anonymous-namespace'::LuaGameSettings const &); /* compiler_generated() */
    LuaGameSettings();
    virtual ~LuaGameSettings() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaGameSettings &operator=(`anonymous-namespace'::LuaGameSettings const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaGameSettings) == 16, "Invalid `anonymous-namespace'::LuaGameSettings size");

typedef `anonymous-namespace'::LuaGameSettings ?A0x3aeca4e9::LuaGameSettings;

/* ---------- prototypes */


_static __int32 GetGameRubric();
_static char const *GetGameSettingAsString(char const *key);
_static float GetGameSettingAsNumber(char const *key);
_static void EnableBuildInBadges();

/* ---------- globals */

extern bool g_buildInBadges; // 0x8444E8
extern char const *LUALIB_GAMESETTINGS; // 0x836F24

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_500663(LuaBinding::ObjInternal0<int,LuaBinding::Functor0Free<int> > *const);
_inline LuaBinding::ObjInternal0<int,LuaBinding::Functor0Free<int> >::~ObjInternal0<int,LuaBinding::Functor0Free<int> >() // 0x500663
{
    mangled_assert("??1?$ObjInternal0@HV?$Functor0Free@H@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_500663(this);
}

_extern void _sub_500669(LuaBinding::ObjInternal1<char const *,float,LuaBinding::Functor1Free<char const *,float> > *const);
_inline LuaBinding::ObjInternal1<char const *,float,LuaBinding::Functor1Free<char const *,float> >::~ObjInternal1<char const *,float,LuaBinding::Functor1Free<char const *,float> >() // 0x500669
{
    mangled_assert("??1?$ObjInternal1@PBDMV?$Functor1Free@PBDM@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_500669(this);
}

_extern void _sub_50066F(LuaBinding::ObjInternal1<char const *,char const *,LuaBinding::Functor1Free<char const *,char const *> > *const);
_inline LuaBinding::ObjInternal1<char const *,char const *,LuaBinding::Functor1Free<char const *,char const *> >::~ObjInternal1<char const *,char const *,LuaBinding::Functor1Free<char const *,char const *> >() // 0x50066F
{
    mangled_assert("??1?$ObjInternal1@PBDPBDV?$Functor1Free@PBDPBD@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_50066F(this);
}

/* ---------- private code */

_extern __int32 _sub_50088E();
_static __int32 GetGameRubric() // 0x50088E
{
    mangled_assert("GetGameRubric");
    todo("implement");
    __int32 __result = _sub_50088E();
    return __result;
}

_extern char const *_sub_5008C8(char const *);
_static char const *GetGameSettingAsString(char const *key) // 0x5008C8
{
    mangled_assert("GetGameSettingAsString");
    todo("implement");
    char const * __result = _sub_5008C8(key);
    return __result;
}

_extern float _sub_50089A(char const *);
_static float GetGameSettingAsNumber(char const *key) // 0x50089A
{
    mangled_assert("GetGameSettingAsNumber");
    todo("implement");
    float __result = _sub_50089A(key);
    return __result;
}

_extern void _sub_500886();
_static void EnableBuildInBadges() // 0x500886
{
    mangled_assert("EnableBuildInBadges");
    todo("implement");
    _sub_500886();
}
#endif
