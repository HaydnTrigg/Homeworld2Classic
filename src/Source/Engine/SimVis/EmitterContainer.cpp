#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <map>
#include <xtree>
#include <SimVis\EmitterContainer.h>
#include <SoundManager\SoundEntityHandle.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_51C2B9(EmitterContainer *const);
EmitterContainer::EmitterContainer() // 0x51C2B9
{
    mangled_assert("??0EmitterContainer@@QAE@XZ");
    todo("implement");
    _sub_51C2B9(this);
}

_extern void _sub_51C2FD(std::_Tree_buy<std::pair<unsigned int const ,SoundEntityHandle>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> > > *const);
_inline std::_Tree_buy<std::pair<unsigned int const ,SoundEntityHandle>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> > >::~_Tree_buy<std::pair<unsigned int const ,SoundEntityHandle>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> > >() // 0x51C2FD
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBIVSoundEntityHandle@@@std@@V?$allocator@U?$pair@$$CBIVSoundEntityHandle@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_51C2FD(this);
}

_extern void _sub_51C306(std::_Tree_comp<0,std::_Tmap_traits<unsigned int,SoundEntityHandle,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<unsigned int,SoundEntityHandle,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> >,0> >::~_Tree_comp<0,std::_Tmap_traits<unsigned int,SoundEntityHandle,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> >,0> >() // 0x51C306
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@IVSoundEntityHandle@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVSoundEntityHandle@@@std@@@3@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_51C306(this);
}

_extern void _sub_51C30F(std::map<unsigned int,SoundEntityHandle,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> > > *const);
_inline std::map<unsigned int,SoundEntityHandle,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> > >::~map<unsigned int,SoundEntityHandle,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,SoundEntityHandle> > >() // 0x51C30F
{
    mangled_assert("??1?$map@IVSoundEntityHandle@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIVSoundEntityHandle@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_51C30F(this);
}

_extern void _sub_51C3FC(EmitterContainer *const, unsigned __int32, SoundEntityHandle const &);
void EmitterContainer::AddEmitter(unsigned __int32, SoundEntityHandle const &) // 0x51C3FC
{
    mangled_assert("?AddEmitter@EmitterContainer@@QAEXIABVSoundEntityHandle@@@Z");
    todo("implement");
    _sub_51C3FC(this, arg, arg);
}

_extern void _sub_51C46D(EmitterContainer *const, unsigned __int32);
void EmitterContainer::RemoveEmitter(unsigned __int32) // 0x51C46D
{
    mangled_assert("?RemoveEmitter@EmitterContainer@@QAEXI@Z");
    todo("implement");
    _sub_51C46D(this, arg);
}

_extern SoundEntityHandle _sub_51C427(EmitterContainer *const, unsigned __int32);
SoundEntityHandle EmitterContainer::FindEmitter(unsigned __int32) // 0x51C427
{
    mangled_assert("?FindEmitter@EmitterContainer@@QAE?AVSoundEntityHandle@@I@Z");
    todo("implement");
    SoundEntityHandle __result = _sub_51C427(this, arg);
    return __result;
}

/* ---------- private code */
#endif
