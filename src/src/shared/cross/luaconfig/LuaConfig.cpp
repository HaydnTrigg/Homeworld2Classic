#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\asciictype.h>
#include <memory\memorylib.h>
#include <assist\typemagic.h>
#include <LuaConfig\LuaLibMan.h>
#include <LuaConfig\LuaBinding.h>
#include <algorithm>
#include <xmemory>
#include <xmemory0>
#include <new>
#include <xstddef>
#include <assist\stlexstring.h>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <string.h>
#include <debug\db.h>
#include <assist\fixedstring.h>
#include <vector>
#include "src\src\Shared\PC\LuaConfig\pch.h"
#include <LuaConfig\LuaConfig.h>
#include <lua\lua.h>
#include <boost\scoped_ptr.hpp>
#include <boost\checked_delete.hpp>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <lua\lualib.h>
#include <wchar.h>
#include <xfunctional>
#include <LuaConfig\LuaConfigSave.h>
#include <lua\lauxlib.h>
#include <LuaConfig\LuaConfig.pch>
#include <debug\ctassert.h>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned __int32 size_type;
typedef char *pointer;
typedef char _Elem;
typedef std::_Wrap_alloc<std::allocator<char> > other;
typedef std::_Wrap_alloc<std::allocator<char> > _Alty;
typedef char value_type;
typedef std::allocator<char> _Alloc;
typedef char &reference;
typedef char const &const_reference;
typedef char const *const_pointer;
typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > _Myt;
typedef char *type;
typedef __int32 (*TagMethod)(lua_State *);
typedef __int32 (*LuaFunc)(lua_State *);
typedef void (*CBRegister)(char const *);
typedef void (*CBClear)(char const *);
typedef void (*CBAlert)(char const *);
typedef LuaConfig::Data **unspecified_bool_type() const;

/* ---------- prototypes */

extern void LuaSetPrintFunc(void (*func)(char const *));
extern void LuaSetErrorFunc(void (*func)(char const *));

_static void lua_pushvarname(lua_State *L, char const *name);
_static bool GetNumber(lua_State *L, char const *name, double &val);
_static void SetConfigName(lua_State *L, char const *name);
_static char const *GetConfigName(lua_State *L);
_static __int32 function_set_error(lua_State *L);
_static __int32 dofilepath(lua_State *L);
_static __int32 alertmsg(lua_State *L);
_static __int32 setglobal_ulong(lua_State *state);
_static __int32 getglobal_ulong(lua_State *state);
_static __int32 setglobal_int(lua_State *state);
_static __int32 getglobal_int(lua_State *state);
_static __int32 setglobal_float(lua_State *state);
_static __int32 getglobal_float(lua_State *state);
_static __int32 setglobal_bool(lua_State *state);
_static __int32 getglobal_bool(lua_State *state);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *SELFNAME; // 0x1000C02C
    extern char const *TAGTABLE; // 0x1000C030
    extern char const *ALERTCBNAME; // 0x1000C034
    extern char const *STATENAME; // 0x1000C038
}

/* ---------- public code */

LuaConfig::LuaConfig(char const *) // 0x10001904
{
    mangled_assert("??0LuaConfig@@QAE@PBD@Z");
    todo("implement");
}

