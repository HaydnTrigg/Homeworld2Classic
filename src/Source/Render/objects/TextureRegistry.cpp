#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <memory>
#include <crtdefs.h>
#include <stdint.h>
#include <memory\memorypool.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix4.h>
#include <Mathlib\vector3.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <platform\cmdline.h>
#include <vector>
#include <platform\platformexports.h>
#include <xmemory>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <string.h>
#include <list>
#include <lua\lua.h>
#include <fileio\filepath.h>
#include <Objects\Texture.h>
#include <fileio\fileioexports.h>
#include <Objects\Core.h>
#include <fileio\bytestream.h>
#include <gl\types.h>
#include <debug\ctassert.h>
#include <map>
#include <gl\lotypes.h>
#include <Objects\hw2ddraw.h>
#include <xtree>
#include <Objects\TextureRegistry.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <debug\ctmessage.h>
#include <boost\scoped_array.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <assert.h>
#include <boost\config\select_compiler_config.hpp>
#include <boost\config\compiler\visualc.hpp>
#include <fileio\filestream.h>
#include <boost\config\select_stdlib_config.hpp>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <algorithm>
#include <boost\config\platform\win32.hpp>
#include <util\types.h>
#include <platform\osdef.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <boost\config\suffix.hpp>
#include <assist\typemagic.h>
#include <Objects\Objects.h>
#include <Objects\Image.h>
#include <gl\r_defines.h>
#include <gl\r_types.h>
#include <gl\glext.h>
#include <debug\db.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>
#include <wchar.h>
#include <string>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

typedef std::vector<MipStruct,std::allocator<MipStruct> > MipList;
typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<MipStruct> > > MipListI;
typedef __int32 (*TagMethod)(lua_State *);
typedef __int32 (*LuaFunc)(lua_State *);
typedef void (*CBRegister)(char const *);
typedef void (*CBClear)(char const *);
typedef void (*CBAlert)(char const *);
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,TexregElement> > > > ElementMapI;

/* ---------- prototypes */

extern bool texregStartup();
extern bool texregShutdown();
extern void makeRegisterName(char *registerName, char const *name, char const *pool);
extern bool readMTGALevels(char const *path, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &mipFnames);
extern bool genRotFname(char const *inFname, char *rotFname);

_static void *MemAlloc(unsigned __int32 size);
_static void MemFree(void *ptr);
_static void makeConsistentFname(char const *filename, char *consistentFname, unsigned __int32 maxFnameLen);

/* ---------- globals */

extern TextureRegistry *TextureRegistry::s_instance; // 0x10132C48
extern MemoryPoolObj s_pool; // 0x10132C4C

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132C58
}

/* ---------- public code */

bool texregStartup() // 0x100A2E10
{
    mangled_assert("?texregStartup@@YG_NXZ");
    todo("implement");
}

bool texregShutdown() // 0x100A2E00
{
    mangled_assert("?texregShutdown@@YG_NXZ");
    todo("implement");
}

void makeRegisterName(char *registerName, char const *name, char const *pool) // 0x100A2930
{
    mangled_assert("?makeRegisterName@@YGXPADPBD1@Z");
    todo("implement");
}

