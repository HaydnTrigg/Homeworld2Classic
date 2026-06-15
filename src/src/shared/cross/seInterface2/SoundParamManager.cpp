#if 0
/* ---------- headers */

#include "decomp.h"
#include <boost\scoped_array.hpp>
#include <boost\config.hpp>
#include <boost\config\user.hpp>
#include <fileio\filestream.h>
#include <boost\config\select_compiler_config.hpp>
#include <memory\memorylib.h>
#include <boost\config\compiler\visualc.hpp>
#include <crtdefs.h>
#include <boost\config\select_stdlib_config.hpp>
#include <list>
#include <boost\config\stdlib\dinkumware.hpp>
#include <boost\config\select_platform_config.hpp>
#include <boost\config\platform\win32.hpp>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <assist\typemagic.h>
#include <new>
#include <xmemory0>
#include <xstddef>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <boost\config\suffix.hpp>
#include <type_traits>
#include <xstring>
#include <assist\gbitset.h>
#include <xutility>
#include <xatomic0.h>
#include <utility>
#include <iosfwd>
#include <debug\db.h>
#include <boost\shared_array.hpp>
#include <bitset>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <map>
#include <xtree>
#include <algorithm>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lightweight_mutex.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <assert.h>
#include <boost\checked_delete.hpp>
#include <string>
#include <seInterface2\sedefinesshared.h>
#include <memory>
#include <wchar.h>
#include <stdint.h>
#include "src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\SoundParams.h>
#include <boost\detail\workaround.hpp>

/* ---------- constants */

enum SoundParamManager_SourceExt
{
    EXT_AIFF = 0,
    EXT_AIF,
    EXT_WAV,
    EXT_MP3,
    EXT_FDA,
    EXT_Count,
};

enum SoundParamManager_ValueType
{
    VT_UInt = 0,
    VT_Long,
    VT_Float,
    VT_Envelope,
    VT_Effects,
    VT_COUNT,
};

/* ---------- definitions */

struct SoundParamManager_ParamDesc
{
    SoundParamManager_ValueType valueType; // 0x0
    char const *label; // 0x4
    SoundParams::ParamType paramType; // 0x8
    SoundParams::RangeType rangeType; // 0xC
    SoundParams::SpecialValues specialVal; // 0x10
    unsigned __int32 offset; // 0x14
};
static_assert(sizeof(SoundParamManager_ParamDesc) == 24, "Invalid SoundParamManager_ParamDesc size");

/* ---------- prototypes */


_static char const *getExtension(char const *filename);
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > getParentFolder(char const *fname);
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > getTitle(char const *fname);
_static bool getParameter(LuaConfig &lc, char const *name, __int32 min, __int32 max, __int32 special, __int32 &val);
_static bool getParameter(LuaConfig &lc, char const *name, unsigned __int32 min, unsigned __int32 max, unsigned __int32 special, unsigned __int32 &val);
_static bool getParameter(LuaConfig &lc, char const *name, float min, float max, float special, float &val);
_static bool getParameter(LuaConfig &lc, char const *name, long min, long max, long special, long &val);
_static bool getEnvelope(LuaConfig &lc, char const *label, SoundParams::EnvelopePoint *val);
_static bool getEffects(LuaConfig &lc, char const *label, SoundParams::EffectContainer *val);
_static void getParameter(LuaConfig &lc, unsigned __int32 paramIndex, SoundParams &params, TypedBitSet<enum SoundParams::ParamType,30> &overrides);
_static void removeOverride(TypedBitSet<enum SoundParams::ParamType,30> const &removalMask, TypedBitSet<enum SoundParams::ParamType,30> &overrides);
_static bool loadOldReverbVer1(LuaConfig &lc, SoundParams &params);
_static bool loadOldEqualizerVer1(LuaConfig &lc, SoundParams &params);
_static bool loadOldData(__int32 version, LuaConfig &lc, SoundParams &params);
_static void writeEnvelope(FileStream &stream, char const *label, SoundParams::EnvelopePoint const *val);
_static void writeEffects(FileStream &stream, char const *label, SoundParams::EffectContainer const *val);
_static void writeParameter(FileStream &stream, unsigned __int32 index, SoundParams const &params, TypedBitSet<enum SoundParams::ParamType,30> const &overrides, bool bWriteAll);
_static void flagDifferences(SoundParams const &params0, SoundParams const &params1, TypedBitSet<enum SoundParams::ParamType,30> &overrides);
_static bool canWrite(char const *fname);

/* ---------- globals */

