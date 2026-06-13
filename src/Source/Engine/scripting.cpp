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

_extern _sub_4C722F(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > *const, std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > const &);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > const &) // 0x4C722F
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_4C722F(this, arg);
}

_extern _sub_4C7271(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > *const, std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > const &);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > const &) // 0x4C7271
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
    _sub_4C7271(this, arg);
}

_extern _sub_4C73A2(SctStateConfig *const);
_inline SctStateConfig::SctStateConfig() // 0x4C73A2
{
    mangled_assert("??0SctStateConfig@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C73A2(this);
}

_extern void _sub_4C73DB(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > *const);
_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >() // 0x4C73DB
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C73DB(this);
}

_extern void _sub_4C73DC(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > > *const);
_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > >() // 0x4C73DC
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C73DC(this);
}

_extern void _sub_4C73DD(std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> > *const);
_inline std::_Deque_val<std::_Deque_simple_types<SctStateConfig *> >::~_Deque_val<std::_Deque_simple_types<SctStateConfig *> >() // 0x4C73DD
{
    mangled_assert("??1?$_Deque_val@U?$_Deque_simple_types@PAUSctStateConfig@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C73DD(this);
}

_extern void _sub_4C740A(std::_Tree_buy<std::pair<enum ScriptTag const ,int>,std::allocator<std::pair<enum ScriptTag const ,int> > > *const);
_inline std::_Tree_buy<std::pair<enum ScriptTag const ,int>,std::allocator<std::pair<enum ScriptTag const ,int> > >::~_Tree_buy<std::pair<enum ScriptTag const ,int>,std::allocator<std::pair<enum ScriptTag const ,int> > >() // 0x4C740A
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBW4ScriptTag@@H@std@@V?$allocator@U?$pair@$$CBW4ScriptTag@@H@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C740A(this);
}

_extern void _sub_4C7413(std::_Tree_comp<0,std::_Tmap_traits<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> >,0> >::~_Tree_comp<0,std::_Tmap_traits<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> >,0> >() // 0x4C7413
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@W4ScriptTag@@HU?$less@W4ScriptTag@@@std@@V?$allocator@U?$pair@$$CBW4ScriptTag@@H@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C7413(this);
}

