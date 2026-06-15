#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Engine\scripting.h>
#include <xmemory>
#include <Engine\scriptaccess.h>
#include <Engine\scripttypedef.h>
#include <fileio\filepath.h>
#include <lua\lua.h>
#include <list>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <util\colour.h>
#include <Engine\savegameimpl.h>
#include <boost\cstdint.hpp>
#include <luaconfig\luaconfig.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <luaconfig\luabinding.h>
#include <Engine\Family.h>
#include <Engine\pch.h>
#include <Engine\DockQueue.h>
#include <Engine\SquadronQueue.h>
#include <Mathlib\vector2.h>
#include <Engine\ITweak.h>
#include <Engine\Tactics.h>
#include <assist\stlexsmallvector.h>
#include <profile\profile.h>
#include <iostream>
#include <wchar.h>
#include <Engine\FamilyListMgr.h>
#include <Engine\FamilyList.h>
#include <set>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void addDockQueueFamily(char const *family, float deltaHeight, float spacing);
extern bool dockQueueStartup();
extern bool dockQueueShutdown();

/* ---------- globals */

extern char const DockQueue::m_saveToken[10]; // 0x7B79E4
extern SaveData const DockQueue::m_saveData[1]; // 0x7B79F0
extern std::vector<DockQueue::QueueFamilies,std::allocator<DockQueue::QueueFamilies> > DockQueue::m_queueFamilies; // 0x84CA28

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x84CA34
}

/* ---------- public code */

void addDockQueueFamily(char const *family, float deltaHeight, float spacing) // 0x6A4D88
{
    mangled_assert("?addDockQueueFamily@@YGXPBDMM@Z");
    todo("implement");
}

bool dockQueueStartup() // 0x6A5037
{
    mangled_assert("?dockQueueStartup@@YG_NXZ");
    todo("implement");
}

bool dockQueueShutdown() // 0x6A502F
{
    mangled_assert("?dockQueueShutdown@@YG_NXZ");
    todo("implement");
}