extern char const *SoundParamManager_ParamExt; // 0x83F898
extern char const *SoundParamManager_RootFname; // 0x83F89C
extern char const *SoundParamManager_SourceExt[5]; // 0x83F8A0
extern char const *SoundParamManager_DistanceLabel; // 0x83F8B4
extern char const *SoundParamManager_Volume; // 0x83F8B8
extern char const *SoundParamManager_ReverbLabel; // 0x83F8BC
extern char const *SoundParamManager_DurationLabel; // 0x83F8C0
extern char const *SoundParamManager_EqualizerLabel; // 0x83F8C4
extern char const *SoundParamManager_RandSampContLabel; // 0x83F8C8
extern char const *SoundParamManager_FilterMinLabel; // 0x83F8CC
extern char const *SoundParamManager_FilterMaxLabel; // 0x83F8D0
extern char const *SoundParamManager_ToneMinLabel; // 0x83F8D4
extern char const *SoundParamManager_ToneMaxLabel; // 0x83F8D8
extern char const *SoundParamManager_ToneDurLabel; // 0x83F8DC
extern char const *SoundParamManager_ToneMuteLabel; // 0x83F8E0
extern char const *SoundParamManager_ToneCountLabel; // 0x83F8E4
extern char const *SoundParamManager_BreakRateLabel; // 0x83F8E8
extern char const *SoundParamManager_BreakDurLabel; // 0x83F8EC
extern char const *SoundParamManager_NoiseRateLabel; // 0x83F8F0
extern char const *SoundParamManager_NoiseDurLabel; // 0x83F8F4
extern char const *SoundParamManager_ScaleLabel; // 0x83F8F8
extern char const *SoundParamManager_NoiseLevLabel; // 0x83F8FC
extern char const *SoundParamManager_ToneLevLabel; // 0x83F900
extern char const *SoundParamManager_LimitLevLabel; // 0x83F904
extern char const *SoundParamManager_PitchLabel; // 0x83F908
extern SoundParamManager *s_instance; // 0x84CA98

/* ---------- private variables */

_static
{
    extern SoundParamManager_ParamDesc SoundParamManager_ParamDescTable[30]; // 0x83F920
    extern SoundParams::ParamType SoundParamManager_SampleParams[5]; // 0x83F90C
}

/* ---------- public code */

_inline bool SoundParamManager::Data::LessString::operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x6C3D2A
{
    mangled_assert("??RLessString@Data@SoundParamManager@@QBE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z");
    todo("implement");
}

__int32 SoundParamManager::Data::pathCmp(char const *s1, char const *s2) // 0x6C61C6
{
    mangled_assert("?pathCmp@Data@SoundParamManager@@SGHPBD0@Z");
    todo("implement");
}

