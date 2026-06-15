#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Render\gl\r_defines.h>
#include <pch.h>
#include <Render\gl\glext.h>
#include <memory\memorylib.h>
#include <savegame.h>
#include <task.h>
#include <sobstatic.h>
#include <Collision\Primitives\sphere.h>
#include <Mathlib\matrix3.h>
#include <fileio\filepath.h>
#include <HyperspaceManager.h>
#include <new>
#include <SquadronList.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <lualib.h>
#include <utility>
#include <iosfwd>
#include <Universe.h>
#include <vector>
#include <Waypoint.h>
#include <platform\timer.h>
#include <fileio\bytestream.h>
#include <xmemory>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <scriptfunc.h>
#include <sctObjectLoad.h>
#include <weaponfiretypes.h>
#include <list>
#include <Collision\Primitives\obb.h>
#include <scripting.h>
#include <scriptaccess.h>
#include <Collision\BVH\octree.h>
#include <Mathlib\vector3.h>
#include <Collision\Collision.h>
#include <scripttypedef.h>
#include <Collision\BVH\span.h>
#include <Mathlib\vector4.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <map>
#include <Collision\intersect.h>
#include <lua.h>
#include <tolua.h>
#include <xtree>
#include <Collision\primitivesfwd.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>
#include <boost\cstdint.hpp>
#include <WeaponFire\WeaponFire.h>
#include <sob.h>
#include <SobZeroMassBody.h>
#include <NIS\NIS.h>
#include <sobid.h>
#include <sobzeromassbodystatic.h>
#include <Mathlib\quat.h>
#include <platform\namedinterface.h>
#include <assist\typemagic.h>
#include <init.h>
#include <platform\osdef.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <fog.h>
#include <seInterface2\SoundParams.h>
#include <SelTarg.h>
#include <Render\gl\types.h>
#include <savegamedata.h>
#include <prim.h>
#include <pathpoints.h>
#include <Mathlib\matvec.h>
#include <debug\db.h>
#include <deque>
#include <Render\gl\lotypes.h>
#include <fixedpoint.h>
#include <Collision\Primitives\capsule.h>
#include <util\fixed.h>
#include <Collision\Primitives\segment.h>
#include <boost\shared_ptr.hpp>
#include <Collision\BVH\profiling.h>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <savegamedef.h>
#include <dbdefines.h>
#include <Render\gl\r_types.h>
#include <boost\detail\shared_count.hpp>
#include <UnitCaps\UnitCaps.h>
#include <boost\detail\lwm_win32.hpp>
#include <SOBGroupManager.h>
#include <sctBasicGlobals.h>
#include <fileio\ramstream.h>
#include <hash_map>
#include <xhash>
#include <sctmatvec.h>
#include <sctGenericLoad.h>
#include <stdarg.h>
#include <stack>
#include <wchar.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <MultiplierTypes.h>
#include <Interface.h>
#include <Collision\BVH\bvh.h>

/* ---------- constants */

/* ---------- definitions */

typedef __int32 (*lua_CFunction)(lua_State *);
typedef __int32 sctFunc;
typedef void (*ConfigSetupCB)();

/* ---------- prototypes */