DockQueue::DockQueue() // 0x6A405F
{
    mangled_assert("??0DockQueue@@QAE@XZ");
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,float,float,void,LuaBinding::Functor3Free<char const *,float,float,void> >::~ObjInternal3<char const *,float,float,void,LuaBinding::Functor3Free<char const *,float,float,void> >() // 0x6A40A2
{
    mangled_assert("??1?$ObjInternal3@PBDMMXV?$Functor3Free@PBDMMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<int,std::allocator<int> >::~_Tree_buy<int,std::allocator<int> >() // 0x6A411D
{
    mangled_assert("??1?$_Tree_buy@HV?$allocator@H@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<int const ,float>,std::allocator<std::pair<int const ,float> > >::~_Tree_buy<std::pair<int const ,float>,std::allocator<std::pair<int const ,float> > >() // 0x6A4126
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBHM@std@@V?$allocator@U?$pair@$$CBHM@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<std::pair<Squadron * const,vector3>,std::allocator<std::pair<Squadron * const,vector3> > >::~_Tree_buy<std::pair<Squadron * const,vector3>,std::allocator<std::pair<Squadron * const,vector3> > >() // 0x6A412F
{
    mangled_assert("??1?$_Tree_buy@U?$pair@QAVSquadron@@Vvector3@@@std@@V?$allocator@U?$pair@QAVSquadron@@Vvector3@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<int,float,std::less<int>,std::allocator<std::pair<int const ,float> >,0> >::~_Tree_comp<0,std::_Tmap_traits<int,float,std::less<int>,std::allocator<std::pair<int const ,float> >,0> >() // 0x6A4138
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@HMU?$less@H@std@@V?$allocator@U?$pair@$$CBHM@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tmap_traits<Squadron *,vector3,std::less<Squadron *>,std::allocator<std::pair<Squadron * const,vector3> >,0> >::~_Tree_comp<0,std::_Tmap_traits<Squadron *,vector3,std::less<Squadron *>,std::allocator<std::pair<Squadron * const,vector3> >,0> >() // 0x6A4141
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@PAVSquadron@@Vvector3@@U?$less@PAVSquadron@@@std@@V?$allocator@U?$pair@QAVSquadron@@Vvector3@@@std@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tset_traits<int,std::less<int>,std::allocator<int>,0> >::~_Tree_comp<0,std::_Tset_traits<int,std::less<int>,std::allocator<int>,0> >() // 0x6A414A
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<int,float,std::less<int>,std::allocator<std::pair<int const ,float> > >::~map<int,float,std::less<int>,std::allocator<std::pair<int const ,float> > >() // 0x6A4153
{
    mangled_assert("??1?$map@HMU?$less@H@std@@V?$allocator@U?$pair@$$CBHM@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::map<Squadron *,vector3,std::less<Squadron *>,std::allocator<std::pair<Squadron * const,vector3> > >::~map<Squadron *,vector3,std::less<Squadron *>,std::allocator<std::pair<Squadron * const,vector3> > >() // 0x6A4158
{
    mangled_assert("??1?$map@PAVSquadron@@Vvector3@@U?$less@PAVSquadron@@@std@@V?$allocator@U?$pair@QAVSquadron@@Vvector3@@@std@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::set<int,std::less<int>,std::allocator<int> >::~set<int,std::less<int>,std::allocator<int> >() // 0x6A415D
{
    mangled_assert("??1?$set@HU?$less@H@std@@V?$allocator@H@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline DockQueue::~DockQueue() // 0x6A4167
{
    mangled_assert("??1DockQueue@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline SquadronQueue::~SquadronQueue() // 0x6A417A
{
    mangled_assert("??1SquadronQueue@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

void DockQueue::addToQueue(Squadron *) // 0x6A4E44
{
    mangled_assert("?addToQueue@DockQueue@@UAEXPAVSquadron@@@Z");
    todo("implement");
}

void DockQueue::removeFromQueue(Squadron *) // 0x6A5E10
{
    mangled_assert("?removeFromQueue@DockQueue@@UAEXPAVSquadron@@@Z");
    todo("implement");
}

void DockQueue::getQueuePosition(Squadron *, vector3 &) // 0x6A590C
{
    mangled_assert("?getQueuePosition@DockQueue@@QAEXPAVSquadron@@AAVvector3@@@Z");
    todo("implement");
}

bool DockQueue::isQueueEmpty() // 0x6A597E
{
    mangled_assert("?isQueueEmpty@DockQueue@@QAE_NXZ");
    todo("implement");
}

unsigned __int32 DockQueue::squadronsInQueue() // 0x6A5ED5
{
    mangled_assert("?squadronsInQueue@DockQueue@@QAEIXZ");
    todo("implement");
}

void DockQueue::recalcQueuePositions() // 0x6A5AAF
{
    mangled_assert("?recalcQueuePositions@DockQueue@@IAEXXZ");
    todo("implement");
}

void DockQueue::addQueueFamily(char const *family, float deltaHeight, float spacing) // 0x6A4DAD
{
    mangled_assert("?addQueueFamily@DockQueue@@SGXPBDMM@Z");
    todo("implement");
}

void DockQueue::clearQueueFamilies() // 0x6A4F9B
{
    mangled_assert("?clearQueueFamilies@DockQueue@@SGXXZ");
    todo("implement");
}

void DockQueue::postRestore() // 0x6A5A39
{
    mangled_assert("?postRestore@DockQueue@@UAEXXZ");
    todo("implement");
}

bool DockQueue::restore(SaveGameData *) // 0x6A5E27
{
    mangled_assert("?restore@DockQueue@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool DockQueue::save(SaveGameData *, SaveType) // 0x6A5E74
{
    mangled_assert("?save@DockQueue@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
