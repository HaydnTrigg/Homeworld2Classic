#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <xhash>
#include <xstring>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <Objects\Texture.h>
#include <Objects\Core.h>
#include <gl\types.h>
#include <Mathlib\matvec.h>
#include <memory>
#include <Mathlib\vector2.h>
#include <stdint.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\mathutil.h>
#include <xutility>
#include <xatomic0.h>
#include <assist\fixedstring.h>
#include <utility>
#include <Objects\TextureRegistry.h>
#include <iosfwd>
#include <assist\stlexstring.h>
#include <vector>
#include <xmemory>
#include <profile\profile.h>
#include <iostream>
#include <math.h>
#include <list>
#include <platform\windowinterface.h>
#include <platform\platformexports.h>
#include <map>
#include <lua\lua.h>
#include <xtree>
#include <platform\osdef.h>
#include <assist\typemagic.h>
#include <assert.h>
#include <algorithm>
#include <util\types.h>
#include <gl\lotypes.h>
#include <gl\r_types.h>
#include <camera\camera.h>
#include <Mathlib\matrix4.h>
#include <camera\frustum.h>
#include <camera\plane3.h>
#include <Mathlib\vector3.h>
#include <Objects\LensFlare.h>
#include <Objects\Objects.h>
#include <util\colour.h>
#include <debug\db.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Mathlib\matrix3.h>
#include <gl\r_defines.h>
#include <gl\glext.h>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <wchar.h>
#include <string>
#include <boost\assert.hpp>
#include <boost\checked_delete.hpp>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::FlarePos
{
    bool bInfinite; // 0x0
    bool bVisible; // 0x1
    vector3 position; // 0x4
    LensFlare *pFlare; // 0x10
    float lastRenderTime; // 0x14
    float onFractionHi; // 0x18
    float onFractionLo; // 0x1C
    float scale; // 0x20
    float masterFade; // 0x24
    float masterScale; // 0x28
    bool masterVisible; // 0x2C
    FlarePos(); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::FlarePos) == 48, "Invalid `anonymous-namespace'::FlarePos size");