extern bool sctIsClass(unsigned __int32 paramnum);
extern bool sctIsClass(unsigned __int32 paramnum, __int32 tag);
extern bool sctIsClass(unsigned __int32 paramnum, __int32 tag, __int32 globalTag);
extern void sctRegisterState(__int32 iState, unsigned char *configs);
extern void sctRegisterConfig(__int32 iConfig, void (*setup)());
extern bool sctIsFunction(unsigned __int32 paramnum);
extern bool sctIsTable(unsigned __int32 paramnum);
extern bool sctIsNoParam(unsigned __int32 paramnum);
extern bool sctIsNilRef(__int32 reference);
extern void *sctGetClass(unsigned __int32 paramnum);
extern void sctPutClass(void *var, __int32 tag);
extern void *sctGetPointer(unsigned __int32 paramnum);
extern void sctPutPointer(void *ptr);
extern bool sctIsPointer(unsigned __int32 paramnum);
extern __int32 sctGetTableVar(__int32 table, char const *index);
extern __int32 sctGetTableVar(char *table, char const *index);
extern __int32 sctGetTableVar(__int32 table, __int32 index);
extern __int32 sctGetTableVar(char *table, __int32 index);
extern __int32 sctGetTableVarRef(__int32 table, char *index);
extern __int32 sctGetTableVarRef(__int32 table, __int32 index);
extern void sctSetTableVarOnStack(__int32 table, char *index);
extern void sctSetTableVar(__int32 table, __int32 object, char *index);
extern void sctRegister(char *name, __int32 (*func)(lua_State *));
extern __int32 sctGetGlobalObject(char const *name);
extern __int32 sctGetGlobalObjectIfExist(char const *name);
extern void sctSetTagMethod(__int32 (*func)(lua_State *), __int32 tag, char const *method);
extern void sctSetGarbageCollector(__int32 (*func)(lua_State *), __int32 tag);
extern bool sctCallScriptFunctionName(char const *name);
extern bool sctCallScriptFunctionStack(__int32 func, unsigned __int32 params);
extern bool sctCallScriptFunctionRef(__int32 reference, unsigned __int32 params);
extern bool sctScriptRun(char const *scriptname, bool hard);
extern bool sctStringRun(char const *string, bool hard);
extern bool sctRegisterGlobal(char const *varname, void *varptr, __int32 luatag, unsigned __int32 flag, char const *type, char const *comment);
extern bool sctRegisterGlobalClass(char const *varname, void *varptr, __int32 luatag, unsigned __int32 flag, char const *type, char const *comment);
extern bool sctRegisterGlobalRef(__int32 ref, char const *name);
extern bool sctRegisterGlobalObject(__int32 obj, char const *name);
extern void sctRegisterEnum(char const *enumname, unsigned __int32 enumvalue);
extern void sctCloseGlobal(char const *name);
extern char *sctGetType(char const *varname);
extern bool sctSetState(__int32 state);
extern bool sctForceState(lua_State *lstate);
extern void sctResetState();
extern void sctCloseState(__int32 state);
extern __int32 sctPointerToID(lua_State *lstate);
extern void *sctIDToPointer(unsigned __int32 ID);
extern void sctSaveState(SaveGameData *saveGameData, __int32 state);
extern void sctRestoreState(SaveGameData *saveGameData, __int32 state);
extern void sctInitState();
extern lua_State *sctCreateNewState(__int32 state, unsigned char *configs);
extern void sctGenericGetTable(__int32 table, __int32 base, __int32 index);
extern __int32 sctClassGetTable(lua_State *lstate);
extern void sctGenericSetTable(__int32 table, __int32 base, __int32 index, __int32 value);
extern __int32 sctClassSetTable(lua_State *lstate);
extern void sctCreateClass(char *name, char *base, __int32 classTag);
extern void sctCreateClassVar(char *name, char *base, __int32 (*getfunction)(lua_State *), __int32 (*setfunction)(lua_State *));
extern void sctCreateClassArray(char *name, __int32 (*getfunction)(lua_State *), __int32 (*setfunction)(lua_State *));
extern void sctCreateClassMethod(char *name, char *base, __int32 (*method)(lua_State *));
extern bool sctInitialize();
extern bool sctDenitialize();
extern __int32 sctTagFunction(ScriptTag tag);
extern void sctNewTagFunction(ScriptTag newTag);

_static void sctConfErrorLuaLib();
_static void sctConfLuaLib();
_static void sctConfLuaMathLib();
_static void sctConfBasicGlobals();
_static void sctConfMatVec();
_static void sctConfObjectLoad();
_static void sctConfTweakables();

/* ---------- globals */

extern SctStateConfig *gpSctState; // 0x843FB4
extern lua_State *gpLuaState; // 0x843F90
extern unsigned char *sctBaseStateConfigs[4]; // 0x8361F8
extern std::stack<SctStateConfig *,std::deque<SctStateConfig *,std::allocator<SctStateConfig *> > > gpOldStateStack; // 0x843FB8
extern void (*sctConfigSetups[7])(); // 0x843F98