bool readMTGALevels(char const *path, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &mipFnames) // 0x100A2960
{
    mangled_assert("?readMTGALevels@@YG_NPBDAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool genRotFname(char const *inFname, char *rotFname) // 0x100A1C40
{
    mangled_assert("?genRotFname@@YG_NPBDPAD@Z");
    todo("implement");
}

TextureRegistry::TextureRegistry() // 0x100A1200
{
    mangled_assert("??0TextureRegistry@@QAE@XZ");
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,TexregElement>() // 0x100A12F0
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTexregElement@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

TextureRegistry::~TextureRegistry() // 0x100A1360
{
    mangled_assert("??1TextureRegistry@@QAE@XZ");
    todo("implement");
}

bool TextureRegistry::release() // 0x100A2B10
{
    mangled_assert("?release@TextureRegistry@@SG_NXZ");
    todo("implement");
}

void TextureRegistry::flushTextures() // 0x100A1B90
{
    mangled_assert("?flushTextures@TextureRegistry@@AAEXXZ");
    todo("implement");
}

TextureRegistry *TextureRegistry::instance() // 0x100A1DA0
{
    mangled_assert("?instance@TextureRegistry@@SGPAV1@XZ");
    todo("implement");
}

Texture *TextureRegistry::find(char const *, bool, bool, bool, char const *) // 0x100A1980
{
    mangled_assert("?find@TextureRegistry@@QAEPAVTexture@@PBD_N110@Z");
    todo("implement");
}

bool TextureRegistry::releaseTexture(Texture *) // 0x100A2BD0
{
    mangled_assert("?releaseTexture@TextureRegistry@@QAE_NPAVTexture@@@Z");
    todo("implement");
}

bool TextureRegistry::referenceTexture(Texture *) // 0x100A2AE0
{
    mangled_assert("?referenceTexture@TextureRegistry@@QAE_NPAVTexture@@@Z");
    todo("implement");
}

Texture *TextureRegistry::load(char const *, char const *, bool, char const *, bool) // 0x100A1E20
{
    mangled_assert("?load@TextureRegistry@@AAEPAVTexture@@PBD0_N01@Z");
    todo("implement");
}

bool TextureRegistry::reloadTexture(Texture *) // 0x100A2C40
{
    mangled_assert("?reloadTexture@TextureRegistry@@QAE_NPAVTexture@@@Z");
    todo("implement");
}

void TextureRegistry::enableMipMapGen(bool) // 0x100A18D0
{
    mangled_assert("?enableMipMapGen@TextureRegistry@@QAEX_N@Z");
    todo("implement");
}

bool TextureRegistry::isMipMapGenEnabled() const // 0x100A1E10
{
    mangled_assert("?isMipMapGenEnabled@TextureRegistry@@QBE_NXZ");
    todo("implement");
}

bool TextureRegistry::createMipsFromRaw(Texture *, TextureFormat const, unsigned char const *, __int32 const, __int32 const) // 0x100A17B0
{
    mangled_assert("?createMipsFromRaw@TextureRegistry@@AAE_NPAVTexture@@W4TextureFormat@@PBEHH@Z");
    todo("implement");
}

bool TextureRegistry::loadROT(Texture *, char const *) // 0x100A24C0
{
    mangled_assert("?loadROT@TextureRegistry@@AAE_NPAVTexture@@PBD@Z");
    todo("implement");
}

bool TextureRegistry::loadTGA(Texture *, char const *) // 0x100A2700
{
    mangled_assert("?loadTGA@TextureRegistry@@AAE_NPAVTexture@@PBD@Z");
    todo("implement");
}

bool TextureRegistry::loadDDS(Texture *, char const *) // 0x100A1F20
{
    mangled_assert("?loadDDS@TextureRegistry@@AAE_NPAVTexture@@PBD@Z");
    todo("implement");
}

bool TextureRegistry::loadMTGA(Texture *, char const *) // 0x100A20C0
{
    mangled_assert("?loadMTGA@TextureRegistry@@AAE_NPAVTexture@@PBD@Z");
    todo("implement");
}

char const *TextureRegistry::genTextureName() // 0x100A1C80
{
    mangled_assert("?genTextureName@TextureRegistry@@QAEPBDXZ");
    todo("implement");
}

Texture *TextureRegistry::createBlank(char const *, TextureTarget const, bool, char const *) // 0x100A1660
{
    mangled_assert("?createBlank@TextureRegistry@@QAEPAVTexture@@PBDW4TextureTarget@@_N0@Z");
    todo("implement");
}

bool TextureRegistry::getFileToLoad(char const *, char *) // 0x100A1CC0
{
    mangled_assert("?getFileToLoad@TextureRegistry@@AAE_NPBDPAD@Z");
    todo("implement");
}

/* ---------- private code */

_static void *MemAlloc(unsigned __int32 size) // 0x100A1580
{
    mangled_assert("MemAlloc");
    todo("implement");
}

_static void MemFree(void *ptr) // 0x100A15A0
{
    mangled_assert("MemFree");
    todo("implement");
}

_static void makeConsistentFname(char const *filename, char *consistentFname, unsigned __int32 maxFnameLen) // 0x100A28F0
{
    mangled_assert("makeConsistentFname");
    todo("implement");
}
#endif
