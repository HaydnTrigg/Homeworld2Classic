#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Mathlib\matrix4.h>
#include <xmemory0>
#include <pch.h>
#include <fileio\crc.h>
#include <malloc.h>
#include <Render\objects\hls.h>
#include <Mathlib\matrix3.h>
#include <platform\osdef.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Render\gl\lotypes.h>
#include <debug\ctassert.h>
#include <Mathlib\mathutil.h>
#include <Render\gl\r_macros.h>
#include <math.h>
#include <Render\gl\r_types.h>
#include <Render\objects\image.h>
#include <Render\objects\hw2ddraw.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <boost\scoped_ptr.hpp>
#include <platform\cmdline.h>
#include <platform\platformexports.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <boost\scoped_array.hpp>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <fileio\filestream.h>
#include <ITweak.h>
#include <Tactics.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <Render\objects\textureregistry.h>
#include <hash_map>
#include <util\colour.h>
#include <xhash>
#include <MultiplierTypes.h>
#include <Graphics\TeamColour.h>
#include <savegame.h>
#include <task.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

struct `anonymous-namespace'::HLSFactors
{
    float hueOffset; // 0x0
    float lumFactor; // 0x4
    float satFactor; // 0x8
};
static_assert(sizeof(`anonymous-namespace'::HLSFactors) == 12, "Invalid `anonymous-namespace'::HLSFactors size");