_extern void _sub_4C742C(std::map<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> > > *const);
_inline std::map<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> > >::~map<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> > >() // 0x4C742C
{
    mangled_assert("??1?$map@W4ScriptTag@@HU?$less@W4ScriptTag@@@std@@V?$allocator@U?$pair@$$CBW4ScriptTag@@H@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C742C(this);
}

_extern void _sub_4C7431(std::stack<SctStateConfig *,std::deque<SctStateConfig *,std::allocator<SctStateConfig *> > > *const);
_inline std::stack<SctStateConfig *,std::deque<SctStateConfig *,std::allocator<SctStateConfig *> > >::~stack<SctStateConfig *,std::deque<SctStateConfig *,std::allocator<SctStateConfig *> > >() // 0x4C7431
{
    mangled_assert("??1?$stack@PAUSctStateConfig@@V?$deque@PAUSctStateConfig@@V?$allocator@PAUSctStateConfig@@@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C7431(this);
}

_extern void _sub_4C7441(SctStateConfig *const);
_inline SctStateConfig::~SctStateConfig() // 0x4C7441
{
    mangled_assert("??1SctStateConfig@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4C7441(this);
}

_extern bool _sub_4C8DB8(unsigned __int32);
bool sctIsClass(unsigned __int32 paramnum) // 0x4C8DB8
{
    mangled_assert("?sctIsClass@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_4C8DB8(paramnum);
    return __result;
}

_extern bool _sub_4C8DD1(unsigned __int32, __int32);
bool sctIsClass(unsigned __int32 paramnum, __int32 tag) // 0x4C8DD1
{
    mangled_assert("?sctIsClass@@YG_NIH@Z");
    todo("implement");
    bool __result = _sub_4C8DD1(paramnum, tag);
    return __result;
}

_extern bool _sub_4C8E05(unsigned __int32, __int32, __int32);
bool sctIsClass(unsigned __int32 paramnum, __int32 tag, __int32 globalTag) // 0x4C8E05
{
    mangled_assert("?sctIsClass@@YG_NIHH@Z");
    todo("implement");
    bool __result = _sub_4C8E05(paramnum, tag, globalTag);
    return __result;
}

_extern void _sub_4C9186(__int32, unsigned char *);
void sctRegisterState(__int32 iState, unsigned char *configs) // 0x4C9186
{
    mangled_assert("?sctRegisterState@@YGXHPAE@Z");
    todo("implement");
    _sub_4C9186(iState, configs);
}

_extern void _sub_4C9025(__int32, void (*)());
void sctRegisterConfig(__int32 iConfig, void (*setup)()) // 0x4C9025
{
    mangled_assert("?sctRegisterConfig@@YGXHP6GXXZ@Z");
    todo("implement");
    _sub_4C9025(iConfig, setup);
}

_extern bool _sub_4C8E4E(unsigned __int32);
bool sctIsFunction(unsigned __int32 paramnum) // 0x4C8E4E
{
    mangled_assert("?sctIsFunction@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_4C8E4E(paramnum);
    return __result;
}

_extern bool _sub_4C8EE8(unsigned __int32);
bool sctIsTable(unsigned __int32 paramnum) // 0x4C8EE8
{
    mangled_assert("?sctIsTable@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_4C8EE8(paramnum);
    return __result;
}

_extern bool _sub_4C8EB6(unsigned __int32);
bool sctIsNoParam(unsigned __int32 paramnum) // 0x4C8EB6
{
    mangled_assert("?sctIsNoParam@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_4C8EB6(paramnum);
    return __result;
}

_extern bool _sub_4C8E67(__int32);
bool sctIsNilRef(__int32 reference) // 0x4C8E67
{
    mangled_assert("?sctIsNilRef@@YG_NH@Z");
    todo("implement");
    bool __result = _sub_4C8E67(reference);
    return __result;
}

_extern void *_sub_4C8999(unsigned __int32);
void *sctGetClass(unsigned __int32 paramnum) // 0x4C8999
{
    mangled_assert("?sctGetClass@@YGPAXI@Z");
    todo("implement");
    void * __result = _sub_4C8999(paramnum);
    return __result;
}

_extern void _sub_4C8F99(void *, __int32);
void sctPutClass(void *var, __int32 tag) // 0x4C8F99
{
    mangled_assert("?sctPutClass@@YGXPAXH@Z");
    todo("implement");
    _sub_4C8F99(var, tag);
}

_extern void *_sub_4C8A72(unsigned __int32);
void *sctGetPointer(unsigned __int32 paramnum) // 0x4C8A72
{
    mangled_assert("?sctGetPointer@@YGPAXI@Z");
    todo("implement");
    void * __result = _sub_4C8A72(paramnum);
    return __result;
}

_extern void _sub_4C8FEB(void *);
void sctPutPointer(void *ptr) // 0x4C8FEB
{
    mangled_assert("?sctPutPointer@@YGXPAX@Z");
    todo("implement");
    _sub_4C8FEB(ptr);
}

_extern bool _sub_4C8ECF(unsigned __int32);
bool sctIsPointer(unsigned __int32 paramnum) // 0x4C8ECF
{
    mangled_assert("?sctIsPointer@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_4C8ECF(paramnum);
    return __result;
}

_extern __int32 _sub_4C8ADB(__int32, char const *);
__int32 sctGetTableVar(__int32 table, char const *index) // 0x4C8ADB
{
    mangled_assert("?sctGetTableVar@@YGHHPBD@Z");
    todo("implement");
    __int32 __result = _sub_4C8ADB(table, index);
    return __result;
}

_extern __int32 _sub_4C8B50(char *, char const *);
__int32 sctGetTableVar(char *table, char const *index) // 0x4C8B50
{
    mangled_assert("?sctGetTableVar@@YGHPADPBD@Z");
    todo("implement");
    __int32 __result = _sub_4C8B50(table, index);
    return __result;
}

_extern __int32 _sub_4C8A9F(__int32, __int32);
__int32 sctGetTableVar(__int32 table, __int32 index) // 0x4C8A9F
{
    mangled_assert("?sctGetTableVar@@YGHHH@Z");
    todo("implement");
    __int32 __result = _sub_4C8A9F(table, index);
    return __result;
}

_extern __int32 _sub_4C8B0A(char *, __int32);
__int32 sctGetTableVar(char *table, __int32 index) // 0x4C8B0A
{
    mangled_assert("?sctGetTableVar@@YGHPADH@Z");
    todo("implement");
    __int32 __result = _sub_4C8B0A(table, index);
    return __result;
}

_extern __int32 _sub_4C8BCC(__int32, char *);
__int32 sctGetTableVarRef(__int32 table, char *index) // 0x4C8BCC
{
    mangled_assert("?sctGetTableVarRef@@YGHHPAD@Z");
    todo("implement");
    __int32 __result = _sub_4C8BCC(table, index);
    return __result;
}

_extern __int32 _sub_4C8B89(__int32, __int32);
__int32 sctGetTableVarRef(__int32 table, __int32 index) // 0x4C8B89
{
    mangled_assert("?sctGetTableVarRef@@YGHHH@Z");
    todo("implement");
    __int32 __result = _sub_4C8B89(table, index);
    return __result;
}

_extern void _sub_4C9535(__int32, char *);
void sctSetTableVarOnStack(__int32 table, char *index) // 0x4C9535
{
    mangled_assert("?sctSetTableVarOnStack@@YGXHPAD@Z");
    todo("implement");
    _sub_4C9535(table, index);
}

_extern void _sub_4C9502(__int32, __int32, char *);
void sctSetTableVar(__int32 table, __int32 object, char *index) // 0x4C9502
{
    mangled_assert("?sctSetTableVar@@YGXHHPAD@Z");
    todo("implement");
    _sub_4C9502(table, object, index);
}

_extern void _sub_4C9000(char *, __int32 (*)(lua_State *));
void sctRegister(char *name, __int32 (*func)(lua_State *)) // 0x4C9000
{
    mangled_assert("?sctRegister@@YGXPADP6GHPAUlua_State@@@Z@Z");
    todo("implement");
    _sub_4C9000(name, func);
}

_extern __int32 _sub_4C89DF(char const *);
__int32 sctGetGlobalObject(char const *name) // 0x4C89DF
{
    mangled_assert("?sctGetGlobalObject@@YGHPBD@Z");
    todo("implement");
    __int32 __result = _sub_4C89DF(name);
    return __result;
}

_extern __int32 _sub_4C8A3B(char const *);
__int32 sctGetGlobalObjectIfExist(char const *name) // 0x4C8A3B
{
    mangled_assert("?sctGetGlobalObjectIfExist@@YGHPBD@Z");
    todo("implement");
    __int32 __result = _sub_4C8A3B(name);
    return __result;
}

_extern void _sub_4C9566(__int32 (*)(lua_State *), __int32, char const *);
void sctSetTagMethod(__int32 (*func)(lua_State *), __int32 tag, char const *method) // 0x4C9566
{
    mangled_assert("?sctSetTagMethod@@YGXP6GHPAUlua_State@@@ZHPBD@Z");
    todo("implement");
    _sub_4C9566(func, tag, method);
}

_extern void _sub_4C947E(__int32 (*)(lua_State *), __int32);
void sctSetGarbageCollector(__int32 (*func)(lua_State *), __int32 tag) // 0x4C947E
{
    mangled_assert("?sctSetGarbageCollector@@YGXP6GHPAUlua_State@@@ZH@Z");
    todo("implement");
    _sub_4C947E(func, tag);
}

_extern bool _sub_4C7D29(char const *);
bool sctCallScriptFunctionName(char const *name) // 0x4C7D29
{
    mangled_assert("?sctCallScriptFunctionName@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_4C7D29(name);
    return __result;
}

_extern bool _sub_4C7DAC(__int32, unsigned __int32);
bool sctCallScriptFunctionStack(__int32 func, unsigned __int32 params) // 0x4C7DAC
{
    mangled_assert("?sctCallScriptFunctionStack@@YG_NHI@Z");
    todo("implement");
    bool __result = _sub_4C7DAC(func, params);
    return __result;
}

_extern bool _sub_4C7D69(__int32, unsigned __int32);
bool sctCallScriptFunctionRef(__int32 reference, unsigned __int32 params) // 0x4C7D69
{
    mangled_assert("?sctCallScriptFunctionRef@@YG_NHI@Z");
    todo("implement");
    bool __result = _sub_4C7D69(reference, params);
    return __result;
}

_extern bool _sub_4C92A1(char const *, bool);
bool sctScriptRun(char const *scriptname, bool hard) // 0x4C92A1
{
    mangled_assert("?sctScriptRun@@YG_NPBD_N@Z");
    todo("implement");
    bool __result = _sub_4C92A1(scriptname, hard);
    return __result;
}

_extern bool _sub_4C958F(char const *, bool);
bool sctStringRun(char const *string, bool hard) // 0x4C958F
{
    mangled_assert("?sctStringRun@@YG_NPBD_N@Z");
    todo("implement");
    bool __result = _sub_4C958F(string, hard);
    return __result;
}

_extern bool _sub_4C9075(char const *, void *, __int32, unsigned __int32, char const *, char const *);
bool sctRegisterGlobal(char const *varname, void *varptr, __int32 luatag, unsigned __int32 flag, char const *type, char const *comment) // 0x4C9075
{
    mangled_assert("?sctRegisterGlobal@@YG_NPBDPAXHI00@Z");
    todo("implement");
    bool __result = _sub_4C9075(varname, varptr, luatag, flag, type, comment);
    return __result;
}

_extern bool _sub_4C90BB(char const *, void *, __int32, unsigned __int32, char const *, char const *);
bool sctRegisterGlobalClass(char const *varname, void *varptr, __int32 luatag, unsigned __int32 flag, char const *type, char const *comment) // 0x4C90BB
{
    mangled_assert("?sctRegisterGlobalClass@@YG_NPBDPAXHI00@Z");
    todo("implement");
    bool __result = _sub_4C90BB(varname, varptr, luatag, flag, type, comment);
    return __result;
}

_extern bool _sub_4C913C(__int32, char const *);
bool sctRegisterGlobalRef(__int32 ref, char const *name) // 0x4C913C
{
    mangled_assert("?sctRegisterGlobalRef@@YG_NHPBD@Z");
    todo("implement");
    bool __result = _sub_4C913C(ref, name);
    return __result;
}

_extern bool _sub_4C90FA(__int32, char const *);
bool sctRegisterGlobalObject(__int32 obj, char const *name) // 0x4C90FA
{
    mangled_assert("?sctRegisterGlobalObject@@YG_NHPBD@Z");
    todo("implement");
    bool __result = _sub_4C90FA(obj, name);
    return __result;
}

_extern void _sub_4C9037(char const *, unsigned __int32);
void sctRegisterEnum(char const *enumname, unsigned __int32 enumvalue) // 0x4C9037
{
    mangled_assert("?sctRegisterEnum@@YGXPBDI@Z");
    todo("implement");
    _sub_4C9037(enumname, enumvalue);
}

_extern void _sub_4C7EEB(char const *);
void sctCloseGlobal(char const *name) // 0x4C7EEB
{
    mangled_assert("?sctCloseGlobal@@YGXPBD@Z");
    todo("implement");
    _sub_4C7EEB(name);
}

_extern char *_sub_4C8C02(char const *);
char *sctGetType(char const *varname) // 0x4C8C02
{
    mangled_assert("?sctGetType@@YGPADPBD@Z");
    todo("implement");
    char * __result = _sub_4C8C02(varname);
    return __result;
}

_extern bool _sub_4C9493(__int32);
bool sctSetState(__int32 state) // 0x4C9493
{
    mangled_assert("?sctSetState@@YG_NH@Z");
    todo("implement");
    bool __result = _sub_4C9493(state);
    return __result;
}

_extern bool _sub_4C8526(lua_State *);
bool sctForceState(lua_State *lstate) // 0x4C8526
{
    mangled_assert("?sctForceState@@YG_NPAUlua_State@@@Z");
    todo("implement");
    bool __result = _sub_4C8526(lstate);
    return __result;
}

_extern void _sub_4C91D2();
void sctResetState() // 0x4C91D2
{
    mangled_assert("?sctResetState@@YGXXZ");
    todo("implement");
    _sub_4C91D2();
}

_extern void _sub_4C7F0A(__int32);
void sctCloseState(__int32 state) // 0x4C7F0A
{
    mangled_assert("?sctCloseState@@YGXH@Z");
    todo("implement");
    _sub_4C7F0A(state);
}

_extern __int32 _sub_4C8F29(lua_State *);
__int32 sctPointerToID(lua_State *lstate) // 0x4C8F29
{
    mangled_assert("?sctPointerToID@@YGHPAUlua_State@@@Z");
    todo("implement");
    __int32 __result = _sub_4C8F29(lstate);
    return __result;
}

_extern void *_sub_4C8C89(unsigned __int32);
void *sctIDToPointer(unsigned __int32 ID) // 0x4C8C89
{
    mangled_assert("?sctIDToPointer@@YGPAXI@Z");
    todo("implement");
    void * __result = _sub_4C8C89(ID);
    return __result;
}

_extern void _sub_4C9256(SaveGameData *, __int32);
void sctSaveState(SaveGameData *saveGameData, __int32 state) // 0x4C9256
{
    mangled_assert("?sctSaveState@@YGXPAVSaveGameData@@H@Z");
    todo("implement");
    _sub_4C9256(saveGameData, state);
}

_extern void _sub_4C9229(SaveGameData *, __int32);
void sctRestoreState(SaveGameData *saveGameData, __int32 state) // 0x4C9229
{
    mangled_assert("?sctRestoreState@@YGXPAVSaveGameData@@H@Z");
    todo("implement");
    _sub_4C9229(saveGameData, state);
}

_extern void _sub_4C8CB1();
void sctInitState() // 0x4C8CB1
{
    mangled_assert("?sctInitState@@YGXXZ");
    todo("implement");
    _sub_4C8CB1();
}

_extern lua_State *_sub_4C842E(__int32, unsigned char *);
lua_State *sctCreateNewState(__int32 state, unsigned char *configs) // 0x4C842E
{
    mangled_assert("?sctCreateNewState@@YGPAUlua_State@@HPAE@Z");
    todo("implement");
    lua_State * __result = _sub_4C842E(state, configs);
    return __result;
}

_extern void _sub_4C85A2(__int32, __int32, __int32);
void sctGenericGetTable(__int32 table, __int32 base, __int32 index) // 0x4C85A2
{
    mangled_assert("?sctGenericGetTable@@YGXHHH@Z");
    todo("implement");
    _sub_4C85A2(table, base, index);
}

_extern __int32 _sub_4C7DF0(lua_State *);
__int32 sctClassGetTable(lua_State *lstate) // 0x4C7DF0
{
    mangled_assert("?sctClassGetTable@@YGHPAUlua_State@@@Z");
    todo("implement");
    __int32 __result = _sub_4C7DF0(lstate);
    return __result;
}

_extern void _sub_4C87DD(__int32, __int32, __int32, __int32);
void sctGenericSetTable(__int32 table, __int32 base, __int32 index, __int32 value) // 0x4C87DD
{
    mangled_assert("?sctGenericSetTable@@YGXHHHH@Z");
    todo("implement");
    _sub_4C87DD(table, base, index, value);
}

_extern __int32 _sub_4C7E66(lua_State *);
__int32 sctClassSetTable(lua_State *lstate) // 0x4C7E66
{
    mangled_assert("?sctClassSetTable@@YGHPAUlua_State@@@Z");
    todo("implement");
    __int32 __result = _sub_4C7E66(lstate);
    return __result;
}

_extern void _sub_4C7F91(char *, char *, __int32);
void sctCreateClass(char *name, char *base, __int32 classTag) // 0x4C7F91
{
    mangled_assert("?sctCreateClass@@YGXPAD0H@Z");
    todo("implement");
    _sub_4C7F91(name, base, classTag);
}

_extern void _sub_4C8311(char *, char *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
void sctCreateClassVar(char *name, char *base, __int32 (*getfunction)(lua_State *), __int32 (*setfunction)(lua_State *)) // 0x4C8311
{
    mangled_assert("?sctCreateClassVar@@YGXPAD0P6GHPAUlua_State@@@Z2@Z");
    todo("implement");
    _sub_4C8311(name, base, getfunction, setfunction);
}

_extern void _sub_4C8194(char *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
void sctCreateClassArray(char *name, __int32 (*getfunction)(lua_State *), __int32 (*setfunction)(lua_State *)) // 0x4C8194
{
    mangled_assert("?sctCreateClassArray@@YGXPADP6GHPAUlua_State@@@Z2@Z");
    todo("implement");
    _sub_4C8194(name, getfunction, setfunction);
}

_extern void _sub_4C8271(char *, char *, __int32 (*)(lua_State *));
void sctCreateClassMethod(char *name, char *base, __int32 (*method)(lua_State *)) // 0x4C8271
{
    mangled_assert("?sctCreateClassMethod@@YGXPAD0P6GHPAUlua_State@@@Z@Z");
    todo("implement");
    _sub_4C8271(name, base, method);
}

_extern bool _sub_4C8D42();
bool sctInitialize() // 0x4C8D42
{
    mangled_assert("?sctInitialize@@YG_NXZ");
    todo("implement");
    bool __result = _sub_4C8D42();
    return __result;
}

_extern bool _sub_4C84E7();
bool sctDenitialize() // 0x4C84E7
{
    mangled_assert("?sctDenitialize@@YG_NXZ");
    todo("implement");
    bool __result = _sub_4C84E7();
    return __result;
}

_extern __int32 _sub_4C95DA(ScriptTag);
__int32 sctTagFunction(ScriptTag tag) // 0x4C95DA
{
    mangled_assert("?sctTagFunction@@YGHW4ScriptTag@@@Z");
    todo("implement");
    __int32 __result = _sub_4C95DA(tag);
    return __result;
}

_extern void _sub_4C8F01(ScriptTag);
void sctNewTagFunction(ScriptTag newTag) // 0x4C8F01
{
    mangled_assert("?sctNewTagFunction@@YGXW4ScriptTag@@@Z");
    todo("implement");
    _sub_4C8F01(newTag);
}

/* ---------- private code */

_extern void _sub_4C6FD3();
_static void sctConfErrorLuaLib() // 0x4C6FD3
{
    mangled_assert("sctConfErrorLuaLib");
    todo("implement");
    _sub_4C6FD3();
}

_extern void _sub_4C6FEA();
_static void sctConfLuaLib() // 0x4C6FEA
{
    mangled_assert("sctConfLuaLib");
    todo("implement");
    _sub_4C6FEA();
}

_extern void _sub_4C6FF6();
_static void sctConfLuaMathLib() // 0x4C6FF6
{
    mangled_assert("sctConfLuaMathLib");
    todo("implement");
    _sub_4C6FF6();
}

_extern void _sub_4C7002();
_static void sctConfBasicGlobals() // 0x4C7002
{
    mangled_assert("sctConfBasicGlobals");
    todo("implement");
    _sub_4C7002();
}

_extern void _sub_4C7007();
_static void sctConfMatVec() // 0x4C7007
{
    mangled_assert("sctConfMatVec");
    todo("implement");
    _sub_4C7007();
}

_extern void _sub_4C700C();
_static void sctConfObjectLoad() // 0x4C700C
{
    mangled_assert("sctConfObjectLoad");
    todo("implement");
    _sub_4C700C();
}

_extern void _sub_4C7011();
_static void sctConfTweakables() // 0x4C7011
{
    mangled_assert("sctConfTweakables");
    todo("implement");
    _sub_4C7011();
}
#endif
