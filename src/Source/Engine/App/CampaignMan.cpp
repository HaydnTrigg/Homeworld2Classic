#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <fileio\filepath.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <boost\noncopyable.hpp>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <campaign.h>
#include <scripting.h>
#include <scriptaccess.h>
#include <scripttypedef.h>
#include <lua.h>
#include <util\colour.h>
#include <savegamedef.h>
#include <App\CampaignMan.h>
#include <stack>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *CAMPAIGNALIAS; // 0x8367D8
    extern char const *CAMPAIGNDIR; // 0x8367DC
    extern char const *CAMPAIGNEXT; // 0x8367E0
    extern CampaignMan *s_CampaignMan; // 0x84435C
}

/* ---------- public code */

_extern _sub_4F7495(CampaignMan::CampaignEntry *const);
_inline CampaignMan::CampaignEntry::CampaignEntry() // 0x4F7495
{
    mangled_assert("??0CampaignEntry@CampaignMan@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F7495(this);
}

_extern CampaignMan *_sub_4F7646();
CampaignMan *CampaignMan::Instance() // 0x4F7646
{
    mangled_assert("?Instance@CampaignMan@@SGPAV1@XZ");
    todo("implement");
    CampaignMan * __result = _sub_4F7646();
    return __result;
}

_extern bool _sub_4F761C();
bool CampaignMan::Initialize() // 0x4F761C
{
    mangled_assert("?Initialize@CampaignMan@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F761C();
    return __result;
}

_extern bool _sub_4F7676();
bool CampaignMan::Shutdown() // 0x4F7676
{
    mangled_assert("?Shutdown@CampaignMan@@SG_NXZ");
    todo("implement");
    bool __result = _sub_4F7676();
    return __result;
}

_extern _sub_4F74A3(CampaignMan *const);
CampaignMan::CampaignMan() // 0x4F74A3
{
    mangled_assert("??0CampaignMan@@AAE@XZ");
    todo("implement");
    _sub_4F74A3(this);
}

_extern void _sub_4F74BA(CampaignMan::CampaignEntry *const);
_inline CampaignMan::CampaignEntry::~CampaignEntry() // 0x4F74BA
{
    mangled_assert("??1CampaignEntry@CampaignMan@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4F74BA(this);
}

_extern void _sub_4F74BB(CampaignMan *const);
CampaignMan::~CampaignMan() // 0x4F74BB
{
    mangled_assert("??1CampaignMan@@AAE@XZ");
    todo("implement");
    _sub_4F74BB(this);
}

_extern unsigned __int32 _sub_4F7604(CampaignMan *const);
unsigned __int32 CampaignMan::GetNumCampaigns() // 0x4F7604
{
    mangled_assert("?GetNumCampaigns@CampaignMan@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_4F7604(this);
    return __result;
}

_extern char const *_sub_4F75E3(CampaignMan *const, unsigned __int32);
char const *CampaignMan::GetCampaignAt(unsigned __int32) // 0x4F75E3
{
    mangled_assert("?GetCampaignAt@CampaignMan@@QAEPBDI@Z");
    todo("implement");
    char const * __result = _sub_4F75E3(this, arg);
    return __result;
}

_extern bool _sub_4F764C(CampaignMan *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
bool CampaignMan::SetCampaign(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4F764C
{
    mangled_assert("?SetCampaign@CampaignMan@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_4F764C(this, arg);
    return __result;
}

_extern void _sub_4F751A(CampaignMan *const);
void CampaignMan::FindCampaigns() // 0x4F751A
{
    mangled_assert("?FindCampaigns@CampaignMan@@AAEXXZ");
    todo("implement");
    _sub_4F751A(this);
}

/* ---------- private code */
#endif