_inline LuaConfig::Data::~Data() // 0x10001AA8
{
    mangled_assert("??1Data@LuaConfig@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LuaConfig::~LuaConfig() // 0x10001ADF
{
    mangled_assert("??1LuaConfig@@QAE@XZ");
    todo("implement");
}

_inline LuaLibMan &LuaLibMan::operator=(LuaLibMan const &) // 0x10001B48
{
    mangled_assert("??4GlobalLua@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

lua_State *LuaConfig::GetState() // 0x10002693
{
    mangled_assert("?GetState@LuaConfig@@QAEPAUlua_State@@XZ");
    todo("implement");
}

bool LuaConfig::IsGarbageCollect() const // 0x10002BE8
{
    mangled_assert("?IsGarbageCollect@LuaConfig@@QBE_NXZ");
    todo("implement");
}

void LuaConfig::EnableGarbageCollect(bool) // 0x10002131
{
    mangled_assert("?EnableGarbageCollect@LuaConfig@@QAEX_N@Z");
    todo("implement");
}

void LuaConfig::GarbageCollect() // 0x10002192
{
    mangled_assert("?GarbageCollect@LuaConfig@@QAEXXZ");
    todo("implement");
}

void LuaConfig::FunctionOverwriteProtection(bool) // 0x1000215A
{
    mangled_assert("?FunctionOverwriteProtection@LuaConfig@@QAEX_N@Z");
    todo("implement");
}

void LuaConfig::RegisterDefaultLibs(__int32) // 0x10002F90
{
    mangled_assert("?RegisterDefaultLibs@LuaConfig@@QAEXH@Z");
    todo("implement");
}

void LuaConfig::SetOnRegister(void (*const &)(char const *)) // 0x1000353A
{
    mangled_assert("?SetOnRegister@LuaConfig@@QAEXABQ6GXPBD@Z@Z");
    todo("implement");
}

void LuaConfig::SetOnClear(void (*const &)(char const *)) // 0x1000352C
{
    mangled_assert("?SetOnClear@LuaConfig@@QAEXABQ6GXPBD@Z@Z");
    todo("implement");
}

void LuaConfig::SetOnAlert(void (*const &)(char const *)) // 0x100034E1
{
    mangled_assert("?SetOnAlert@LuaConfig@@QAEXABQ6GXPBD@Z@Z");
    todo("implement");
}

__int32 LuaConfig::AddTag(char const *, __int32 (*)(lua_State *), __int32 (*)(lua_State *)) // 0x10001D16
{
    mangled_assert("?AddTag@LuaConfig@@QAEHPBDP6GHPAUlua_State@@@Z2@Z");
    todo("implement");
}

void LuaConfig::ClearTag(char const *) // 0x10001ED4
{
    mangled_assert("?ClearTag@LuaConfig@@QAEXPBD@Z");
    todo("implement");
}

__int32 LuaConfig::GetTag(lua_State *state, char const *name) // 0x10002927
{
    mangled_assert("?GetTag@LuaConfig@@SGHPAUlua_State@@PBD@Z");
    todo("implement");
}

__int32 LuaConfig::GetTag(char const *) // 0x10002917
{
    mangled_assert("?GetTag@LuaConfig@@QAEHPBD@Z");
    todo("implement");
}

void LuaConfig::SetTagPtr(char const *, void *, char const *) // 0x10003639
{
    mangled_assert("?SetTagPtr@LuaConfig@@QAEXPBDPAX0@Z");
    todo("implement");
}

void *LuaConfig::GetTagPtr(char const *, char const *) // 0x100029A7
{
    mangled_assert("?GetTagPtr@LuaConfig@@QAEPAXPBD0@Z");
    todo("implement");
}

void *LuaConfig::GetTagPtr(lua_State *state, char const *name, char const *tagName) // 0x10002A47
{
    mangled_assert("?GetTagPtr@LuaConfig@@SGPAXPAUlua_State@@PBD1@Z");
    todo("implement");
}

__int32 LuaConfig::CreateRef(char const *) // 0x10002000
{
    mangled_assert("?CreateRef@LuaConfig@@QAEHPBD@Z");
    todo("implement");
}

void LuaConfig::RemoveRef(__int32) // 0x10003191
{
    mangled_assert("?RemoveRef@LuaConfig@@QAEXH@Z");
    todo("implement");
}

bool LuaConfig::CallRef(__int32) // 0x10001E67
{
    mangled_assert("?CallRef@LuaConfig@@QAE_NH@Z");
    todo("implement");
}

char const *LuaConfig::GetName() const // 0x10002606
{
    mangled_assert("?GetName@LuaConfig@@QBEPBDXZ");
    todo("implement");
}

bool LuaConfig::RunBuffer(char const *, unsigned __int32) // 0x100031A2
{
    mangled_assert("?RunBuffer@LuaConfig@@QAE_NPBDI@Z");
    todo("implement");
}

bool LuaConfig::RunString(char const *, bool) // 0x100031BE
{
    mangled_assert("?RunString@LuaConfig@@QAE_NPBD_N@Z");
    todo("implement");
}

void LuaConfig::PushTableEx(char const *) // 0x10002EF8
{
    mangled_assert("?PushTableEx@LuaConfig@@QAEXPBD@Z");
    todo("implement");
}

void LuaConfig::PushGlobalTable() // 0x10002E63
{
    mangled_assert("?PushGlobalTable@LuaConfig@@QAEXXZ");
    todo("implement");
}

void LuaConfig::PushTable(char const *) // 0x10002EA5
{
    mangled_assert("?PushTable@LuaConfig@@QAEXPBD@Z");
    todo("implement");
}

void LuaConfig::PopTable() // 0x10002E1F
{
    mangled_assert("?PopTable@LuaConfig@@QAEXXZ");
    todo("implement");
}

bool LuaConfig::NextEntry(LuaConfig::Iterator &) // 0x10002CA2
{
    mangled_assert("?NextEntry@LuaConfig@@QAE_NAAVIterator@1@@Z");
    todo("implement");
}

bool LuaConfig::NextEntry(char *, unsigned __int32, LuaConfig::LuaType *) // 0x10002D5D
{
    mangled_assert("?NextEntry@LuaConfig@@QAE_NPADIPAW4LuaType@1@@Z");
    todo("implement");
}

bool LuaConfig::StartSave(ByteStream *) // 0x100037AF
{
    mangled_assert("?StartSave@LuaConfig@@QAE_NPAVByteStream@@@Z");
    todo("implement");
}

bool LuaConfig::StartSave(char const *) // 0x100037CB
{
    mangled_assert("?StartSave@LuaConfig@@QAE_NPBD@Z");
    todo("implement");
}

bool LuaConfig::EndSave() // 0x1000213D
{
    mangled_assert("?EndSave@LuaConfig@@QAE_NXZ");
    todo("implement");
}

bool LuaConfig::Load(ByteStream *, long) // 0x10002BEE
{
    mangled_assert("?Load@LuaConfig@@QAE_NPAVByteStream@@J@Z");
    todo("implement");
}

bool LuaConfig::LoadFile(char const *) // 0x10002C0D
{
    mangled_assert("?LoadFile@LuaConfig@@QAE_NPBD@Z");
    todo("implement");
}

bool LuaConfig::SaveVar(char const *, unsigned __int32, bool, bool) // 0x100032AC
{
    mangled_assert("?SaveVar@LuaConfig@@QAE_NPBDI_N1@Z");
    todo("implement");
}

char const *LuaConfig::GetStringInternal(char const *) // 0x10002899
{
    mangled_assert("?GetStringInternal@LuaConfig@@AAEPBDPBD@Z");
    todo("implement");
}

bool LuaConfig::GetString(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) // 0x10002698
{
    mangled_assert("?GetString@LuaConfig@@QAE_NPBDAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

bool LuaConfig::GetString(char const *, char *, unsigned __int32) // 0x100026C4
{
    mangled_assert("?GetString@LuaConfig@@QAE_NPBDPADI@Z");
    todo("implement");
}

bool LuaConfig::GetWString(char const *, wchar_t *, unsigned __int32) // 0x10002B31
{
    mangled_assert("?GetWString@LuaConfig@@QAE_NPBDPA_WI@Z");
    todo("implement");
}

bool LuaConfig::GetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) // 0x100027DE
{
    mangled_assert("?GetStringArray@LuaConfig@@QAE_NPBDAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

unsigned long LuaConfig::GetStringArray(char const *, char **, unsigned __int32, unsigned __int32) // 0x100026F7
{
    mangled_assert("?GetStringArray@LuaConfig@@QAEKPBDPAPADII@Z");
    todo("implement");
}

bool LuaConfig::GetIntArray(char const *, std::vector<int,std::allocator<int> > &) // 0x10002565
{
    mangled_assert("?GetIntArray@LuaConfig@@QAE_NPBDAAV?$vector@HV?$allocator@H@std@@@std@@@Z");
    todo("implement");
}

unsigned long LuaConfig::GetIntArray(char const *, __int32 *, unsigned __int32) // 0x1000248D
{
    mangled_assert("?GetIntArray@LuaConfig@@QAEKPBDPAHI@Z");
    todo("implement");
}

unsigned long LuaConfig::GetByteArray(char const *, unsigned char *, unsigned __int32) // 0x100021DD
{
    mangled_assert("?GetByteArray@LuaConfig@@QAEKPBDPAEI@Z");
    todo("implement");
}

bool LuaConfig::GetFloatArray(char const *, std::vector<float,std::allocator<float> > &) // 0x100023C3
{
    mangled_assert("?GetFloatArray@LuaConfig@@QAE_NPBDAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
}

unsigned long LuaConfig::GetFloatArray(char const *, float *, unsigned __int32) // 0x100022F0
{
    mangled_assert("?GetFloatArray@LuaConfig@@QAEKPBDPAMI@Z");
    todo("implement");
}

LuaConfig::LuaType LuaConfig::GetType(char const *) // 0x10002AB5
{
    mangled_assert("?GetType@LuaConfig@@QAE?AW4LuaType@1@PBD@Z");
    todo("implement");
}

bool LuaConfig::GetFloat(char const *, float &) // 0x100022C1
{
    mangled_assert("?GetFloat@LuaConfig@@QAE_NPBDAAM@Z");
    todo("implement");
}

bool LuaConfig::GetDouble(char const *, double &) // 0x10002296
{
    mangled_assert("?GetDouble@LuaConfig@@QAE_NPBDAAN@Z");
    todo("implement");
}

bool LuaConfig::GetInt(char const *, __int32 &) // 0x10002464
{
    mangled_assert("?GetInt@LuaConfig@@QAE_NPBDAAH@Z");
    todo("implement");
}

bool LuaConfig::GetBool(char const *, bool &) // 0x1000219F
{
    mangled_assert("?GetBool@LuaConfig@@QAE_NPBDAA_N@Z");
    todo("implement");
}

void LuaConfig::SetNumber(char const *, double const) // 0x100033E7
{
    mangled_assert("?SetNumber@LuaConfig@@QAEXPBDN@Z");
    todo("implement");
}

void LuaConfig::SetWString(char const *, wchar_t const *) // 0x100036C7
{
    mangled_assert("?SetWString@LuaConfig@@QAEXPBDPB_W@Z");
    todo("implement");
}

void LuaConfig::SetString(char const *, char const *) // 0x10003548
{
    mangled_assert("?SetString@LuaConfig@@QAEXPBD0@Z");
    todo("implement");
}

void LuaConfig::SetNumberArray(char const *, double const *, unsigned __int32) // 0x1000348D
{
    mangled_assert("?SetNumberArray@LuaConfig@@QAEXPBDPBNI@Z");
    todo("implement");
}

void LuaConfig::SetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &) // 0x100035CD
{
    mangled_assert("?SetStringArray@LuaConfig@@QAEXPBDABV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

void LuaConfig::SetByteArray(char const *, unsigned char const *, unsigned __int32) // 0x100032DA
{
    mangled_assert("?SetByteArray@LuaConfig@@QAEXPBDPBEI@Z");
    todo("implement");
}

void LuaConfig::SetIntArray(char const *, __int32 const *, unsigned __int32) // 0x10003382
{
    mangled_assert("?SetIntArray@LuaConfig@@QAEXPBDPBHI@Z");
    todo("implement");
}

void LuaConfig::AddTable(char const *) // 0x10001C9A
{
    mangled_assert("?AddTable@LuaConfig@@QAEXPBD@Z");
    todo("implement");
}

bool LuaConfig::DoesExist(char const *) // 0x100020C9
{
    mangled_assert("?DoesExist@LuaConfig@@QAE_NPBD@Z");
    todo("implement");
}

void LuaConfig::SaveAll(bool, bool) // 0x10003290
{
    mangled_assert("?SaveAll@LuaConfig@@QAEX_N0@Z");
    todo("implement");
}

bool LuaConfig::RegisterLibrary(char const *) // 0x10003158
{
    mangled_assert("?RegisterLibrary@LuaConfig@@QAE_NPBD@Z");
    todo("implement");
}

bool LuaConfig::DeRegisterLibrary(char const *) // 0x1000207E
{
    mangled_assert("?DeRegisterLibrary@LuaConfig@@QAE_NPBD@Z");
    todo("implement");
}

void LuaConfig::RegisterCFunc(char const *, __int32 (*)(lua_State *), unsigned __int32, void **) // 0x10002F33
{
    mangled_assert("?RegisterCFunc@LuaConfig@@QAEXPBDP6GHPAUlua_State@@@ZIPAPAX@Z");
    todo("implement");
}

void LuaConfig::RegisterCFunc(char const *, __int32 (*)(lua_State *)) // 0x10002F1F
{
    mangled_assert("?RegisterCFunc@LuaConfig@@QAEXPBDP6GHPAUlua_State@@@Z@Z");
    todo("implement");
}

void LuaConfig::ClearFunction(char const *) // 0x10001F46
{
    mangled_assert("?ClearFunction@LuaConfig@@QAEXPBD@Z");
    todo("implement");
}

void LuaConfig::RegisterDefaultTypes() // 0x10003010
{
    mangled_assert("?RegisterDefaultTypes@LuaConfig@@QAEXXZ");
    todo("implement");
}

void LuaConfig::AddFloat(float *, char const *) // 0x10001BBC
{
    mangled_assert("?AddFloat@LuaConfig@@QAEXPAMPBD@Z");
    todo("implement");
}

void LuaConfig::AddInt(__int32 *, char const *) // 0x10001C2B
{
    mangled_assert("?AddInt@LuaConfig@@QAEXPAHPBD@Z");
    todo("implement");
}

void LuaConfig::AddULong(unsigned __int32 *, char const *) // 0x10001DF8
{
    mangled_assert("?AddULong@LuaConfig@@QAEXPAIPBD@Z");
    todo("implement");
}

void LuaConfig::AddBool(bool *, char const *) // 0x10001B4D
{
    mangled_assert("?AddBool@LuaConfig@@QAEXPA_NPBD@Z");
    todo("implement");
}

unsigned __int32 LuaConfig::CountEntry() // 0x10001F92
{
    mangled_assert("?CountEntry@LuaConfig@@QAEIXZ");
    todo("implement");
}

void LuaSetPrintFunc(void (*func)(char const *)) // 0x10002C9C
{
    mangled_assert("?LuaSetPrintFunc@@YGXP6GXPBD@Z@Z");
    todo("implement");
}

void LuaSetErrorFunc(void (*func)(char const *)) // 0x10002C96
{
    mangled_assert("?LuaSetErrorFunc@@YGXP6GXPBD@Z@Z");
    todo("implement");
}

/* ---------- private code */

_static void lua_pushvarname(lua_State *L, char const *name) // 0x1000427B
{
    mangled_assert("lua_pushvarname");
    todo("implement");
}

_static bool GetNumber(lua_State *L, char const *name, double &val) // 0x10002610
{
    mangled_assert("GetNumber");
    todo("implement");
}

_static void SetConfigName(lua_State *L, char const *name) // 0x1000333E
{
    mangled_assert("SetConfigName");
    todo("implement");
}

_static char const *GetConfigName(lua_State *L) // 0x1000223D
{
    mangled_assert("GetConfigName");
    todo("implement");
}

_static __int32 function_set_error(lua_State *L) // 0x1000409E
{
    mangled_assert("function_set_error");
    todo("implement");
}

_static __int32 dofilepath(lua_State *L) // 0x10003E61
{
    mangled_assert("dofilepath");
    todo("implement");
}

_static __int32 alertmsg(lua_State *L) // 0x10003CA2
{
    mangled_assert("alertmsg");
    todo("implement");
}

_static __int32 setglobal_ulong(lua_State *state) // 0x100044A1
{
    mangled_assert("setglobal_ulong");
    todo("implement");
}

_static __int32 getglobal_ulong(lua_State *state) // 0x100041C8
{
    mangled_assert("getglobal_ulong");
    todo("implement");
}

_static __int32 setglobal_int(lua_State *state) // 0x10004474
{
    mangled_assert("setglobal_int");
    todo("implement");
}

_static __int32 getglobal_int(lua_State *state) // 0x1000419D
{
    mangled_assert("getglobal_int");
    todo("implement");
}

_static __int32 setglobal_float(lua_State *state) // 0x10004448
{
    mangled_assert("setglobal_float");
    todo("implement");
}

_static __int32 getglobal_float(lua_State *state) // 0x10004173
{
    mangled_assert("getglobal_float");
    todo("implement");
}

_static __int32 setglobal_bool(lua_State *state) // 0x1000440A
{
    mangled_assert("setglobal_bool");
    todo("implement");
}

_static __int32 getglobal_bool(lua_State *state) // 0x10004145
{
    mangled_assert("getglobal_bool");
    todo("implement");
}
#endif
