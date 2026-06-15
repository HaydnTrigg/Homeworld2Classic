#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <memory\memorylib.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <luaconfig\luaconfig.h>
#include <assist\typemagic.h>
#include <lua\lua.h>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <vector>
#include <seInterface2\sedefinesshared.h>
#include <new>
#include <xmemory>
#include <xmemory0>
#include <xstddef>
#include <memory\memorypool.h>
#include <type_traits>
#include <xstring>
#include <SoundManager\HW2Patch.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <debug\db.h>
#include <Engine\gameRandom.h>
#include <Engine\savegamedef.h>
#include <boost\scoped_array.hpp>
#include <SoundManager\HW2Sample.h>
#include <algorithm>
#include <Engine\random.h>
#include <platform\cmdline.h>
#include <assist\gbitset.h>
#include <fileio\platform.h>
#include <seInterface2\sedefines.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <fileio\bytestream.h>
#include <debug\ctassert.h>
#include <SoundManager\pch.h>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\SoundParamManager.h>
#include <boost\shared_ptr.hpp>
#include <bitset>
#include <wchar.h>
#include <SoundManager\SoundEntityHandle.h>
#include <math.h>
#include <map>
#include <xtree>
#include <SoundManager\soundmandata.h>
#include <SoundManager\SoundEntity.h>
#include <luaconfig\luautils.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Mathlib\vector3.h>
#include <platform\windowinterface.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <boost\shared_array.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <boost\noncopyable.hpp>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::seInterfaceFuncImpl :
    public seInterfaceFunc
{
public:
    typedef std::vector<ByteStreamProxy,std::allocator<ByteStreamProxy> > FileArray;
private:
    MemoryPoolObj m_memory; // 0x4
    Plat::CriticalSection m_filesLock; // 0x10
    std::vector<ByteStreamProxy,std::allocator<ByteStreamProxy> > m_files; // 0x14
public:
    seInterfaceFuncImpl(`anonymous-namespace'::seInterfaceFuncImpl const &); /* compiler_generated() */
    seInterfaceFuncImpl();
    ~seInterfaceFuncImpl();
private:
    bool ConvertHandle(unsigned __int32 &, unsigned long const) const;
public:
    virtual PatchBase *PatchCreate(char const *) override;
    virtual void PatchDestroy(PatchBase *) override;
    virtual void PatchSave(PatchBase const *, char const *) override;
    virtual SampleBase *SampleCreate(char const *) override;
    virtual void SampleDestroy(SampleBase *) override;
    virtual void SampleSave(SampleBase const *, char const *) override;
    virtual unsigned long FileOpen(char const *) override;
    virtual __int32 FileClose(unsigned long) override;
    virtual long FileTell(unsigned long) override;
    virtual __int32 FileSeek(unsigned long, __int32, seInterfaceFunc::FileSeekOrigin) override;
    virtual unsigned __int32 FileRead(unsigned long, void *, unsigned __int32) override;
    virtual bool FileEOF(unsigned long) override;
    virtual float Rand() override;
    virtual unsigned long RandRange(unsigned long, unsigned long) override;
    virtual void *MemAlloc(unsigned __int32) override;
    virtual void MemFree(void *) override;
    virtual void DbgPrint(char const *, ...) override;
    virtual void DbgTrace(char const *, ...) override;
    virtual float GetTime() override;
    `anonymous-namespace'::seInterfaceFuncImpl &operator=(`anonymous-namespace'::seInterfaceFuncImpl const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::seInterfaceFuncImpl) == 32, "Invalid `anonymous-namespace'::seInterfaceFuncImpl size");

typedef `anonymous-namespace'::seInterfaceFuncImpl ?A0x02dda8f8::seInterfaceFuncImpl;
typedef std::vector<ByteStreamProxy,std::allocator<ByteStreamProxy> > FileArray;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern Timer s_soundTimer; // 0x84CAD0
    extern SoundManager *s_instance; // 0x84CAC8
}

/* ---------- public code */

_inline SoundManager::Data::Data() // 0x6C9E11
{
    mangled_assert("??0Data@SoundManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SoundManager::SoundManager() // 0x6C9EC9
{
    mangled_assert("??0SoundManager@@AAE@XZ");
    todo("implement");
}

_inline seInterfaceFunc::seInterfaceFunc() // 0x6CA1E2
{
    mangled_assert("??0seInterfaceFunc@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~_Tree_buy<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x6CA260
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,0> >() // 0x6CA269
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >::~map<int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<int>,std::allocator<std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >() // 0x6CA28C
{
    mangled_assert("??1?$map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >::~pair<int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > >() // 0x6CA291
{
    mangled_assert("??1?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SoundManager::Data::~Data() // 0x6CA2A3
{
    mangled_assert("??1Data@SoundManager@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SoundManager::~SoundManager() // 0x6CA339
{
    mangled_assert("??1SoundManager@@AAE@XZ");
    todo("implement");
}

_inline SpeechQueue::~SpeechQueue() // 0x6CA35D
{
    mangled_assert("??1SpeechQueue@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SoundManager *SoundManager::i() // 0x6CC004
{
    mangled_assert("?i@SoundManager@@SGPAV1@XZ");
    todo("implement");
}

bool SoundManager::IsInitialized() // 0x6CB363
{
    mangled_assert("?IsInitialized@SoundManager@@SG_NXZ");
    todo("implement");
}

Timer *SoundManager::GetTimer() // 0x6CA90C
{
    mangled_assert("?GetTimer@SoundManager@@AAEPAVTimer@@XZ");
    todo("implement");
}

void SoundManager::SaveSettings(LuaConfig &) // 0x6CB741
{
    mangled_assert("?SaveSettings@SoundManager@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

void SoundManager::LoadSettings(LuaConfig &) // 0x6CB36F
{
    mangled_assert("?LoadSettings@SoundManager@@QAEXAAVLuaConfig@@@Z");
    todo("implement");
}

bool SoundManager::Initialize(char const *driverpath, bool loadLuaConfig, __int32 *hwnd) // 0x6CB11B
{
    mangled_assert("?Initialize@SoundManager@@SG_NPBD_NPAH@Z");
    todo("implement");
}

bool SoundManager::Shutdown() // 0x6CB855
{
    mangled_assert("?Shutdown@SoundManager@@SG_NXZ");
    todo("implement");
}

bool SoundManager::InitDriverSettings(seModeInfo *, char *) // 0x6CA912
{
    mangled_assert("?InitDriverSettings@SoundManager@@AAE_NPAUseModeInfo@@PAD@Z");
    todo("implement");
}

void SoundManager::InitVars() // 0x6CACA0
{
    mangled_assert("?InitVars@SoundManager@@AAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