/* ---------- private variables */

_static
{
    extern SaveGameData *gp_saveData; // 0x843F94
    extern unsigned char sctBaseConfigGenericLoad[7]; // 0x8361E4
    extern unsigned char sctBaseConfigObjectLoad[4]; // 0x8361EC
    extern unsigned char sctBaseConfigWeaponLoad[3]; // 0x8361F0
    extern unsigned char sctBaseConfigWeaponFireLoad[3]; // 0x8361F4
    extern void (*sctBasicConfigs[7])(); // 0x836208
    extern float const NISUpdateRate; // 0x792EC4
    extern float const NISUpdatePeriod; // 0x836234
    extern InitList sctVarsInitModule; // 0x836224
    extern InitList sctVarsLoadModule; // 0x83622C
    extern SctStateConfig sctStateConfigs[4]; // 0x843FD0
}

/* ---------- public code */

_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > const &) // 0x4C722F
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > const &) // 0x4C7271
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline SctStateConfig::SctStateConfig() // 0x4C73A2
{
    mangled_assert("??0SctStateConfig@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >() // 0x4C73DB
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >() // 0x4C73DC
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> >::~_Deque_val<std::_Deque_simple_types<SctStateConfig *> >() // 0x4C73DD
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<enum ScriptTag const ,int>,std::allocator<std::pair<enum ScriptTag const ,int> > >::~_Tree_buy<std::pair<enum ScriptTag const ,int>,std::allocator<std::pair<enum ScriptTag const ,int> > >() // 0x4C740A
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBW4ScriptTag@@H@std@@V?$allocator@U?$pair@$$CBW4ScriptTag@@H@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> >,0> >::~_Tree_comp<0,std::_Tmap_traits<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> >,0> >() // 0x4C7413
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@W4ScriptTag@@HU?$less@W4ScriptTag@@@std@@V?$allocator@U?$pair@$$CBW4ScriptTag@@H@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> > >::~map<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> > >() // 0x4C742C
{
    mangled_assert("??1?$map@W4ScriptTag@@HU?$less@W4ScriptTag@@@std@@V?$allocator@U?$pair@$$CBW4ScriptTag@@H@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::stack<SctStateConfig *,std::deque<SctStateConfig *,std::allocator<SctStateConfig *> > >::~stack<SctStateConfig *,std::deque<SctStateConfig *,std::allocator<SctStateConfig *> > >() // 0x4C7431
{
    mangled_assert("??1?$stack@PAUSctStateConfig@@V?$deque@PAUSctStateConfig@@V?$allocator@PAUSctStateConfig@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SctStateConfig::~SctStateConfig() // 0x4C7441
{
    mangled_assert("??1SctStateConfig@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool sctIsClass(unsigned __int32 paramnum) // 0x4C8DB8
{
    mangled_assert("?sctIsClass@@YG_NI@Z");
    todo("implement");
}

bool sctIsClass(unsigned __int32 paramnum, __int32 tag) // 0x4C8DD1
{
    mangled_assert("?sctIsClass@@YG_NIH@Z");
    todo("implement");
}

bool sctIsClass(unsigned __int32 paramnum, __int32 tag, __int32 globalTag) // 0x4C8E05
{
    mangled_assert("?sctIsClass@@YG_NIHH@Z");
    todo("implement");
}

void sctRegisterState(__int32 iState, unsigned char *configs) // 0x4C9186
{
    mangled_assert("?sctRegisterState@@YGXHPAE@Z");
    todo("implement");
}

void sctRegisterConfig(__int32 iConfig, void (*setup)()) // 0x4C9025
{
    mangled_assert("?sctRegisterConfig@@YGXHP6GXXZ@Z");
    todo("implement");
}

bool sctIsFunction(unsigned __int32 paramnum) // 0x4C8E4E
{
    mangled_assert("?sctIsFunction@@YG_NI@Z");
    todo("implement");
}

bool sctIsTable(unsigned __int32 paramnum) // 0x4C8EE8
{
    mangled_assert("?sctIsTable@@YG_NI@Z");
    todo("implement");
}

bool sctIsNoParam(unsigned __int32 paramnum) // 0x4C8EB6
{
    mangled_assert("?sctIsNoParam@@YG_NI@Z");
    todo("implement");
}

bool sctIsNilRef(__int32 reference) // 0x4C8E67
{
    mangled_assert("?sctIsNilRef@@YG_NH@Z");
    todo("implement");
}

void *sctGetClass(unsigned __int32 paramnum) // 0x4C8999
{
    mangled_assert("?sctGetClass@@YGPAXI@Z");
    todo("implement");
}

void sctPutClass(void *var, __int32 tag) // 0x4C8F99
{
    mangled_assert("?sctPutClass@@YGXPAXH@Z");
    todo("implement");
}

void *sctGetPointer(unsigned __int32 paramnum) // 0x4C8A72
{
    mangled_assert("?sctGetPointer@@YGPAXI@Z");
    todo("implement");
}

void sctPutPointer(void *ptr) // 0x4C8FEB
{
    mangled_assert("?sctPutPointer@@YGXPAX@Z");
    todo("implement");
}

bool sctIsPointer(unsigned __int32 paramnum) // 0x4C8ECF
{
    mangled_assert("?sctIsPointer@@YG_NI@Z");
    todo("implement");
}

__int32 sctGetTableVar(__int32 table, char const *index) // 0x4C8ADB
{
    mangled_assert("?sctGetTableVar@@YGHHPBD@Z");
    todo("implement");
}

__int32 sctGetTableVar(char *table, char const *index) // 0x4C8B50
{
    mangled_assert("?sctGetTableVar@@YGHPADPBD@Z");
    todo("implement");
}

__int32 sctGetTableVar(__int32 table, __int32 index) // 0x4C8A9F
{
    mangled_assert("?sctGetTableVar@@YGHHH@Z");
    todo("implement");
}

__int32 sctGetTableVar(char *table, __int32 index) // 0x4C8B0A
{
    mangled_assert("?sctGetTableVar@@YGHPADH@Z");
    todo("implement");
}

__int32 sctGetTableVarRef(__int32 table, char *index) // 0x4C8BCC
{
    mangled_assert("?sctGetTableVarRef@@YGHHPAD@Z");
    todo("implement");
}

__int32 sctGetTableVarRef(__int32 table, __int32 index) // 0x4C8B89
{
    mangled_assert("?sctGetTableVarRef@@YGHHH@Z");
    todo("implement");
}

void sctSetTableVarOnStack(__int32 table, char *index) // 0x4C9535
{
    mangled_assert("?sctSetTableVarOnStack@@YGXHPAD@Z");
    todo("implement");
}

void sctSetTableVar(__int32 table, __int32 object, char *index) // 0x4C9502
{
    mangled_assert("?sctSetTableVar@@YGXHHPAD@Z");
    todo("implement");
}

void sctRegister(char *name, __int32 (*func)(lua_State *)) // 0x4C9000
{
    mangled_assert("?sctRegister@@YGXPADP6GHPAUlua_State@@@Z@Z");
    todo("implement");
}

__int32 sctGetGlobalObject(char const *name) // 0x4C89DF
{
    mangled_assert("?sctGetGlobalObject@@YGHPBD@Z");
    todo("implement");
}

__int32 sctGetGlobalObjectIfExist(char const *name) // 0x4C8A3B
{
    mangled_assert("?sctGetGlobalObjectIfExist@@YGHPBD@Z");
    todo("implement");
}

void sctSetTagMethod(__int32 (*func)(lua_State *), __int32 tag, char const *method) // 0x4C9566
{
    mangled_assert("?sctSetTagMethod@@YGXP6GHPAUlua_State@@@ZHPBD@Z");
    todo("implement");
}

void sctSetGarbageCollector(__int32 (*func)(lua_State *), __int32 tag) // 0x4C947E
{
    mangled_assert("?sctSetGarbageCollector@@YGXP6GHPAUlua_State@@@ZH@Z");
    todo("implement");
}

bool sctCallScriptFunctionName(char const *name) // 0x4C7D29
{
    mangled_assert("?sctCallScriptFunctionName@@YG_NPBD@Z");
    todo("implement");
}

bool sctCallScriptFunctionStack(__int32 func, unsigned __int32 params) // 0x4C7DAC
{
    mangled_assert("?sctCallScriptFunctionStack@@YG_NHI@Z");
    todo("implement");
}

bool sctCallScriptFunctionRef(__int32 reference, unsigned __int32 params) // 0x4C7D69
{
    mangled_assert("?sctCallScriptFunctionRef@@YG_NHI@Z");
    todo("implement");
}

bool sctScriptRun(char const *scriptname, bool hard) // 0x4C92A1
{
    mangled_assert("?sctScriptRun@@YG_NPBD_N@Z");
    todo("implement");
}

bool sctStringRun(char const *string, bool hard) // 0x4C958F
{
    mangled_assert("?sctStringRun@@YG_NPBD_N@Z");
    todo("implement");
}

bool sctRegisterGlobal(char const *varname, void *varptr, __int32 luatag, unsigned __int32 flag, char const *type, char const *comment) // 0x4C9075
{
    mangled_assert("?sctRegisterGlobal@@YG_NPBDPAXHI00@Z");
    todo("implement");
}

bool sctRegisterGlobalClass(char const *varname, void *varptr, __int32 luatag, unsigned __int32 flag, char const *type, char const *comment) // 0x4C90BB
{
    mangled_assert("?sctRegisterGlobalClass@@YG_NPBDPAXHI00@Z");
    todo("implement");
}

bool sctRegisterGlobalRef(__int32 ref, char const *name) // 0x4C913C
{
    mangled_assert("?sctRegisterGlobalRef@@YG_NHPBD@Z");
    todo("implement");
}

bool sctRegisterGlobalObject(__int32 obj, char const *name) // 0x4C90FA
{
    mangled_assert("?sctRegisterGlobalObject@@YG_NHPBD@Z");
    todo("implement");
}

void sctRegisterEnum(char const *enumname, unsigned __int32 enumvalue) // 0x4C9037
{
    mangled_assert("?sctRegisterEnum@@YGXPBDI@Z");
    todo("implement");
}

void sctCloseGlobal(char const *name) // 0x4C7EEB
{
    mangled_assert("?sctCloseGlobal@@YGXPBD@Z");
    todo("implement");
}

char *sctGetType(char const *varname) // 0x4C8C02
{
    mangled_assert("?sctGetType@@YGPADPBD@Z");
    todo("implement");
}

bool sctSetState(__int32 state) // 0x4C9493
{
    mangled_assert("?sctSetState@@YG_NH@Z");
    todo("implement");
}

bool sctForceState(lua_State *lstate) // 0x4C8526
{
    mangled_assert("?sctForceState@@YG_NPAUlua_State@@@Z");
    todo("implement");
}

void sctResetState() // 0x4C91D2
{
    mangled_assert("?sctResetState@@YGXXZ");
    todo("implement");
}

void sctCloseState(__int32 state) // 0x4C7F0A
{
    mangled_assert("?sctCloseState@@YGXH@Z");
    todo("implement");
}

__int32 sctPointerToID(lua_State *lstate) // 0x4C8F29
{
    mangled_assert("?sctPointerToID@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void *sctIDToPointer(unsigned __int32 ID) // 0x4C8C89
{
    mangled_assert("?sctIDToPointer@@YGPAXI@Z");
    todo("implement");
}

void sctSaveState(SaveGameData *saveGameData, __int32 state) // 0x4C9256
{
    mangled_assert("?sctSaveState@@YGXPAVSaveGameData@@H@Z");
    todo("implement");
}

void sctRestoreState(SaveGameData *saveGameData, __int32 state) // 0x4C9229
{
    mangled_assert("?sctRestoreState@@YGXPAVSaveGameData@@H@Z");
    todo("implement");
}

void sctInitState() // 0x4C8CB1
{
    mangled_assert("?sctInitState@@YGXXZ");
    todo("implement");
}

lua_State *sctCreateNewState(__int32 state, unsigned char *configs) // 0x4C842E
{
    mangled_assert("?sctCreateNewState@@YGPAUlua_State@@HPAE@Z");
    todo("implement");
}

void sctGenericGetTable(__int32 table, __int32 base, __int32 index) // 0x4C85A2
{
    mangled_assert("?sctGenericGetTable@@YGXHHH@Z");
    todo("implement");
}

__int32 sctClassGetTable(lua_State *lstate) // 0x4C7DF0
{
    mangled_assert("?sctClassGetTable@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void sctGenericSetTable(__int32 table, __int32 base, __int32 index, __int32 value) // 0x4C87DD
{
    mangled_assert("?sctGenericSetTable@@YGXHHHH@Z");
    todo("implement");
}

__int32 sctClassSetTable(lua_State *lstate) // 0x4C7E66
{
    mangled_assert("?sctClassSetTable@@YGHPAUlua_State@@@Z");
    todo("implement");
}

void sctCreateClass(char *name, char *base, __int32 classTag) // 0x4C7F91
{
    mangled_assert("?sctCreateClass@@YGXPAD0H@Z");
    todo("implement");
}

void sctCreateClassVar(char *name, char *base, __int32 (*getfunction)(lua_State *), __int32 (*setfunction)(lua_State *)) // 0x4C8311
{
    mangled_assert("?sctCreateClassVar@@YGXPAD0P6GHPAUlua_State@@@Z2@Z");
    todo("implement");
}

void sctCreateClassArray(char *name, __int32 (*getfunction)(lua_State *), __int32 (*setfunction)(lua_State *)) // 0x4C8194
{
    mangled_assert("?sctCreateClassArray@@YGXPADP6GHPAUlua_State@@@Z2@Z");
    todo("implement");
}

void sctCreateClassMethod(char *name, char *base, __int32 (*method)(lua_State *)) // 0x4C8271
{
    mangled_assert("?sctCreateClassMethod@@YGXPAD0P6GHPAUlua_State@@@Z@Z");
    todo("implement");
}

bool sctInitialize() // 0x4C8D42
{
    mangled_assert("?sctInitialize@@YG_NXZ");
    todo("implement");
}

bool sctDenitialize() // 0x4C84E7
{
    mangled_assert("?sctDenitialize@@YG_NXZ");
    todo("implement");
}

__int32 sctTagFunction(ScriptTag tag) // 0x4C95DA
{
    mangled_assert("?sctTagFunction@@YGHW4ScriptTag@@@Z");
    todo("implement");
}

void sctNewTagFunction(ScriptTag newTag) // 0x4C8F01
{
    mangled_assert("?sctNewTagFunction@@YGXW4ScriptTag@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void sctConfErrorLuaLib() // 0x4C6FD3
{
    mangled_assert("sctConfErrorLuaLib");
    todo("implement");
}

_static void sctConfLuaLib() // 0x4C6FEA
{
    mangled_assert("sctConfLuaLib");
    todo("implement");
}

_static void sctConfLuaMathLib() // 0x4C6FF6
{
    mangled_assert("sctConfLuaMathLib");
    todo("implement");
}

_static void sctConfBasicGlobals() // 0x4C7002
{
    mangled_assert("sctConfBasicGlobals");
    todo("implement");
}

_static void sctConfMatVec() // 0x4C7007
{
    mangled_assert("sctConfMatVec");
    todo("implement");
}

_static void sctConfObjectLoad() // 0x4C700C
{
    mangled_assert("sctConfObjectLoad");
    todo("implement");
}

_static void sctConfTweakables() // 0x4C7011
{
    mangled_assert("sctConfTweakables");
    todo("implement");
}
#endif