_inline SoundParamManager::Data::Data() // 0x6C3847
{
    mangled_assert("??0Data@SoundParamManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SoundParamManager::SoundInfo::SoundInfo(SoundParamManager::SoundInfo const &) // 0x6C388B
{
    mangled_assert("??0SoundInfo@SoundParamManager@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

void SoundParamManager::Initialize() // 0x6C42D2
{
    mangled_assert("?Initialize@SoundParamManager@@SGXXZ");
    todo("implement");
}

void SoundParamManager::Shutdown() // 0x6C4B4C
{
    mangled_assert("?Shutdown@SoundParamManager@@SGXXZ");
    todo("implement");
}

SoundParamManager *SoundParamManager::Instance() // 0x6C4309
{
    mangled_assert("?Instance@SoundParamManager@@SGPAV1@XZ");
    todo("implement");
}

SoundParamManager::SoundParamManager() // 0x6C38F8
{
    mangled_assert("??0SoundParamManager@@AAE@XZ");
    todo("implement");
}

_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo> > >() // 0x6C3959
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSoundInfo@SoundParamManager@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSoundInfo@SoundParamManager@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SoundParamManager::SoundInfo,SoundParamManager::Data::LessString,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SoundParamManager::SoundInfo,SoundParamManager::Data::LessString,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo> >,0> >() // 0x6C3962
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSoundInfo@SoundParamManager@@VLessString@Data@4@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSoundInfo@SoundParamManager@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SoundParamManager::SoundInfo,SoundParamManager::Data::LessString,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SoundParamManager::SoundInfo,SoundParamManager::Data::LessString,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo> > >() // 0x6C396B
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSoundInfo@SoundParamManager@@VLessString@Data@4@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSoundInfo@SoundParamManager@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SoundParamManager::SoundInfo>() // 0x6C3970
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSoundInfo@SoundParamManager@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SoundParamManager::SoundInfo>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SoundParamManager::SoundInfo>() // 0x6C3975
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSoundInfo@SoundParamManager@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SoundParamManager::Data::~Data() // 0x6C3988
{
    mangled_assert("??1Data@SoundParamManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SoundParamManager::~SoundParamManager() // 0x6C399B
{
    mangled_assert("??1SoundParamManager@@AAE@XZ");
    todo("implement");
}

_inline SoundParamManager::SoundInfo &SoundParamManager::SoundInfo::operator=(SoundParamManager::SoundInfo const &) // 0x6C39B6
{
    mangled_assert("??4SoundInfo@SoundParamManager@@QAEAAV01@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline SoundParams &SoundParams::operator=(SoundParams const &) // 0x6C39FB
{
    mangled_assert("??4SoundParams@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
}

bool SoundParamManager::SetRootPath(char const *) // 0x6C49E8
{
    mangled_assert("?SetRootPath@SoundParamManager@@QAE_NPBD@Z");
    todo("implement");
}

char const *SoundParamManager::GetRootPath() const // 0x6C4112
{
    mangled_assert("?GetRootPath@SoundParamManager@@QBEPBDXZ");
    todo("implement");
}

bool SoundParamManager::GetInfo(char const *, bool, SoundParamManager::SoundInfo &) // 0x6C3DBF
{
    mangled_assert("?GetInfo@SoundParamManager@@QAE_NPBD_NAAVSoundInfo@1@@Z");
    todo("implement");
}

bool SoundParamManager::GetParentInfo(char const *, SoundParamManager::SoundInfo &) // 0x6C402E
{
    mangled_assert("?GetParentInfo@SoundParamManager@@QAE_NPBDAAVSoundInfo@1@@Z");
    todo("implement");
}

bool SoundParamManager::GetParams(char const *, bool, SoundParams &) // 0x6C3F6D
{
    mangled_assert("?GetParams@SoundParamManager@@QAE_NPBD_NAAVSoundParams@@@Z");
    todo("implement");
}

bool SoundParamManager::GetParentParams(char const *, SoundParams &) // 0x6C40A0
{
    mangled_assert("?GetParentParams@SoundParamManager@@QAE_NPBDAAVSoundParams@@@Z");
    todo("implement");
}

bool SoundParamManager::SetParams(char const *, bool, SoundParams const &, TypedBitSet<enum SoundParams::ParamType,30> const &, bool) // 0x6C4610
{
    mangled_assert("?SetParams@SoundParamManager@@QAE_NPBD_NABVSoundParams@@ABV?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@1@Z");
    todo("implement");
}

SoundParams::ParamType const *SoundParamManager::GetSampleParams() // 0x6C411D
{
    mangled_assert("?GetSampleParams@SoundParamManager@@SGPBW4ParamType@SoundParams@@XZ");
    todo("implement");
}

unsigned __int32 SoundParamManager::GetNumSampleParams() // 0x6C3F69
{
    mangled_assert("?GetNumSampleParams@SoundParamManager@@SGIXZ");
    todo("implement");
}

bool SoundParamManager::SetRandSampContainer(char const *, bool, bool) // 0x6C4866
{
    mangled_assert("?SetRandSampContainer@SoundParamManager@@QAE_NPBD_N1@Z");
    todo("implement");
}

bool SoundParamManager::HasChildParamFiles(char const *) // 0x6C4123
{
    mangled_assert("?HasChildParamFiles@SoundParamManager@@QAE_NPBD@Z");
    todo("implement");
}

bool SoundParamManager::HasSoundFileExt(char const *) // 0x6C429D
{
    mangled_assert("?HasSoundFileExt@SoundParamManager@@QAE_NPBD@Z");
    todo("implement");
}

bool SoundParamManager::IsValidForDest(char const *, unsigned long) // 0x6C430F
{
    mangled_assert("?IsValidForDest@SoundParamManager@@QAE_NPBDK@Z");
    todo("implement");
}

bool SoundParamManager::HasParamFileExt(char const *) // 0x6C427C
{
    mangled_assert("?HasParamFileExt@SoundParamManager@@QAE_NPBD@Z");
    todo("implement");
}

char const *SoundParamManager::GetParamsFilename(char const *, bool) // 0x6C3FB6
{
    mangled_assert("?GetParamsFilename@SoundParamManager@@QAEPBDPBD_N@Z");
    todo("implement");
}

bool SoundParamManager::Propagate(char const *, TypedBitSet<enum SoundParams::ParamType,30> const &, bool) // 0x6C43D7
{
    mangled_assert("?Propagate@SoundParamManager@@QAE_NPBDABV?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@_N@Z");
    todo("implement");
}

void SoundParamManager::Refresh() // 0x6C45C7
{
    mangled_assert("?Refresh@SoundParamManager@@QAEXXZ");
    todo("implement");
}

bool SoundParamManager::isRoot(char const *) const // 0x6C5C9B
{
    mangled_assert("?isRoot@SoundParamManager@@ABE_NPBD@Z");
    todo("implement");
}

void SoundParamManager::luaSetup(LuaConfig &) const // 0x6C5F42
{
    mangled_assert("?luaSetup@SoundParamManager@@ABEXAAVLuaConfig@@@Z");
    todo("implement");
}

bool SoundParamManager::loadParams(char const *, SoundParamManager::SoundInfo &, bool *) const // 0x6C5E11
{
    mangled_assert("?loadParams@SoundParamManager@@ABE_NPBDAAVSoundInfo@1@PA_N@Z");
    todo("implement");
}

bool SoundParamManager::saveParams(char const *, SoundParamManager::SoundInfo const &, bool) const // 0x6C62FB
{
    mangled_assert("?saveParams@SoundParamManager@@ABE_NPBDABVSoundInfo@1@_N@Z");
    todo("implement");
}

bool SoundParamManager::propagateToFile(char const *, bool, TypedBitSet<enum SoundParams::ParamType,30> const &) // 0x6C623E
{
    mangled_assert("?propagateToFile@SoundParamManager@@AAE_NPBD_NABV?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@@Z");
    todo("implement");
}

std::basic_string<char,std::char_traits<char>,std::allocator<char> > SoundParamManager::getParamsFilename(char const *, bool) // 0x6C5A59
{
    mangled_assert("?getParamsFilename@SoundParamManager@@AAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBD_N@Z");
    todo("implement");
}

/* ---------- private code */

_static char const *getExtension(char const *filename) // 0x6C5711
{
    mangled_assert("getExtension");
    todo("implement");
}

_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > getParentFolder(char const *fname) // 0x6C5BA7
{
    mangled_assert("getParentFolder");
    todo("implement");
}

_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > getTitle(char const *fname) // 0x6C5C28
{
    mangled_assert("getTitle");
    todo("implement");
}

_static bool getParameter(LuaConfig &lc, char const *name, __int32 min, __int32 max, __int32 special, __int32 &val) // 0x6C5927
{
    mangled_assert("getParameter");
    todo("implement");
}

_static bool getParameter(LuaConfig &lc, char const *name, unsigned __int32 min, unsigned __int32 max, unsigned __int32 special, unsigned __int32 &val) // 0x6C5964
{
    mangled_assert("getParameter");
    todo("implement");
}

_static bool getParameter(LuaConfig &lc, char const *name, float min, float max, float special, float &val) // 0x6C5A09
{
    mangled_assert("getParameter");
    todo("implement");
}

_static bool getParameter(LuaConfig &lc, char const *name, long min, long max, long special, long &val) // 0x6C59A1
{
    mangled_assert("getParameter");
    todo("implement");
}

_static bool getEnvelope(LuaConfig &lc, char const *label, SoundParams::EnvelopePoint *val) // 0x6C5573
{
    mangled_assert("getEnvelope");
    todo("implement");
}

_static bool getEffects(LuaConfig &lc, char const *label, SoundParams::EffectContainer *val) // 0x6C527C
{
    mangled_assert("getEffects");
    todo("implement");
}

_static void getParameter(LuaConfig &lc, unsigned __int32 paramIndex, SoundParams &params, TypedBitSet<enum SoundParams::ParamType,30> &overrides) // 0x6C572E
{
    mangled_assert("getParameter");
    todo("implement");
}

_static void removeOverride(TypedBitSet<enum SoundParams::ParamType,30> const &removalMask, TypedBitSet<enum SoundParams::ParamType,30> &overrides) // 0x6C62CE
{
    mangled_assert("removeOverride");
    todo("implement");
}

_static bool loadOldReverbVer1(LuaConfig &lc, SoundParams &params) // 0x6C5DA6
{
    mangled_assert("loadOldReverbVer1");
    todo("implement");
}

_static bool loadOldEqualizerVer1(LuaConfig &lc, SoundParams &params) // 0x6C5CEC
{
    mangled_assert("loadOldEqualizerVer1");
    todo("implement");
}

_static bool loadOldData(__int32 version, LuaConfig &lc, SoundParams &params) // 0x6C5CBA
{
    mangled_assert("loadOldData");
    todo("implement");
}

_static void writeEnvelope(FileStream &stream, char const *label, SoundParams::EnvelopePoint const *val) // 0x6C6645
{
    mangled_assert("writeEnvelope");
    todo("implement");
}

_static void writeEffects(FileStream &stream, char const *label, SoundParams::EffectContainer const *val) // 0x6C6458
{
    mangled_assert("writeEffects");
    todo("implement");
}

_static void writeParameter(FileStream &stream, unsigned __int32 index, SoundParams const &params, TypedBitSet<enum SoundParams::ParamType,30> const &overrides, bool bWriteAll) // 0x6C674C
{
    mangled_assert("writeParameter");
    todo("implement");
}

_static void flagDifferences(SoundParams const &params0, SoundParams const &params1, TypedBitSet<enum SoundParams::ParamType,30> &overrides) // 0x6C51B2
{
    mangled_assert("flagDifferences");
    todo("implement");
}

_static bool canWrite(char const *fname) // 0x6C4E1A
{
    mangled_assert("canWrite");
    todo("implement");
}
#endif