typedef `anonymous-namespace'::HLSFactors ?A0x58066cf0::HLSFactors;

struct TCStatics::TeamColourInfo
{
    TeamColourInfo(TCStatics::TeamColourInfo const &); /* compiler_generated() */
    _inline TeamColourInfo();
    vector4 baseColour; // 0x0
    vector4 stripeColour; // 0x10
    vector4 trailColour; // 0x20
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > badgeTexture; // 0x30
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > trailColourTexture; // 0x48
    _inline ~TeamColourInfo(); /* compiler_generated() */
    TCStatics::TeamColourInfo &operator=(TCStatics::TeamColourInfo const &); /* compiler_generated() */
};
static_assert(sizeof(TCStatics::TeamColourInfo) == 96, "Invalid TCStatics::TeamColourInfo size");

/* ---------- prototypes */

extern void TCStatics::InitStatics();

_static void ClampTrailColour(vector4 &trail);
_static void adjustColour(vector4 const &baseColour, vector4 &adjustedColour, float colourizeHue, float colourizeLum, float colourizeSat);
_static void fillGradient(vector4 *cols, vector4 const &headColour, vector4 const &tailColour, unsigned __int32 headIndex, unsigned __int32 tailIndex);
_static void ReadHueGradient(float trailHue, ImageTGA const *image, std::vector<float,std::allocator<float> > &gradient);
_static float CalcHueShift(float trailHue, float shiftAmount, std::vector<float,std::allocator<float> > &gradient);

/* ---------- globals */

extern char const TeamColour::m_saveToken[0]; // 0x7A0128
extern SaveData const TeamColour::m_saveData[5]; // 0x7A0138

/* ---------- private variables */

_static
{
    extern char const *k_RefTexture; // 0x839C70
    extern char const *k_HueShiftAmountTexture; // 0x839C74
    extern char const *k_HueShiftColourizeTexture; // 0x839C78
    extern bool s_initalized; // 0x846658
    extern TCStatics::TeamColourInfo s_colourInfo[7]; // 0x846660
}

/* ---------- public code */

_extern _sub_56C1F6(TCStatics::TeamColourInfo *const);
_inline TCStatics::TeamColourInfo::TeamColourInfo() // 0x56C1F6
{
    mangled_assert("??0TeamColourInfo@TCStatics@@QAE@XZ");
    todo("implement");
    _sub_56C1F6(this);
}

_extern void _sub_56C697();
void TCStatics::InitStatics() // 0x56C697
{
    mangled_assert("?InitStatics@TCStatics@@YGXXZ");
    todo("implement");
    _sub_56C697();
}

_extern _sub_56C036(TeamColour *const, __int32);
TeamColour::TeamColour(__int32) // 0x56C036
{
    mangled_assert("??0TeamColour@@QAE@H@Z");
    todo("implement");
    _sub_56C036(this, arg);
}

_extern _sub_56BF60(TeamColour *const, TeamColour const &);
TeamColour::TeamColour(TeamColour const &) // 0x56BF60
{
    mangled_assert("??0TeamColour@@QAE@ABV0@@Z");
    todo("implement");
    _sub_56BF60(this, arg);
}

_extern void _sub_56D939(TeamColour *const, char const *);
void TeamColour::setBadgeTexture(char const *) // 0x56D939
{
    mangled_assert("?setBadgeTexture@TeamColour@@QAEXPBD@Z");
    todo("implement");
    _sub_56D939(this, arg);
}

_extern void _sub_56D658(TeamColour *const);
void TeamColour::computeCRC() // 0x56D658
{
    mangled_assert("?computeCRC@TeamColour@@AAEXXZ");
    todo("implement");
    _sub_56D658(this);
}

_extern void _sub_56DAAD(TeamColour *const, vector4 const &, vector4 const &);
void TeamColour::setTeamColours(vector4 const &, vector4 const &) // 0x56DAAD
{
    mangled_assert("?setTeamColours@TeamColour@@QAEXABVvector4@@0@Z");
    todo("implement");
    _sub_56DAAD(this, arg, arg);
}

_extern void _sub_56DACF(TeamColour *const, vector4 const &);
void TeamColour::setTrailColour(vector4 const &) // 0x56DACF
{
    mangled_assert("?setTrailColour@TeamColour@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_56DACF(this, arg);
}

_extern void _sub_56DB03(TeamColour *const, char const *);
void TeamColour::setTrailColourTexture(char const *) // 0x56DB03
{
    mangled_assert("?setTrailColourTexture@TeamColour@@QAEXPBD@Z");
    todo("implement");
    _sub_56DB03(this, arg);
}

_extern void _sub_56CAC6(TeamColour *const, vector4 const &);
void TeamColour::colourizeTrail(vector4 const &) // 0x56CAC6
{
    mangled_assert("?colourizeTrail@TeamColour@@AAEXABVvector4@@@Z");
    todo("implement");
    _sub_56CAC6(this, arg);
}

_extern void _sub_56CEB6(TeamColour *const, vector4 const &);
void TeamColour::colourizeTrailFromTexture(vector4 const &) // 0x56CEB6
{
    mangled_assert("?colourizeTrailFromTexture@TeamColour@@AAEXABVvector4@@@Z");
    todo("implement");
    _sub_56CEB6(this, arg);
}

_extern TeamColour &_sub_56C2F9(TeamColour *const, TeamColour const &);
TeamColour &TeamColour::operator=(TeamColour const &) // 0x56C2F9
{
    mangled_assert("??4TeamColour@@QAEAAV0@ABV0@@Z");
    todo("implement");
    TeamColour & __result = _sub_56C2F9(this, arg);
    return __result;
}

_extern _sub_56C1BD(TeamColour *const, SaveGameData *);
TeamColour::TeamColour(SaveGameData *) // 0x56C1BD
{
    mangled_assert("??0TeamColour@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
    _sub_56C1BD(this, arg);
}

_extern void _sub_56C27F(TeamColour *const);
TeamColour::~TeamColour() // 0x56C27F
{
    mangled_assert("??1TeamColour@@UAE@XZ");
    todo("implement");
    _sub_56C27F(this);
}

_extern void _sub_56C2E5(TCStatics::TeamColourInfo *const);
_inline TCStatics::TeamColourInfo::~TeamColourInfo() // 0x56C2E5
{
    mangled_assert("??1TeamColourInfo@TCStatics@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_56C2E5(this);
}

_extern void _sub_56D6A9(TeamColour *const);
void TeamColour::defaultSettings() // 0x56D6A9
{
    mangled_assert("?defaultSettings@TeamColour@@QAEXXZ");
    todo("implement");
    _sub_56D6A9(this);
}

_extern void _sub_56D87D(TeamColour *const);
void TeamColour::postRestore() // 0x56D87D
{
    mangled_assert("?postRestore@TeamColour@@UAEXXZ");
    todo("implement");
    _sub_56D87D(this);
}

_extern bool _sub_56D8C0(TeamColour *const, SaveGameData *);
bool TeamColour::restore(SaveGameData *) // 0x56D8C0
{
    mangled_assert("?restore@TeamColour@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
    bool __result = _sub_56D8C0(this, arg);
    return __result;
}

_extern bool _sub_56D8FE(TeamColour *const, SaveGameData *, SaveType);
bool TeamColour::save(SaveGameData *, SaveType) // 0x56D8FE
{
    mangled_assert("?save@TeamColour@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
    bool __result = _sub_56D8FE(this, arg, arg);
    return __result;
}

/* ---------- private code */

_extern void _sub_56C587(vector4 &);
_static void ClampTrailColour(vector4 &trail) // 0x56C587
{
    mangled_assert("ClampTrailColour");
    todo("implement");
    _sub_56C587(trail);
}

_extern void _sub_56C9C3(vector4 const &, vector4 &, float, float, float);
_static void adjustColour(vector4 const &baseColour, vector4 &adjustedColour, float colourizeHue, float colourizeLum, float colourizeSat) // 0x56C9C3
{
    mangled_assert("adjustColour");
    todo("implement");
    _sub_56C9C3(baseColour, adjustedColour, colourizeHue, colourizeLum, colourizeSat);
}

_extern void _sub_56D6AA(vector4 *, vector4 const &, vector4 const &, unsigned __int32, unsigned __int32);
_static void fillGradient(vector4 *cols, vector4 const &headColour, vector4 const &tailColour, unsigned __int32 headIndex, unsigned __int32 tailIndex) // 0x56D6AA
{
    mangled_assert("fillGradient");
    todo("implement");
    _sub_56D6AA(cols, headColour, tailColour, headIndex, tailIndex);
}

_extern void _sub_56C859(float, ImageTGA const *, std::vector<float,std::allocator<float> > &);
_static void ReadHueGradient(float trailHue, ImageTGA const *image, std::vector<float,std::allocator<float> > &gradient) // 0x56C859
{
    mangled_assert("ReadHueGradient");
    todo("implement");
    _sub_56C859(trailHue, image, gradient);
}

_extern float _sub_56C3D6(float, float, std::vector<float,std::allocator<float> > &);
_static float CalcHueShift(float trailHue, float shiftAmount, std::vector<float,std::allocator<float> > &gradient) // 0x56C3D6
{
    mangled_assert("CalcHueShift");
    todo("implement");
    float __result = _sub_56C3D6(trailHue, shiftAmount, gradient);
    return __result;
}
#endif
