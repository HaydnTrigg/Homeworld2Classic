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

_inline TCStatics::TeamColourInfo::TeamColourInfo() // 0x56C1F6
{
    mangled_assert("??0TeamColourInfo@TCStatics@@QAE@XZ");
    todo("implement");
}

void TCStatics::InitStatics() // 0x56C697
{
    mangled_assert("?InitStatics@TCStatics@@YGXXZ");
    todo("implement");
}

TeamColour::TeamColour(__int32) // 0x56C036
{
    mangled_assert("??0TeamColour@@QAE@H@Z");
    todo("implement");
}

TeamColour::TeamColour(TeamColour const &) // 0x56BF60
{
    mangled_assert("??0TeamColour@@QAE@ABV0@@Z");
    todo("implement");
}

void TeamColour::setBadgeTexture(char const *) // 0x56D939
{
    mangled_assert("?setBadgeTexture@TeamColour@@QAEXPBD@Z");
    todo("implement");
}

void TeamColour::computeCRC() // 0x56D658
{
    mangled_assert("?computeCRC@TeamColour@@AAEXXZ");
    todo("implement");
}

void TeamColour::setTeamColours(vector4 const &, vector4 const &) // 0x56DAAD
{
    mangled_assert("?setTeamColours@TeamColour@@QAEXABVvector4@@0@Z");
    todo("implement");
}

void TeamColour::setTrailColour(vector4 const &) // 0x56DACF
{
    mangled_assert("?setTrailColour@TeamColour@@QAEXABVvector4@@@Z");
    todo("implement");
}

void TeamColour::setTrailColourTexture(char const *) // 0x56DB03
{
    mangled_assert("?setTrailColourTexture@TeamColour@@QAEXPBD@Z");
    todo("implement");
}

void TeamColour::colourizeTrail(vector4 const &) // 0x56CAC6
{
    mangled_assert("?colourizeTrail@TeamColour@@AAEXABVvector4@@@Z");
    todo("implement");
}

void TeamColour::colourizeTrailFromTexture(vector4 const &) // 0x56CEB6
{
    mangled_assert("?colourizeTrailFromTexture@TeamColour@@AAEXABVvector4@@@Z");
    todo("implement");
}

TeamColour &TeamColour::operator=(TeamColour const &) // 0x56C2F9
{
    mangled_assert("??4TeamColour@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

TeamColour::TeamColour(SaveGameData *) // 0x56C1BD
{
    mangled_assert("??0TeamColour@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

TeamColour::~TeamColour() // 0x56C27F
{
    mangled_assert("??1TeamColour@@UAE@XZ");
    todo("implement");
}

_inline TCStatics::TeamColourInfo::~TeamColourInfo() // 0x56C2E5
{
    mangled_assert("??1TeamColourInfo@TCStatics@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

void TeamColour::defaultSettings() // 0x56D6A9
{
    mangled_assert("?defaultSettings@TeamColour@@QAEXXZ");
    todo("implement");
}

void TeamColour::postRestore() // 0x56D87D
{
    mangled_assert("?postRestore@TeamColour@@UAEXXZ");
    todo("implement");
}

bool TeamColour::restore(SaveGameData *) // 0x56D8C0
{
    mangled_assert("?restore@TeamColour@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool TeamColour::save(SaveGameData *, SaveType) // 0x56D8FE
{
    mangled_assert("?save@TeamColour@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void ClampTrailColour(vector4 &trail) // 0x56C587
{
    mangled_assert("ClampTrailColour");
    todo("implement");
}

_static void adjustColour(vector4 const &baseColour, vector4 &adjustedColour, float colourizeHue, float colourizeLum, float colourizeSat) // 0x56C9C3
{
    mangled_assert("adjustColour");
    todo("implement");
}

_static void fillGradient(vector4 *cols, vector4 const &headColour, vector4 const &tailColour, unsigned __int32 headIndex, unsigned __int32 tailIndex) // 0x56D6AA
{
    mangled_assert("fillGradient");
    todo("implement");
}

_static void ReadHueGradient(float trailHue, ImageTGA const *image, std::vector<float,std::allocator<float> > &gradient) // 0x56C859
{
    mangled_assert("ReadHueGradient");
    todo("implement");
}

_static float CalcHueShift(float trailHue, float shiftAmount, std::vector<float,std::allocator<float> > &gradient) // 0x56C3D6
{
    mangled_assert("CalcHueShift");
    todo("implement");
}
#endif