typedef std::vector<`anonymous namespace'::FlarePos *,std::allocator<`anonymous namespace'::FlarePos *> > FlareList;
typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,LensFlare *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,LensFlare *> > > LensFlareMap;
typedef std::vector<LensFlare::HotSpot *,std::allocator<LensFlare::HotSpot *> > HotSpotList;
typedef `anonymous-namespace'::FlarePos ?A0x1a035314::FlarePos;

/* ---------- prototypes */


_static void doFade(float timeDiff, float fadeLength, float zeroLengthVal, float &fadeVal);
_static void genFrustum(matrix4 &m, float left, float right, float bottom, float top, float znear, float zfar);

/* ---------- globals */

extern LensFlareManager *LensFlareManager::s_instance; // 0x10132AE0

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x10132AE4
}

/* ---------- public code */

_inline LensFlareManager::Data::Data() // 0x100659A0
{
    mangled_assert("??0Data@LensFlareManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LensFlare::HotSpot::HotSpot() // 0x10065A10
{
    mangled_assert("??0HotSpot@LensFlare@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LensFlareManager *LensFlareManager::Instance() // 0x100664A0
{
    mangled_assert("?Instance@LensFlareManager@@SGPAV1@XZ");
    todo("implement");
}

bool LensFlareManager::Startup() // 0x10067340
{
    mangled_assert("?Startup@LensFlareManager@@SG_NXZ");
    todo("implement");
}

bool LensFlareManager::Shutdown() // 0x10067310
{
    mangled_assert("?Shutdown@LensFlareManager@@SG_NXZ");
    todo("implement");
}

LensFlare::LensFlare() // 0x10065A20
{
    mangled_assert("??0LensFlare@@QAE@XZ");
    todo("implement");
}

LensFlare::~LensFlare() // 0x10065E00
{
    mangled_assert("??1LensFlare@@QAE@XZ");
    todo("implement");
}

void LensFlare::releaseSpots() // 0x10069880
{
    mangled_assert("?releaseSpots@LensFlare@@QAEXXZ");
    todo("implement");
}

void LensFlare::setWashout(vector4 const &, float) // 0x10069DC0
{
    mangled_assert("?setWashout@LensFlare@@QAEXABVvector4@@M@Z");
    todo("implement");
}

void LensFlare::setFadeTimes(float, float, float, float) // 0x10069D90
{
    mangled_assert("?setFadeTimes@LensFlare@@QAEXMMMM@Z");
    todo("implement");
}

bool LensFlare::addSpot(char const *, float, float, float, vector4 const &) // 0x10067FD0
{
    mangled_assert("?addSpot@LensFlare@@QAE_NPBDMMMABVvector4@@@Z");
    todo("implement");
}

void LensFlare::computeFades(bool, float, float &, float &) // 0x10068A30
{
    mangled_assert("?computeFades@LensFlare@@QAEX_NMAAM1@Z");
    todo("implement");
}

void LensFlare::render(rndTable &, float, float, float, float, float, float) // 0x100698D0
{
    mangled_assert("?render@LensFlare@@QAEXAAUrndTable@@MMMMMM@Z");
    todo("implement");
}

LensFlareManager::LensFlareManager() // 0x10065A90
{
    mangled_assert("??0LensFlareManager@@AAE@XZ");
    todo("implement");
}

_inline std::_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,LensFlare *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,LensFlare *> > >::~_List_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,LensFlare *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,LensFlare *> > >() // 0x10065C10
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVLensFlare@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVLensFlare@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,LensFlare *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,LensFlare *> > >::~hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,LensFlare *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,LensFlare *> > >() // 0x10065C20
{
    mangled_assert("??1?$hash_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVLensFlare@@V?$hash_compare@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@stdext@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVLensFlare@@@std@@@2@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,LensFlare *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,LensFlare *>() // 0x10065C90
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVLensFlare@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,LensFlare *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,LensFlare *>() // 0x10065CC0
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVLensFlare@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LensFlareManager::Data::~Data() // 0x10065D80
{
    mangled_assert("??1Data@LensFlareManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LensFlareManager::~LensFlareManager() // 0x10065E70
{
    mangled_assert("??1LensFlareManager@@AAE@XZ");
    todo("implement");
}

_inline LensFlareManager &LensFlareManager::operator=(LensFlareManager const &) // 0x10065FB0
{
    mangled_assert("??4LensFlareManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

void LensFlareManager::SetCollisionInterface(LensFlareManager::CollisionInterface const *) // 0x100672E0
{
    mangled_assert("?SetCollisionInterface@LensFlareManager@@QAEXPBVCollisionInterface@1@@Z");
    todo("implement");
}

void LensFlareManager::SetGL(rndTable *) // 0x10067300
{
    mangled_assert("?SetGL@LensFlareManager@@QAEXPAUrndTable@@@Z");
    todo("implement");
}

void LensFlareManager::SetColourMultiplier(float) // 0x100672F0
{
    mangled_assert("?SetColourMultiplier@LensFlareManager@@QAEXM@Z");
    todo("implement");
}

LensFlare *LensFlareManager::loadLensFlare(char const *) // 0x10069170
{
    mangled_assert("?loadLensFlare@LensFlareManager@@AAEPAVLensFlare@@PBD@Z");
    todo("implement");
}

unsigned __int32 LensFlareManager::ObjectCreate(char const *, vector3 const &, bool) // 0x10066500
{
    mangled_assert("?ObjectCreate@LensFlareManager@@QAEIPBDABVvector3@@_N@Z");
    todo("implement");
}

bool LensFlareManager::ObjectDelete(unsigned __int32) // 0x10066600
{
    mangled_assert("?ObjectDelete@LensFlareManager@@QAE_NI@Z");
    todo("implement");
}

void LensFlareManager::ObjectSetPosition(unsigned __int32, vector3 const &) // 0x10066680
{
    mangled_assert("?ObjectSetPosition@LensFlareManager@@QAEXIABVvector3@@@Z");
    todo("implement");
}

void LensFlareManager::ObjectSetFade(unsigned __int32, float) // 0x10066660
{
    mangled_assert("?ObjectSetFade@LensFlareManager@@QAEXIM@Z");
    todo("implement");
}

void LensFlareManager::ObjectSetScale(unsigned __int32, float) // 0x100666A0
{
    mangled_assert("?ObjectSetScale@LensFlareManager@@QAEXIM@Z");
    todo("implement");
}

void LensFlareManager::ObjectSetVisible(unsigned __int32, bool) // 0x100666C0
{
    mangled_assert("?ObjectSetVisible@LensFlareManager@@QAEXI_N@Z");
    todo("implement");
}

void LensFlareManager::addToMap(char const *, LensFlare *) // 0x10068090
{
    mangled_assert("?addToMap@LensFlareManager@@AAEXPBDPAVLensFlare@@@Z");
    todo("implement");
}

void LensFlareManager::getFlareDirection(Camera *, float, float, vector3 &) // 0x10068F40
{
    mangled_assert("?getFlareDirection@LensFlareManager@@AAEXPAVCamera@@MMAAVvector3@@@Z");
    todo("implement");
}

unsigned __int32 LensFlareManager::attachLensFlare(LensFlare *, vector3 const &, bool) // 0x10068410
{
    mangled_assert("?attachLensFlare@LensFlareManager@@AAEIPAVLensFlare@@ABVvector3@@_N@Z");
    todo("implement");
}

bool LensFlareManager::checkOcclusion(Camera const *, vector2 const &) // 0x10068930
{
    mangled_assert("?checkOcclusion@LensFlareManager@@AAE_NPBVCamera@@ABVvector2@@@Z");
    todo("implement");
}

void LensFlareManager::Render(Camera const *, matrix4 const &, matrix4 const &, float) // 0x100666E0
{
    mangled_assert("?Render@LensFlareManager@@QAEXPBVCamera@@ABVmatrix4@@1M@Z");
    todo("implement");
}

void LensFlareManager::setCoordSys(bool) // 0x10069D80
{
    mangled_assert("?setCoordSys@LensFlareManager@@AAEX_N@Z");
    todo("implement");
}

void LensFlareManager::calculateInfinitePos(LensFlare *, Camera const *, matrix4 const &, matrix4 const &, vector3 const &, float &, float &, float &) // 0x10068520
{
    mangled_assert("?calculateInfinitePos@LensFlareManager@@AAEXPAVLensFlare@@PBVCamera@@ABVmatrix4@@2ABVvector3@@AAM44@Z");
    todo("implement");
}

void LensFlareManager::calculateNonInfinitePos(LensFlare *, Camera const *, matrix4 const &, matrix4 const &, vector3 const &, float, float &, float &, float &, float &) // 0x100686E0
{
    mangled_assert("?calculateNonInfinitePos@LensFlareManager@@AAEXPAVLensFlare@@PBVCamera@@ABVmatrix4@@2ABVvector3@@MAAM444@Z");
    todo("implement");
}

/* ---------- private code */

_static void doFade(float timeDiff, float fadeLength, float zeroLengthVal, float &fadeVal) // 0x10068C40
{
    mangled_assert("doFade");
    todo("implement");
}

_static void genFrustum(matrix4 &m, float left, float right, float bottom, float top, float znear, float zfar) // 0x10068E30
{
    mangled_assert("genFrustum");
    todo("implement");
}
#endif
